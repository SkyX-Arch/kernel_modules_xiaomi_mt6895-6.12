# SPDX-License-Identifier: GPL-2.0
#
# plato 6.12: entry point for the out-of-tree MTK module tree.
#
# vendor/lineage/build/tasks/kernel.mk builds this tree in the "kbuild"
# flavour:
#
#     make -C <KERNEL_SRC> M=$(rpath)/kernel_modules_xiaomi_mt6895-6.12 \
#              O=<kernel out dir> modules
#
# where rpath is relpath(TARGET_KERNEL_EXT_MODULE_ROOT, KERNEL_SRC). This
# tree sits next to mt6895-6.12, so rpath is always ".." and the M= it
# produces is relative.
#
# kbuild re-executes itself with -C <O>, then runs
#
#     make -f $(srctree)/scripts/Makefile.build obj=../kernel_modules_...
#
# with the current directory set to the *output* directory. A relative obj
# is therefore resolved against <O>, not against the kernel source, and the
# whole build dies with:
#
#     scripts/Makefile.build:46: ../kernel_modules_.../Makefile:
#         No such file or directory
#     *** No rule to make target '../kernel_modules_.../Makefile'.  Stop.
#
# Rebinding M to an absolute path here fixes that without touching
# vendor/lineage: the recipe below re-invokes the same kbuild with M
# replaced by $(CURDIR), which is absolute by definition, and everything
# after the top-level Makefile (which is what breaks) then sees a fully
# qualified path.
#
# The old body forwarded straight to `make -C $(KERNEL_SRC) M=$(M)`. It is
# kept as the fallback for any invocation that does not come through
# kernel.mk (a manual `make -C <tree> modules` with M already absolute, for
# instance), because re-invoking unconditionally would recurse.

# Where this Makefile lives. Absolute, so it survives -C and O=.
plato_mtree_dir := $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST)))))

# The module tree is the Kbuild entry point; KERNEL_SRC is supplied by the
# caller (kernel.mk passes it for the make-external-module-target flavour,
# and build.sh exports it).
KERNEL_SRC ?= $(plato_mtree_dir)/../mt6895-6.12

ifeq ($(M),)
# No M= given: the caller wants this tree. Point kbuild at it absolutely.
plato_abs_m := $(plato_mtree_dir)
else ifneq ($(filter /%,$(M)),)
# Already absolute - nothing to fix.
plato_abs_m := $(M)
else
# Relative M=: rebase it onto the directory it was meant to be relative to.
# kbuild always interprets it relative to the kernel source root, so that is
# where it is rebased from - not from $(CURDIR), which may already be <O>.
plato_abs_m := $(abspath $(KERNEL_SRC)/$(M))
endif

# Guard against re-entering ourselves: after the rebase M is absolute and the
# target tree is no longer this Makefile's own directory.
#
# headers_install is deliberately NOT forwarded. With KBUILD_EXTMOD set, the
# kernel Makefile (kernel/xiaomi/mt6895-6.12/Makefile:1169) computes
#
#     hdr-prefix     = $(KBUILD_EXTMOD)/
#     INSTALL_HDR_PATH = $(objtree)/$(hdr-prefix)usr
#     cmd_headers_install: rsync -mrl ... $(hdr-prefix)usr/include $(INSTALL_HDR_PATH)
#
# i.e. it rsyncs $(KBUILD_EXTMOD)/usr/include onto $(objtree)/$(KBUILD_EXTMOD)/usr.
# This tree has no usr/, so that dies with
#
#     rsync: change_dir "<tree>/usr" failed: No such file or directory (2)
#     make[3]: *** [.../Makefile:1183: headers_install] Error 23
#
# and aborts the whole AOSP build. Upstream kbuild only reaches that recipe for
# an external module that actually ships UAPI headers under usr/include; ours
# does not - the uapi headers it needs come from the kernel tree and from
# include-paths.mk. There is therefore nothing to install, and the UAPI export
# that AOSP really needs is the in-tree one (KERNEL_UAPI_HEADERS_DIR=$(KERNEL_OUT)
# passed to modules_install). Forward exactly the same target set as before, minus
# headers_install, and keep a no-op rule so anything that still asks for it is
# satisfied instead of recursing into the failing recipe.
ifeq ($(filter $(plato_abs_m)/%,$(plato_mtree_dir)),)
modules modules_install clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(plato_abs_m) KBUILD_EXTRA_SYMBOLS="$(EXTRA_SYMBOLS)" $(@)

headers_install:
	@echo "plato: headers_install skipped - this external module tree has no usr/include"

else
include $(wildcard $(KERNEL_SRC)/$(DEVICE_MODULES_REL_DIR)/Makefile.include.ddk)

modules modules_install clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) KBUILD_EXTRA_SYMBOLS="$(EXTRA_SYMBOLS)" $(@)

headers_install:
	@echo "plato: headers_install skipped - this external module tree has no usr/include"
endif

# NOTE: no `modules_install: headers_install` prerequisite. It used to exist and
# is what pulled the failing recipe in: AOSP calls `make modules_install` on this
# tree, make expanded that prerequisite first, and the recursive headers_install
# hit the usr/ rsync above. modules_install itself does not need it - the UAPI
# headers are exported by the in-tree `make headers_install` that AOSP runs into
# KERNEL_OUT, which is the path it then passes as KERNEL_UAPI_HEADERS_DIR.

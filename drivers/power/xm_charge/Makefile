# SPDX-License-Identifier: GPL-2.0
#
# plato: Xiaomi charging core (xmc_main / xmc_voter / xmc_ops) plus the
# charger ICs it drives. Ported from the 5.10 vendor kernel; the module
# names match device/xiaomi/plato/modules/modules.load.

# Absolute path computed here rather than through DEVICE_MODULES_PATH: that
# variable is only set by include-paths.mk, which Kbuild includes at the tree
# root, so building a subdirectory (make M=<tree>/drivers/power/xm_charge)
# expands it to nothing and the -I collapses to -I/drivers/... - a directory
# in the filesystem root. The vendor tcpm.h then loses to the in-tree
# include/linux/usb/tcpm.h, which has no tcpm_dpm_send_custom_vdm, and
# xmc_adapter.c fails with "call to undeclared function".
xm_charge_dir := $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
xm_charge_moddir := $(abspath $(xm_charge_dir)/../../..)
subdir-ccflags-y += -I$(xm_charge_moddir)/drivers/misc/mediatek/typec/tcpc/inc

obj-m += xmc_main.o xmc_voter.o xmc_ops.o
xmc_main-objs := xmc_core.o xmc_sysfs.o xmc_monitor.o xmc_detection.o \
		xmc_adapter.o xmc_pdm.o bq27z561.o max77932.o sc8561.o ln8410.o

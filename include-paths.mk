# SPDX-License-Identifier: GPL-2.0
#
# Include path search list for the out-of-tree module build.
#
# The MTK vendor code keeps private copies of headers that also exist in the
# SoC kernel tree (mtk_panel_ext.h, mi_disp.h, mtk-cam headers, tee headers,
# ...). They must be visible before the in-tree ones, which is why the list is
# prepended to LINUXINCLUDE from the module tree's own Kbuild.
#
# The paths are derived from this file's own location, so the tree builds
# wherever it is checked out, without any quoting-sensitive command line flags
# coming from the AOSP BoardConfig (make variables containing quotes break
# AOSP's dump-many-vars).
#
# The list is anchored to the directory this file lives in, so it works no
# matter how the tree was entered (in-tree, M=<tree>, M=<subdir>) and even if
# DEVICE_MODULES_PATH was passed in empty from the outside.
#
#   this_mk      - absolute path of include-paths.mk
#   plato_moddir - the module tree root (one level up from here is not needed:
#                  this file sits in the root, so it is this_mk's directory)
plato_moddir := $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST)))))

# Many of the per-directory Makefiles in this tree reference
# $(DEVICE_MODULES_PATH) directly for their own include flags. Default it here
# so they keep working when the tree is entered without that variable on the
# command line (plain "make M=<tree>", or an AOSP build that does not set it).
DEVICE_MODULES_PATH ?= $(plato_moddir)

# kbuild re-enters scripts/Makefile.build as a sub-make for every directory,
# and only command-line variables (and exported ones) survive that. Export it,
# otherwise each per-directory Makefile sees an empty DEVICE_MODULES_PATH and
# loses every include path it derives from it.
export DEVICE_MODULES_PATH

mtk_mod_inc := \
	$(plato_moddir)/drivers/gpu/mediatek/gpueb \
	$(plato_moddir)/drivers/misc/mediatek/blocktag \
	$(plato_moddir) \
	$(plato_moddir)/drivers \
	$(plato_moddir)/include \
	$(plato_moddir)/include/soc/mediatek \
	$(plato_moddir)/drivers/clk/mediatek \
	$(plato_moddir)/drivers/gpu/mediatek/gpufreq \
	$(plato_moddir)/drivers/gpu/mediatek/gpufreq/v2/include \
	$(plato_moddir)/drivers/gpu/mediatek/gpueb/include \
	$(plato_moddir)/drivers/gpu/mediatek/mt-plat \
	$(plato_moddir)/drivers/misc/mediatek/typec/tcpc/inc \
	$(plato_moddir)/drivers/misc/mediatek/mtk-interconnect \
	$(plato_moddir)/drivers/misc/mediatek/include \
	$(plato_moddir)/drivers/misc/mediatek/include/mt-plat \
	$(plato_moddir)/drivers/misc/mediatek/mminfra \
	$(plato_moddir)/drivers/misc/mediatek/power_throttling \
	$(plato_moddir)/drivers/misc/mediatek/dcm \
	$(plato_moddir)/drivers/misc/mediatek/dcm/include \
	$(plato_moddir)/drivers/misc/mediatek/mdpm \
	$(plato_moddir)/drivers/misc/mediatek/aee/mrdump \
	$(plato_moddir)/drivers/misc/mediatek/aee/aed \
	$(plato_moddir)/drivers/misc/mediatek/mcupm/include \
	$(plato_moddir)/drivers/misc/mediatek/pbm \
	$(plato_moddir)/drivers/misc/mediatek/sda/include \
	$(plato_moddir)/drivers/misc/mediatek/mdp \
	$(plato_moddir)/drivers/misc/mediatek/smi \
	$(plato_moddir)/drivers/misc/mediatek/mmdvfs \
	$(plato_moddir)/drivers/misc/mediatek/qos \
	$(plato_moddir)/drivers/misc/mediatek/mm_monitor \
	$(plato_moddir)/drivers/misc/mediatek/mmp \
	$(plato_moddir)/drivers/misc/mediatek/vcp/rv \
	$(plato_moddir)/drivers/misc/mediatek/vcp/rv_v2 \
	$(plato_moddir)/drivers/misc/mediatek/vcp/include \
	$(plato_moddir)/drivers/misc/mediatek/iommu \
	$(plato_moddir)/drivers/iommu/arm/arm-smmu-v3 \
	$(plato_moddir)/drivers/ufs \
	$(plato_moddir)/drivers/iommu \
	$(plato_moddir)/drivers/memory \
	$(plato_moddir)/drivers/usb/mtu3 \
	$(plato_moddir)/drivers/char/rpmb \
	$(plato_moddir)/drivers/char/rpmb/core \
	$(plato_moddir)/drivers/char/rpmb/drrpmb_gp/public \
	$(plato_moddir)/drivers/mmc/host \
	$(plato_moddir)/drivers/power/supply \
	$(plato_moddir)/drivers/tee/gud/700/MobiCoreDriver \
	$(plato_moddir)/drivers/tee/gud/700/MobiCoreDriver/public \
	$(plato_moddir)/drivers/dma-buf/heaps \
	$(plato_moddir)/drivers/media/platform/mtk-vcodec \
	$(plato_moddir)/drivers/gpu/drm/mediatek/dpc \
	$(plato_moddir)/drivers/gpu/mediatek/gpufreq/v2 \
	$(srctree)/drivers/devfreq \
	$(srctree)/drivers/mmc/host \
	$(srctree)/drivers/tty/serial/8250 \
	$(srctree)/drivers/dma \
	$(srctree)/drivers/ufs/host \
	$(srctree)/drivers/ufs/core \
	$(srctree)/drivers/usb/typec \
	$(srctree)/kernel \
	$(srctree)/include \
	$(plato_moddir)/drivers/thermal \
	$(plato_moddir)/drivers/thermal/mediatek \
	$(plato_moddir)/drivers/misc/mediatek/slbc \
	$(plato_moddir)/drivers/misc/mediatek/mmdebug \
	$(plato_moddir)/drivers/misc/mediatek/tinysys_scmi \
	$(plato_moddir)/drivers/leds \
	$(plato_moddir)/drivers/misc/mediatek/spi_slave_drv \
	$(plato_moddir)/drivers/misc/mediatek/geniezone/include \
	$(plato_moddir)/drivers/misc/mediatek/geniezone/public \
	$(plato_moddir)/drivers/misc/mediatek/trusted_mem/public \
	$(plato_moddir)/drivers/tee/teei/520/common/include \
	$(plato_moddir)/drivers/tee/teei/520/public \
	$(plato_moddir)/drivers/tee/teei/520/tz_driver/include

# Expand the bare directory list into -I flags.
mtk_mod_incflags := $(addprefix -I,$(mtk_mod_inc))

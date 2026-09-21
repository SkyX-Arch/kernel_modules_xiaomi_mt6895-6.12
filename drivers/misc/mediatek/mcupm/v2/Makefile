# SPDX-License-Identifier: GPL-2.0
#
# Reconstructed from v2/BUILD.bazel: the bazel target "mcupm" lists these four
# sources under CONFIG_MTK_TINYSYS_MCUPM_SUPPORT and falls back to dummy.c
# otherwise. The classic Makefile had every obj- line commented out, so mcupm.ko
# (the MCU power-manager remote) was never built.
ifneq (,$(filter $(CONFIG_MTK_TINYSYS_MCUPM_SUPPORT), y m))
obj-$(CONFIG_MTK_TINYSYS_MCUPM_SUPPORT) += mcupm.o
mcupm-objs += mcupm_driver.o
mcupm-objs += mcupm_plt.o
mcupm-objs += mcupm_logger.o
mcupm-objs += mcupm_timesync.o
else
obj-y += dummy.o
endif

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mcupm/include

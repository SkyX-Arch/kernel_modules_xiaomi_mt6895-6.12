# SPDX-License-Identifier: GPL-2.0
#
# Only BUILD.bazel existed for this directory. alps builds five separate
# modules here; mirror that instead of one aggregate perf_ioctl.o.
#   mtk_perf_ioctl         -> perf_ioctl.c      (fpsgo_*_fp pointers)
#   mtk_ioctl_powerhal     -> ioctl_powerhal.c  (powerhal_adpf_*_fp pointers)
#   mtk_ioctl_touch_boost  -> ioctl_touch_boost.c
#   mtk_perf_ioctl_magt    -> perf_ioctl_magt.c
#   mtk_sbe_ioctl          -> sbe_ioctl.c       (sbe_*_fp pointers)
PM_BUILD_FOLDER := $(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance

ccflags-y += \
	-I$(PM_BUILD_FOLDER)/perf_ioctl/ \
	-I$(PM_BUILD_FOLDER)/include/ \
	-I$(PM_BUILD_FOLDER)/powerhal_cpu_ctrl/ \
	-I$(PM_BUILD_FOLDER)/pelt_hint/include/ \
	-I$(PM_BUILD_FOLDER)/fpsgo_v8/base/include/ \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched/ \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/ \
	-I$(srctree)/kernel/

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += mtk_perf_ioctl.o
mtk_perf_ioctl-y := perf_ioctl.o

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += mtk_ioctl_powerhal.o
mtk_ioctl_powerhal-y := ioctl_powerhal.o

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += mtk_ioctl_touch_boost.o
mtk_ioctl_touch_boost-y := ioctl_touch_boost.o

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += mtk_perf_ioctl_magt.o
mtk_perf_ioctl_magt-y := perf_ioctl_magt.o

obj-$(CONFIG_MTK_SBE) += mtk_sbe_ioctl.o
mtk_sbe_ioctl-y := sbe_ioctl.o

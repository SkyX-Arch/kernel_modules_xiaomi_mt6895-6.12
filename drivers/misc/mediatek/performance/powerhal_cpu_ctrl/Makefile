# SPDX-License-Identifier: GPL-2.0

# Only a BUILD.bazel target existed; this ko exports adpf_register_callback(),
# which scheduler.ko (eas/sched_main.c:1258) and fpsgo call into.
ccflags-y += -I$(src)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cci_lite
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance/fpsgo_v8
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance/fpsgo_v8/base/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance/fpsgo_v8/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance/perf_ioctl

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += powerhal_cpu_ctrl.o

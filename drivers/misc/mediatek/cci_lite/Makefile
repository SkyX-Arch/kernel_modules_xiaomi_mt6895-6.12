# SPDX-License-Identifier: GPL-2.0

# Only a BUILD.bazel target (ccidvfs) existed. powerhal_cpu_ctrl.ko calls
# cpufreq_set_cci_mode() from here.
ccflags-y += -I$(srctree)/include/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched/

obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += ccidvfs.o
ccidvfs-y := cci-dbg-lite.o

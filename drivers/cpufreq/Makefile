# SPDX-License-Identifier: GPL-2.0
# The 6.12 tree shipped only BUILD.bazel here (targets: mediatek-cpufreq-hw,
# mediatek-mcupm-cpufreq). 5.10 lines 65/119 gave the equivalent rules.

# 6.12 renamed the symbol to CONFIG_DEVICE_MODULES_ARM_MEDIATEK_CPUFREQ_HW
# (the bare CONFIG_ARM_MEDIATEK_CPUFREQ_HW stays 'not set'); same split as
# CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC.
obj-$(CONFIG_DEVICE_MODULES_ARM_MEDIATEK_CPUFREQ_HW) += mediatek-cpufreq-hw.o
mediatek-cpufreq-hw-$(CONFIG_DEVICE_MODULES_ARM_MEDIATEK_CPUFREQ_HW) += \
	mediatek-cpufreq-hw_main.o \
	mediatek-cpufreq-hw_fdvfs.o

CFLAGS_mediatek-cpufreq-hw_main.o += -I$(srctree)/kernel/sched
CFLAGS_mediatek-cpufreq-hw_fdvfs.o += -I$(srctree)/kernel/sched

# mediatek-mcupm-cpufreq.c is NOT built: it still targets the 5.10 cpufreq
# API (cpufreq_driver->init with 3 args, CPUFREQ_STICKY, a 1-arg
# .setpolicy-less ->target_index layout), which 6.12 rewrote. It is also not
# in modules.load; the plato CPU DVFS path goes through mediatek-cpufreq-hw.

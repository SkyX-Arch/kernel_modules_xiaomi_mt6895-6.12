# SPDX-License-Identifier: GPL-2.0

# The 6.12 tree only described cpudvfs in BUILD.bazel; no Makefile existed at
# all, so CONFIG_MEDIATEK_CPUFREQ_DEBUG_LITE=m produced nothing.
ccflags-y += -I$(srctree)/include/
ccflags-y += -I$(DEVICE_MODULES_PATH)/include/linux/soc/mediatek/
# trace/define_trace.h includes the header as "./pf_ctrl_trace.h".
ccflags-y += -I$(src)

obj-$(CONFIG_MEDIATEK_CPUFREQ_DEBUG_LITE) += cpudvfs.o
cpudvfs-y += cpufreq-dbg-lite.o
cpudvfs-y += mtk_freq_qos.o
cpudvfs-y += pf_ctrl.o

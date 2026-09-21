# SPDX-License-Identifier: GPL-2.0

# Only BUILD.bazel targets existed. alps ships these as TWO modules:
# task_turbo.ko (task_turbo.c) and vip_engine.ko (vip_engine.c), which depends
# on the former - so keep them separate here too.
#
# task_turbo_common.c / task_turbo_ext.c are not built: they need
# <linux/sa_common.h> plus the SDA ERRATA_* SMC ids, neither of which exists in
# this kernel tree (the header is missing from 5.10 as well).
ccflags-y += -I$(srctree)
ccflags-y += -I$(src)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched/

obj-$(CONFIG_MTK_TASK_TURBO) += task_turbo.o
obj-$(CONFIG_MTK_TASK_TURBO) += vip_engine.o

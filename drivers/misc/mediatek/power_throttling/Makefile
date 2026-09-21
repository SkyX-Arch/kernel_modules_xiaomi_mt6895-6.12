# SPDX-License-Identifier: GPL-2.0

# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/gpu/mediatek/gpufreq/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/power_throttling/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched/core_ctl/

# ifeq ($(CONFIG_MTK_GCOV_KERNEL),y)
# GCOV_PROFILE_mtk_bp_thl.o := y
# endif

obj-$(CONFIG_MTK_MD_POWER_THROTTLING) += mtk_md_power_throttling.o

# xaga: platform module wiring (alps BUILD.bazel; exports register_bp_thl_notify
# for flashlight / dump_lvsys_thd etc. for mtk_low_battery_throttling)
obj-m += mtk_bp_thl.o
obj-m += pmic_lvsys_notify.o

# xaga: platform module wiring
obj-m += mtk_battery_oc_throttling.o

# xaga: platform module wiring
obj-m += mtk_dynamic_loading_throttling.o

# xaga: platform module wiring
obj-m += mtk_low_battery_throttling.o

# xaga: platform module wiring
obj-m += pmic_lbat_service.o
# xaga: platform module wiring
# apusys/apu_top calls register_pt_low_battery_apu_cb() and
# register_pt_over_current_apu_cb(), both exported from here.
obj-m += mtk_apu_power_throttling.o

# xaga: platform module wiring (alps BUILD.bazel mtk_cpu_power_throttling;
# 5.10 wired this from line 15 of the same Makefile).
obj-m += mtk_cpu_power_throttling.o
obj-m += mtk_low_battery_throttling.o
obj-m += mtk_battery_oc_throttling.o
obj-m += mtk_bp_thl.o
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched/core_ctl

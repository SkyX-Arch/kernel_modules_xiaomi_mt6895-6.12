# SPDX-License-Identifier: GPL-2.0
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/memory/mediatek/


# xaga: platform module wiring
obj-m += emimpu.o

# xaga: platform module wiring (alps BUILD.bazel emi; exports mtk_emidbg_dump
# for mtk-smi-dbg)
obj-m += emi.o
emi-y := emi-cen.o emi-isu.o emi-dbg.o

# xaga: platform module wiring (alps BUILD.bazel mtk_dramc; exports
# mtk_dramc_get_ddr_type for mmqos-common)
obj-m += mtk_dramc.o
mtk_dramc-y := dramc.o dramc_bin.o

# xaga: platform module wiring (alps BUILD.bazel emi-mpu, non-legacy variant;
# exports mtk_clear_smpu_log / mtk_get_axiid, which smpu.ko calls into)
obj-m += mtk-emi-mpu.o

# xaga: platform module wiring (alps BUILD.bazel smpu; exports
# mtk_smpu_md_handling_register / smpu_clear_md_violation, called from
# eccci's fsm/mdee_dumper_v5.c and fsm/mdee_dumper_v6.c)
obj-m += smpu.o

# xaga: platform module wiring (alps BUILD.bazel emi-mpu-hook-v1; 5.10 wired
# this from the same Makefile under CONFIG_MTK_EMI).
obj-$(CONFIG_MTK_EMI) += emi-mpu-hook-v1.o
emi-mpu-hook-v1-$(CONFIG_MTK_EMI) := emi_legacy/emi_legacy_v2/emi-mpu-hook-v1.o
# emi-mpu-v2 provides mtk_emimpu_isr_hook_register(), which
# emi-mpu-hook-v1.ko calls. 5.10 built it as its own module from
# drivers/memory/mediatek/emi-mpu-v2.c; in 6.12 the source moved under
# emi_legacy/emi_legacy_v2/ and the rule was dropped.
obj-$(CONFIG_MTK_EMI) += emi-mpu-v2.o
emi-mpu-v2-$(CONFIG_MTK_EMI) := emi_legacy/emi_legacy_v2/emi-mpu-v2.o
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/memory/mediatek/emi_legacy/emi_legacy_v2

# SLB violation notifier (alps BUILD.bazel emi-slb; exports
# mtk_slb_violation_register_callback for mtk-vcodec-enc).
obj-$(CONFIG_MTK_EMI) += mtk-emi-slb.o

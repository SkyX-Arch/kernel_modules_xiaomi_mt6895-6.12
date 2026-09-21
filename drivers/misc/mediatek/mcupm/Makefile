# SPDX-License-Identifier: GPL-2.0
# xaga: platform module wiring (alps BUILD.bazel mcupm; exports
# get_mcupm_ipidev / get_mcupms_ipidev_number for mtk_peak_power_budget)
# mt6895 uses the v2 MCUPM IPI layout (5.10 built v2/ for this SoC); v3/ is
# the newer layout for mt6985+ and exposes a different .ko name.
# mt6895 keeps the v2 MCUPM IPI layout: the 5.10 plato tree built v2/ and its
# modules.load expects mcupm.ko (v3/ produces mcupm_v3.ko). MTK_PLATFORM is
# set to mt6895 by device/xiaomi/plato/kernel-plato-vars.mk.
ifeq ($(MTK_PLATFORM),mt6895)
obj-$(CONFIG_MTK_TINYSYS_MCUPM_SUPPORT) += v2/
else
obj-$(CONFIG_MTK_TINYSYS_MCUPM_SUPPORT) += v3/
endif

ifneq (, $(filter $(strip $(CONFIG_MTK_PLAT_POWER_6893)),m y))
    obj-y += v1/
endif

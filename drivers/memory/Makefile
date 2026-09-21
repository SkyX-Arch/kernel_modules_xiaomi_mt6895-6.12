# SPDX-License-Identifier: GPL-2.0

obj-$(CONFIG_HAVE_MTK_MC)	+= mediatek/

# xaga: platform module wiring (alps BUILD.bazel "mtk-smi").
# Gated on DEVICE_MODULES_MTK_SMI, matching both the 5.10 build
# (obj-$(CONFIG_MTK_SMI) += mtk-smi.o) and the Kconfig symbol this tree
# actually has. CONFIG_MTK_SMI was never enabled for mt6895, and neither is
# DEVICE_MODULES_MTK_SMI, so nothing plato needs depends on this module -
# and building it unconditionally fails hard: include/soc/mediatek/smi.h
# only declares the real prototypes under IS_ENABLED() of this symbol, so
# without it mtk-smi.c collides with the inline stubs ("redefinition of
# 'mtk_smi_common_bw_set'" and 90 similar).
# The include paths are the copts from the bazel rule and stay in place for
# when someone does enable the symbol.
ccflags-$(CONFIG_DEVICE_MODULES_MTK_SMI) += -I$(DEVICE_MODULES_PATH)/drivers/memory
ccflags-$(CONFIG_DEVICE_MODULES_MTK_SMI) += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat/
ccflags-$(CONFIG_DEVICE_MODULES_MTK_SMI) += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mme
obj-$(CONFIG_DEVICE_MODULES_MTK_SMI) += mtk-smi.o

#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# The whole legacy-v1 driver lived only in the bazel description: this Makefile
# had no obj- rules at all, and mt6895's cm_mgr support is here rather than in
# cm_mgr/ (which has no mtk_cm_mgr_mt6895.c). 5.10 shipped the same sources
# under cm_mgr/.
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cm_mgr_legacy_v1
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/gpu/drm/mediatek/mediatek_v2
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/tinysys_scmi
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat

obj-$(CONFIG_MTK_CM_IPI) += mtk_cm_ipi_legacy_v1.o
mtk_cm_ipi_legacy_v1-y := mtk_cm_ipi.o

obj-$(CONFIG_MTK_CM_MGR_LEGACY_V1) += mtk_cm_mgr_legacy_v1.o
mtk_cm_mgr_legacy_v1-y := mtk_cm_mgr_common.o

ifneq ($(wildcard $(src)/mtk_cm_mgr_mt6895.c),)
obj-$(CONFIG_MTK_CM_MGR_MT6895) += mtk_cm_mgr_mt6895.o
endif

ifneq ($(wildcard $(src)/mtk_cm_mgr_mt6855.c),)
obj-$(CONFIG_MTK_CM_MGR_MT6855) += mtk_cm_mgr_mt6855.o
endif

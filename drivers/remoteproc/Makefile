# SPDX-License-Identifier: GPL-2.0

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/remoteproc
# remoteproc_internal.h lives in the K-tree (kernel/xiaomi/mt6895-6.12),
# not in the device-modules tree.
ccflags-y += -I$(srctree)/drivers/remoteproc

obj-$(CONFIG_MTK_CCU_RPROC)		+= mtk_ccu.o
#obj-$(CONFIG_MTK_CCU_RPROC)		+= mtk_ccu_mssv.o
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mtk-interconnect/ \
			 -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include \
			 -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/iommu \
			 -I$(DEVICE_MODULES_PATH)/drivers/iommu/arm/arm-smmu-v3 \
			 -I$(DEVICE_MODULES_PATH)/drivers/dma-buf/heaps
# 6.12 has no mtk_ccu.c: the driver is the isp71 set assembled into mtk_ccu.o
# (matching the bazel target in this directory).
mtk_ccu-objs += mtk_ccu_isp71.o mtk_ccu_common.o mtk_ccu_ipi.o
#mtk_ccu_mssv-objs += mtk_ccu_isp71_mssv.o mtk_ccu_common_mssv.o mtk_ccu_ipi_mssv.o

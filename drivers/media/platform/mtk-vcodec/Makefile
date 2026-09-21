# SPDX-License-Identifier: GPL-2.0
#
# Reconstructed from BUILD.bazel (targets mtk-vcodec-common, mtk-vcodec-trace,
# mtk-vcodec-dec, mtk-vcodec-enc) and the 5.10 tree's Makefile. The 6.12 tree
# shipped this directory with a bazel description only, so video never built.
#
# Paths must use $(DEVICE_MODULES_PATH): $(srctree) points at the GKI tree
# (kernel/xiaomi/mt6895-6.12), which has none of these vendor directories.

obj-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += mtk-vcodec-common.o
mtk-vcodec-common-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += \
	mtk_vcodec_util.o \
	mtk_vcodec_intr.o \
	mtk_vcodec_fence.o

obj-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += mtk-vcodec-trace.o
mtk-vcodec-trace-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += mtk_vcodec_trace.o

obj-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += mtk-vcodec-dec.o
mtk-vcodec-dec-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += \
	mtk_vcodec_dec_drv.o \
	mtk_vcodec_dec.o \
	mtk_vcodec_dec_pm.o \
	mtk_vcodec_dec_slc.o \
	vdec_drv_if.o \
	vdvfs_vqos/mtk_vcodec_dec_pm_plat.o \
	vdvfs_vqos/vcodec_dvfs.o
mtk-vcodec-dec-$(CONFIG_VIDEO_MEDIATEK_VCU) += \
	vdec/vdec_common_if.o \
	vdec/vdec_vcu_if.o
mtk-vcodec-dec-$(CONFIG_MTK_TINYSYS_VCP_SUPPORT) += vdec/vdec_vcp_if.o

obj-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += mtk-vcodec-enc.o
mtk-vcodec-enc-$(CONFIG_DEVICE_MODULES_VIDEO_MEDIATEK_VCODEC) += \
	mtk_vcodec_enc_drv.o \
	mtk_vcodec_enc.o \
	mtk_vcodec_enc_pm.o \
	venc_drv_if.o \
	vdvfs_vqos/mtk_vcodec_enc_pm_plat.o \
	vdvfs_vqos/vcodec_dvfs.o
mtk-vcodec-enc-$(CONFIG_VIDEO_MEDIATEK_VCU) += \
	venc/venc_common_if.o \
	venc/venc_vcu_if.o
mtk-vcodec-enc-$(CONFIG_MTK_TINYSYS_VCP_SUPPORT) += venc/venc_vcp_if.o

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/media/platform/mtk-vcu
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/media/platform/mtk-vcodec
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/slbc
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/trusted_mem
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/videogo
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/iommu
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/iommu
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/iommu/arm/arm-smmu-v3
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mtk-interconnect
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/vcp/rv
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/vcp/rv_v2
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/vcp/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sched
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cpufreq_lite
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mmdvfs
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/dma-buf/heaps
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/thermal/mediatek
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/memory/mediatek
ccflags-y += -I$(DEVICE_MODULES_PATH)/include/soc/mediatek

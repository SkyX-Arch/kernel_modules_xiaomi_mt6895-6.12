# SPDX-License-Identifier: GPL-2.0

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mtk-interconnect/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cmdq/mailbox/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/dma-buf/heaps/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/media/platform/mtk-videobuf/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/media/platform/mtk-isp/imgsys/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/iommu
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/iommu

# mtk_aie needs a real 5.10->6.12 port: its vendored vb2 copies break on
# vm_flags being const, dma_buf::lock removal and the changed vb2 callbacks.
# Left off until that work is done.
# mtk_aie links cmdq_sec_mbox_stop/cmdq_sec_pkt_set_* (cmdq-sec-mailbox.c,
# which needs CONFIG_MTK_CMDQ_MBOX that plato leaves off) and mtk_aov_notify
# (absent from this tree). plato does not use it either: 5.10 plato enabled
# FD_ISP6S/FD_ISP7, not FD_ISP7S_ISP7SP.
#mtk_aie-objs := \
mem/aie_videobuf2-dma-contig.o\
mem/aie_videobuf2-memops.o\
mem/aie_videobuf2-vmalloc.o\
mtk_aie_53.o\
mtk_aie_drv_isp71.o \
mtk_aie_drv_isp7s.o \
mtk_aie_drv_isp7sp.o

# needs a 5.10->6.12 port (vendored vb2 + missing cmdq-sec/mtk_imgsys headers)
#obj-$(CONFIG_MTK_CAMERA_FD_ISP7S_ISP7SP) += mtk_aie.o

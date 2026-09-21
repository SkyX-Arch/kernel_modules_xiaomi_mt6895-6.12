# SPDX-License-Identifier: GPL-2.0
#
# Makefile for MMC/SD host controller drivers
#
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/char/rpmb/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/blocktag/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/ufs/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/mmc/host
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/ufs/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/mmc/host/
ccflags-y += -I$(srctree)/include/ufs/

#obj-$(CONFIG_DEVICE_MODULES_MMC_MTK)			+= mtk-sd.o
#obj-$(CONFIG_DEVICE_MODULES_MMC_MTK_PRO)		+= mtk-mmc.o
#obj-$(CONFIG_DEVICE_MODULES_MMC_DEBUG)			+= mtk-mmc-dbg.o
#obj-$(CONFIG_DEVICE_MODULES_MMC_MTK_MMC_WP)		+= mtk-mmc-wp.o
# xaga: platform module wiring (alps BUILD.bazel cqhci; exports cqhci_init/
# cqhci_irq for mtk-mmc)
#
# plato: do NOT build cqhci.ko here. The K-tree has the very same driver with
# the very same exports under CONFIG_MMC_CQHCI (drivers/mmc/host/Makefile:102),
# and that symbol is `select`ed by the in-tree mmc hosts, so the kernel tree
# always produces its own cqhci.ko. Building it here as well made packaging die
# with `ERROR: Duplicate module cqhci.ko`. mtk-mmc (out-of-tree) resolves its
# cqhci_init/cqhci_irq/cqhci_deactivate against the in-tree module, which is
# already in the depmod set, so nothing is lost.
# obj-$(CONFIG_DEVICE_MODULES_MMC_CQHCI)		+= cqhci.o
# cqhci-y				+= cqhci-core.o
# cqhci-$(CONFIG_MMC_CRYPTO)		+= cqhci-crypto.o
obj-$(CONFIG_DEVICE_MODULES_MMC_MTK_SW_CQHCI)		+= mtk-mmc-swcqhci.o
mtk-mmc-swcqhci-y			+= mtk-mmc-swcqhci-core.o
mtk-mmc-swcqhci-$(CONFIG_MMC_CRYPTO)	+= mtk-mmc-swcqhci-crypto.o

# xaga: platform module wiring
obj-m += mtk-mmc-dbg.o

# xaga: platform module wiring
obj-m += mtk-mmc.o

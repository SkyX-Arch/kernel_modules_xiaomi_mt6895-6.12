# SPDX-License-Identifier: GPL-2.0
#
# Reconstructed from BUILD.bazel (targets mtk_u_ether, mtk_usb_f_rndis). The
# 6.12 tree only had the bazel description, so the USB RNDIS gadget function
# (used for USB tethering and for the AT/meta ports) never built.

obj-$(CONFIG_MTK_USB_U_ETHER) += mtk_u_ether.o
mtk_u_ether-$(CONFIG_MTK_USB_U_ETHER) += u_ether.o

obj-$(CONFIG_MTK_USB_F_RNDIS) += mtk_usb_f_rndis.o
mtk_usb_f_rndis-$(CONFIG_MTK_USB_F_RNDIS) += f_rndis.o rndis.o

ccflags-y += -I$(srctree)/drivers/usb/gadget
ccflags-y += -I$(srctree)/drivers/usb/gadget/udc
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/rps

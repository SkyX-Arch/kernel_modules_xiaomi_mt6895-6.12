# SPDX-License-Identifier: GPL-2.0
# xaga: platform module wiring (mtu3 depends on xhci-mtk-hcd-v2 at probe
# time; usb_offload/usb_sram/usb_meta are audio/offload features not needed
# for boot and stay unbuilt)
obj-$(CONFIG_DEVICE_MODULES_USB_XHCI_MTK) += usb_xhci/

# USB RNDIS gadget function (5.10 built these from the same directory).
obj-$(CONFIG_MTK_USB_U_ETHER) += usb_rndis/

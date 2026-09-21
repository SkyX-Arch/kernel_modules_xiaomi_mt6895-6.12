# SPDX-License-Identifier: GPL-2.0

# Include search list for the out-of-tree MTK modules (see include-paths.mk
# for why it lives in a file instead of on the command line).
include $(src)/include-paths.mk

ifneq ($(CONFIG_DEVICE_MODULES_ALLOW_BUILTIN),y)

LINUXINCLUDE := $(mtk_mod_incflags) $(LINUXINCLUDE)

subdir-ccflags-y += -Wall -Werror \
		-I$(srctree)/$(src)/include \
		-I$(srctree)/$(src)/include/uapi \

obj-y += drivers/memory/
obj-y += drivers/pinctrl/mediatek/
obj-y += drivers/iommu/
# plato: Goodix TEE fingerprint. 5.10 reached it via
# drivers/input/Makefile, a file the 6.12 M-tree does not have -
# it lists the input subdirs one by one from here instead.
obj-y += drivers/input/fingerprint/
obj-y += drivers/input/keyboard/
obj-y += drivers/spi/
obj-y += drivers/reset/

obj-y += drivers/edac/

obj-y += drivers/iio/adc/

obj-y += drivers/mfd/

obj-y += drivers/nvmem/

obj-y += drivers/dma/mediatek/

obj-y += drivers/ufs/

obj-y += drivers/char/

obj-y += drivers/clk/mediatek/

obj-y += drivers/soc/mediatek/

obj-y += drivers/regulator/

obj-y += drivers/leds/

obj-y += drivers/power/supply/
# plato: Xiaomi charging core (xmc_main/xmc_voter/xmc_ops + charger ICs)
obj-y += drivers/power/xm_charge/

obj-y += drivers/rtc/

obj-y += drivers/remoteproc/

# xaga: platform module wiring (mtk_rpmsg_mbox exports mtk_rpmsg_create_channel/
# create_device for mtk_tinysys_ipi)
obj-y += drivers/rpmsg/

obj-y += drivers/thermal/mediatek/

obj-y += drivers/spmi/

obj-y += drivers/tty/serial/8250/

obj-y += drivers/mailbox/

obj-y += drivers/interconnect/

obj-y += drivers/i2c/busses/

obj-y += drivers/pwm/

obj-y += drivers/mmc/host/

obj-y += drivers/tee/

# xaga: platform module wiring (mtu3 exports ssusb_get_drvdata for ps5170)
obj-y += drivers/usb/

# xaga: USB PHYs (tphy/u2port0-u3port0, xsphy, ufs) - mtu3 needs
# phy-mtk-tphy for its `phys = <&u2port0>, <&u3port0>` refs; without a PHY
# driver mtu3 defers -> no UDC -> fastbootd "couldn't find an available
# UDC" -> recovery auto-reboots (real-device, 2026-08-11)
obj-y += drivers/phy/

obj-y += drivers/gpu/drm/mediatek/

obj-y += drivers/input/misc/
obj-y += drivers/input/touchscreen/

obj-y += drivers/gpu/drm/panel/

obj-y += drivers/gpu/drm/bridge/

obj-y += drivers/gpu/mediatek/

obj-y += drivers/media/platform/

obj-y += drivers/net/ethernet/stmicro/

obj-y += drivers/net/phy/

obj-y += drivers/devfreq/

# plato 6.12: mtk i3c master. The Kconfig hook survived in Kconfig.ext but the
# Kbuild hook was lost, so mtk-i3c-i2c-wrap.ko shipped without its
# mtk_i3c_master_* provider and depmod failed with "needs unknown symbol".
obj-y += drivers/i3c/master/

# xaga: platform module wiring (system_heap exports dma_buf_get_gid for mediatek-drm)
obj-y += drivers/dma-buf/heaps/

obj-y += drivers/misc/mediatek/dcm/
obj-y += drivers/misc/

obj-y += sound/soc/codecs/
# plato: ET7480 type-C audio switch (mediatek,et7480-audioswitch)
obj-y += sound/soc/et7480/

obj-y += sound/soc/mediatek/

obj-y += sound/virtio/

obj-y += drivers/pci/controller/

obj-y += drivers/media/virtio/

obj-y += drivers/video/backlight/

# xaga: AP watchdog - without mtk_wdt.ko nothing kicks the LK-armed hardware
# watchdog, so any hang (e.g. recovery display init failure) resets the board
# 31s later (AP_WDT reboot loop, real-device 2026-08-12)
obj-y += drivers/watchdog/

# plato: NXP NFC (i2c) + P73 secure element (spi), ported from the 5.10 tree
obj-y += drivers/nfc/
obj-y += drivers/p73-spi/

# plato: Xiaomi async shrink-slab daemon. 5.10 had it under drivers/staging/;
# the 6.12 tree dropped the staging Kconfig/Makefile pair, so it is wired
# straight from here.
# kshrink_lruvecd is NOT built: it needs the android_vh_page_trylock_{set,
# clear,get_result}/android_vh_do_page_trylock/
# android_vh_handle_failed_page_trylock vendor hooks and the PG_skiped_lock /
# PG_no_lock_delay page flags, none of which exist in the 6.12 GKI kernel
# (they are not in the 5.10 tree either - they come from vendor mm patches).
obj-y += drivers/staging/kshrink_slabd/

endif
obj-y += drivers/cpufreq/

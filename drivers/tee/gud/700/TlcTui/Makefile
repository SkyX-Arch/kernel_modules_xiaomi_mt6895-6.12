# Copyright (c) 2013-2021 TRUSTONIC LIMITED
# All Rights Reserved.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# version 2 as published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.

#
# Makefile for the Kinibi trusted UI driver
#

#GUD_ROOT_FOLDER := drivers/gud/

# add our modules to kernel.
obj-$(CONFIG_TRUSTONIC_TRUSTED_UI) += t-base-tui.o

t-base-tui-y := main.o tlcTui.o trustedui.o tui-hal_mt.o

# Release mode by default
ccflags-y += -DNDEBUG
ccflags-y += -Wno-declaration-after-statement

ccflags-$(CONFIG_TRUSTONIC_TEE_DEBUG) += -DDEBUG

# MobiCore Driver includes
ccflags-y += -I$(GUD_ROOT_FOLDER)/MobiCoreDriver/public

# MobiCore TlcTui required includes
ccflags-y += -I$(GUD_ROOT_FOLDER)/TlcTui/inc \
             -I$(GUD_ROOT_FOLDER)/TlcTui/public

ccflags-y += -DTUI_ENABLE_DISPLAY
# plato 6.12: TUI_ENABLE_TOUCH pulls in tpd_enter_tui()/tpd_exit_tui(), which
# only the Goodix GT9886/GT9896S drivers export
# (drivers/input/touchscreen/GT98xx/goodix_ts_tui.c).  plato's panel uses the
# FocalTech L12A SPI driver instead, and CONFIG_TOUCHSCREEN_MTK_TOUCH is empty
# in this tree, so neither Goodix driver is built and t-base-tui.ko would ship
# with two unresolved symbols (depmod: "needs unknown symbol tpd_enter_tui"),
# which aborts build-image-kernel-modules-lineage.  gud/510 already ships with
# this flag off for the same reason.
# ccflags-y += -DTUI_ENABLE_TOUCH

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/trusted_mem
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/dma-buf/heaps/
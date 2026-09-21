# SPDX-License-Identifier: GPL-2.0
#
# Elliptic ultrasound proximity driver, ported from the 5.10 tree.

ccflags-y += -I$(src)
IO_MODULE := mtk

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/scp/rv
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/scp/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/audio_ipi/common
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/audio_ipi/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sensor/2.0/core

obj-$(CONFIG_MTK_ULTRASND_PROXIMITY) += elliptic.o
elliptic-objs = elliptic_driver.o elliptic_mixer_controls.o \
	io_modules/$(IO_MODULE)/elliptic_data_mtk_io.o elliptic_sysfs.o

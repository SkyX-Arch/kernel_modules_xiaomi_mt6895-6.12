# SPDX-License-Identifier: GPL-2.0
# Copyright (C) 2021 MediaTek Inc.

MKFILE_PATH := $(lastword $(MAKEFILE_LIST))
IMGSENSOR_DRIVER_PATH := $(patsubst %/,%,$(dir $(realpath $(MKFILE_PATH))))
MTK_DRIVER_PATH := $(DEVICE_MODULES_PATH)/drivers/misc/mediatek

subdir-ccflags-y += \
	-I$(MTK_DRIVER_PATH)/imgsensor/inc \
	-I$(IMGSENSOR_DRIVER_PATH)/ \

# Do NOT define imgsensor-glue-objs here: its only member is imgsensor-glue.o,
# which is also the module name, and kbuild then sees a self-referencing
# composite object ("Циклическая зависимость ... imgsensor-glue.o <- ...").
obj-$(CONFIG_MTK_V4L2_IMGSENSOR) += imgsensor-glue.o

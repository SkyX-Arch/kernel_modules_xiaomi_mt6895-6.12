# SPDX-License-Identifier: GPL-2.0
# Copyright (C) 2020 MediaTek Inc.
#
# V4L2 imgsensor front-end (adaptor layer). In 5.10 this lived at
# drivers/misc/mediatek/imgsensor/src-v4l2/ and was built with the plain
# Makefile; the 6.12 device tree only shipped the bazel glob, so nothing here
# was ever compiled. Sensor subdrivers still use this (v4l2) API, not the
# legacy one under imgsensor/src/common/v1_1/.
#
MKFILE_PATH := $(lastword $(MAKEFILE_LIST))
IMGSENSOR_DRIVER_PATH := $(patsubst %/,%,$(dir $(realpath $(MKFILE_PATH))))
MTK_DRIVER_PATH := $(DEVICE_MODULES_PATH)/drivers/misc/mediatek
MTK_ISP_DRIVER_PATH := $(DEVICE_MODULES_PATH)/drivers/media/platform/mtk-isp
IMGSENSOR_PROJECT := $(subst ",,$(CONFIG_MTK_IMGSENSOR_PROJECT))

FRAME_SYNC := frame-sync
VIRT_SENSOR := virt-sensor


# __XIAOMI_CAMERA__ gates the subdrv_i2c_* accessors in adaptor-subdrv.h plus
# the xiaomi_do_* cam_cal hooks; 5.10 set it globally from
# drivers/misc/mediatek/Makefile:88, the 6.12 tree only sets it per-subdir.
subdir-ccflags-y += -D__XIAOMI_CAMERA__

subdir-ccflags-y += \
	-I$(MTK_DRIVER_PATH)/imgsensor/inc \
	-I$(IMGSENSOR_DRIVER_PATH)/ \
	-I$(MTK_ISP_DRIVER_PATH)/ \

imgsensor-objs := \
	adaptor-hw.o \
	adaptor-drv.o \
	adaptor-i2c.o \
	adaptor-ctrls.o \
	adaptor-ioctl.o \
	adaptor-common-ctrl.o \

define FILTER_DRV
ifeq ($(wildcard $(IMGSENSOR_DRIVER_PATH)/camera_project/$(IMGSENSOR_PROJECT)/$(1)),)
ifeq ($(wildcard $(IMGSENSOR_DRIVER_PATH)/common/$(1)),)
unknown_drv += $(1)
else
common_drv += $(1)
total_subdrvs += $(1)
endif
else
project_drv += $(1)
total_subdrvs += $(1)
endif
endef

$(foreach drv,$(subst $\",,$(CONFIG_CUSTOM_KERNEL_IMGSENSOR)),$(eval $(call FILTER_DRV,$(drv))))

include $(IMGSENSOR_DRIVER_PATH)/async-setting/async_setting.mk
include $(IMGSENSOR_DRIVER_PATH)/async-setting/task-queue/task_queue.mk

subdir-ccflags-y += -I$(IMGSENSOR_DRIVER_PATH)/$(FRAME_SYNC)/
include $(IMGSENSOR_DRIVER_PATH)/$(FRAME_SYNC)/frame_sync_drv.mk

include $(IMGSENSOR_DRIVER_PATH)/$(VIRT_SENSOR)/virt-sensor.mk

define add_subdrv
$(eval subdrv-rpath = $1)
$(eval include $(src)/$1/subdrv.mk)
endef

ifneq ($(common_drv),)
$(foreach drv,$(common_drv),$(eval $(call add_subdrv,common/$(drv))))
endif

comma := ,
empty :=
space := $(empty) $(empty)

IMGSENSOR_SUBDRVS := $(subst $(space),$(comma),$(foreach e,$(total_subdrvs),E($(e))))
ifneq ($(IMGSENSOR_SUBDRVS),)
subdir-ccflags-y += -D'IMGSENSOR_SUBDRVS=$(IMGSENSOR_SUBDRVS)'
endif

obj-$(CONFIG_MTK_V4L2_IMGSENSOR) += imgsensor-glue/
obj-$(CONFIG_MTK_V4L2_IMGSENSOR) += imgsensor.o

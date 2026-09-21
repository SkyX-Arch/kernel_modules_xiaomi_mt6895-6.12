#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
PWM_BUILD_FOLDER=$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/pwm

ifneq ($(filter y m,$(CONFIG_MTK_PWM)),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/
ccflags-y += -I$(PWM_BUILD_FOLDER)/pwm_v2/include/
ccflags-y += -DMTK_PWM_TEST_ENABLED=0

# alps BUILD.bazel mtk-pwm: mtk_pwm.c + pwm_v2/mtk_pwm_hal.c
obj-$(CONFIG_MTK_PWM)	= mtk-pwm.o
mtk-pwm-y := mtk_pwm.o
mtk-pwm-y += pwm_v2/mtk_pwm_hal.o
endif # !CONFIG_MTK_PWM

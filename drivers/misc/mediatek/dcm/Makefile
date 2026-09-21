# SPDX-License-Identifier: GPL-2.0
ccflags-y += -I$(DEVICE_MODULES_PATH)/include/linux/soc/mediatek/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/dcm/include/

# Core
obj-$(CONFIG_MTK_DCM_COMMON) += mtk_dcm.o

# Per-SoC drivers. The 6.12 tree kept the sources but dropped every rule
# except the core one; each block mirrors the 5.10 Makefile and is guarded by
# the autogen source actually being present.
ifneq ($(wildcard $(src)/mt6895_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6895) += mt6895_dcm.o
mt6895_dcm-objs := mt6895_dcm_internal.o mt6895_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6983_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6983) += mt6983_dcm.o
mt6983_dcm-objs := mt6983_dcm_internal.o mt6983_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6879_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6879) += mt6879_dcm.o
mt6879_dcm-objs := mt6879_dcm_internal.o mt6879_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6855_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6855) += mt6855_dcm.o
mt6855_dcm-objs := mt6855_dcm_internal.o mt6855_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6897_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6897) += mt6897_dcm.o
mt6897_dcm-objs := mt6897_dcm_internal.o mt6897_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6899_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6899) += mt6899_dcm.o
mt6899_dcm-objs := mt6899_dcm_internal.o mt6899_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6989_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6989) += mt6989_dcm.o
mt6989_dcm-objs := mt6989_dcm_internal.o mt6989_dcm_autogen.o
endif
ifneq ($(wildcard $(src)/mt6991_dcm_autogen.c),)
obj-$(CONFIG_MTK_DCM_MT6991) += mt6991_dcm.o
mt6991_dcm-objs := mt6991_dcm_internal.o mt6991_dcm_autogen.o
endif

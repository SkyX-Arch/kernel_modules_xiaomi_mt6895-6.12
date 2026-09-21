# pmsr_v3.c includes both <sspm_reservedmem.h> (guarded by
# CONFIG_MTK_TINYSYS_SSPM_SUPPORT) and <tinysys-scmi.h> (guarded by
# CONFIG_MTK_TINYSYS_SCMI). Both can be enabled at once, and the SSPM version
# selects which sspm/ directory holds the header (mt6895 uses V3).
ifneq ($(CONFIG_MTK_TINYSYS_SSPM_V2),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sspm/v2
else ifneq ($(CONFIG_MTK_TINYSYS_SSPM_V3),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sspm/v3
else ifneq ($(CONFIG_MTK_TINYSYS_SSPM_V1),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sspm/v1
endif
ifneq ($(CONFIG_MTK_TINYSYS_SCMI),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/tinysys_scmi/
endif

ccflags-y += -I$(src)/v3/
# v2/v4 have no Makefile in this tree (bazel-only globs); only v3 is
# assembled from a plain Makefile. pmsr_v3.c is what mt6895 needs.
obj-$(CONFIG_MTK_PMSR) += pmsr.o
pmsr-y := v3/pmsr_v3.o
# 5.10 built the TWAM (SPM) driver from pmsr/twam/; the 6.12 tree kept the
# sources but dropped the subdir hook.
obj-$(CONFIG_MTK_PMSR) += twam/

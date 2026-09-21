ccflags-y += \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/ \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/sspm/v2 \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mcupm/include \
	-I$(DEVICE_MODULES_PATH)/drivers/gpu/mediatek/gpufreq \
	-I$(DEVICE_MODULES_PATH)/drivers/gpu/mediatek/gpufreq/v2/include \
	-I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/connectivity/power_throttling \
	-I$(DEVICE_MODULES_PATH)/drivers/leds \
	-I$(DEVICE_MODULES_PATH)/drivers/thermal

CFLAGS_md_cooling.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
CFLAGS_soc_temp_lvts.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
CFLAGS_vtskin_temp.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
CFLAGS_pmic_temp.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
CFLAGS_board_temp.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
CFLAGS_thermal_interface.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal -I$(DEVICE_MODULES_PATH)/drivers/gpu/mediatek/gpufreq/v2/include

ifneq ($(CONFIG_MTK_GPU_LEGACY),y)
ifneq ($(CONFIG_MTK_TINYSYS_GPUEB_SUPPORT),)
ccflags-y += \
	-I$(DEVICE_MODULES_PATH)/drivers/gpu/mediatek/gpueb/include/
ccflags-y += -DGPU_POWERCHK
endif
endif

obj-$(CONFIG_MTK_SOC_THERMAL)		+= soc_temp.o
obj-$(CONFIG_MTK_SOC_THERMAL_LVTS)	+= soc_temp_lvts.o
obj-$(CONFIG_MTK_PMIC_THERMAL)		+= pmic_temp.o
obj-$(CONFIG_MTK_BOARD_THERMAL)		+= board_temp.o
obj-$(CONFIG_MTK_THERMAL_TRACE)	+= thermal_trace.o
obj-$(CONFIG_MTK_THERMAL_IPI)		+= thermal_ipi.o
obj-$(CONFIG_MTK_THERMAL_INTERFACE)	+= thermal_interface.o
#obj-$(CONFIG_MTK_VTSKIN_THERMAL)	+= vtskin_temp.o
obj-$(CONFIG_MTK_FAN_THERMAL)		+= fan_cooling.o

# Cooling devices and vtskin were only described in BUILD.bazel. 5.10 wired
# them from this same Makefile.
obj-$(CONFIG_MTK_MD_THERMAL)	+= md_cooling_all.o
md_cooling_all-y			+= md_cooling.o
md_cooling_all-$(CONFIG_DEBUG_FS)	+= md_cooling_debugfs.o
obj-$(CONFIG_MTK_CHARGER_THERMAL)	+= charger_cooling.o
obj-$(CONFIG_MTK_BACKLIGHT_THERMAL)	+= backlight_cooling.o
obj-$(CONFIG_MTK_VTSKIN_THERMAL)	+= vtskin_temp.o

# Xiaomi thermal HAL interface (ported from the 5.10 tree; provides the
# /dev/mi_thermal netlink+sysfs bridge used by mi_thermal_interface.ko)
CFLAGS_mi_thermal_interface.o := -I$(DEVICE_MODULES_PATH)/drivers/thermal -I$(srctree)/drivers/thermal
obj-$(CONFIG_MI_THERMAL_INTERFACE) += mi_thermal_interface.o

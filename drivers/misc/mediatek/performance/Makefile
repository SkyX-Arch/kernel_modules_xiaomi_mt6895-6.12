MTK_PM_BUILD_FOLDER=$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/performance

subdir-ccflags-y += \
	-I$(MTK_PM_BUILD_FOLDER)/perf_ioctl/ \
	-I$(MTK_PM_BUILD_FOLDER)/include/\
	-I$(MTK_PM_BUILD_FOLDER)/powerhal_cpu_ctrl/\
	-I$(MTK_PM_BUILD_FOLDER)/pelt_hint/include/

# mtk_game
# obj-$(CONFIG_MTK_GAME) += game/

#Generic subdir build
# fpsgo_v8 provides fpsgo_other2comp_* (composer/src/fps_composer.c) and the
# ADPF glue that powerhal_cpu_ctrl.ko and mtk_sbe.ko link against.
obj-$(CONFIG_MTK_FPSGO_V8) += fpsgo_v8/
# fpsgo_v3 is the legacy FPSGO; it exports task_turbo_enforce_ct_to_vip_fp
# (fbt/src/fbt_cpu.c) needed by vip_engine.ko.
obj-$(CONFIG_MTK_FPSGO_V3) += fpsgo_v3/
# perf_ioctl owns the powerhal_adpf_*_fp function pointers.
obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += perf_ioctl/
obj-$(CONFIG_MTK_PERFORMANCE_MODULE) += powerhal_cpu_ctrl/
obj-$(CONFIG_MTK_FRS) += frs/
obj-$(CONFIG_MTK_SBE) += sbe/

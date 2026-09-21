# SPDX-License-Identifier: GPL-2.0

# hf_manager.c provides hf_device_register/hf_device_unregister/
# hf_manager_create/hf_manager_destroy, which sensorhub.ko and the OIS
# drivers (dw9781c/dw9781d) call. It is a bazel-only module in the 6.12
# tree (BUILD.bazel define_mgk_ddk_ko), the 5.10 tree had a Makefile.
obj-$(CONFIG_MTK_SENSOR_SUPPORT) += core/

obj-$(CONFIG_CUSTOM_KERNEL_SENSORHUB) += mtk_nanohub/
obj-$(CONFIG_MTK_SENSORHUB) += sensorhub/
obj-$(CONFIG_MTK_HF_LSM6DSM_SECONDARY) += lsm6dsm_secondary/
obj-$(CONFIG_MTK_HF_TEST_CASE) += test/

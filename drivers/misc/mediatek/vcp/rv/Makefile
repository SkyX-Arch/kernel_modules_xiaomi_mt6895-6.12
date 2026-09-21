# SPDX-License-Identifier: GPL-2.0
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/vcp/include
obj-m += vcp_status.o

# The bazel target "vcp" (vcp/rv/BUILD.bazel conditional_srcs under
# CONFIG_MTK_TINYSYS_VCP_SUPPORT) had no Makefile counterpart, so only the tiny
# vcp_status.ko was ever built and the VCP remote processor never came up.
obj-$(CONFIG_MTK_TINYSYS_VCP_SUPPORT) += vcp.o
vcp-$(CONFIG_MTK_TINYSYS_VCP_SUPPORT) += \
	vcp_helper.o \
	vcp_excep.o \
	vcp_irq.o \
	vcp_logger.o \
	vcp_l1c.o \
	vcp_vcpctl.o \
	vcp_feature_table.o \
	vcp_awake.o \
	vcp_hwvoter_dbg.o

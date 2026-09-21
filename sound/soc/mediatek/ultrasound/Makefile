# SPDX-License-Identifier: GPL-2.0

# scp ultra include path
obj-$(CONFIG_MTK_ULTRASND_PROXIMITY) += ultra_scp/
# ultra_common provides get_scp_ultra_base/set_scp_ultra_base and
# is_ultra_reserved_dram_addr_valid, called from ultra_scp/ and from
# sound/soc/mediatek/common/mtk-afe-fe-dai.c. 5.10 wired it here too.
obj-$(CONFIG_MTK_ULTRASND_PROXIMITY) += ultra_common/

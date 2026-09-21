# SPDX-License-Identifier: GPL-2.0
# No unconditional `obj-m += phy-mtk-ufs.o`.
#
# The K-tree selects PHY_MTK_UFS from SCSI_UFS_MEDIATEK
# (drivers/ufs/host/Kconfig:76) and builds the driver in-tree from
# drivers/phy/mediatek/Makefile, so an unconditional obj-m here produced a
# second phy-mtk-ufs.ko and packaging died with
#     ERROR: Duplicate module phy-mtk-ufs.ko
# Both copies export the same phy_mtk_ufs_* symbols; the in-tree one is the one
# the UFS host driver is actually linked against, so it is the one to keep.
obj-$(CONFIG_DEVICE_MODULES_PHY_MTK_UFS) += phy-mtk-ufs.o

# xaga: platform module wiring
obj-m += phy-mtk-xsphy.o
# xaga: phy-mtk-tphy provides the USB2 (u2port0) / USB3 (u3port0) PHYs that
# mtu3's `phys = <&u2port0 PHY_TYPE_USB2>, <&u3port0 PHY_TYPE_USB3>` needs.
# Without it mtu3 defers/fails -> no UDC -> fastbootd gets
# "couldn't find an available UDC" and recovery auto-reboots (real-device,
# 2026-08-11). CONFIG_DEVICE_MODULES_PHY_MTK_TPHY=m is set by mgk defconfig
# (alps wires it via BUILD.bazel). Hardcoded obj-m like the siblings - the
# DEVICE_MODULES_ Kconfig symbol does not drive the OOT M= build.
obj-m += phy-mtk-tphy.o

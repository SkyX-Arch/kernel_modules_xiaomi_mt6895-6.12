# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_DEVICE_MODULES_RESET_TI_SYSCON) += reset-ti-syscon.o

# No unconditional `obj-m += reset-ti-syscon.o` here.
#
# It used to be there ("xaga: platform module wiring") and it built the driver
# even when the config symbol said no. That is a real problem for plato: the
# K-tree selects RESET_TI_SYSCON from SCSI_UFS_MEDIATEK
# (drivers/ufs/host/Kconfig:77) and builds its own copies from
# drivers/reset/Makefile, so an unconditional obj-m here produced a second
# reset-ti-syscon.ko and the packaging step died with
#     ERROR: Duplicate module reset-ti-syscon.ko
# Both copies export the same reset_ti_* symbols, so keeping the in-tree one is
# the correct choice - it is the one the UFS driver was linked against.

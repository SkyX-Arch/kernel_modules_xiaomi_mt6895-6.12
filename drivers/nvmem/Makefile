# SPDX-License-Identifier: GPL-2.0

#obj-$(CONFIG_MT6681_EFUSE)        += nvmem-mt6681-efuse.o
#nvmem-mt6681-efuse-y              := mt6681-efuse.o

# xaga: mtk-devinfo provides the /efuse@11f10000 nvmem cells (segment@78 etc)
# that dispsys_config references via nvmem-cells. Without it fw_devlink blocks
# dispsys_config forever (wait for supplier segment@78) -> no DRM master ->
# recovery graphics timeout (real-device 2026-08-12). alps builds it via
# BUILD.bazel nvmem_mtk-devinfo (mgk_64.bzl). Module name differs from the
# source file, hence the -y mapping (Kbuild composite rule).
obj-m += nvmem_mtk-devinfo.o
nvmem_mtk-devinfo-y := mtk-devinfo.o

# EFUSE nvmem provider for MT635x PMICs (alps BUILD.bazel target
# nvmem-mt635x-efuse; CONFIG_MT635X_EFUSE=m is set by mgk_64_k612).
obj-$(CONFIG_MT635X_EFUSE)	+= nvmem-mt635x-efuse.o
nvmem-mt635x-efuse-y	:= mt635x-efuse.o

# SPDX-License-Identifier: GPL-2.0
#
# plato: Goodix fingerprint SPI driver in TEE mode (Xiaomi 12T).
# Ported from the 5.10 vendor kernel. Upstream spi-mt65xx has no
# mt_chip_conf / mt_spi_t, so build with CONFIG_SPI_MT65XX_MODULE,
# which is the upstream-SPI code path already present in this driver.

obj-$(CONFIG_GOODIX_FINGERPRINT) += gf_spi_tee.o

ccflags-y += -DCONFIG_SPI_MT65XX_MODULE
# plato board variant: selects the mt6368_vfp + mt6363_vufs18 rails
ccflags-y += -DCONFIG_PRODUCT_PLATO_FP
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/typec/tcpc/inc
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/tee/teei/520/tz_driver/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/tee/teei/520/common/include
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/tee/teei/520/public

$(info "plato: building Goodix TEE fingerprint (gf_spi_tee.ko)")

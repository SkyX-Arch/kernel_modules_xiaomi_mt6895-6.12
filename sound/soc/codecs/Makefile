# SPDX-License-Identifier: GPL-2.0

ifneq ($(CONFIG_MTK_TINYSYS_SCP_SUPPORT),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/scp/include
endif

ifneq ($(CONFIG_DEVICE_MODULES_SND_SOC_MEDIATEK),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/mediatek/common
endif

snd-soc-mt6338-objs := mt6338.o
snd-soc-mt6351-objs := mt6351.o
snd-soc-mt6358-objs := mt6358.o
snd-soc-mt6359-objs := mt6359.o
snd-soc-mt6660-objs := mt6660.o
snd-soc-mt6359-accdet-objs := mt6359-accdet.o
snd-soc-mt6359p-accdet-objs := mt6359p-accdet.o
snd-soc-mt6368-objs := mt6368.o
#snd-soc-mt6681-objs := mt6681.o
snd-soc-hdmi-codec-objs := hdmi-codec.o
snd-soc-rt5509-objs += rt5509.o rt5509-calib.o
#snd-soc-mt6366-objs := mt6358.o

obj-$(CONFIG_SND_SOC_MT6338)	+= snd-soc-mt6338.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6351)	+= snd-soc-mt6351.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6358)	+= snd-soc-mt6358.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6359)	+= snd-soc-mt6359.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6359P)	+= snd-soc-mt6359.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6359_ACCDET) += mt6359-accdet.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6660)	+= snd-soc-mt6660.o
obj-$(CONFIG_SND_SOC_MT6368)	+= snd-soc-mt6368.o
# plato 6.12: mt6368-accdet exports accdet_eint_callback_wrapper(), which the
# et7480 type-C audio switch calls to report headset plug events. plato's 5.10
# config built it (CONFIG_SND_SOC_MT6368_ACCDET=m) and plato has a 3.5mm jack.
obj-$(CONFIG_SND_SOC_MT6368_ACCDET)	+= mt6368-accdet.o
#obj-$(CONFIG_SND_SOC_MT6681)	+= snd-soc-mt6681.o
obj-$(CONFIG_DEVICE_MODULES_SND_SOC_HDMI_CODEC)	+= snd-soc-hdmi-codec.o
obj-$(CONFIG_SND_SOC_RT5512)	+= richtek/
obj-$(CONFIG_SND_SOC_AW883XX)	+= aw883xx/
obj-$(CONFIG_SND_SOC_TFA9874)	+= tfa98xx/
obj-$(CONFIG_SND_SOC_RT5509) 	+= snd-soc-rt5509.o
obj-$(CONFIG_SND_SOC_AK7709)	+= ak7709/
obj-$(CONFIG_SND_SOC_HFDA80X)	+= hfda80x/
#obj-$(CONFIG_DEVICE_MODULES_SND_SOC_MT6366)	+= snd-soc-mt6366.o
obj-$(CONFIG_SND_SOC_FS16XX)    += fs18xx/

# plato: vendor CS35L41 fork (upstream driver lacks cirrus,gpio-config2 etc.)
obj-$(CONFIG_SND_SOC_CS35L41_PLATO) += snd-soc-cs35l41-plato.o
snd-soc-cs35l41-plato-objs := cs35l41/cs35l41.o \
	cs35l41/cs35l41-tables.o \
	cs35l41/cs35l41-i2c.o \
	cs35l41/wm_adsp.o
# 5.10-era Cirrus/vendor code: its printk format strings predate the modern
# type checker. Relax only those diagnostics, and only for these objects.
CFLAGS_cs35l41/cs35l41.o += -Wno-error=format -Wno-error=unused-but-set-variable -Wno-error=visibility
CFLAGS_cs35l41/wm_adsp.o += -Wno-error=format -Wno-error=implicit-fallthrough
CFLAGS_cs35l41/cs35l41-i2c.o += -Wno-error=incompatible-function-pointer-types

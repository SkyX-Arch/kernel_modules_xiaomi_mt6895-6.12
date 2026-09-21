# SPDX-License-Identifier: GPL-2.0
#
# plato: FocalTech FTS L12A SPI touch controller (Xiaomi 12T).
# Ported from the 5.10 vendor kernel; the module name matches the
# existing device/xiaomi/plato/modules/modules.load entry "fts_touch_spi".

obj-$(CONFIG_TOUCHSCREEN_ST_FTS_V521_SPI_L12A) := fts_touch_spi.o
fts_touch_spi-y := fts_lib/ftsCompensation.o \
		fts_lib/ftsCore.o \
		fts_lib/ftsError.o \
		fts_lib/ftsFrame.o \
		fts_lib/ftsIO.o \
		fts_lib/ftsTest.o \
		fts_lib/ftsTool.o \
		fts_lib/ftsFlash.o \
		fts_lib/ftsGesture.o \
		fts_proc.o \
		fts.o

ccflags-y += -I$(srctree)/drivers/input/touchscreen/L12a_fts_spi

obj-$(CONFIG_MTK_PMSR) += spmtwam.o
# spmtwam.c defines CREATE_TRACE_POINTS over "spmtwam_events.h", which
# define_trace.h includes relative to the source dir.
CFLAGS_spmtwam.o := -I$(src) -I$(srctree)/drivers/misc/mediatek/include

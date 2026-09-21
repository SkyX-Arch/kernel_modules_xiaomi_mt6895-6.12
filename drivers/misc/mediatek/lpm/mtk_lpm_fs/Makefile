mtk_lpm_fs_objs += mtk_cpuidle_sysfs.o
mtk_lpm_fs_objs += mtk_lp_sysfs.o
mtk_lpm_fs_objs += mtk_suspend_sysfs.o
mtk_lpm_fs_objs += mtk_spm_sysfs.o
mtk_lpm_fs_objs += mtk_lpm_sysfs.o
mtk_lpm_fs_objs += mtk_lp_sysfs_procfs.o
# mtk_ocla_sysfs.c exports mtk_ocla_sysfs_root_entry_create() /
# mtk_ocla_sysfs_entry_node_add(), which modules/debug/v2/lpm_dbg_ocla_fs.c
# calls. It was missing from this list, so mtk-lpm-dbg-common-v2.ko carried
# undefined symbols.
mtk_lpm_fs_objs += mtk_ocla_sysfs.o

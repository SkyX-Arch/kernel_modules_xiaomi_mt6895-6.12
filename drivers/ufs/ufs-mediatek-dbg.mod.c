#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(ufs_mtk_eh_abort, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_eh_unipro_set_lpm, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_eh_err_cnt, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_l2_dump, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_cali_hold, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_cali_release, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_cmd_hist_enable, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_cmd_hist_disable, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_dump, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_get_aee_buffer, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_get_aee_buffer1, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_tp_register, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_tp_unregister, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_dbg_register, "_gpl", "");

SYMBOL_CRC(ufs_mtk_eh_abort, 0xd2601a4c, "_gpl");
SYMBOL_CRC(ufs_mtk_eh_unipro_set_lpm, 0x73063e31, "_gpl");
SYMBOL_CRC(ufs_mtk_eh_err_cnt, 0xc5059485, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_l2_dump, 0x7d16f320, "_gpl");
SYMBOL_CRC(ufs_mtk_cali_hold, 0x92dfafaa, "_gpl");
SYMBOL_CRC(ufs_mtk_cali_release, 0xeff56a13, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_cmd_hist_enable, 0x4c15e06d, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_cmd_hist_disable, 0x380089d0, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_dump, 0x063b1cb6, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_get_aee_buffer, 0x370abf81, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_get_aee_buffer1, 0x8e833462, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_tp_register, 0x668e7439, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_tp_unregister, 0xa6a0e9ff, "_gpl");
SYMBOL_CRC(ufs_mtk_dbg_register, 0xe2f48c74, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x401167cc, "_dev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x037a0cba, "kfree" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0xa4260bd8, "ufshcd_dme_get_attr" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xee7796cb, "scsi_block_requests" },
	{ 0xca705e00, "ufshcd_hold" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x01000e51, "schedule" },
	{ 0xcf1400ef, "ufshcd_release" },
	{ 0xe935e988, "sbitmap_weight" },
	{ 0x78d86329, "scsi_unblock_requests" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x39528681, "synchronize_srcu" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xb4f43232, "proc_set_user" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8522ad57, "ufshcd_update_evt_hist" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xdc29fcbb, "tracepoint_srcu" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0x14de1090,
	0x401167cc,
	0xeae3dfd6,
	0xb4ce05a5,
	0x2f2c95c4,
	0x6626afca,
	0xcf2a6966,
	0x34db050b,
	0x92997ed8,
	0x805e2dd2,
	0x7aba1ef6,
	0x037a0cba,
	0x10a09bd4,
	0xdd115996,
	0xf9606a4e,
	0xa4260bd8,
	0xe94986d6,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x656e4a6e,
	0x4eb4c414,
	0xee7796cb,
	0xca705e00,
	0xb43f9365,
	0x01000e51,
	0xcf1400ef,
	0xe935e988,
	0x78d86329,
	0x13269d10,
	0xc5b6f236,
	0xd35cce70,
	0xc8f2ae9d,
	0xa06ad99d,
	0x65929cae,
	0xe2d5255a,
	0x39528681,
	0x6091797f,
	0x441d0de9,
	0xe17134b6,
	0xa2fa95a0,
	0xb4f43232,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x41ed3709,
	0x8522ad57,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x5c3c7387,
	0x9688de8b,
	0xe4bbc1dd,
	0xdc29fcbb,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"mt_irq_dump_status\0"
	"_dev_info\0"
	"__const_udelay\0"
	"_dev_err\0"
	"flush_work\0"
	"down\0"
	"up\0"
	"_raw_spin_lock_irqsave\0"
	"_printk\0"
	"tracepoint_probe_register\0"
	"tracepoint_probe_unregister\0"
	"kfree\0"
	"for_each_kernel_tracepoint\0"
	"mrdump_mini_add_extra_file\0"
	"mrdump_set_extra_dump\0"
	"ufshcd_dme_get_attr\0"
	"sched_clock\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"snprintf\0"
	"__pm_runtime_resume\0"
	"scsi_block_requests\0"
	"ufshcd_hold\0"
	"ktime_get\0"
	"schedule\0"
	"ufshcd_release\0"
	"sbitmap_weight\0"
	"scsi_unblock_requests\0"
	"__pm_runtime_idle\0"
	"queue_work_on\0"
	"_raw_spin_unlock_irqrestore\0"
	"seq_printf\0"
	"regulator_get_voltage\0"
	"ns_to_timespec64\0"
	"strcmp\0"
	"synchronize_srcu\0"
	"synchronize_rcu\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"proc_create_data\0"
	"proc_set_user\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"get_random_bytes\0"
	"ufshcd_update_evt_hist\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"kstrtoull\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"tracepoint_srcu\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,irq-dbg,mrdump");


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

KSYMTAB_FUNC(aee_sram_fiq_log, "", "");
KSYMTAB_FUNC(aee_sram_printk, "", "");
KSYMTAB_FUNC(aee_rr_rec_kick, "", "");
KSYMTAB_FUNC(aee_rr_rec_check, "", "");
KSYMTAB_FUNC(aee_rr_rec_wdk_ktime, "", "");
KSYMTAB_FUNC(aee_rr_rec_wdk_systimer_cnt, "", "");
KSYMTAB_FUNC(aee_rr_rec_gpu_dvfs_vgpu, "", "");
KSYMTAB_FUNC(aee_rr_curr_gpu_dvfs_vgpu, "", "");
KSYMTAB_FUNC(aee_rr_rec_gpu_dvfs_oppidx, "", "");
KSYMTAB_FUNC(aee_rr_rec_gpu_dvfs_status, "", "");
KSYMTAB_FUNC(aee_rr_curr_gpu_dvfs_status, "", "");
KSYMTAB_FUNC(aee_rr_rec_gpu_dvfs_power_count, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_vboot, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_gpu_volt, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_gpu_volt_1, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_gpu_volt_2, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_gpu_volt_3, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_temp, "", "");
KSYMTAB_FUNC(aee_rr_rec_ptp_status, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_gpu_volt, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_gpu_volt_1, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_gpu_volt_2, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_gpu_volt_3, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_temp, "", "");
KSYMTAB_FUNC(aee_rr_curr_ptp_status, "", "");
KSYMTAB_FUNC(aee_rr_rec_hang_detect_timeout_count, "", "");
KSYMTAB_FUNC(mrdump_mini_add_extra_file, "", "");
KSYMTAB_FUNC(mrdump_set_extra_dump, "", "");
KSYMTAB_FUNC(mrdump_mini_add_extra_misc, "", "");
KSYMTAB_FUNC(mrdump_mini_add_hang_raw, "", "");
KSYMTAB_FUNC(mrdump_regist_hang_bt, "_gpl", "");
KSYMTAB_FUNC(mrdump_common_die, "", "");
KSYMTAB_FUNC(aee_get_stext, "", "");
KSYMTAB_FUNC(aee_get_etext, "", "");
KSYMTAB_FUNC(aee_get_text, "", "");
KSYMTAB_FUNC(aee_get_init_begin, "", "");
KSYMTAB_FUNC(aee_log_buf_addr_get, "", "");

SYMBOL_CRC(aee_sram_fiq_log, 0x17fa4179, "");
SYMBOL_CRC(aee_sram_printk, 0xc9dddfcd, "");
SYMBOL_CRC(aee_rr_rec_kick, 0xfdfa56a8, "");
SYMBOL_CRC(aee_rr_rec_check, 0x2ae9361a, "");
SYMBOL_CRC(aee_rr_rec_wdk_ktime, 0x47fc61bb, "");
SYMBOL_CRC(aee_rr_rec_wdk_systimer_cnt, 0x1042fbe5, "");
SYMBOL_CRC(aee_rr_rec_gpu_dvfs_vgpu, 0x214dd646, "");
SYMBOL_CRC(aee_rr_curr_gpu_dvfs_vgpu, 0xe51df2e5, "");
SYMBOL_CRC(aee_rr_rec_gpu_dvfs_oppidx, 0x871376ec, "");
SYMBOL_CRC(aee_rr_rec_gpu_dvfs_status, 0xbc5ce545, "");
SYMBOL_CRC(aee_rr_curr_gpu_dvfs_status, 0x35806b02, "");
SYMBOL_CRC(aee_rr_rec_gpu_dvfs_power_count, 0xdb39008d, "");
SYMBOL_CRC(aee_rr_rec_ptp_vboot, 0x8ca0ad44, "");
SYMBOL_CRC(aee_rr_rec_ptp_gpu_volt, 0xafd0fc3c, "");
SYMBOL_CRC(aee_rr_rec_ptp_gpu_volt_1, 0xdaecfee4, "");
SYMBOL_CRC(aee_rr_rec_ptp_gpu_volt_2, 0x80a30f8f, "");
SYMBOL_CRC(aee_rr_rec_ptp_gpu_volt_3, 0x00495d69, "");
SYMBOL_CRC(aee_rr_rec_ptp_temp, 0xd376c967, "");
SYMBOL_CRC(aee_rr_rec_ptp_status, 0xee9c63e7, "");
SYMBOL_CRC(aee_rr_curr_ptp_gpu_volt, 0x3be6d303, "");
SYMBOL_CRC(aee_rr_curr_ptp_gpu_volt_1, 0x04824ec5, "");
SYMBOL_CRC(aee_rr_curr_ptp_gpu_volt_2, 0x9d6028c4, "");
SYMBOL_CRC(aee_rr_curr_ptp_gpu_volt_3, 0x5ceef704, "");
SYMBOL_CRC(aee_rr_curr_ptp_temp, 0x1d37f76c, "");
SYMBOL_CRC(aee_rr_curr_ptp_status, 0x0a561605, "");
SYMBOL_CRC(aee_rr_rec_hang_detect_timeout_count, 0xbe8c4b26, "");
SYMBOL_CRC(mrdump_mini_add_extra_file, 0xdd115996, "");
SYMBOL_CRC(mrdump_set_extra_dump, 0xf9606a4e, "");
SYMBOL_CRC(mrdump_mini_add_extra_misc, 0x41efe96d, "");
SYMBOL_CRC(mrdump_mini_add_hang_raw, 0x31d32c64, "");
SYMBOL_CRC(mrdump_regist_hang_bt, 0x6327e210, "_gpl");
SYMBOL_CRC(mrdump_common_die, 0x36f2ab73, "");
SYMBOL_CRC(aee_get_stext, 0xca5f15e6, "");
SYMBOL_CRC(aee_get_etext, 0xacc75e5b, "");
SYMBOL_CRC(aee_get_text, 0x60f5ac70, "");
SYMBOL_CRC(aee_get_init_begin, 0xb05e58b5, "");
SYMBOL_CRC(aee_log_buf_addr_get, 0x2dbfad07, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x037a0cba, "kfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x9166fada, "strncpy" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x173e2075, "seq_write" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xb3055449, "__cpu_present_mask" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x7ba027da, "param_get_ulong" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc4a95aa0, "param_set_ulong" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x5a921311, "strncmp" },
	{ 0x7ee25d67, "vmap" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd1aa56, "stack_trace_save" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xee46e386, "runqueues" },
	{ 0x00148653, "vsnprintf" },
	{ 0xf1e046cc, "panic" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x4d924f20, "memremap" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0x5eb0184d, "register_die_notifier" },
	{ 0xec64a3d1, "register_module_notifier" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0x36115a25, "unregister_die_notifier" },
	{ 0xc93e87d8, "unregister_module_notifier" },
	{ 0xe27121cb, "panic_notifier_list" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4531ab62, "copy_from_kernel_nofault" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xeae3dfd6,
	0x3c3ff9fd,
	0x43b0c9c3,
	0xaa0c318b,
	0x92997ed8,
	0xc8f2ae9d,
	0x037a0cba,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0xe94986d6,
	0x34db050b,
	0xd35cce70,
	0x40863ba1,
	0x3b1b6444,
	0xb318cbab,
	0xf3cdc3c6,
	0x5cf50b74,
	0x18b48e28,
	0x9166fada,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x173e2075,
	0x9f46ced8,
	0x476b165a,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0xde7ece30,
	0xaf56600a,
	0xb3055449,
	0x017de3d5,
	0xb1c3a01a,
	0x0f05f001,
	0xefe8a82e,
	0x69dd3b5b,
	0xe2d5255a,
	0xf77555cd,
	0x62b33777,
	0x7ba027da,
	0x656e4a6e,
	0xc4a95aa0,
	0x9688de8b,
	0xce8498d7,
	0xe4bbc1dd,
	0x5a921311,
	0x7ee25d67,
	0x56470118,
	0x6bd1aa56,
	0x280f9f14,
	0xee46e386,
	0x00148653,
	0xf1e046cc,
	0x6b2dc060,
	0xf93aae46,
	0x4d924f20,
	0x83b96232,
	0x5eb0184d,
	0xec64a3d1,
	0xaf7cb74b,
	0xe136f93c,
	0xc866487b,
	0x36115a25,
	0xc93e87d8,
	0xe27121cb,
	0x42ad47ad,
	0xffeedf6a,
	0x2d3385d3,
	0x4531ab62,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__const_udelay\0"
	"sprintf\0"
	"preempt_schedule\0"
	"vscnprintf\0"
	"_printk\0"
	"seq_printf\0"
	"kfree\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"sched_clock\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"ioremap_prot\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"__memset_io\0"
	"strncpy\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_write\0"
	"__sw_hweight64\0"
	"sized_strscpy\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__cpu_possible_mask\0"
	"arm64_use_ng_mappings\0"
	"__cpu_present_mask\0"
	"nr_cpu_ids\0"
	"oops_in_progress\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"crc32_le\0"
	"strcmp\0"
	"__memcpy_toio\0"
	"sysfs_create_group\0"
	"param_get_ulong\0"
	"snprintf\0"
	"param_set_ulong\0"
	"memstart_addr\0"
	"kernel_kobj\0"
	"kimage_voffset\0"
	"strncmp\0"
	"vmap\0"
	"__warn_printk\0"
	"stack_trace_save\0"
	"__per_cpu_offset\0"
	"runqueues\0"
	"vsnprintf\0"
	"panic\0"
	"dump_stack\0"
	"__arm_smccc_smc\0"
	"memremap\0"
	"atomic_notifier_chain_register\0"
	"register_die_notifier\0"
	"register_module_notifier\0"
	"of_property_read_string\0"
	"of_property_read_variable_u32_array\0"
	"atomic_notifier_chain_unregister\0"
	"unregister_die_notifier\0"
	"unregister_module_notifier\0"
	"panic_notifier_list\0"
	"queue_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"system_wq\0"
	"copy_from_kernel_nofault\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


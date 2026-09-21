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

KSYMTAB_FUNC(mtk_cpuidle_status_init, "", "");
KSYMTAB_FUNC(mtk_cpuidle_status_exit, "", "");
KSYMTAB_FUNC(mtk_cpupm_dbg_init, "", "");
KSYMTAB_FUNC(mtk_cpupm_dbg_exit, "", "");
KSYMTAB_FUNC(lpm_cpuidle_fs_init, "", "");
KSYMTAB_FUNC(lpm_cpuidle_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_dbg_common_fs_exit, "", "");
KSYMTAB_FUNC(lpm_dbg_common_fs_init, "", "");
KSYMTAB_FUNC(lpm_dbg_fs_exit, "", "");
KSYMTAB_FUNC(lpm_dbg_fs_init, "", "");
KSYMTAB_FUNC(lpm_trace_fs_init, "", "");
KSYMTAB_FUNC(lpm_trace_fs_deinit, "", "");
KSYMTAB_DATA(lpm_spm_base, "", "");
KSYMTAB_FUNC(lpm_dbg_spm_rsc_req_check, "", "");
KSYMTAB_FUNC(lpm_dbg_plat_ops_register, "", "");
KSYMTAB_FUNC(lpm_dbg_plat_info_set, "", "");
KSYMTAB_DATA(before_md_sleep_status, "", "");
KSYMTAB_DATA(after_md_sleep_status, "", "");
KSYMTAB_DATA(cur_md_sleep_status, "", "");
KSYMTAB_FUNC(get_md_sleep_time, "", "");
KSYMTAB_FUNC(is_md_sleep_info_valid, "", "");
KSYMTAB_FUNC(log_md_sleep_info, "", "");
KSYMTAB_FUNC(get_lpm_logger_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(register_lpm_logger_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(unregister_lpm_logger_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(lpm_logger_init, "", "");
KSYMTAB_FUNC(lpm_logger_deinit, "", "");
KSYMTAB_FUNC(spm_cond_init, "", "");
KSYMTAB_FUNC(spm_cond_deinit, "", "");
KSYMTAB_FUNC(lpm_rc_fs_init, "", "");
KSYMTAB_FUNC(lpm_rc_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_ocla_fs_init, "", "");
KSYMTAB_FUNC(lpm_ocla_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_dbg_pm_init, "", "");
KSYMTAB_FUNC(lpm_dbg_pm_exit, "", "");
KSYMTAB_FUNC(lpm_get_lp_blocked_threshold, "", "");
KSYMTAB_FUNC(lpm_spm_fs_init, "", "");
KSYMTAB_FUNC(lpm_spm_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_trace_event_init, "", "");
KSYMTAB_FUNC(lpm_trace_event_deinit, "", "");
KSYMTAB_FUNC(lpm_hwreq_fs_init, "", "");
KSYMTAB_FUNC(lpm_hwreq_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_sys_res_fs_init, "", "");
KSYMTAB_FUNC(lpm_sys_res_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_sys_res_init, "", "");
KSYMTAB_FUNC(lpm_sys_res_exit, "", "");
KSYMTAB_FUNC(get_lpm_sys_res_ops, "", "");
KSYMTAB_FUNC(register_lpm_sys_res_ops, "", "");
KSYMTAB_FUNC(unregister_lpm_sys_res_ops, "", "");
KSYMTAB_FUNC(lpm_sys_res_stat_init, "", "");
KSYMTAB_FUNC(lpm_sys_res_stat_deinit, "", "");
KSYMTAB_FUNC(get_lpm_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(register_lpm_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(unregister_lpm_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(lpm_get_suspend_event_info, "", "");

SYMBOL_CRC(mtk_cpuidle_status_init, 0xf98190ae, "");
SYMBOL_CRC(mtk_cpuidle_status_exit, 0xf91851fe, "");
SYMBOL_CRC(mtk_cpupm_dbg_init, 0x4221fde6, "");
SYMBOL_CRC(mtk_cpupm_dbg_exit, 0xd899a911, "");
SYMBOL_CRC(lpm_cpuidle_fs_init, 0x7061173d, "");
SYMBOL_CRC(lpm_cpuidle_fs_deinit, 0xdca31a84, "");
SYMBOL_CRC(lpm_dbg_common_fs_exit, 0x9c25b4ec, "");
SYMBOL_CRC(lpm_dbg_common_fs_init, 0x426cfd21, "");
SYMBOL_CRC(lpm_dbg_fs_exit, 0xa117fbe8, "");
SYMBOL_CRC(lpm_dbg_fs_init, 0x5ffb98b1, "");
SYMBOL_CRC(lpm_trace_fs_init, 0x4bfd0103, "");
SYMBOL_CRC(lpm_trace_fs_deinit, 0x69b28f34, "");
SYMBOL_CRC(lpm_spm_base, 0x42337187, "");
SYMBOL_CRC(lpm_dbg_spm_rsc_req_check, 0xaf78edf3, "");
SYMBOL_CRC(lpm_dbg_plat_ops_register, 0x5e4aaffb, "");
SYMBOL_CRC(lpm_dbg_plat_info_set, 0x66922fa6, "");
SYMBOL_CRC(before_md_sleep_status, 0x256c3603, "");
SYMBOL_CRC(after_md_sleep_status, 0x632e9e90, "");
SYMBOL_CRC(cur_md_sleep_status, 0x314f26e7, "");
SYMBOL_CRC(get_md_sleep_time, 0x690f478a, "");
SYMBOL_CRC(is_md_sleep_info_valid, 0x5f4506c2, "");
SYMBOL_CRC(log_md_sleep_info, 0x3af92941, "");
SYMBOL_CRC(get_lpm_logger_mbrain_dbg_ops, 0xb9693023, "");
SYMBOL_CRC(register_lpm_logger_mbrain_dbg_ops, 0x8944ee18, "");
SYMBOL_CRC(unregister_lpm_logger_mbrain_dbg_ops, 0x116424dd, "");
SYMBOL_CRC(lpm_logger_init, 0x551e175b, "");
SYMBOL_CRC(lpm_logger_deinit, 0x917c43bc, "");
SYMBOL_CRC(spm_cond_init, 0x4935b29b, "");
SYMBOL_CRC(spm_cond_deinit, 0x42b9e4ab, "");
SYMBOL_CRC(lpm_rc_fs_init, 0x0ee71ccf, "");
SYMBOL_CRC(lpm_rc_fs_deinit, 0x6dfb3eb5, "");
SYMBOL_CRC(lpm_ocla_fs_init, 0x492ab7da, "");
SYMBOL_CRC(lpm_ocla_fs_deinit, 0xbfe559d1, "");
SYMBOL_CRC(lpm_dbg_pm_init, 0x293b7ef1, "");
SYMBOL_CRC(lpm_dbg_pm_exit, 0xd7d71da8, "");
SYMBOL_CRC(lpm_get_lp_blocked_threshold, 0xcb597b9a, "");
SYMBOL_CRC(lpm_spm_fs_init, 0xd819551c, "");
SYMBOL_CRC(lpm_spm_fs_deinit, 0x07c8e9c0, "");
SYMBOL_CRC(lpm_trace_event_init, 0x86fa9be7, "");
SYMBOL_CRC(lpm_trace_event_deinit, 0xe71f72e7, "");
SYMBOL_CRC(lpm_hwreq_fs_init, 0x4f10a908, "");
SYMBOL_CRC(lpm_hwreq_fs_deinit, 0x524b79c8, "");
SYMBOL_CRC(lpm_sys_res_fs_init, 0x0ef65375, "");
SYMBOL_CRC(lpm_sys_res_fs_deinit, 0x95b22497, "");
SYMBOL_CRC(lpm_sys_res_init, 0x86b425a2, "");
SYMBOL_CRC(lpm_sys_res_exit, 0x716f1685, "");
SYMBOL_CRC(get_lpm_sys_res_ops, 0xc0cbbbd0, "");
SYMBOL_CRC(register_lpm_sys_res_ops, 0xb7ceb930, "");
SYMBOL_CRC(unregister_lpm_sys_res_ops, 0x93e66ee6, "");
SYMBOL_CRC(lpm_sys_res_stat_init, 0x6c0d290b, "");
SYMBOL_CRC(lpm_sys_res_stat_deinit, 0xaa50a34c, "");
SYMBOL_CRC(get_lpm_mbrain_dbg_ops, 0xcafc9149, "");
SYMBOL_CRC(register_lpm_mbrain_dbg_ops, 0x5008e1c4, "");
SYMBOL_CRC(unregister_lpm_mbrain_dbg_ops, 0x6ae9e1e8, "");
SYMBOL_CRC(lpm_get_suspend_event_info, 0x10037dfb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf553318d, "cpuidle_pause_and_lock" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x92997ed8, "_printk" },
	{ 0xcabe04de, "cpuidle_resume_and_unlock" },
	{ 0x8c6ba271, "kthread_bind" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6bcaac61, "cpuidle_get_driver" },
	{ 0x822c124d, "lpm_suspend_type_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0xef7dddaf, "of_cpu_device_node_get" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x58cb358f, "mtk_cpuidle_sysfs_sub_entry_add" },
	{ 0xbd0884bb, "mtk_cpuidle_sysfs_sub_entry_node_add" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe93acd86, "mtk_cpuidle_sysfs_root_entry_create" },
	{ 0xa55169a3, "mtk_cpuidle_sysfs_entry_node_add" },
	{ 0x037a0cba, "kfree" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc2d55962, "work_on_cpu_key" },
	{ 0x5a921311, "strncmp" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb3055449, "__cpu_present_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x7ec58d17, "gpio_dump_regs" },
	{ 0x81ec4014, "mtk_suspend_sysfs_root_entry_create" },
	{ 0xa5cd22db, "mtk_suspend_sysfs_entry_node_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x653b329e, "mtk_spm_sysfs_root_entry_create" },
	{ 0xda472c36, "mtk_spm_sysfs_entry_node_add" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x0366307a, "console_suspend_enabled" },
	{ 0xef93aa82, "mtk_lpm_sysfs_root_entry_create" },
	{ 0x12c27859, "mtk_lpm_sysfs_sub_entry_add" },
	{ 0x09bd7da0, "mtk_lpm_sysfs_sub_entry_node_add" },
	{ 0x12d88946, "mtk_lpm_sysfs_entry_node_remove" },
	{ 0x79b80d2c, "lpm_platform_trace_get" },
	{ 0xa6a6d090, "lpm_issuer_register" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0xa7f924e5, "lpm_notifier_register" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x3a8edb31, "pm_get_active_wakeup_sources" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x2e2b40d2, "strncat" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xfc6e255d, "mtk_ocla_sysfs_root_entry_create" },
	{ 0xb43d1682, "mtk_ocla_sysfs_entry_node_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x55067d21, "mtk_lp_sysfs_entry_func_create" },
	{ 0x7c5ba4c8, "mtk_lp_sysfs_entry_func_node_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcbc42e90, "__traceiter_SPM__resource_req_0" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb276dc30, "__tracepoint_SPM__resource_req_0" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7f54ca7a, "get_res_group_id" },
	{ 0xdac6bd05, "get_res_group_info" },
	{ 0x9f083892, "get_res_sig_stats" },
	{ 0xe8bd9c98, "sync_latest_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf553318d,
	0xba0aee2e,
	0x92997ed8,
	0xcabe04de,
	0x8c6ba271,
	0xce5bc4d0,
	0xe94986d6,
	0xc3055d20,
	0xf9a482f9,
	0x6bcaac61,
	0x822c124d,
	0xe2d5255a,
	0xde7ece30,
	0xac594e02,
	0x6c9565df,
	0xef7dddaf,
	0x52384e38,
	0xf93aae46,
	0xd273017c,
	0x1fec5304,
	0xf3cdc3c6,
	0xaba63322,
	0x58cb358f,
	0xbd0884bb,
	0x96848186,
	0x3b6c41ea,
	0xe93acd86,
	0xa55169a3,
	0x037a0cba,
	0x74c134b9,
	0xe17134b6,
	0x52c5c991,
	0x476b165a,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0xe136f93c,
	0xc2d55962,
	0x5a921311,
	0x1ed4c5e6,
	0x9f46ced8,
	0x85df9b6c,
	0x8c8569cb,
	0xb3055449,
	0xe4bc4b09,
	0x0f05f001,
	0xefe8a82e,
	0x017de3d5,
	0x7ec58d17,
	0x81ec4014,
	0xa5cd22db,
	0x656e4a6e,
	0x653b329e,
	0xda472c36,
	0xcd6bda8d,
	0xeae3dfd6,
	0x0366307a,
	0xef93aa82,
	0x12c27859,
	0x09bd7da0,
	0x12d88946,
	0x79b80d2c,
	0xa6a6d090,
	0x6b201699,
	0xeab7088e,
	0xa7f924e5,
	0x75966ec2,
	0x49cd25ed,
	0xb9c425de,
	0x9166fc03,
	0x8c03d20c,
	0x9ec6ca96,
	0x356461c8,
	0x3a8edb31,
	0xc5b6f236,
	0x66bcb0f8,
	0x40863ba1,
	0xaf56600a,
	0xb088bcfc,
	0xaf7cb74b,
	0x2e2b40d2,
	0xc1cad332,
	0xfc6e255d,
	0xb43d1682,
	0xc6f46339,
	0xc38c83b8,
	0x1e0a0c24,
	0x37befc70,
	0x82ee90dc,
	0x7f02188f,
	0x15ba50a6,
	0x12db679a,
	0x6fc35f2b,
	0x8c0215f2,
	0x55067d21,
	0x7c5ba4c8,
	0x24d273d1,
	0xcbc42e90,
	0xf70e4a4d,
	0xdc0e4855,
	0xb276dc30,
	0x7e19152a,
	0x9a835040,
	0x34db050b,
	0xd35cce70,
	0x7f54ca7a,
	0xdac6bd05,
	0x9f083892,
	0xe8bd9c98,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cpuidle_pause_and_lock\0"
	"kthread_create_on_node\0"
	"_printk\0"
	"cpuidle_resume_and_unlock\0"
	"kthread_bind\0"
	"wake_up_process\0"
	"sched_clock\0"
	"usleep_range_state\0"
	"msleep\0"
	"cpuidle_get_driver\0"
	"lpm_suspend_type_get\0"
	"strcmp\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"cpu_latency_qos_update_request\0"
	"of_cpu_device_node_get\0"
	"cpu_latency_qos_add_request\0"
	"__arm_smccc_smc\0"
	"cpu_latency_qos_remove_request\0"
	"__of_parse_phandle_with_args\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"mtk_cpuidle_sysfs_sub_entry_add\0"
	"mtk_cpuidle_sysfs_sub_entry_node_add\0"
	"scnprintf\0"
	"kstrtouint\0"
	"mtk_cpuidle_sysfs_root_entry_create\0"
	"mtk_cpuidle_sysfs_entry_node_add\0"
	"kfree\0"
	"__sw_hweight32\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"sized_strscpy\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"of_property_read_variable_u32_array\0"
	"work_on_cpu_key\0"
	"strncmp\0"
	"of_find_node_by_name\0"
	"__sw_hweight64\0"
	"strsep\0"
	"kstrtoint\0"
	"__cpu_present_mask\0"
	"cpu_topology\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"nr_cpu_ids\0"
	"gpio_dump_regs\0"
	"mtk_suspend_sysfs_root_entry_create\0"
	"mtk_suspend_sysfs_entry_node_add\0"
	"snprintf\0"
	"mtk_spm_sysfs_root_entry_create\0"
	"mtk_spm_sysfs_entry_node_add\0"
	"of_property_read_string_helper\0"
	"__const_udelay\0"
	"console_suspend_enabled\0"
	"mtk_lpm_sysfs_root_entry_create\0"
	"mtk_lpm_sysfs_sub_entry_add\0"
	"mtk_lpm_sysfs_sub_entry_node_add\0"
	"mtk_lpm_sysfs_entry_node_remove\0"
	"lpm_platform_trace_get\0"
	"lpm_issuer_register\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"lpm_notifier_register\0"
	"register_pm_notifier\0"
	"alloc_workqueue\0"
	"register_syscore_ops\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"pm_get_active_wakeup_sources\0"
	"queue_work_on\0"
	"of_property_read_u64\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"of_count_phandle_with_args\0"
	"of_property_read_string\0"
	"strncat\0"
	"of_address_to_resource\0"
	"mtk_ocla_sysfs_root_entry_create\0"
	"mtk_ocla_sysfs_entry_node_add\0"
	"init_timer_key\0"
	"mod_timer\0"
	"mod_timer_pending\0"
	"jiffies_to_msecs\0"
	"timer_delete_sync\0"
	"__msecs_to_jiffies\0"
	"jiffies\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"pm_system_wakeup\0"
	"mtk_lp_sysfs_entry_func_create\0"
	"mtk_lp_sysfs_entry_func_node_add\0"
	"add_timer\0"
	"__traceiter_SPM__resource_req_0\0"
	"preempt_schedule_notrace\0"
	"timer_delete\0"
	"__tracepoint_SPM__resource_req_0\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"get_res_group_id\0"
	"get_res_group_info\0"
	"get_res_sig_stats\0"
	"sync_latest_data\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-lpm,pinctrl-mtk-common-v2_debug,mtk-swpm");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-lpm");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-lpmC*");

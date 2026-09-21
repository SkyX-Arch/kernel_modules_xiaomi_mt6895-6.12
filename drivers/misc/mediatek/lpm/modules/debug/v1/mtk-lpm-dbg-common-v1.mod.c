#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
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
KSYMTAB_FUNC(lpm_dbg_init, "", "");
KSYMTAB_FUNC(lpm_dbg_deinit, "", "");
KSYMTAB_DATA(lpm_spm_base, "", "");
KSYMTAB_FUNC(lpm_dbg_plat_ops_register, "", "");
KSYMTAB_DATA(before_md_sleep_status, "", "");
KSYMTAB_DATA(after_md_sleep_status, "", "");
KSYMTAB_DATA(cur_md_sleep_status, "", "");
KSYMTAB_FUNC(get_md_sleep_time, "", "");
KSYMTAB_FUNC(is_md_sleep_info_valid, "", "");
KSYMTAB_FUNC(log_md_sleep_info, "", "");
KSYMTAB_FUNC(lpm_logger_init, "", "");
KSYMTAB_FUNC(lpm_logger_deinit, "", "");
KSYMTAB_FUNC(spm_cond_init, "", "");
KSYMTAB_FUNC(spm_cond_deinit, "", "");
KSYMTAB_FUNC(lpm_rc_fs_init, "", "");
KSYMTAB_FUNC(lpm_rc_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_dbg_pm_init, "", "");
KSYMTAB_FUNC(lpm_dbg_pm_exit, "", "");
KSYMTAB_FUNC(lpm_hwreq_fs_init, "", "");
KSYMTAB_FUNC(lpm_hwreq_fs_deinit, "", "");
KSYMTAB_FUNC(lpm_pwr_gs_compare, "", "");
KSYMTAB_FUNC(lpm_pwr_gs_compare_by_type, "", "");
KSYMTAB_FUNC(lpm_pwr_gs_compare_init, "", "");
KSYMTAB_FUNC(lpm_pwr_gs_common_init, "", "");
KSYMTAB_FUNC(lpm_pwr_gs_common_deinit, "", "");

SYMBOL_CRC(mtk_cpuidle_status_init, 0xf98190ae, "");
SYMBOL_CRC(mtk_cpuidle_status_exit, 0xf91851fe, "");
SYMBOL_CRC(mtk_cpupm_dbg_init, 0x4221fde6, "");
SYMBOL_CRC(mtk_cpupm_dbg_exit, 0xd899a911, "");
SYMBOL_CRC(lpm_cpuidle_fs_init, 0x7061173d, "");
SYMBOL_CRC(lpm_cpuidle_fs_deinit, 0xdca31a84, "");
SYMBOL_CRC(lpm_dbg_common_fs_exit, 0x9c25b4ec, "");
SYMBOL_CRC(lpm_dbg_common_fs_init, 0x426cfd21, "");
SYMBOL_CRC(lpm_dbg_init, 0x3b6e26b2, "");
SYMBOL_CRC(lpm_dbg_deinit, 0x3166d535, "");
SYMBOL_CRC(lpm_spm_base, 0x42337187, "");
SYMBOL_CRC(lpm_dbg_plat_ops_register, 0x53424dc1, "");
SYMBOL_CRC(before_md_sleep_status, 0x256c3603, "");
SYMBOL_CRC(after_md_sleep_status, 0x632e9e90, "");
SYMBOL_CRC(cur_md_sleep_status, 0x314f26e7, "");
SYMBOL_CRC(get_md_sleep_time, 0x690f478a, "");
SYMBOL_CRC(is_md_sleep_info_valid, 0x5f4506c2, "");
SYMBOL_CRC(log_md_sleep_info, 0x3af92941, "");
SYMBOL_CRC(lpm_logger_init, 0x551e175b, "");
SYMBOL_CRC(lpm_logger_deinit, 0x917c43bc, "");
SYMBOL_CRC(spm_cond_init, 0x4935b29b, "");
SYMBOL_CRC(spm_cond_deinit, 0x42b9e4ab, "");
SYMBOL_CRC(lpm_rc_fs_init, 0x0ee71ccf, "");
SYMBOL_CRC(lpm_rc_fs_deinit, 0x6dfb3eb5, "");
SYMBOL_CRC(lpm_dbg_pm_init, 0x293b7ef1, "");
SYMBOL_CRC(lpm_dbg_pm_exit, 0xd7d71da8, "");
SYMBOL_CRC(lpm_hwreq_fs_init, 0x4f10a908, "");
SYMBOL_CRC(lpm_hwreq_fs_deinit, 0x524b79c8, "");
SYMBOL_CRC(lpm_pwr_gs_compare, 0xa6b8679f, "");
SYMBOL_CRC(lpm_pwr_gs_compare_by_type, 0xf25fa57a, "");
SYMBOL_CRC(lpm_pwr_gs_compare_init, 0xbc167051, "");
SYMBOL_CRC(lpm_pwr_gs_common_init, 0x865c7ee9, "");
SYMBOL_CRC(lpm_pwr_gs_common_deinit, 0xbd772355, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe94986d6, "sched_clock" },
	{ 0x96848186, "scnprintf" },
	{ 0xf553318d, "cpuidle_pause_and_lock" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x92997ed8, "_printk" },
	{ 0xcabe04de, "cpuidle_resume_and_unlock" },
	{ 0x8c6ba271, "kthread_bind" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xa7f924e5, "lpm_notifier_register" },
	{ 0xdbf15485, "lpm_notifier_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5f43c059, "on_each_cpu_cond_mask" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6bcaac61, "cpuidle_get_driver" },
	{ 0x822c124d, "lpm_suspend_type_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
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
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe93acd86, "mtk_cpuidle_sysfs_root_entry_create" },
	{ 0xa55169a3, "mtk_cpuidle_sysfs_entry_node_add" },
	{ 0x037a0cba, "kfree" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc2d55962, "work_on_cpu_key" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb3055449, "__cpu_present_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x81ec4014, "mtk_suspend_sysfs_root_entry_create" },
	{ 0xa5cd22db, "mtk_suspend_sysfs_entry_node_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x653b329e, "mtk_spm_sysfs_root_entry_create" },
	{ 0xda472c36, "mtk_spm_sysfs_entry_node_add" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x0366307a, "console_suspend_enabled" },
	{ 0xef93aa82, "mtk_lpm_sysfs_root_entry_create" },
	{ 0x12c27859, "mtk_lpm_sysfs_sub_entry_add" },
	{ 0x09bd7da0, "mtk_lpm_sysfs_sub_entry_node_add" },
	{ 0x12d88946, "mtk_lpm_sysfs_entry_node_remove" },
	{ 0x79b80d2c, "lpm_platform_trace_get" },
	{ 0xa6a6d090, "lpm_issuer_register" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x3a8edb31, "pm_get_active_wakeup_sources" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x2e2b40d2, "strncat" },
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
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x64311477, "regmap_read" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xd5dadbd7, "of_get_next_parent" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe94986d6,
	0x96848186,
	0xf553318d,
	0xba0aee2e,
	0x92997ed8,
	0xcabe04de,
	0x8c6ba271,
	0xce5bc4d0,
	0xa7f924e5,
	0xdbf15485,
	0xc3055d20,
	0xf9a482f9,
	0x5f43c059,
	0x43b0c9c3,
	0x6bcaac61,
	0x822c124d,
	0xe2d5255a,
	0xea82d349,
	0xde7ece30,
	0x280f9f14,
	0xac594e02,
	0xc60d0620,
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
	0x3b6c41ea,
	0xe93acd86,
	0xa55169a3,
	0x037a0cba,
	0x74c134b9,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0xc2d55962,
	0x9f46ced8,
	0xbcab6ee6,
	0x85df9b6c,
	0x8c8569cb,
	0xb3055449,
	0xe4bc4b09,
	0x0f05f001,
	0xefe8a82e,
	0x017de3d5,
	0x81ec4014,
	0xa5cd22db,
	0x656e4a6e,
	0x653b329e,
	0xda472c36,
	0xcd6bda8d,
	0x0366307a,
	0xef93aa82,
	0x12c27859,
	0x09bd7da0,
	0x12d88946,
	0x79b80d2c,
	0xa6a6d090,
	0x6b201699,
	0xeab7088e,
	0xb9c425de,
	0x75ca79b5,
	0x98cf60b3,
	0xa916b694,
	0xe136f93c,
	0x3a8edb31,
	0x66bcb0f8,
	0x40863ba1,
	0xaf56600a,
	0xb088bcfc,
	0xaf7cb74b,
	0x2e2b40d2,
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
	0x7e19152a,
	0x9a835040,
	0xba8fbd64,
	0xb5b54b34,
	0x64311477,
	0xa823db6e,
	0xd5dadbd7,
	0x1ed4c5e6,
	0x49dc0e6c,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"sched_clock\0"
	"scnprintf\0"
	"cpuidle_pause_and_lock\0"
	"kthread_create_on_node\0"
	"_printk\0"
	"cpuidle_resume_and_unlock\0"
	"kthread_bind\0"
	"wake_up_process\0"
	"lpm_notifier_register\0"
	"lpm_notifier_unregister\0"
	"usleep_range_state\0"
	"msleep\0"
	"on_each_cpu_cond_mask\0"
	"preempt_schedule\0"
	"cpuidle_get_driver\0"
	"lpm_suspend_type_get\0"
	"strcmp\0"
	"hrtimer_init\0"
	"__cpu_possible_mask\0"
	"__per_cpu_offset\0"
	"__cpu_online_mask\0"
	"__num_online_cpus\0"
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
	"kstrtouint\0"
	"mtk_cpuidle_sysfs_root_entry_create\0"
	"mtk_cpuidle_sysfs_entry_node_add\0"
	"kfree\0"
	"__sw_hweight32\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"work_on_cpu_key\0"
	"__sw_hweight64\0"
	"sscanf\0"
	"strsep\0"
	"kstrtoint\0"
	"__cpu_present_mask\0"
	"cpu_topology\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"nr_cpu_ids\0"
	"mtk_suspend_sysfs_root_entry_create\0"
	"mtk_suspend_sysfs_entry_node_add\0"
	"snprintf\0"
	"mtk_spm_sysfs_root_entry_create\0"
	"mtk_spm_sysfs_entry_node_add\0"
	"of_property_read_string_helper\0"
	"console_suspend_enabled\0"
	"mtk_lpm_sysfs_root_entry_create\0"
	"mtk_lpm_sysfs_sub_entry_add\0"
	"mtk_lpm_sysfs_sub_entry_node_add\0"
	"mtk_lpm_sysfs_entry_node_remove\0"
	"lpm_platform_trace_get\0"
	"lpm_issuer_register\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"register_syscore_ops\0"
	"__fortify_panic\0"
	"strlen\0"
	"strnlen\0"
	"of_property_read_variable_u32_array\0"
	"pm_get_active_wakeup_sources\0"
	"of_property_read_u64\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"of_count_phandle_with_args\0"
	"of_property_read_string\0"
	"strncat\0"
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
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"regmap_read\0"
	"of_find_device_by_node\0"
	"of_get_next_parent\0"
	"of_find_node_by_name\0"
	"dev_get_regmap\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-lpm");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-lpm");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-lpmC*");

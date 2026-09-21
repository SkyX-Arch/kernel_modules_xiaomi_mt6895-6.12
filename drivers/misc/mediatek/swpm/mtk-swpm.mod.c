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

KSYMTAB_DATA(swpm_mutex, "", "");
KSYMTAB_DATA(swpm_timer, "", "");
KSYMTAB_DATA(swpm_sram_timer, "", "");
KSYMTAB_DATA(swpm_common_wq, "", "");
KSYMTAB_DATA(swpm_log_interval_ms, "", "");
KSYMTAB_FUNC(swpm_core_ops_register, "", "");
KSYMTAB_FUNC(swpm_get_rec_addr, "", "");
KSYMTAB_FUNC(swpm_interface_manager_init, "", "");
KSYMTAB_FUNC(swpm_mem_addr_request, "", "");
KSYMTAB_FUNC(swpm_pmu_enable, "", "");
KSYMTAB_FUNC(swpm_reserve_mem_init, "", "");
KSYMTAB_FUNC(swpm_set_cmd, "", "");
KSYMTAB_FUNC(swpm_set_only_cmd, "", "");
KSYMTAB_FUNC(swpm_set_and_get_cmd, "", "");
KSYMTAB_FUNC(swpm_set_cmd_v2, "", "");
KSYMTAB_FUNC(swpm_get_cmd_v2, "", "");
KSYMTAB_FUNC(swpm_set_and_get_cmd_v2, "", "");
KSYMTAB_FUNC(swpm_register_event_notifier, "_gpl", "");
KSYMTAB_FUNC(swpm_unregister_event_notifier, "_gpl", "");
KSYMTAB_FUNC(swpm_call_event_notifier, "_gpl", "");
KSYMTAB_FUNC(sync_latest_data, "", "");
KSYMTAB_FUNC(get_ddr_act_times, "", "");
KSYMTAB_FUNC(get_ddr_sr_pd_times, "", "");
KSYMTAB_FUNC(get_ddr_data_ip_num, "", "");
KSYMTAB_FUNC(get_ddr_freq_num, "", "");
KSYMTAB_FUNC(get_ddr_freq_data_ip_stats, "", "");
KSYMTAB_FUNC(get_vcore_ip_num, "", "");
KSYMTAB_FUNC(get_vcore_vol_num, "", "");
KSYMTAB_FUNC(get_vcore_ip_vol_stats, "", "");
KSYMTAB_FUNC(get_vcore_vol_duration, "", "");
KSYMTAB_FUNC(get_emi_freq_duration, "", "");
KSYMTAB_FUNC(get_emi_freq_num, "", "");
KSYMTAB_FUNC(get_xpu_ip_num, "", "");
KSYMTAB_FUNC(get_xpu_ip_stats, "", "");
KSYMTAB_FUNC(get_res_sig_stats, "", "");
KSYMTAB_FUNC(get_res_group_info, "", "");
KSYMTAB_FUNC(get_res_group_id, "", "");
KSYMTAB_FUNC(mtk_register_swpm_ops, "", "");
KSYMTAB_FUNC(get_data_record_number, "", "");
KSYMTAB_FUNC(mtk_swpm_sysfs_entry_func_create, "", "");
KSYMTAB_FUNC(mtk_swpm_sysfs_entry_func_node_add, "", "");
KSYMTAB_FUNC(mtk_swpm_sysfs_entry_func_node_remove, "", "");
KSYMTAB_FUNC(mtk_swpm_sysfs_entry_func_group_create, "", "");

SYMBOL_CRC(swpm_mutex, 0x882b9955, "");
SYMBOL_CRC(swpm_timer, 0x55b3dc9b, "");
SYMBOL_CRC(swpm_sram_timer, 0xc3669370, "");
SYMBOL_CRC(swpm_common_wq, 0x93b91bf3, "");
SYMBOL_CRC(swpm_log_interval_ms, 0xd1ae99a9, "");
SYMBOL_CRC(swpm_core_ops_register, 0xecdd408e, "");
SYMBOL_CRC(swpm_get_rec_addr, 0xa3cdaa08, "");
SYMBOL_CRC(swpm_interface_manager_init, 0xe527af6b, "");
SYMBOL_CRC(swpm_mem_addr_request, 0xbf370c54, "");
SYMBOL_CRC(swpm_pmu_enable, 0x0dd2d75b, "");
SYMBOL_CRC(swpm_reserve_mem_init, 0xa45fcf19, "");
SYMBOL_CRC(swpm_set_cmd, 0x02fc5085, "");
SYMBOL_CRC(swpm_set_only_cmd, 0x6e1f98d7, "");
SYMBOL_CRC(swpm_set_and_get_cmd, 0xa9681c38, "");
SYMBOL_CRC(swpm_set_cmd_v2, 0x86117218, "");
SYMBOL_CRC(swpm_get_cmd_v2, 0x40ccf05c, "");
SYMBOL_CRC(swpm_set_and_get_cmd_v2, 0xe23e8e2c, "");
SYMBOL_CRC(swpm_register_event_notifier, 0x426389a0, "_gpl");
SYMBOL_CRC(swpm_unregister_event_notifier, 0x095147a0, "_gpl");
SYMBOL_CRC(swpm_call_event_notifier, 0xb0513a4c, "_gpl");
SYMBOL_CRC(sync_latest_data, 0xe8bd9c98, "");
SYMBOL_CRC(get_ddr_act_times, 0x8d761971, "");
SYMBOL_CRC(get_ddr_sr_pd_times, 0x7de0ce62, "");
SYMBOL_CRC(get_ddr_data_ip_num, 0xed76a15a, "");
SYMBOL_CRC(get_ddr_freq_num, 0xc5b0f293, "");
SYMBOL_CRC(get_ddr_freq_data_ip_stats, 0xf06cafdf, "");
SYMBOL_CRC(get_vcore_ip_num, 0xa48af803, "");
SYMBOL_CRC(get_vcore_vol_num, 0x4b76f642, "");
SYMBOL_CRC(get_vcore_ip_vol_stats, 0xd8f4b92e, "");
SYMBOL_CRC(get_vcore_vol_duration, 0xecc3ae96, "");
SYMBOL_CRC(get_emi_freq_duration, 0xd98ec562, "");
SYMBOL_CRC(get_emi_freq_num, 0xba042ce6, "");
SYMBOL_CRC(get_xpu_ip_num, 0x6a7b383b, "");
SYMBOL_CRC(get_xpu_ip_stats, 0x002411fb, "");
SYMBOL_CRC(get_res_sig_stats, 0x9f083892, "");
SYMBOL_CRC(get_res_group_info, 0xdac6bd05, "");
SYMBOL_CRC(get_res_group_id, 0x7f54ca7a, "");
SYMBOL_CRC(mtk_register_swpm_ops, 0x5bf0b7af, "");
SYMBOL_CRC(get_data_record_number, 0xd48481b7, "");
SYMBOL_CRC(mtk_swpm_sysfs_entry_func_create, 0x4de85bea, "");
SYMBOL_CRC(mtk_swpm_sysfs_entry_func_node_add, 0x57132996, "");
SYMBOL_CRC(mtk_swpm_sysfs_entry_func_node_remove, 0x5ff98b6c, "");
SYMBOL_CRC(mtk_swpm_sysfs_entry_func_group_create, 0xc3deca3b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb6ea4eb1, "sspm_reserve_mem_get_phys" },
	{ 0x238d879c, "sspm_reserve_mem_get_virt" },
	{ 0x317f1dbc, "sspm_reserve_mem_get_size" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe9d29479, "qos_ipi_to_sspm_scmi_command" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x69601fbf, "scmi_tinysys_common_get" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0xfba03a3f, "atomic_notifier_call_chain" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0x44033864, "proc_remove" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x665b5ccb, "seq_open" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb6ea4eb1,
	0x238d879c,
	0x317f1dbc,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0xe9d29479,
	0x1cc7f053,
	0x69601fbf,
	0x83b96232,
	0xc866487b,
	0xfba03a3f,
	0x49cd25ed,
	0x51fcca8a,
	0xe136f93c,
	0x9166fc03,
	0x8c03d20c,
	0x037a0cba,
	0xe17134b6,
	0x7e19152a,
	0x9a835040,
	0x0f05f001,
	0xefe8a82e,
	0x7518b5f0,
	0x44033864,
	0xa2fa95a0,
	0xe7ce721f,
	0x665b5ccb,
	0x75ca79b5,
	0x69cfdbb0,
	0x88db9f48,
	0x2be0c009,
	0x3cdb28e3,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"sspm_reserve_mem_get_phys\0"
	"sspm_reserve_mem_get_virt\0"
	"sspm_reserve_mem_get_size\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"qos_ipi_to_sspm_scmi_command\0"
	"scmi_tinysys_common_set\0"
	"scmi_tinysys_common_get\0"
	"atomic_notifier_chain_register\0"
	"atomic_notifier_chain_unregister\0"
	"atomic_notifier_call_chain\0"
	"alloc_workqueue\0"
	"get_scmi_tinysys_info\0"
	"of_property_read_variable_u32_array\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"proc_mkdir\0"
	"proc_remove\0"
	"proc_create_data\0"
	"seq_lseek\0"
	"seq_open\0"
	"__fortify_panic\0"
	"seq_read\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"seq_release\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "sspm_v3,mtk_qos,tinysys-scmi");


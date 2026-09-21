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

KSYMTAB_FUNC(mtk_dvfsrc_query_opp_info, "", "");
KSYMTAB_FUNC(mtk_dvfsrc_vcore_uv_table, "", "");
KSYMTAB_FUNC(get_sw_req_vcore_opp, "", "");
KSYMTAB_FUNC(register_dvfsrc_debug_handler, "", "");
KSYMTAB_FUNC(mtk_dvfsrc_query_debug_info, "", "");
KSYMTAB_FUNC(mtk_dvfsrc_thernal_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_dvfsrc_set_vcore_avs, "", "");
KSYMTAB_FUNC(vcorefs_get_num_opp, "", "");
KSYMTAB_FUNC(vcorefs_get_opp_info_num, "", "");
KSYMTAB_FUNC(vcorefs_get_opp_info_name, "", "");
KSYMTAB_FUNC(vcorefs_get_opp_info, "", "");
KSYMTAB_FUNC(vcorefs_get_src_req_num, "", "");
KSYMTAB_FUNC(vcorefs_get_src_req_name, "", "");
KSYMTAB_FUNC(vcorefs_get_src_req, "", "");
KSYMTAB_FUNC(get_cur_ddr_ratio, "", "");
KSYMTAB_FUNC(dvfsrc_get_data, "", "");
KSYMTAB_FUNC(dvfsrc_get_dvfs_info, "", "");
KSYMTAB_FUNC(vsmr_get_data, "", "");

SYMBOL_CRC(mtk_dvfsrc_query_opp_info, 0xa440e0e3, "");
SYMBOL_CRC(mtk_dvfsrc_vcore_uv_table, 0x9063837c, "");
SYMBOL_CRC(get_sw_req_vcore_opp, 0xd265039a, "");
SYMBOL_CRC(register_dvfsrc_debug_handler, 0xbc8d9ca5, "");
SYMBOL_CRC(mtk_dvfsrc_query_debug_info, 0x57b4e446, "");
SYMBOL_CRC(mtk_dvfsrc_thernal_notify, 0x37f6e6ad, "_gpl");
SYMBOL_CRC(mtk_dvfsrc_set_vcore_avs, 0x268aa368, "");
SYMBOL_CRC(vcorefs_get_num_opp, 0x6e008147, "");
SYMBOL_CRC(vcorefs_get_opp_info_num, 0xcc980630, "");
SYMBOL_CRC(vcorefs_get_opp_info_name, 0xe228fd87, "");
SYMBOL_CRC(vcorefs_get_opp_info, 0xfdc4df1d, "");
SYMBOL_CRC(vcorefs_get_src_req_num, 0x67c99abe, "");
SYMBOL_CRC(vcorefs_get_src_req_name, 0xb1618a62, "");
SYMBOL_CRC(vcorefs_get_src_req, 0x9ddc3b88, "");
SYMBOL_CRC(get_cur_ddr_ratio, 0x4eca130a, "");
SYMBOL_CRC(dvfsrc_get_data, 0x5db7142b, "");
SYMBOL_CRC(dvfsrc_get_dvfs_info, 0x0810f99b, "");
SYMBOL_CRC(vsmr_get_data, 0xb1d49fd5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x401167cc, "_dev_info" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xd0a6b51e, "devm_of_icc_get" },
	{ 0x5c3524de, "dvfsrc_get_required_opp_peak_bw" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45fe83f4, "mtk_mmdvfs_debug_force_vcore_notify" },
	{ 0xdbdd71e6, "mtk_dvfsrc_send_request" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42f242bb, "mtk_dramc_get_data_rate" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2b955cab, "mtk_dvfsrc_query_info" },
	{ 0x1eaa20eb, "register_dvfsrc_debug_notifier" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b201699, "of_find_property" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x97d2932a, "unregister_dvfsrc_debug_notifier" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x70b25449, "sysfs_add_file_to_group" },
	{ 0x8d6c6694, "sysfs_create_link" },
	{ 0x02c25eed, "sysfs_remove_link" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0x082966fe, "regulator_list_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0xeae3dfd6,
	0x12db679a,
	0x6fc35f2b,
	0x34675dcc,
	0x401167cc,
	0x374f8976,
	0xee73d233,
	0xa571f6b0,
	0x49cd25ed,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0xf93aae46,
	0xb088bcfc,
	0x2ccea269,
	0xd0a6b51e,
	0x5c3524de,
	0xf5edea2e,
	0x45fe83f4,
	0xdbdd71e6,
	0xa06ad99d,
	0x656e4a6e,
	0x42f242bb,
	0xe136f93c,
	0x2b955cab,
	0x1eaa20eb,
	0xdb976d85,
	0x64311477,
	0x6b201699,
	0x42ad47ad,
	0x7f02188f,
	0xa4f72277,
	0x97d2932a,
	0xcec49a87,
	0x8c03d20c,
	0x6b722180,
	0x0c1a5ee3,
	0x3c3ff9fd,
	0xc905402b,
	0xfa4d3c24,
	0x62b33777,
	0x70b25449,
	0x8d6c6694,
	0x02c25eed,
	0x3667c9f1,
	0x3b6c41ea,
	0xbcab6ee6,
	0x95bab132,
	0x082966fe,
	0x2220455c,
	0xce8498d7,
	0x49eaeb64,
	0x14fe5355,
	0x5cf4d4de,
	0x4e870156,
	0xb7c7d237,
	0x69cfdbb0,
	0x8c8569cb,
	0x037a0cba,
	0x52c5c991,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x8b9c34da,
	0xc8f2ae9d,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"__const_udelay\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"of_match_node\0"
	"_dev_info\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"__mutex_init\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"__arm_smccc_smc\0"
	"of_count_phandle_with_args\0"
	"devm_regulator_get_optional\0"
	"devm_of_icc_get\0"
	"dvfsrc_get_required_opp_peak_bw\0"
	"___ratelimit\0"
	"mtk_mmdvfs_debug_force_vcore_notify\0"
	"mtk_dvfsrc_send_request\0"
	"regulator_get_voltage\0"
	"snprintf\0"
	"mtk_dramc_get_data_rate\0"
	"of_property_read_variable_u32_array\0"
	"mtk_dvfsrc_query_info\0"
	"register_dvfsrc_debug_notifier\0"
	"aee_kernel_warning_api_func\0"
	"regmap_read\0"
	"of_find_property\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"_dev_notice\0"
	"unregister_dvfsrc_debug_notifier\0"
	"cancel_delayed_work_sync\0"
	"destroy_workqueue\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"sprintf\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"sysfs_create_group\0"
	"sysfs_add_file_to_group\0"
	"sysfs_create_link\0"
	"sysfs_remove_link\0"
	"sysfs_remove_group\0"
	"kstrtouint\0"
	"sscanf\0"
	"icc_set_bw\0"
	"regulator_list_voltage\0"
	"regulator_set_voltage\0"
	"kernel_kobj\0"
	"of_icc_get\0"
	"of_device_get_match_data\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"debugfs_remove\0"
	"seq_read\0"
	"kstrtoint\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"single_open\0"
	"seq_printf\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-dvfsrc,mtk-mmdvfs-debug,mtk_dramc,aee_aed");


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

KSYMTAB_DATA(thermal_csram_base, "", "");
KSYMTAB_DATA(thermal_cputcm_base, "", "");
KSYMTAB_DATA(thermal_apu_mbox_base, "", "");
KSYMTAB_DATA(frs_data, "", "");
KSYMTAB_DATA(plat_vtskin_info, "", "");
KSYMTAB_FUNC(mtk_thermal_hint_notify_register, "_gpl", "");
KSYMTAB_FUNC(mtk_thermal_hint_notify_unregister, "_gpl", "");
KSYMTAB_FUNC(get_thermal_headroom, "", "");
KSYMTAB_FUNC(set_cpu_min_opp, "", "");
KSYMTAB_FUNC(set_cpu_active_bitmask, "", "");
KSYMTAB_FUNC(get_cpu_temp, "", "");
KSYMTAB_FUNC(get_dsu_temp, "", "");
KSYMTAB_FUNC(get_dsu_ceiling_freq, "", "");
KSYMTAB_FUNC(get_cpu_ceiling_freq, "", "");
KSYMTAB_FUNC(set_reboot_temperature, "", "");
KSYMTAB_FUNC(get_apu_temp, "", "");
KSYMTAB_FUNC(set_cold_interrupt_enable_addr, "", "");
KSYMTAB_FUNC(set_gpu_pre_throttle, "", "");
KSYMTAB_FUNC(get_gpu_pre_throttle_temp, "", "");
KSYMTAB_FUNC(set_gpu_pre_throttle_opp, "", "");
KSYMTAB_FUNC(get_gpu_pre_throttle_opp, "", "");
KSYMTAB_FUNC(get_catm_min_ttj, "", "");
KSYMTAB_FUNC(set_ttj, "", "");
KSYMTAB_FUNC(write_jatm_suspend, "", "");
KSYMTAB_FUNC(get_jatm_suspend, "", "");
KSYMTAB_FUNC(get_catm_ttj, "", "");
KSYMTAB_FUNC(cm_thermal_hint_register, "", "");
KSYMTAB_FUNC(cm_thermal_hint_unregister, "", "");

SYMBOL_CRC(thermal_csram_base, 0x0fd08486, "");
SYMBOL_CRC(thermal_cputcm_base, 0xca5670ee, "");
SYMBOL_CRC(thermal_apu_mbox_base, 0xb36db42d, "");
SYMBOL_CRC(frs_data, 0x03019bb0, "");
SYMBOL_CRC(plat_vtskin_info, 0x7f4bfbd7, "");
SYMBOL_CRC(mtk_thermal_hint_notify_register, 0x47d2021a, "_gpl");
SYMBOL_CRC(mtk_thermal_hint_notify_unregister, 0xe5a91947, "_gpl");
SYMBOL_CRC(get_thermal_headroom, 0x4f793f59, "");
SYMBOL_CRC(set_cpu_min_opp, 0x08217b97, "");
SYMBOL_CRC(set_cpu_active_bitmask, 0x5b1557ed, "");
SYMBOL_CRC(get_cpu_temp, 0x73a99429, "");
SYMBOL_CRC(get_dsu_temp, 0x11c68c40, "");
SYMBOL_CRC(get_dsu_ceiling_freq, 0x0d1360a0, "");
SYMBOL_CRC(get_cpu_ceiling_freq, 0x55308b41, "");
SYMBOL_CRC(set_reboot_temperature, 0x8cf38456, "");
SYMBOL_CRC(get_apu_temp, 0xdb148a08, "");
SYMBOL_CRC(set_cold_interrupt_enable_addr, 0x7867985a, "");
SYMBOL_CRC(set_gpu_pre_throttle, 0x48d49477, "");
SYMBOL_CRC(get_gpu_pre_throttle_temp, 0x8d414eaf, "");
SYMBOL_CRC(set_gpu_pre_throttle_opp, 0xaeb4ccda, "");
SYMBOL_CRC(get_gpu_pre_throttle_opp, 0xc272a050, "");
SYMBOL_CRC(get_catm_min_ttj, 0xf0318891, "");
SYMBOL_CRC(set_ttj, 0x8322a649, "");
SYMBOL_CRC(write_jatm_suspend, 0xc9823693, "");
SYMBOL_CRC(get_jatm_suspend, 0xb77e3645, "");
SYMBOL_CRC(get_catm_ttj, 0xcfe97907, "");
SYMBOL_CRC(cm_thermal_hint_register, 0x685a583d, "");
SYMBOL_CRC(cm_thermal_hint_unregister, 0xb98988f0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x10e9b022, "genl_register_family" },
	{ 0x179a0b99, "genl_unregister_family" },
	{ 0xbbfcfd40, "mtk_drm_get_conn_obj_id_from_idx" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42f242bb, "mtk_dramc_get_data_rate" },
	{ 0x81beafe4, "thermal_zone_get_zone_by_name" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xde7e6296, "thermal_zone_get_temp" },
	{ 0x8f77e638, "get_cpu_device" },
	{ 0x7eb808d0, "add_cpu" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc2ec3dd, "genlmsg_put" },
	{ 0xf4b23bfd, "__alloc_skb" },
	{ 0xf9a61ed4, "nla_put" },
	{ 0xdcf2c89b, "sk_skb_reason_drop" },
	{ 0x5e1830c0, "netlink_unicast" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0x37f6e6ad, "mtk_dvfsrc_thernal_notify" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xef7dddaf, "of_cpu_device_node_get" },
	{ 0xd0a6b51e, "devm_of_icc_get" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x41e3079d, "mtk_leds_register_notifier" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x686d006d, "gpufreq_get_freq_by_idx" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x0967fe10, "unregister_pm_notifier" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xbd8167f8, "mtk_leds_unregister_notifier" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x1e93e6e1, "init_net" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0xd5977bfb,
	0xed55cabd,
	0x92997ed8,
	0x5a921311,
	0x10e9b022,
	0x179a0b99,
	0xbbfcfd40,
	0x656e4a6e,
	0x42f242bb,
	0x81beafe4,
	0xc38c83b8,
	0xde7e6296,
	0x8f77e638,
	0x7eb808d0,
	0x8c8569cb,
	0xbcab6ee6,
	0xfc2ec3dd,
	0xf4b23bfd,
	0xf9a61ed4,
	0xdcf2c89b,
	0x5e1830c0,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x9f46ced8,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x7f02188f,
	0x95bab132,
	0x37f6e6ad,
	0x482d47c8,
	0x12db679a,
	0x401167cc,
	0x374f8976,
	0x9f0ef8fa,
	0xef7dddaf,
	0xd0a6b51e,
	0x62b33777,
	0xb4ce05a5,
	0x1ed4c5e6,
	0xa4f72277,
	0xa571f6b0,
	0x41e3079d,
	0xaf7cb74b,
	0x49cd25ed,
	0xc6f46339,
	0x75966ec2,
	0x40863ba1,
	0x1fec5304,
	0x686d006d,
	0xc8c7229e,
	0xe2d5255a,
	0x9166fada,
	0x5a6368f5,
	0xe136f93c,
	0x5cf4d4de,
	0x4e870156,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x037a0cba,
	0x52c5c991,
	0x88db9f48,
	0x2be0c009,
	0x8b9c34da,
	0xc8f2ae9d,
	0xc5b6f236,
	0x9166fc03,
	0x8c03d20c,
	0x0967fe10,
	0x3667c9f1,
	0xbd8167f8,
	0x82ee90dc,
	0xb7c7d237,
	0x6fc35f2b,
	0x1e93e6e1,
	0xde7ece30,
	0x15ba50a6,
	0xac594e02,
	0xce8498d7,
	0xaf56600a,
	0x0f05f001,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_printk\0"
	"strncmp\0"
	"genl_register_family\0"
	"genl_unregister_family\0"
	"mtk_drm_get_conn_obj_id_from_idx\0"
	"snprintf\0"
	"mtk_dramc_get_data_rate\0"
	"thermal_zone_get_zone_by_name\0"
	"mod_timer\0"
	"thermal_zone_get_temp\0"
	"get_cpu_device\0"
	"add_cpu\0"
	"kstrtoint\0"
	"sscanf\0"
	"genlmsg_put\0"
	"__alloc_skb\0"
	"nla_put\0"
	"sk_skb_reason_drop\0"
	"netlink_unicast\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__sw_hweight64\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__msecs_to_jiffies\0"
	"icc_set_bw\0"
	"mtk_dvfsrc_thernal_notify\0"
	"blocking_notifier_call_chain\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"of_cpu_device_node_get\0"
	"devm_of_icc_get\0"
	"sysfs_create_group\0"
	"_dev_err\0"
	"of_find_node_by_name\0"
	"_dev_notice\0"
	"__mutex_init\0"
	"mtk_leds_register_notifier\0"
	"of_property_read_string\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"register_pm_notifier\0"
	"ioremap_prot\0"
	"__of_parse_phandle_with_args\0"
	"gpufreq_get_freq_by_idx\0"
	"devm_kmalloc\0"
	"strcmp\0"
	"strncpy\0"
	"devm_kfree\0"
	"of_property_read_variable_u32_array\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"single_open\0"
	"seq_printf\0"
	"queue_work_on\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"unregister_pm_notifier\0"
	"sysfs_remove_group\0"
	"mtk_leds_unregister_notifier\0"
	"timer_delete_sync\0"
	"debugfs_remove\0"
	"platform_driver_unregister\0"
	"init_net\0"
	"__cpu_possible_mask\0"
	"jiffies\0"
	"__cpu_online_mask\0"
	"kernel_kobj\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm,mtk_dramc,mtk-dvfsrc-helper,leds-mtk,mtk_gpufreq_wrapper");

MODULE_ALIAS("of:N*T*Cmediatek,therm_intf");
MODULE_ALIAS("of:N*T*Cmediatek,therm_intfC*");

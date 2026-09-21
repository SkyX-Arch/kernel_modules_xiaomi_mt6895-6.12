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

KSYMTAB_FUNC(xmc_sysfs_get_property, "", "");
KSYMTAB_FUNC(xmc_sysfs_set_property, "", "");
KSYMTAB_FUNC(xmc_sysfs_report_uevent, "", "");
KSYMTAB_FUNC(xmc_enable_otg_boost, "", "");

SYMBOL_CRC(xmc_sysfs_get_property, 0x4d35c18d, "");
SYMBOL_CRC(xmc_sysfs_set_property, 0xd2e3cfb9, "");
SYMBOL_CRC(xmc_sysfs_report_uevent, 0xfefb49a9, "");
SYMBOL_CRC(xmc_enable_otg_boost, 0xac0923f8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x92997ed8, "_printk" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf025cb10, "xmc_ops_find_device" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x1aaaeb07, "find_votable" },
	{ 0x65e4a856, "power_supply_unregister" },
	{ 0x5d2ae827, "xmc_device_unregister" },
	{ 0x13fd8d41, "destroy_votable" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x24bde5b9, "xmc_ops_get_gauge_temp_max" },
	{ 0x5b49bf18, "xmc_ops_get_gauge_time_ot" },
	{ 0x5a177bee, "xmc_ops_get_gauge_qmax" },
	{ 0x13c53126, "xmc_ops_get_gauge_true_rem_q" },
	{ 0x416d9e3f, "xmc_ops_get_gauge_initial_q" },
	{ 0x5c68b3dc, "xmc_ops_get_gauge_true_full_chg_q" },
	{ 0x5e05a5ee, "xmc_ops_get_gauge_t_sim" },
	{ 0x8331913c, "xmc_ops_get_gauge_cell_grid" },
	{ 0x5b4118f4, "xmc_ops_get_rsoc" },
	{ 0x84b96316, "xmc_ops_set_gauge_shutdown_mode" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc54855de, "kobject_uevent_env" },
	{ 0x037a0cba, "kfree" },
	{ 0xa723502d, "devm_power_supply_register" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0xda9bbfd5, "xmc_ops_get_vbus" },
	{ 0xce99938b, "xmc_ops_get_ibus" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd3d72d08, "xmc_ops_get_charge_enable" },
	{ 0xe1ee449c, "xmc_ops_get_powerpath_enable" },
	{ 0xe387a470, "xmc_ops_get_charge_state" },
	{ 0xf8fdef0d, "xmc_ops_charge_done" },
	{ 0xeb8d7587, "xmc_ops_get_mivr_state" },
	{ 0xb31e0c2b, "vote" },
	{ 0x7d8ee4d4, "xmc_ops_powerpath_enable" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x731c418e, "xmc_ops_get_gauge_soh" },
	{ 0x0691ae30, "xmc_ops_get_gauge_full" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc079fcfa, "xmc_ops_get_vbat" },
	{ 0x7f328afe, "xmc_ops_charge_timer_enable" },
	{ 0x82432962, "xmc_ops_bc12_enable" },
	{ 0x29a9644a, "tcpm_dpm_pd_get_source_cap" },
	{ 0xfdd5e7c0, "xmc_ops_get_cap" },
	{ 0x6de1c310, "xmc_ops_set_cap" },
	{ 0x62e46571, "xmc_ops_terminate_enable" },
	{ 0xedef1d95, "xmc_ops_set_gauge_fast_charge" },
	{ 0x20f68d33, "xmc_ops_charge_enable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x0c6fd042, "xmc_ops_otg_vbus_enable" },
	{ 0x87b72559, "xmc_ops_set_dpdm_voltage" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x0a9597a8, "xmc_ops_get_ts" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x0e7840c7, "power_supply_get_by_phandle" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0xd6043980, "xmc_ops_get_pd_id" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x6623ec06, "xmc_device_register" },
	{ 0x4296d91d, "xmc_ops_get_data" },
	{ 0xf356ebec, "tcpm_dpm_send_custom_vdm" },
	{ 0x09cae2ef, "tcpm_set_apdo_charging_policy" },
	{ 0x4fc7acd2, "tcpm_set_pd_charging_policy" },
	{ 0x62747b96, "tcpm_dpm_pd_request" },
	{ 0x9988873b, "tcpm_get_remote_power_cap" },
	{ 0x8a168b14, "tcpm_inquire_pd_partner_inform" },
	{ 0x74fefda5, "tcpm_dpm_pd_get_source_cap_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb030a2fc, "tcpm_inquire_pd_power_role" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0xd6fc9495, "gpiod_direction_output_raw" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x6ef46d59, "xmc_ops_adc_enable" },
	{ 0x64748600, "gpiod_set_raw_value" },
	{ 0x41dcda9e, "xmc_ops_get_div_mode" },
	{ 0x3c167b65, "get_client_vote" },
	{ 0x56c795e2, "get_effective_result" },
	{ 0x4df8eb7e, "xmc_ops_device_init" },
	{ 0xe860826e, "xmc_ops_set_div_mode" },
	{ 0x5546b48b, "xmc_ops_dump_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x9166fada, "strncpy" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x64311477, "regmap_read" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xe5215aae, "regmap_raw_read" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1180c481, "i2c_get_match_data" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x09ce5d6c, "i2c_smbus_read_byte_data" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x090f8369, "devm_gpio_request" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1ed4c5e6,
	0x92997ed8,
	0xb6e871b8,
	0xa079425d,
	0xe136f93c,
	0x12db679a,
	0xa571f6b0,
	0x0f314d3e,
	0xc8c7229e,
	0x9a807c66,
	0x6b201699,
	0xf025cb10,
	0xfdf04ae0,
	0x1aaaeb07,
	0x65e4a856,
	0x5d2ae827,
	0x13fd8d41,
	0xd9f704be,
	0x42ad47ad,
	0x6fc35f2b,
	0xb2fb935e,
	0x2d3385d3,
	0x3b9fa9d3,
	0x24bde5b9,
	0x5b49bf18,
	0x5a177bee,
	0x13c53126,
	0x416d9e3f,
	0x5c68b3dc,
	0x5e05a5ee,
	0x8331913c,
	0x5b4118f4,
	0x84b96316,
	0xe2d5255a,
	0xfb384d37,
	0xc54855de,
	0x037a0cba,
	0xa723502d,
	0xe17134b6,
	0x96848186,
	0x8c8569cb,
	0x0f1165a4,
	0xda9bbfd5,
	0xce99938b,
	0x62b33777,
	0x0f05f001,
	0xefe8a82e,
	0xc6f46339,
	0xffeedf6a,
	0xd3d72d08,
	0xe1ee449c,
	0xe387a470,
	0xf8fdef0d,
	0xeb8d7587,
	0xb31e0c2b,
	0x7d8ee4d4,
	0xcec49a87,
	0x731c418e,
	0x0691ae30,
	0x65929cae,
	0xc4f0da12,
	0xf9a482f9,
	0xc079fcfa,
	0x7f328afe,
	0x82432962,
	0x29a9644a,
	0xfdd5e7c0,
	0x6de1c310,
	0x62e46571,
	0xedef1d95,
	0x20f68d33,
	0x7f02188f,
	0x4e8b8def,
	0x0c6fd042,
	0x87b72559,
	0x05590c04,
	0x0a9597a8,
	0x2220455c,
	0x57d5e131,
	0x031dffa4,
	0x0e7840c7,
	0x6f21f22a,
	0x725b192d,
	0xd6043980,
	0xd5977bfb,
	0xed55cabd,
	0x75ca79b5,
	0x86a50ae0,
	0x6623ec06,
	0x4296d91d,
	0xf356ebec,
	0x09cae2ef,
	0x4fc7acd2,
	0x62747b96,
	0x9988873b,
	0x8a168b14,
	0x74fefda5,
	0x656e4a6e,
	0x98cf60b3,
	0xa916b694,
	0xbcab6ee6,
	0xb030a2fc,
	0x5e292cf6,
	0xd6fc9495,
	0x07183fe6,
	0x6ef46d59,
	0x64748600,
	0x41dcda9e,
	0x3c167b65,
	0x56c795e2,
	0x4df8eb7e,
	0xe860826e,
	0x5546b48b,
	0x34db050b,
	0xc5b6f236,
	0xd35cce70,
	0x2ff78d9b,
	0x9166fada,
	0x6b883e5a,
	0x64311477,
	0x7df1ce51,
	0x3b1b6444,
	0xe5215aae,
	0x3667c9f1,
	0x9e87b2ff,
	0xce2840e7,
	0x1180c481,
	0x5a6368f5,
	0x09ce5d6c,
	0x576b05bf,
	0x090f8369,
	0x7ec9701a,
	0x92d5838e,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"of_find_node_by_name\0"
	"_printk\0"
	"power_supply_get_property\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"wakeup_source_register\0"
	"devm_kmalloc\0"
	"devm_regulator_get\0"
	"of_find_property\0"
	"xmc_ops_find_device\0"
	"power_supply_get_by_name\0"
	"find_votable\0"
	"power_supply_unregister\0"
	"xmc_device_unregister\0"
	"destroy_votable\0"
	"tcpc_dev_get_by_name\0"
	"queue_delayed_work_on\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"system_wq\0"
	"power_supply_get_drvdata\0"
	"xmc_ops_get_gauge_temp_max\0"
	"xmc_ops_get_gauge_time_ot\0"
	"xmc_ops_get_gauge_qmax\0"
	"xmc_ops_get_gauge_true_rem_q\0"
	"xmc_ops_get_gauge_initial_q\0"
	"xmc_ops_get_gauge_true_full_chg_q\0"
	"xmc_ops_get_gauge_t_sim\0"
	"xmc_ops_get_gauge_cell_grid\0"
	"xmc_ops_get_rsoc\0"
	"xmc_ops_set_gauge_shutdown_mode\0"
	"strcmp\0"
	"kasprintf\0"
	"kobject_uevent_env\0"
	"kfree\0"
	"devm_power_supply_register\0"
	"__kmalloc_cache_noprof\0"
	"scnprintf\0"
	"kstrtoint\0"
	"power_supply_changed\0"
	"xmc_ops_get_vbus\0"
	"xmc_ops_get_ibus\0"
	"sysfs_create_group\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"xmc_ops_get_charge_enable\0"
	"xmc_ops_get_powerpath_enable\0"
	"xmc_ops_get_charge_state\0"
	"xmc_ops_charge_done\0"
	"xmc_ops_get_mivr_state\0"
	"vote\0"
	"xmc_ops_powerpath_enable\0"
	"cancel_delayed_work_sync\0"
	"xmc_ops_get_gauge_soh\0"
	"xmc_ops_get_gauge_full\0"
	"ns_to_timespec64\0"
	"ktime_get_with_offset\0"
	"msleep\0"
	"xmc_ops_get_vbat\0"
	"xmc_ops_charge_timer_enable\0"
	"xmc_ops_bc12_enable\0"
	"tcpm_dpm_pd_get_source_cap\0"
	"xmc_ops_get_cap\0"
	"xmc_ops_set_cap\0"
	"xmc_ops_terminate_enable\0"
	"xmc_ops_set_gauge_fast_charge\0"
	"xmc_ops_charge_enable\0"
	"__msecs_to_jiffies\0"
	"__pm_stay_awake\0"
	"xmc_ops_otg_vbus_enable\0"
	"xmc_ops_set_dpdm_voltage\0"
	"__pm_relax\0"
	"xmc_ops_get_ts\0"
	"regulator_set_voltage\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"power_supply_get_by_phandle\0"
	"register_tcp_dev_notifier\0"
	"power_supply_reg_notifier\0"
	"xmc_ops_get_pd_id\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__fortify_panic\0"
	"mod_delayed_work_on\0"
	"xmc_device_register\0"
	"xmc_ops_get_data\0"
	"tcpm_dpm_send_custom_vdm\0"
	"tcpm_set_apdo_charging_policy\0"
	"tcpm_set_pd_charging_policy\0"
	"tcpm_dpm_pd_request\0"
	"tcpm_get_remote_power_cap\0"
	"tcpm_inquire_pd_partner_inform\0"
	"tcpm_dpm_pd_get_source_cap_ext\0"
	"snprintf\0"
	"strlen\0"
	"strnlen\0"
	"sscanf\0"
	"tcpm_inquire_pd_power_role\0"
	"of_get_named_gpio\0"
	"gpiod_direction_output_raw\0"
	"gpio_to_desc\0"
	"xmc_ops_adc_enable\0"
	"gpiod_set_raw_value\0"
	"xmc_ops_get_div_mode\0"
	"get_client_vote\0"
	"get_effective_result\0"
	"xmc_ops_device_init\0"
	"xmc_ops_set_div_mode\0"
	"xmc_ops_dump_register\0"
	"_raw_spin_lock_irqsave\0"
	"queue_work_on\0"
	"_raw_spin_unlock_irqrestore\0"
	"i2c_register_driver\0"
	"strncpy\0"
	"regmap_write\0"
	"regmap_read\0"
	"__devm_regmap_init_i2c\0"
	"of_get_property\0"
	"regmap_raw_read\0"
	"sysfs_remove_group\0"
	"cancel_delayed_work\0"
	"irq_set_irq_wake\0"
	"i2c_get_match_data\0"
	"devm_kfree\0"
	"i2c_smbus_read_byte_data\0"
	"regmap_update_bits_base\0"
	"devm_gpio_request\0"
	"gpiod_to_irq\0"
	"request_threaded_irq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "xmc_ops,xmc_voter,tcpc_class");

MODULE_ALIAS("of:N*T*Cxiaomi_charge");
MODULE_ALIAS("of:N*T*Cxiaomi_chargeC*");
MODULE_ALIAS("of:N*T*Cxiaomi_charge_pro");
MODULE_ALIAS("of:N*T*Cxiaomi_charge_proC*");
MODULE_ALIAS("platform:xiaomi_charge");
MODULE_ALIAS("platform:xiaomi_charge_pro");
MODULE_ALIAS("of:N*T*Cbq27z561");
MODULE_ALIAS("of:N*T*Cbq27z561C*");
MODULE_ALIAS("i2c:bq27z561");
MODULE_ALIAS("of:N*T*Cmax77932");
MODULE_ALIAS("of:N*T*Cmax77932C*");
MODULE_ALIAS("i2c:max77932");
MODULE_ALIAS("of:N*T*Csc8561_master");
MODULE_ALIAS("of:N*T*Csc8561_masterC*");
MODULE_ALIAS("of:N*T*Csc8561_slave");
MODULE_ALIAS("of:N*T*Csc8561_slaveC*");
MODULE_ALIAS("i2c:sc8561_master");
MODULE_ALIAS("i2c:sc8561_slave");
MODULE_ALIAS("of:N*T*Cln8410_master");
MODULE_ALIAS("of:N*T*Cln8410_masterC*");
MODULE_ALIAS("of:N*T*Cln8410_slave");
MODULE_ALIAS("of:N*T*Cln8410_slaveC*");
MODULE_ALIAS("i2c:ln8410_master");
MODULE_ALIAS("i2c:ln8410_slave");

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x9a6194b1, "devm_regmap_field_alloc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x9d466c1a, "charger_device_unregister" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0xbcfa0f24, "regmap_field_read" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0xe33bece3, "charger_dev_notify" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x6b201699, "of_find_property" },
	{ 0x4842f5a0, "phy_get" },
	{ 0x8e4cd884, "phy_set_mode_ext" },
	{ 0x9df59c96, "phy_put" },
	{ 0x5ef0243c, "regmap_field_update_bits_base" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x1983e96d, "devm_iio_channel_get_all" },
	{ 0xa723502d, "devm_power_supply_register" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0x2b6d0b54, "regulator_list_voltage_linear" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0x085b4ad3, "regulator_get_voltage_sel_regmap" },
	{ 0xb882de2c, "regulator_set_current_limit_regmap" },
	{ 0xb2003eed, "regulator_get_current_limit_regmap" },
	{ 0xdaa93f08, "regulator_is_enabled_regmap" },
	{ 0x734a502d, "regulator_enable_regmap" },
	{ 0xd2adee64, "regulator_disable_regmap" },
	{ 0xbc0850ff, "charger_device_register" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x96848186, "scnprintf" },
	{ 0x64311477, "regmap_read" },
	{ 0xa916b694, "strnlen" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0x49dc0e6c,
	0xb4ce05a5,
	0xa571f6b0,
	0x33a52b38,
	0x9a6194b1,
	0x49cd25ed,
	0xc6f46339,
	0xffeedf6a,
	0xe922b94d,
	0xa4f72277,
	0x9d466c1a,
	0x11d6167b,
	0x8c03d20c,
	0xc8c7229e,
	0xd5977bfb,
	0x4dd57aba,
	0x6b883e5a,
	0xed55cabd,
	0xaf7cb74b,
	0x3b1b6444,
	0x75ca79b5,
	0xc40993fe,
	0xfe84e5f9,
	0x1fec5304,
	0xe136f93c,
	0x608741b5,
	0xf5edea2e,
	0x0f1165a4,
	0xbcfa0f24,
	0xd45c86ea,
	0xe33bece3,
	0xf9a482f9,
	0x47a915f1,
	0x6b201699,
	0x4842f5a0,
	0x8e4cd884,
	0x9df59c96,
	0x5ef0243c,
	0xa6257a2f,
	0xc5b6f236,
	0x5c3c7387,
	0x576b05bf,
	0x1983e96d,
	0xa723502d,
	0x3b9fa9d3,
	0xe783e261,
	0xc3055d20,
	0xb6e871b8,
	0xd6863b92,
	0x2b6d0b54,
	0x3406d283,
	0x085b4ad3,
	0xb882de2c,
	0xb2003eed,
	0xdaa93f08,
	0x734a502d,
	0xd2adee64,
	0xbc0850ff,
	0xe37ad0cf,
	0xf02aa937,
	0x96848186,
	0x64311477,
	0xa916b694,
	0x9e400c59,
	0xf9583f23,
	0x42ad47ad,
	0x7f02188f,
	0xcec49a87,
	0x6fc35f2b,
	0xe6de52c9,
	0xd4034828,
	0x4829a47e,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"dev_get_regmap\0"
	"_dev_err\0"
	"__mutex_init\0"
	"regmap_bulk_read\0"
	"devm_regmap_field_alloc\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"device_create_file\0"
	"_dev_notice\0"
	"charger_device_unregister\0"
	"device_remove_file\0"
	"destroy_workqueue\0"
	"devm_kmalloc\0"
	"mutex_lock\0"
	"regmap_bulk_write\0"
	"regmap_write\0"
	"mutex_unlock\0"
	"of_property_read_string\0"
	"of_get_property\0"
	"__fortify_panic\0"
	"device_property_read_u32_array\0"
	"device_property_present\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"__init_swait_queue_head\0"
	"___ratelimit\0"
	"power_supply_changed\0"
	"regmap_field_read\0"
	"iio_read_channel_processed\0"
	"charger_dev_notify\0"
	"msleep\0"
	"_dev_warn\0"
	"of_find_property\0"
	"phy_get\0"
	"phy_set_mode_ext\0"
	"phy_put\0"
	"regmap_field_update_bits_base\0"
	"complete\0"
	"queue_work_on\0"
	"kstrtoull\0"
	"regmap_update_bits_base\0"
	"devm_iio_channel_get_all\0"
	"devm_power_supply_register\0"
	"power_supply_get_drvdata\0"
	"sysfs_emit\0"
	"usleep_range_state\0"
	"power_supply_get_property\0"
	"devm_regulator_register\0"
	"regulator_list_voltage_linear\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_get_voltage_sel_regmap\0"
	"regulator_set_current_limit_regmap\0"
	"regulator_get_current_limit_regmap\0"
	"regulator_is_enabled_regmap\0"
	"regulator_enable_regmap\0"
	"regulator_disable_regmap\0"
	"charger_device_register\0"
	"power_supply_set_property\0"
	"wait_for_completion_interruptible_timeout\0"
	"scnprintf\0"
	"regmap_read\0"
	"strnlen\0"
	"platform_get_irq_byname\0"
	"devm_request_threaded_irq\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"cancel_delayed_work_sync\0"
	"platform_driver_unregister\0"
	"param_ops_bool\0"
	"system_freezable_wq\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "charger_class");

MODULE_ALIAS("of:N*T*Cmediatek,mt6375-chg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-chgC*");

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
	{ 0x64311477, "regmap_read" },
	{ 0x401167cc, "_dev_info" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x65778543, "devm_iio_device_alloc" },
	{ 0x90000450, "device_get_match_data" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x2d26a116, "alarm_init" },
	{ 0xcae128be, "__devm_iio_device_register" },
	{ 0x2c762752, "dev_err_probe" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0xac0fc2d2, "devm_regulator_get_exclusive" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x46ea17cf, "regmap_raw_write" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd12566de, "irq_domain_remove" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x8b262a92, "irq_domain_instantiate" },
	{ 0xc2610736, "irq_domain_xlate_onetwocell" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xfadf798a, "irq_set_chip" },
	{ 0xdc6596fa, "irq_set_parent" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xe5215aae, "regmap_raw_read" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x75fa6cda, "alarm_start" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x760194bf, "__devm_add_action" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x394b5321, "pm_relax" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x0e7840c7, "power_supply_get_by_phandle" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5095f2eb, "power_supply_put" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x64311477,
	0x401167cc,
	0x6b883e5a,
	0x12db679a,
	0x65778543,
	0x90000450,
	0x49dc0e6c,
	0xa571f6b0,
	0x0f314d3e,
	0xf7ca28dd,
	0x2d26a116,
	0xcae128be,
	0x2c762752,
	0x7a4b1be7,
	0x1744f3e7,
	0xba085e3d,
	0xac0fc2d2,
	0xe136f93c,
	0x46ea17cf,
	0x92d5838e,
	0xd12566de,
	0x576b05bf,
	0xd5977bfb,
	0xed55cabd,
	0x8b262a92,
	0xc2610736,
	0x20a789ac,
	0xfadf798a,
	0xdc6596fa,
	0x7522f3ba,
	0xe5215aae,
	0x549525ef,
	0x75fa6cda,
	0xed856724,
	0xd45c86ea,
	0xebdbd5bd,
	0xe37ad0cf,
	0x0f1165a4,
	0x27bbf221,
	0xfcec0987,
	0xc4f0da12,
	0x1fef36c1,
	0xce2840e7,
	0x760194bf,
	0xc1514a3b,
	0x2c7db649,
	0x4e8b8def,
	0x05590c04,
	0xc5b6f236,
	0x4dd0661c,
	0x394b5321,
	0xb43f9365,
	0xf5edea2e,
	0xeae3dfd6,
	0xc3055d20,
	0xf9a482f9,
	0xb6e871b8,
	0xfdf04ae0,
	0x0e7840c7,
	0xe783e261,
	0x5095f2eb,
	0x7a8ef1df,
	0x031dffa4,
	0x57d5e131,
	0x6fc35f2b,
	0x92acb4e9,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regmap_read\0"
	"_dev_info\0"
	"regmap_write\0"
	"__platform_driver_register\0"
	"devm_iio_device_alloc\0"
	"device_get_match_data\0"
	"dev_get_regmap\0"
	"__mutex_init\0"
	"wakeup_source_register\0"
	"platform_get_irq\0"
	"alarm_init\0"
	"__devm_iio_device_register\0"
	"dev_err_probe\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"of_get_child_by_name\0"
	"devm_regulator_get_exclusive\0"
	"of_property_read_variable_u32_array\0"
	"regmap_raw_write\0"
	"request_threaded_irq\0"
	"irq_domain_remove\0"
	"regmap_update_bits_base\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"irq_domain_instantiate\0"
	"irq_domain_xlate_onetwocell\0"
	"irq_set_chip_data\0"
	"irq_set_chip\0"
	"irq_set_parent\0"
	"irq_modify_status\0"
	"regmap_raw_read\0"
	"handle_nested_irq\0"
	"alarm_start\0"
	"devm_iio_channel_get\0"
	"iio_read_channel_processed\0"
	"devm_power_supply_get_by_phandle\0"
	"power_supply_set_property\0"
	"power_supply_changed\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"ktime_get_with_offset\0"
	"__irq_resolve_mapping\0"
	"irq_set_irq_wake\0"
	"__devm_add_action\0"
	"free_irq\0"
	"irq_dispose_mapping\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"queue_work_on\0"
	"pm_stay_awake\0"
	"pm_relax\0"
	"ktime_get\0"
	"___ratelimit\0"
	"__const_udelay\0"
	"usleep_range_state\0"
	"msleep\0"
	"power_supply_get_property\0"
	"power_supply_get_by_name\0"
	"power_supply_get_by_phandle\0"
	"sysfs_emit\0"
	"power_supply_put\0"
	"regulator_is_enabled\0"
	"regulator_disable\0"
	"regulator_enable\0"
	"platform_driver_unregister\0"
	"param_ops_uint\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6375-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-auxadc-1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-auxadc-1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-auxadc-2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-auxadc-2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-auxadcC*");

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

KSYMTAB_FUNC(bms_get_property, "", "");
KSYMTAB_FUNC(bms_set_property, "", "");

SYMBOL_CRC(bms_get_property, 0xaa048264, "");
SYMBOL_CRC(bms_set_property, 0x5f707846, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x09ce5d6c, "i2c_smbus_read_byte_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5215aae, "regmap_raw_read" },
	{ 0x64311477, "regmap_read" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa723502d, "devm_power_supply_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x65e4a856, "power_supply_unregister" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xfdf04ae0,
	0x3b9fa9d3,
	0xd5977bfb,
	0xed55cabd,
	0x09ce5d6c,
	0x96848186,
	0x8c8569cb,
	0x6b883e5a,
	0xf9a482f9,
	0xe5215aae,
	0x64311477,
	0xa191ccd1,
	0x07183fe6,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x9166fada,
	0x2ff78d9b,
	0x5c6a5e82,
	0x0f314d3e,
	0xa571f6b0,
	0x7df1ce51,
	0xb43f9365,
	0x62b33777,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0x3b1b6444,
	0x6b201699,
	0xe136f93c,
	0x0f1165a4,
	0x65929cae,
	0xb6e871b8,
	0xc4f0da12,
	0xa723502d,
	0x656e4a6e,
	0xbcab6ee6,
	0x05590c04,
	0x42ad47ad,
	0x7f02188f,
	0x65e4a856,
	0x3667c9f1,
	0xcec49a87,
	0x4e8b8def,
	0x84dd786f,
	0x2d3385d3,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"power_supply_get_by_name\0"
	"power_supply_get_drvdata\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"i2c_smbus_read_byte_data\0"
	"scnprintf\0"
	"kstrtoint\0"
	"regmap_write\0"
	"msleep\0"
	"regmap_raw_read\0"
	"regmap_read\0"
	"gpiod_get_raw_value\0"
	"gpio_to_desc\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"strncpy\0"
	"i2c_register_driver\0"
	"devm_kasprintf\0"
	"wakeup_source_register\0"
	"__mutex_init\0"
	"__devm_regmap_init_i2c\0"
	"ktime_get\0"
	"sysfs_create_group\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"of_get_property\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"power_supply_changed\0"
	"ns_to_timespec64\0"
	"power_supply_get_property\0"
	"ktime_get_with_offset\0"
	"devm_power_supply_register\0"
	"snprintf\0"
	"sscanf\0"
	"__pm_relax\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"power_supply_unregister\0"
	"sysfs_remove_group\0"
	"cancel_delayed_work_sync\0"
	"__pm_stay_awake\0"
	"i2c_del_driver\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbq28z610");
MODULE_ALIAS("of:N*T*Cbq28z610C*");
MODULE_ALIAS("i2c:bq28z610");

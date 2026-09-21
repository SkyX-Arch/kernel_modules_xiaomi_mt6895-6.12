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
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x3574e894, "platform_get_irq_byname_optional" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2f92caec, "regulator_list_voltage_linear_range" },
	{ 0xfd07b888, "regulator_map_voltage_linear_range" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0x085b4ad3, "regulator_get_voltage_sel_regmap" },
	{ 0xdaa93f08, "regulator_is_enabled_regmap" },
	{ 0xa40b105b, "regulator_set_voltage_time_sel" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x716d1eaa, "rdev_get_drvdata" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x64311477, "regmap_read" },
	{ 0x6474823c, "regulator_list_voltage_table" },
	{ 0xe730fd2f, "regulator_map_voltage_iterate" },
	{ 0x734a502d, "regulator_enable_regmap" },
	{ 0xd2adee64, "regulator_disable_regmap" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x992e2eb2, "regulator_notifier_call_chain" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x49dc0e6c,
	0x3574e894,
	0xd6863b92,
	0xb4ce05a5,
	0xc6f46339,
	0xffeedf6a,
	0xf9583f23,
	0xe136f93c,
	0x2f92caec,
	0xfd07b888,
	0x3406d283,
	0x085b4ad3,
	0xdaa93f08,
	0xa40b105b,
	0x6b883e5a,
	0x716d1eaa,
	0xeae3dfd6,
	0x4dd57aba,
	0x576b05bf,
	0x64311477,
	0x6474823c,
	0xe730fd2f,
	0x734a502d,
	0xd2adee64,
	0xfcec0987,
	0x27bbf221,
	0x992e2eb2,
	0x42ad47ad,
	0x7f02188f,
	0xa4f72277,
	0x6fc35f2b,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"dev_get_regmap\0"
	"platform_get_irq_byname_optional\0"
	"devm_regulator_register\0"
	"_dev_err\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_request_threaded_irq\0"
	"of_property_read_variable_u32_array\0"
	"regulator_list_voltage_linear_range\0"
	"regulator_map_voltage_linear_range\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_get_voltage_sel_regmap\0"
	"regulator_is_enabled_regmap\0"
	"regulator_set_voltage_time_sel\0"
	"regmap_write\0"
	"rdev_get_drvdata\0"
	"__const_udelay\0"
	"regmap_bulk_write\0"
	"regmap_update_bits_base\0"
	"regmap_read\0"
	"regulator_list_voltage_table\0"
	"regulator_map_voltage_iterate\0"
	"regulator_enable_regmap\0"
	"regulator_disable_regmap\0"
	"enable_irq\0"
	"disable_irq_nosync\0"
	"regulator_notifier_call_chain\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"_dev_notice\0"
	"platform_driver_unregister\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:mt6368-regulator");

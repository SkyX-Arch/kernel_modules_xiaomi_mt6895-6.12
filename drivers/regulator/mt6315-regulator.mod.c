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
	{ 0xd7c2b302, "of_match_device" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2f92caec, "regulator_list_voltage_linear_range" },
	{ 0xfd07b888, "regulator_map_voltage_linear_range" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0xdaa93f08, "regulator_is_enabled_regmap" },
	{ 0xa40b105b, "regulator_set_voltage_time_sel" },
	{ 0x64311477, "regmap_read" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x716d1eaa, "rdev_get_drvdata" },
	{ 0x4b6272ca, "rdev_get_id" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x49dc0e6c,
	0xd7c2b302,
	0xd6863b92,
	0xb4ce05a5,
	0xc8c7229e,
	0xe136f93c,
	0x2f92caec,
	0xfd07b888,
	0x3406d283,
	0xdaa93f08,
	0xa40b105b,
	0x64311477,
	0xa4f72277,
	0x6b883e5a,
	0x716d1eaa,
	0x4b6272ca,
	0x576b05bf,
	0xc3055d20,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"dev_get_regmap\0"
	"of_match_device\0"
	"devm_regulator_register\0"
	"_dev_err\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"regulator_list_voltage_linear_range\0"
	"regulator_map_voltage_linear_range\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_is_enabled_regmap\0"
	"regulator_set_voltage_time_sel\0"
	"regmap_read\0"
	"_dev_notice\0"
	"regmap_write\0"
	"rdev_get_drvdata\0"
	"rdev_get_id\0"
	"regmap_update_bits_base\0"
	"usleep_range_state\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6315_3-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_3-regulatorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_6-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_6-regulatorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_7-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_7-regulatorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_8-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_8-regulatorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_15-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315_15-regulatorC*");

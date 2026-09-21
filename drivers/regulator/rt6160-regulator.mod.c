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

KSYMTAB_FUNC(rt6160_get_chip_num, "", "");
KSYMTAB_FUNC(rt6160_get_error_cnt, "", "");

SYMBOL_CRC(rt6160_get_chip_num, 0x191a3ab6, "");
SYMBOL_CRC(rt6160_get_error_cnt, 0xaf89dc27, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x64311477, "regmap_read" },
	{ 0xab55fd9d, "of_get_regulator_init_data" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0x1dce7694, "devm_of_platform_populate" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2b6d0b54, "regulator_list_voltage_linear" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0x085b4ad3, "regulator_get_voltage_sel_regmap" },
	{ 0x716d1eaa, "rdev_get_drvdata" },
	{ 0x3fc99356, "gpiod_set_value_cansleep" },
	{ 0x65d14cbc, "regcache_cache_only" },
	{ 0x073cbbc1, "regcache_sync" },
	{ 0x940df58d, "regcache_mark_dirty" },
	{ 0xdfe4fc4d, "rdev_get_regmap" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xf7799f19, "regulator_map_voltage_linear" },
	{ 0x401167cc, "_dev_info" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0xfe84e5f9,
	0x8869c950,
	0xb4ce05a5,
	0x7df1ce51,
	0x64311477,
	0xab55fd9d,
	0xd6863b92,
	0x1dce7694,
	0xa4f72277,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0xc3055d20,
	0x2b6d0b54,
	0x3406d283,
	0x085b4ad3,
	0x716d1eaa,
	0x3fc99356,
	0x65d14cbc,
	0x073cbbc1,
	0x940df58d,
	0xdfe4fc4d,
	0x576b05bf,
	0xf7799f19,
	0x401167cc,
	0x42ad47ad,
	0xcec49a87,
	0x84dd786f,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"device_property_present\0"
	"devm_gpiod_get_optional\0"
	"_dev_err\0"
	"__devm_regmap_init_i2c\0"
	"regmap_read\0"
	"of_get_regulator_init_data\0"
	"devm_regulator_register\0"
	"devm_of_platform_populate\0"
	"_dev_notice\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"usleep_range_state\0"
	"regulator_list_voltage_linear\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_get_voltage_sel_regmap\0"
	"rdev_get_drvdata\0"
	"gpiod_set_value_cansleep\0"
	"regcache_cache_only\0"
	"regcache_sync\0"
	"regcache_mark_dirty\0"
	"rdev_get_regmap\0"
	"regmap_update_bits_base\0"
	"regulator_map_voltage_linear\0"
	"_dev_info\0"
	"queue_delayed_work_on\0"
	"cancel_delayed_work_sync\0"
	"i2c_del_driver\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crichtek,rt6160");
MODULE_ALIAS("of:N*T*Crichtek,rt6160C*");

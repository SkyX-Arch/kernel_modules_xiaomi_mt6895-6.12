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
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x401167cc, "_dev_info" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b6d0b54, "regulator_list_voltage_linear" },
	{ 0xf7799f19, "regulator_map_voltage_linear" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0x085b4ad3, "regulator_get_voltage_sel_regmap" },
	{ 0x734a502d, "regulator_enable_regmap" },
	{ 0xd2adee64, "regulator_disable_regmap" },
	{ 0xdaa93f08, "regulator_is_enabled_regmap" },
	{ 0x716d1eaa, "rdev_get_drvdata" },
	{ 0x4b6272ca, "rdev_get_id" },
	{ 0x64311477, "regmap_read" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x401167cc,
	0x7df1ce51,
	0x6b883e5a,
	0xc8c7229e,
	0x33a52b38,
	0xd6863b92,
	0x92997ed8,
	0x2b6d0b54,
	0xf7799f19,
	0x3406d283,
	0x085b4ad3,
	0x734a502d,
	0xd2adee64,
	0xdaa93f08,
	0x716d1eaa,
	0x4b6272ca,
	0x64311477,
	0x84dd786f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"_dev_info\0"
	"__devm_regmap_init_i2c\0"
	"regmap_write\0"
	"devm_kmalloc\0"
	"regmap_bulk_read\0"
	"devm_regulator_register\0"
	"_printk\0"
	"regulator_list_voltage_linear\0"
	"regulator_map_voltage_linear\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_get_voltage_sel_regmap\0"
	"regulator_enable_regmap\0"
	"regulator_disable_regmap\0"
	"regulator_is_enabled_regmap\0"
	"rdev_get_drvdata\0"
	"rdev_get_id\0"
	"regmap_read\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:wl2868c");

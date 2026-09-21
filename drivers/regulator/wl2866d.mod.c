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

KSYMTAB_FUNC(wl2866d_show_reg_info, "", "");

SYMBOL_CRC(wl2866d_show_reg_info, 0x2e31dbaa, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x64311477, "regmap_read" },
	{ 0x92997ed8, "_printk" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96848186, "scnprintf" },
	{ 0x6b201699, "of_find_property" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0xab55fd9d, "of_get_regulator_init_data" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0x716d1eaa, "rdev_get_drvdata" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x64311477,
	0x92997ed8,
	0x2ff78d9b,
	0x7df1ce51,
	0xe136f93c,
	0x656e4a6e,
	0xe3ec2f2b,
	0x8b808b7f,
	0x6091b333,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0x42aac25f,
	0x3c3ff9fd,
	0x20000329,
	0x4dd57aba,
	0x33a52b38,
	0x796ead29,
	0xaf7cb74b,
	0xc8c7229e,
	0xe2d5255a,
	0x96848186,
	0x6b201699,
	0x9a807c66,
	0xab55fd9d,
	0xd6863b92,
	0xb7d99956,
	0x716d1eaa,
	0x2220455c,
	0x57d5e131,
	0x031dffa4,
	0x576b05bf,
	0x84dd786f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regmap_read\0"
	"_printk\0"
	"i2c_register_driver\0"
	"__devm_regmap_init_i2c\0"
	"of_property_read_variable_u32_array\0"
	"snprintf\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"unregister_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"sysfs_create_file_ns\0"
	"sprintf\0"
	"simple_strtoul\0"
	"regmap_bulk_write\0"
	"regmap_bulk_read\0"
	"of_get_next_available_child\0"
	"of_property_read_string\0"
	"devm_kmalloc\0"
	"strcmp\0"
	"scnprintf\0"
	"of_find_property\0"
	"devm_regulator_get\0"
	"of_get_regulator_init_data\0"
	"devm_regulator_register\0"
	"of_property_read_variable_u16_array\0"
	"rdev_get_drvdata\0"
	"regulator_set_voltage\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"regmap_update_bits_base\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwillsemi,wl2866d1");
MODULE_ALIAS("of:N*T*Cwillsemi,wl2866d1C*");
MODULE_ALIAS("of:N*T*Cwillsemi,wl2866d2");
MODULE_ALIAS("of:N*T*Cwillsemi,wl2866d2C*");
MODULE_ALIAS("i2c:wl2866d-regulator");

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
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x96a71dd8, "__devm_regmap_init" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0x301f3023, "devm_extdev_io_device_register" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0xf7dc6300, "devm_gpiochip_add_data_with_key" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x0e4e1ee2, "i2c_smbus_write_i2c_block_data" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4a364ecc, "i2c_smbus_read_i2c_block_data" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x64311477, "regmap_read" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x734a502d, "regulator_enable_regmap" },
	{ 0xd2adee64, "regulator_disable_regmap" },
	{ 0xdaa93f08, "regulator_is_enabled_regmap" },
	{ 0x6474823c, "regulator_list_voltage_table" },
	{ 0x3406d283, "regulator_set_voltage_sel_regmap" },
	{ 0x085b4ad3, "regulator_get_voltage_sel_regmap" },
	{ 0x8fbc41b8, "regulator_set_active_discharge_regmap" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x0f44df38, "gpiochip_get_data" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x992e2eb2, "regulator_notifier_call_chain" },
	{ 0x3e73904b, "extdev_io_device_unregister" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x401167cc,
	0xaa8106bc,
	0x8869c950,
	0xb4ce05a5,
	0x96a71dd8,
	0x5c6a5e82,
	0x301f3023,
	0xd6863b92,
	0xf7dc6300,
	0xc8c7229e,
	0x9c5d5b94,
	0x0e4e1ee2,
	0x037a0cba,
	0x52c5c991,
	0x75ca79b5,
	0x4a364ecc,
	0x33a52b38,
	0x4dd57aba,
	0x64311477,
	0xe136f93c,
	0x576b05bf,
	0x734a502d,
	0xd2adee64,
	0xdaa93f08,
	0x6474823c,
	0x3406d283,
	0x085b4ad3,
	0x8fbc41b8,
	0x6b883e5a,
	0xeae3dfd6,
	0x0f44df38,
	0xf9583f23,
	0x992e2eb2,
	0x3e73904b,
	0x84dd786f,
	0xe6de52c9,
	0x0f05f001,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"_dev_info\0"
	"crc8_populate_msb\0"
	"devm_gpiod_get_optional\0"
	"_dev_err\0"
	"__devm_regmap_init\0"
	"devm_kasprintf\0"
	"devm_extdev_io_device_register\0"
	"devm_regulator_register\0"
	"devm_gpiochip_add_data_with_key\0"
	"devm_kmalloc\0"
	"crc8\0"
	"i2c_smbus_write_i2c_block_data\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"__fortify_panic\0"
	"i2c_smbus_read_i2c_block_data\0"
	"regmap_bulk_read\0"
	"regmap_bulk_write\0"
	"regmap_read\0"
	"of_property_read_variable_u32_array\0"
	"regmap_update_bits_base\0"
	"regulator_enable_regmap\0"
	"regulator_disable_regmap\0"
	"regulator_is_enabled_regmap\0"
	"regulator_list_voltage_table\0"
	"regulator_set_voltage_sel_regmap\0"
	"regulator_get_voltage_sel_regmap\0"
	"regulator_set_active_discharge_regmap\0"
	"regmap_write\0"
	"__const_udelay\0"
	"gpiochip_get_data\0"
	"devm_request_threaded_irq\0"
	"regulator_notifier_call_chain\0"
	"extdev_io_device_unregister\0"
	"i2c_del_driver\0"
	"param_ops_bool\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "extdev_io_class");

MODULE_ALIAS("of:N*T*Crichtek,rt5133");
MODULE_ALIAS("of:N*T*Crichtek,rt5133C*");

MODULE_INFO(srcversion, "AA35C4BB631B23784F38DBE");

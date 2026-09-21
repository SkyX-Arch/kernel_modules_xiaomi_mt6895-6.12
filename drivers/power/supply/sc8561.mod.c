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
	{ 0x92997ed8, "_printk" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x090f8369, "devm_gpio_request" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbc0850ff, "charger_device_register" },
	{ 0x12f940e0, "chr_get_debug_level" },
	{ 0xa723502d, "devm_power_supply_register" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x64311477,
	0x92997ed8,
	0x6b883e5a,
	0xf9a482f9,
	0x576b05bf,
	0x2ff78d9b,
	0xd7c2b302,
	0x7df1ce51,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0x5e292cf6,
	0x090f8369,
	0x7ec9701a,
	0x07183fe6,
	0x92d5838e,
	0xce2840e7,
	0xbc0850ff,
	0x12f940e0,
	0xa723502d,
	0x3b9fa9d3,
	0x62b33777,
	0x96848186,
	0x8c8569cb,
	0xc1514a3b,
	0x84dd786f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regmap_read\0"
	"_printk\0"
	"regmap_write\0"
	"msleep\0"
	"regmap_update_bits_base\0"
	"i2c_register_driver\0"
	"of_match_device\0"
	"__devm_regmap_init_i2c\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"of_get_named_gpio\0"
	"devm_gpio_request\0"
	"gpiod_to_irq\0"
	"gpio_to_desc\0"
	"request_threaded_irq\0"
	"irq_set_irq_wake\0"
	"charger_device_register\0"
	"chr_get_debug_level\0"
	"devm_power_supply_register\0"
	"power_supply_get_drvdata\0"
	"sysfs_create_group\0"
	"scnprintf\0"
	"kstrtoint\0"
	"free_irq\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "charger_class,mtk_charger_framework");

MODULE_ALIAS("of:N*T*Csc8561_master");
MODULE_ALIAS("of:N*T*Csc8561_masterC*");
MODULE_ALIAS("of:N*T*Csc8561_slave");
MODULE_ALIAS("of:N*T*Csc8561_slaveC*");
MODULE_ALIAS("i2c:sc8561_master");
MODULE_ALIAS("i2c:sc8561_slave");

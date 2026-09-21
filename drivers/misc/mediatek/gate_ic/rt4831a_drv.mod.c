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

KSYMTAB_FUNC(_gate_ic_backlight_set, "_gpl", "");
KSYMTAB_FUNC(_gate_ic_i2c_read_bytes, "_gpl", "");
KSYMTAB_FUNC(_gate_ic_i2c_write_bytes, "_gpl", "");
KSYMTAB_FUNC(_gate_ic_Power_on, "_gpl", "");
KSYMTAB_FUNC(_gate_ic_Power_off, "_gpl", "");
KSYMTAB_FUNC(_gate_ic_i2c_panel_bias_enable, "_gpl", "");

SYMBOL_CRC(_gate_ic_backlight_set, 0x9c866d1d, "_gpl");
SYMBOL_CRC(_gate_ic_i2c_read_bytes, 0x278401b9, "_gpl");
SYMBOL_CRC(_gate_ic_i2c_write_bytes, 0x688e6649, "_gpl");
SYMBOL_CRC(_gate_ic_Power_on, 0x804a3951, "_gpl");
SYMBOL_CRC(_gate_ic_Power_off, 0xe0dde8fc, "_gpl");
SYMBOL_CRC(_gate_ic_i2c_panel_bias_enable, 0xd3a8fa78, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x1e41fc76, "devm_gpiod_get" },
	{ 0x5a772b88, "gpiod_set_value" },
	{ 0x09a359c5, "devm_gpiod_put" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x41e3079d, "mtk_leds_register_notifier" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe1b51218, "i2c_unregister_device" },
	{ 0x037a0cba, "kfree" },
	{ 0xbd8167f8, "mtk_leds_unregister_notifier" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x1e41fc76,
	0x5a772b88,
	0x09a359c5,
	0x4a068d70,
	0x2ff78d9b,
	0x41e3079d,
	0xc8c7229e,
	0xe136f93c,
	0xe1b51218,
	0x037a0cba,
	0xbd8167f8,
	0x84dd786f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"devm_gpiod_get\0"
	"gpiod_set_value\0"
	"devm_gpiod_put\0"
	"i2c_transfer_buffer_flags\0"
	"i2c_register_driver\0"
	"mtk_leds_register_notifier\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"i2c_unregister_device\0"
	"kfree\0"
	"mtk_leds_unregister_notifier\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "leds-mtk");


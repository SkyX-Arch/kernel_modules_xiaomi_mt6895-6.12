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
	{ 0x92997ed8, "_printk" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xc18d788e, "v4l2_i2c_subdev_init" },
	{ 0x11a0b893, "media_entity_pads_init" },
	{ 0x716d059c, "__v4l2_async_register_subdev" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c8b212f, "i2c_smbus_write_byte_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x02ba0cdf, "i2c_smbus_write_word_data" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0xdbe78cfe, "v4l2_async_unregister_subdev" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x92997ed8,
	0x9a807c66,
	0x1205e506,
	0x20dda19c,
	0xc18d788e,
	0x11a0b893,
	0x716d059c,
	0xc8c7229e,
	0x57d5e131,
	0x54325131,
	0x031dffa4,
	0xc3055d20,
	0x3c8b212f,
	0xeae3dfd6,
	0x02ba0cdf,
	0x1b00f04b,
	0x1f9923b3,
	0xdbe78cfe,
	0x6823b9fe,
	0x84dd786f,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"_printk\0"
	"devm_regulator_get\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"v4l2_i2c_subdev_init\0"
	"media_entity_pads_init\0"
	"__v4l2_async_register_subdev\0"
	"devm_kmalloc\0"
	"regulator_enable\0"
	"pinctrl_select_state\0"
	"regulator_disable\0"
	"usleep_range_state\0"
	"i2c_smbus_write_byte_data\0"
	"__const_udelay\0"
	"i2c_smbus_write_word_data\0"
	"v4l2_ctrl_handler_init_class\0"
	"v4l2_ctrl_new_std\0"
	"v4l2_async_unregister_subdev\0"
	"v4l2_ctrl_handler_free\0"
	"i2c_del_driver\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,dw9800w");
MODULE_ALIAS("of:N*T*Cmediatek,dw9800wC*");
MODULE_ALIAS("i2c:dw9800w");

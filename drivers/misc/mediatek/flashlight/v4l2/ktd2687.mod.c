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
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x11a0b893, "media_entity_pads_init" },
	{ 0x716d059c, "__v4l2_async_register_subdev" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0xcc15b1be, "v4l2_subdev_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0xd0bf3a9f, "v4l2_ctrl_new_std_menu" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x64311477, "regmap_read" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x8287fd03, "flashlight_kicker_pbm" },
	{ 0xe39abd31, "flashlight_pt_is_low" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xe8fd8896, "flashlight_dev_register_by_device_id" },
	{ 0xf9a482f9, "msleep" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x7bb47bd3, "v4l2_device_unregister_subdev" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x92997ed8,
	0x7df1ce51,
	0xa571f6b0,
	0xd4e81a21,
	0xc8c7229e,
	0x1205e506,
	0x20dda19c,
	0xba085e3d,
	0x1ed4c5e6,
	0x11a0b893,
	0x716d059c,
	0x6823b9fe,
	0xcc15b1be,
	0x656e4a6e,
	0x4eb4c414,
	0x13269d10,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0xe136f93c,
	0x1b00f04b,
	0xd0bf3a9f,
	0x1f9923b3,
	0xd5977bfb,
	0x64311477,
	0xed55cabd,
	0x8287fd03,
	0xe39abd31,
	0x576b05bf,
	0x7c7f271f,
	0xe8fd8896,
	0xf9a482f9,
	0x54325131,
	0x7bb47bd3,
	0x5c27c40f,
	0x146a11fc,
	0x84dd786f,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"_printk\0"
	"__devm_regmap_init_i2c\0"
	"__mutex_init\0"
	"pm_runtime_enable\0"
	"devm_kmalloc\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"of_get_child_by_name\0"
	"of_find_node_by_name\0"
	"media_entity_pads_init\0"
	"__v4l2_async_register_subdev\0"
	"v4l2_ctrl_handler_free\0"
	"v4l2_subdev_init\0"
	"snprintf\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"of_property_read_variable_u32_array\0"
	"v4l2_ctrl_handler_init_class\0"
	"v4l2_ctrl_new_std_menu\0"
	"v4l2_ctrl_new_std\0"
	"mutex_lock\0"
	"regmap_read\0"
	"mutex_unlock\0"
	"flashlight_kicker_pbm\0"
	"flashlight_pt_is_low\0"
	"regmap_update_bits_base\0"
	"of_get_next_child\0"
	"flashlight_dev_register_by_device_id\0"
	"msleep\0"
	"pinctrl_select_state\0"
	"v4l2_device_unregister_subdev\0"
	"__pm_runtime_disable\0"
	"__pm_runtime_set_status\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "flashlight");

MODULE_ALIAS("of:N*T*Cmediatek,ktd2687");
MODULE_ALIAS("of:N*T*Cmediatek,ktd2687C*");
MODULE_ALIAS("i2c:ktd2687");

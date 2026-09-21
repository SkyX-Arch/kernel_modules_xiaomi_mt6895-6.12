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
	{ 0x92997ed8, "_printk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xac3f2a9a, "devm_regulator_register_notifier" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc64cd75f, "devm_led_classdev_register_ext" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x863a9dc6, "devm_led_classdev_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0x49cd25ed,
	0x7a8ef1df,
	0xaf7cb74b,
	0xac3f2a9a,
	0xc8c7229e,
	0x9a807c66,
	0xe136f93c,
	0x031dffa4,
	0x57d5e131,
	0xc5b6f236,
	0xc64cd75f,
	0x2220455c,
	0x03c12dfe,
	0x863a9dc6,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"alloc_workqueue\0"
	"regulator_is_enabled\0"
	"of_property_read_string\0"
	"devm_regulator_register_notifier\0"
	"devm_kmalloc\0"
	"devm_regulator_get\0"
	"of_property_read_variable_u32_array\0"
	"regulator_disable\0"
	"regulator_enable\0"
	"queue_work_on\0"
	"devm_led_classdev_register_ext\0"
	"regulator_set_voltage\0"
	"cancel_work_sync\0"
	"devm_led_classdev_unregister\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


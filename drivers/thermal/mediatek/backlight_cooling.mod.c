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
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf772582a, "thermal_of_cooling_device_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x7ac81130, "setMaxBrightness" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xa4f72277,
	0xc8c7229e,
	0xaf7cb74b,
	0x656e4a6e,
	0xf772582a,
	0x401167cc,
	0x7ac81130,
	0x62835296,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_notice\0"
	"devm_kmalloc\0"
	"of_property_read_string\0"
	"snprintf\0"
	"thermal_of_cooling_device_register\0"
	"_dev_info\0"
	"setMaxBrightness\0"
	"thermal_cooling_device_unregister\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "leds-mtk");

MODULE_ALIAS("of:N*T*Cmediatek,backlight-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,backlight-coolerC*");

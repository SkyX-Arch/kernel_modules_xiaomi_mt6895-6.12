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
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xfc33665c, "gpiod_get_value" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x8869c950,
	0xe922b94d,
	0xb4ce05a5,
	0xc8c7229e,
	0x96848186,
	0xfc33665c,
	0x11d6167b,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_gpiod_get_optional\0"
	"device_create_file\0"
	"_dev_err\0"
	"devm_kmalloc\0"
	"scnprintf\0"
	"gpiod_get_value\0"
	"device_remove_file\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxiaomi,simtray-status");
MODULE_ALIAS("of:N*T*Cxiaomi,simtray-statusC*");

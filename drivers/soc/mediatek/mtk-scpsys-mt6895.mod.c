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
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x217428b4, "init_scp" },
	{ 0xb60546b7, "mtk_register_power_domains" },
	{ 0xa23fe416, "pm_genpd_add_subdomain" },
	{ 0x401167cc, "_dev_info" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x14fe5355,
	0x217428b4,
	0xb60546b7,
	0xa23fe416,
	0x401167cc,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"init_scp\0"
	"mtk_register_power_domains\0"
	"pm_genpd_add_subdomain\0"
	"_dev_info\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-scpsys");


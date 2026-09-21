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
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x7fd73726, "get_all_provider_clks" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x14fe5355,
	0xb4ce05a5,
	0xb088bcfc,
	0xb57f5be6,
	0x92997ed8,
	0xc569d8ce,
	0x7fd73726,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xe136f93c,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"_dev_err\0"
	"of_count_phandle_with_args\0"
	"of_clk_get\0"
	"_printk\0"
	"__clk_get_name\0"
	"get_all_provider_clks\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common");


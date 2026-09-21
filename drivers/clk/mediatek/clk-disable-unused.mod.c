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
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0xc718a0d6, "clk_hw_is_prepared" },
	{ 0xd63cf393, "__clk_get_hw" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xb088bcfc,
	0xd4e81a21,
	0xb57f5be6,
	0x63150e06,
	0xc569d8ce,
	0xc6a4a872,
	0xc718a0d6,
	0xd63cf393,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"of_count_phandle_with_args\0"
	"pm_runtime_enable\0"
	"of_clk_get\0"
	"clk_get_parent\0"
	"__clk_get_name\0"
	"__clk_is_enabled\0"
	"clk_hw_is_prepared\0"
	"__clk_get_hw\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,clk-disable-unused");
MODULE_ALIAS("of:N*T*Cmediatek,clk-disable-unusedC*");

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
	{ 0xcb54caf6, "mtk_clk_simple_probe" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf80085f7, "mtk_clk_gate_ops_setclr" },
	{ 0xcbc6e8fa, "mtk_clk_gate_ops_no_setclr" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xcb54caf6,
	0xb4ce05a5,
	0x6fc35f2b,
	0xf80085f7,
	0xcbc6e8fa,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"mtk_clk_simple_probe\0"
	"_dev_err\0"
	"platform_driver_unregister\0"
	"mtk_clk_gate_ops_setclr\0"
	"mtk_clk_gate_ops_no_setclr\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common");


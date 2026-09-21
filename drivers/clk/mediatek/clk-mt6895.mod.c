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

KSYMTAB_FUNC(mt6895_pll_force_off, "", "");

SYMBOL_CRC(mt6895_pll_force_off, 0xcb904985, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x92997ed8, "_printk" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x8165f393, "mtk_alloc_clk_data" },
	{ 0xc08b72e6, "mtk_clk_register_plls" },
	{ 0x26750717, "of_clk_add_provider" },
	{ 0x7e814de5, "of_clk_src_onecell_get" },
	{ 0x84776ffc, "mtk_clk_register_factors" },
	{ 0x10f7704f, "mtk_clk_register_muxes" },
	{ 0xcc3a88be, "mtk_clk_register_composites" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf55f7567, "mtk_mux_clr_set_upd_ops" },
	{ 0x0ae61263, "mtk_hwv_mux_ops" },
	{ 0x0746a94a, "mtk_mux_gate_clr_set_upd_ops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0x14fe5355,
	0xb4ce05a5,
	0x3d0ffa5c,
	0x92997ed8,
	0x9f0ef8fa,
	0x8165f393,
	0xc08b72e6,
	0x26750717,
	0x7e814de5,
	0x84776ffc,
	0x10f7704f,
	0xcc3a88be,
	0x6fc35f2b,
	0xf55f7567,
	0x0ae61263,
	0x0746a94a,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"_dev_err\0"
	"platform_get_resource\0"
	"_printk\0"
	"devm_ioremap_resource\0"
	"mtk_alloc_clk_data\0"
	"mtk_clk_register_plls\0"
	"of_clk_add_provider\0"
	"of_clk_src_onecell_get\0"
	"mtk_clk_register_factors\0"
	"mtk_clk_register_muxes\0"
	"mtk_clk_register_composites\0"
	"platform_driver_unregister\0"
	"mtk_mux_clr_set_upd_ops\0"
	"mtk_hwv_mux_ops\0"
	"mtk_mux_gate_clr_set_upd_ops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common");


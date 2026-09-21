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
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0x56e33ef5, "devm_phy_create" },
	{ 0x4094ffc4, "__devm_of_phy_provider_register" },
	{ 0x0e606d3f, "of_phy_simple_xlate" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x99bfae36, "pm_runtime_forbid" },
	{ 0x401167cc, "_dev_info" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6793cb57, "devm_clk_bulk_get" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x329da95b,
	0x56e33ef5,
	0x4094ffc4,
	0x0e606d3f,
	0xc8c7229e,
	0x99bfae36,
	0x401167cc,
	0x3b1b6444,
	0x1fec5304,
	0xe136f93c,
	0x6793cb57,
	0xead5c8e5,
	0xc7a7e770,
	0x63c08029,
	0xeae3dfd6,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x479f7d4b,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_platform_ioremap_resource\0"
	"devm_phy_create\0"
	"__devm_of_phy_provider_register\0"
	"of_phy_simple_xlate\0"
	"devm_kmalloc\0"
	"pm_runtime_forbid\0"
	"_dev_info\0"
	"of_get_property\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"devm_clk_bulk_get\0"
	"clk_bulk_prepare\0"
	"clk_bulk_enable\0"
	"clk_bulk_unprepare\0"
	"__const_udelay\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"clk_bulk_disable\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8183-ufsphy");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-ufsphyC*");

#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_dramc_get_steps_freq, "", "");
KSYMTAB_FUNC(mtk_dramc_get_data_rate, "", "");
KSYMTAB_FUNC(mtk_dramc_get_mr4, "", "");
KSYMTAB_FUNC(mtk_dramc_get_ddr_type, "", "");

SYMBOL_CRC(mtk_dramc_get_steps_freq, 0x458ec8f9, "");
SYMBOL_CRC(mtk_dramc_get_data_rate, 0x42f242bb, "");
SYMBOL_CRC(mtk_dramc_get_mr4, 0x3aa3e336, "");
SYMBOL_CRC(mtk_dramc_get_ddr_type, 0x82de2cf6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xaba63322, "of_iomap" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6b722180,
	0x0c1a5ee3,
	0x92997ed8,
	0x12db679a,
	0xc8c7229e,
	0x2ccea269,
	0x57d5e131,
	0xaba63322,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x6a19ccfc,
	0xe136f93c,
	0x656e4a6e,
	0x98cf60b3,
	0x1b2fa1a9,
	0x999e8297,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"_printk\0"
	"__platform_driver_register\0"
	"devm_kmalloc\0"
	"devm_regulator_get_optional\0"
	"regulator_enable\0"
	"of_iomap\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"driver_create_file\0"
	"of_property_read_variable_u32_array\0"
	"snprintf\0"
	"strlen\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


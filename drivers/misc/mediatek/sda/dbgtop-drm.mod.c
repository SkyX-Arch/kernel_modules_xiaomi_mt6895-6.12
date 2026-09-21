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

KSYMTAB_FUNC(mtk_dbgtop_mfg_pwr_on, "", "");
KSYMTAB_FUNC(mtk_dbgtop_mfg_pwr_en, "", "");
KSYMTAB_FUNC(mtk_dbgtop_dfd_timeout, "", "");

SYMBOL_CRC(mtk_dbgtop_mfg_pwr_on, 0xb3be4349, "");
SYMBOL_CRC(mtk_dbgtop_mfg_pwr_en, 0x51111bcd, "");
SYMBOL_CRC(mtk_dbgtop_dfd_timeout, 0xf11c329c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x6b722180,
	0x0c1a5ee3,
	0xf93aae46,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0x401167cc,
	0xc8c7229e,
	0x329da95b,
	0xe136f93c,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__arm_smccc_smc\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"devm_kmalloc\0"
	"devm_platform_ioremap_resource\0"
	"of_property_read_variable_u32_array\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


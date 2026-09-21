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

KSYMTAB_DATA(global_ssmpu, "_gpl", "");
KSYMTAB_DATA(global_nsmpu, "_gpl", "");
KSYMTAB_FUNC(smpu_clear_md_violation, "", "");
KSYMTAB_FUNC(mtk_smpu_isr_hook_register, "", "");
KSYMTAB_FUNC(mtk_smpu_md_handling_register, "", "");

SYMBOL_CRC(global_ssmpu, 0xaaee56ca, "_gpl");
SYMBOL_CRC(global_nsmpu, 0x15a6478f, "_gpl");
SYMBOL_CRC(smpu_clear_md_violation, 0xe9863326, "");
SYMBOL_CRC(mtk_smpu_isr_hook_register, 0xa25d3aae, "");
SYMBOL_CRC(mtk_smpu_md_handling_register, 0x47a8d9c2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x96848186, "scnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe6a25566, "mtk_clear_smpu_log" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xa3cac2b9, "mtk_get_axiid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x96848186,
	0x92997ed8,
	0xf93aae46,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0x401167cc,
	0xb4ce05a5,
	0xaf7cb74b,
	0xa079425d,
	0xe2d5255a,
	0xaba63322,
	0x7c611278,
	0x92d5838e,
	0x5a6368f5,
	0xc8c7229e,
	0xe136f93c,
	0x6b201699,
	0xe6a25566,
	0xf5edea2e,
	0xa3cac2b9,
	0xf9a482f9,
	0x45b60059,
	0xc1514a3b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"scnprintf\0"
	"_printk\0"
	"__arm_smccc_smc\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"_dev_err\0"
	"of_property_read_string\0"
	"of_property_count_elems_of_size\0"
	"strcmp\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"request_threaded_irq\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"mtk_clear_smpu_log\0"
	"___ratelimit\0"
	"mtk_get_axiid\0"
	"msleep\0"
	"aee_kernel_exception_api_func\0"
	"free_irq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-emi-mpu,aee_aed");

MODULE_ALIAS("of:N*T*Cmediatek,smpu");
MODULE_ALIAS("of:N*T*Cmediatek,smpuC*");

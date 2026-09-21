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

KSYMTAB_DATA(global_emi_mpu, "_gpl", "");
KSYMTAB_FUNC(mtk_emimpu_md_handling_register, "", "");
KSYMTAB_FUNC(mtk_clear_md_violation, "", "");
KSYMTAB_FUNC(mtk_clear_smpu_log, "", "");
KSYMTAB_FUNC(mtk_get_axiid, "", "");

SYMBOL_CRC(global_emi_mpu, 0xe4dfe26a, "_gpl");
SYMBOL_CRC(mtk_emimpu_md_handling_register, 0xe189bf8f, "");
SYMBOL_CRC(mtk_clear_md_violation, 0xdc059dfd, "");
SYMBOL_CRC(mtk_clear_smpu_log, 0xe6a25566, "");
SYMBOL_CRC(mtk_get_axiid, 0xa3cac2b9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xaba63322, "of_iomap" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xf93aae46,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0x401167cc,
	0xb4ce05a5,
	0xa079425d,
	0xc8c7229e,
	0xaba63322,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x7c611278,
	0x92d5838e,
	0x5a6368f5,
	0x1fec5304,
	0xe136f93c,
	0x656e4a6e,
	0x75ca79b5,
	0xa916b694,
	0xc5b6f236,
	0xf5edea2e,
	0x45b60059,
	0xc1514a3b,
	0x2f2c95c4,
	0x2d3385d3,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__arm_smccc_smc\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"_dev_err\0"
	"of_property_count_elems_of_size\0"
	"devm_kmalloc\0"
	"of_iomap\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"irq_of_parse_and_map\0"
	"request_threaded_irq\0"
	"devm_kfree\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"snprintf\0"
	"__fortify_panic\0"
	"strnlen\0"
	"queue_work_on\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"free_irq\0"
	"flush_work\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");

MODULE_ALIAS("of:N*T*Cmediatek,common-emimpu");
MODULE_ALIAS("of:N*T*Cmediatek,common-emimpuC*");

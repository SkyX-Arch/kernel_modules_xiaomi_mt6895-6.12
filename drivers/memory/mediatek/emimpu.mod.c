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

KSYMTAB_FUNC(emimpu_ap_region_init, "", "");
KSYMTAB_FUNC(mtk_emimpu_init_region, "", "");
KSYMTAB_FUNC(mtk_emimpu_free_region, "", "");
KSYMTAB_FUNC(mtk_emimpu_set_addr, "", "");
KSYMTAB_FUNC(mtk_emimpu_set_apc, "", "");
KSYMTAB_FUNC(mtk_emimpu_lock_region, "", "");
KSYMTAB_FUNC(mtk_emimpu_set_protection, "", "");
KSYMTAB_FUNC(mtk_emimpu_clear_protection, "", "");
KSYMTAB_FUNC(mtk_emimpu_prehandle_register, "", "");
KSYMTAB_FUNC(mtk_emimpu_postclear_register, "", "");
KSYMTAB_FUNC(mtk_emimpu_debugdump_register, "", "");
KSYMTAB_FUNC(mtk_emimpu_md_handling_register, "", "");
KSYMTAB_FUNC(mtk_emimpu_register_callback, "", "");
KSYMTAB_FUNC(mtk_clear_md_violation, "", "");

SYMBOL_CRC(emimpu_ap_region_init, 0xbcff2b20, "");
SYMBOL_CRC(mtk_emimpu_init_region, 0x888530e1, "");
SYMBOL_CRC(mtk_emimpu_free_region, 0x4a1363ad, "");
SYMBOL_CRC(mtk_emimpu_set_addr, 0xe0a1e544, "");
SYMBOL_CRC(mtk_emimpu_set_apc, 0x32e08685, "");
SYMBOL_CRC(mtk_emimpu_lock_region, 0x5f73aaf7, "");
SYMBOL_CRC(mtk_emimpu_set_protection, 0xc6f885b7, "");
SYMBOL_CRC(mtk_emimpu_clear_protection, 0x33b91e4f, "");
SYMBOL_CRC(mtk_emimpu_prehandle_register, 0x9685439c, "");
SYMBOL_CRC(mtk_emimpu_postclear_register, 0xad6a38f5, "");
SYMBOL_CRC(mtk_emimpu_debugdump_register, 0xcaa1744b, "");
SYMBOL_CRC(mtk_emimpu_md_handling_register, 0xe189bf8f, "");
SYMBOL_CRC(mtk_emimpu_register_callback, 0x46f780c4, "");
SYMBOL_CRC(mtk_clear_md_violation, 0xdc059dfd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x037a0cba, "kfree" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xaba63322, "of_iomap" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5a921311, "strncmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9166fada, "strncpy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x037a0cba,
	0xf93aae46,
	0xd5977bfb,
	0xed55cabd,
	0xe17134b6,
	0x52c5c991,
	0x7e19152a,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0xc8c7229e,
	0x66bcb0f8,
	0xa079425d,
	0x5a6368f5,
	0xaba63322,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x7c611278,
	0x6a19ccfc,
	0x1fec5304,
	0xe136f93c,
	0x92d5838e,
	0x656e4a6e,
	0x6b722180,
	0x0c1a5ee3,
	0xc5b6f236,
	0xf5edea2e,
	0x45b60059,
	0x98cf60b3,
	0x85df9b6c,
	0x5a921311,
	0x5c3c7387,
	0x9166fada,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"kfree\0"
	"__arm_smccc_smc\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"devm_kmalloc\0"
	"of_property_read_u64\0"
	"of_property_count_elems_of_size\0"
	"devm_kfree\0"
	"of_iomap\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"irq_of_parse_and_map\0"
	"driver_create_file\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"snprintf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"queue_work_on\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"strlen\0"
	"strsep\0"
	"strncmp\0"
	"kstrtoull\0"
	"strncpy\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");


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

KSYMTAB_FUNC(mtk_spi_set_autosuspend_delay, "", "");
KSYMTAB_FUNC(mt_spi_disable_master_clk, "", "");
KSYMTAB_FUNC(mt_spi_enable_master_clk, "", "");

SYMBOL_CRC(mtk_spi_set_autosuspend_delay, 0x9401e660, "");
SYMBOL_CRC(mt_spi_disable_master_clk, 0x6b8d76eb, "");
SYMBOL_CRC(mt_spi_enable_master_clk, 0xd49281ca, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5a921311, "strncmp" },
	{ 0x401167cc, "_dev_info" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0x8ad898b0, "pm_runtime_set_autosuspend_delay" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x0cc7bab2, "devm_spi_register_controller" },
	{ 0x55f67d23, "__spi_alloc_controller" },
	{ 0x6b201699, "of_find_property" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd7a0e8ec, "gpiod_direction_output" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x4f6c73c9, "spi_delay_to_ns" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd1cf9017, "spi_mem_default_supports_op" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x47addaf3, "spi_finalize_current_transfer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xfd074c74, "__pm_runtime_use_autosuspend" },
	{ 0x234c9de3, "put_device" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xba31bceb, "spi_controller_suspend" },
	{ 0xe40be19a, "spi_controller_resume" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x56470118,
	0xb6e6d99d,
	0xb077e70a,
	0x7c9a7371,
	0x815588a6,
	0x12db679a,
	0xb4ce05a5,
	0x34675dcc,
	0x31b65f04,
	0x329da95b,
	0xf7ca28dd,
	0xea23ff02,
	0x2396c7f0,
	0x556e4390,
	0x5a921311,
	0x401167cc,
	0xe922b94d,
	0xa4f72277,
	0x5be9ce07,
	0x8ad898b0,
	0xd4e81a21,
	0x0cc7bab2,
	0x55f67d23,
	0x6b201699,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0x75ca79b5,
	0x605d5bfa,
	0xc31db0ce,
	0xd7a0e8ec,
	0xe17134b6,
	0x52c5c991,
	0x037a0cba,
	0x4f6c73c9,
	0x34db050b,
	0x14de1090,
	0xd35cce70,
	0xd1cf9017,
	0xba72f076,
	0x7cc1c7f4,
	0x4a3ad70e,
	0x7f02188f,
	0xff732842,
	0x608741b5,
	0xa079425d,
	0xc8c7229e,
	0xe136f93c,
	0xf9583f23,
	0xa6257a2f,
	0xfbe215e4,
	0x47addaf3,
	0xba8fbd64,
	0xb5b54b34,
	0xcd6bda8d,
	0x656e4a6e,
	0x98cf60b3,
	0xa916b694,
	0xfd074c74,
	0x234c9de3,
	0x5c27c40f,
	0xba31bceb,
	0xe40be19a,
	0xf93aae46,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__warn_printk\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"clk_prepare\0"
	"clk_enable\0"
	"__platform_driver_register\0"
	"_dev_err\0"
	"of_match_node\0"
	"of_property_read_u32_index\0"
	"devm_platform_ioremap_resource\0"
	"platform_get_irq\0"
	"devm_clk_get\0"
	"clk_set_parent\0"
	"clk_get_rate\0"
	"strncmp\0"
	"_dev_info\0"
	"device_create_file\0"
	"_dev_notice\0"
	"dma_set_mask\0"
	"pm_runtime_set_autosuspend_delay\0"
	"pm_runtime_enable\0"
	"devm_spi_register_controller\0"
	"__spi_alloc_controller\0"
	"of_find_property\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"__fortify_panic\0"
	"cache_line_size\0"
	"is_vmalloc_addr\0"
	"gpiod_direction_output\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kfree\0"
	"spi_delay_to_ns\0"
	"_raw_spin_lock_irqsave\0"
	"mt_irq_dump_status\0"
	"_raw_spin_unlock_irqrestore\0"
	"spi_mem_default_supports_op\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"wait_for_completion_timeout\0"
	"__msecs_to_jiffies\0"
	"dma_unmap_page_attrs\0"
	"__init_swait_queue_head\0"
	"of_property_count_elems_of_size\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"devm_request_threaded_irq\0"
	"complete\0"
	"sg_next\0"
	"spi_finalize_current_transfer\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"of_property_read_string_helper\0"
	"snprintf\0"
	"strlen\0"
	"strnlen\0"
	"__pm_runtime_use_autosuspend\0"
	"put_device\0"
	"__pm_runtime_disable\0"
	"spi_controller_suspend\0"
	"spi_controller_resume\0"
	"__arm_smccc_smc\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "irq-dbg");

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7629-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt7629-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-spiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-spi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-spiC*");

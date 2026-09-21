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

KSYMTAB_FUNC(mtk_save_uart_apdma_reg, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_start_record, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_record_dbg, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_end_record, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_debug_dump, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_data_dump, "", "");
KSYMTAB_FUNC(mtk_uart_get_apdma_rx_state, "", "");
KSYMTAB_FUNC(mtk_uart_set_apdma_rx_state, "", "");
KSYMTAB_FUNC(mtk_uart_get_apdma_handler_state, "", "");
KSYMTAB_FUNC(mtk_uart_set_apdma_rx_irq, "", "");
KSYMTAB_FUNC(mtk_uart_get_apdma_status, "", "");
KSYMTAB_FUNC(mtk_uart_set_apdma_status, "", "");
KSYMTAB_FUNC(mtk_uart_set_apdma_clk, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_enable_vff, "", "");
KSYMTAB_FUNC(mtk_uart_set_tx_res_status, "", "");
KSYMTAB_FUNC(mtk_uart_get_tx_res_status, "", "");
KSYMTAB_FUNC(mtk_uart_set_rx_res_status, "", "");
KSYMTAB_FUNC(mtk_uart_get_rx_res_status, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_polling_rx_finish, "", "");
KSYMTAB_FUNC(mtk_uart_apdma_polling_tx_finish, "", "");
KSYMTAB_FUNC(mtk_uart_rx_setting, "", "");
KSYMTAB_FUNC(mtk_uart_get_apdma_rpt, "", "");

SYMBOL_CRC(mtk_save_uart_apdma_reg, 0x098a7ae7, "");
SYMBOL_CRC(mtk_uart_apdma_start_record, 0x1b7e9d4a, "");
SYMBOL_CRC(mtk_uart_apdma_record_dbg, 0xc3e4a0ea, "");
SYMBOL_CRC(mtk_uart_apdma_end_record, 0x9edd0063, "");
SYMBOL_CRC(mtk_uart_apdma_debug_dump, 0xe431bbb4, "");
SYMBOL_CRC(mtk_uart_apdma_data_dump, 0x41f72304, "");
SYMBOL_CRC(mtk_uart_get_apdma_rx_state, 0x20ab4b65, "");
SYMBOL_CRC(mtk_uart_set_apdma_rx_state, 0x8553dcc8, "");
SYMBOL_CRC(mtk_uart_get_apdma_handler_state, 0x7c731ead, "");
SYMBOL_CRC(mtk_uart_set_apdma_rx_irq, 0xd8a8b41e, "");
SYMBOL_CRC(mtk_uart_get_apdma_status, 0x3d9fa3ca, "");
SYMBOL_CRC(mtk_uart_set_apdma_status, 0x78434c79, "");
SYMBOL_CRC(mtk_uart_set_apdma_clk, 0x45bb3e27, "");
SYMBOL_CRC(mtk_uart_apdma_enable_vff, 0xfb65a99f, "");
SYMBOL_CRC(mtk_uart_set_tx_res_status, 0xe9e821e5, "");
SYMBOL_CRC(mtk_uart_get_tx_res_status, 0x192f0eea, "");
SYMBOL_CRC(mtk_uart_set_rx_res_status, 0x9b197b65, "");
SYMBOL_CRC(mtk_uart_get_rx_res_status, 0xf4e57c90, "");
SYMBOL_CRC(mtk_uart_apdma_polling_rx_finish, 0x91bef507, "");
SYMBOL_CRC(mtk_uart_apdma_polling_tx_finish, 0x698f3950, "");
SYMBOL_CRC(mtk_uart_rx_setting, 0xde94c65b, "");
SYMBOL_CRC(mtk_uart_get_apdma_rpt, 0x5a70435b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe94986d6, "sched_clock" },
	{ 0x92997ed8, "_printk" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1d222ced, "irq_get_irqchip_state" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x401167cc, "_dev_info" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0x4063976f, "vchan_init" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x6ea0b0e3, "dma_async_device_register" },
	{ 0x34c1733f, "of_dma_controller_register" },
	{ 0x0b19d195, "of_dma_xlate_by_chan_id" },
	{ 0x44bec22d, "dma_async_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6b201699, "of_find_property" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0xfcaa25d9, "vchan_dma_desc_free_list" },
	{ 0x281823c5, "__kfifo_out_peek" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x60dd5eb9, "dma_async_tx_descriptor_init" },
	{ 0xd4723cec, "vchan_tx_submit" },
	{ 0x88d1e41c, "vchan_tx_desc_free" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x037a0cba, "kfree" },
	{ 0xe1ce771b, "of_dma_controller_free" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe94986d6,
	0x92997ed8,
	0x14de1090,
	0x656e4a6e,
	0x1d222ced,
	0xd5977bfb,
	0xed55cabd,
	0xb43f9365,
	0xeae3dfd6,
	0xedc03953,
	0x40863ba1,
	0xc905402b,
	0xfa4d3c24,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x6b722180,
	0x0c1a5ee3,
	0xc3055d20,
	0x12db679a,
	0xea23ff02,
	0xb4ce05a5,
	0x14fe5355,
	0x401167cc,
	0x31b65f04,
	0xa571f6b0,
	0x329da95b,
	0x4063976f,
	0xf7ca28dd,
	0x6ea0b0e3,
	0x34c1733f,
	0x0b19d195,
	0x44bec22d,
	0xc8c7229e,
	0x6b201699,
	0x5be9ce07,
	0xea6f49c8,
	0x92d5838e,
	0xba8fbd64,
	0x9a835040,
	0x7e19152a,
	0xb5b54b34,
	0x8427cc7b,
	0x4b750f53,
	0x34db050b,
	0xd35cce70,
	0xce2840e7,
	0xc1514a3b,
	0x0ea3c74e,
	0xfcaa25d9,
	0x281823c5,
	0xe17134b6,
	0x60dd5eb9,
	0xd4723cec,
	0x88d1e41c,
	0xe523ad75,
	0xe136f93c,
	0x037a0cba,
	0xe1ce771b,
	0x5c27c40f,
	0x6fc35f2b,
	0xaf56600a,
	0x0f05f001,
	0xefe8a82e,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"sched_clock\0"
	"_printk\0"
	"mt_irq_dump_status\0"
	"snprintf\0"
	"irq_get_irqchip_state\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"ktime_get\0"
	"__const_udelay\0"
	"iounmap\0"
	"ioremap_prot\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"usleep_range_state\0"
	"__platform_driver_register\0"
	"devm_clk_get\0"
	"_dev_err\0"
	"of_device_get_match_data\0"
	"_dev_info\0"
	"of_property_read_u32_index\0"
	"__mutex_init\0"
	"devm_platform_ioremap_resource\0"
	"vchan_init\0"
	"platform_get_irq\0"
	"dma_async_device_register\0"
	"of_dma_controller_register\0"
	"of_dma_xlate_by_chan_id\0"
	"dma_async_device_unregister\0"
	"devm_kmalloc\0"
	"of_find_property\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"request_threaded_irq\0"
	"_raw_spin_lock\0"
	"__list_del_entry_valid_or_report\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"irq_set_irq_wake\0"
	"free_irq\0"
	"tasklet_kill\0"
	"vchan_dma_desc_free_list\0"
	"__kfifo_out_peek\0"
	"__kmalloc_cache_noprof\0"
	"dma_async_tx_descriptor_init\0"
	"vchan_tx_submit\0"
	"vchan_tx_desc_free\0"
	"synchronize_irq\0"
	"of_property_read_variable_u32_array\0"
	"kfree\0"
	"of_dma_controller_free\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "irq-dbg");

MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uart-dmaC*");

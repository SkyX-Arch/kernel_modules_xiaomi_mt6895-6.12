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

KSYMTAB_FUNC(mtk_btif_rxd_be_blocked_flag_get, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_open, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_close, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_write, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_dpidle_ctrl, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_rx_cb_register, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_wakeup_consys, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_loopback_ctrl, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_dbg_ctrl, "", "");
KSYMTAB_FUNC(mtk_wcn_btif_parser_wmt_evt, "", "");
KSYMTAB_FUNC(mtk_btif_exp_rx_has_pending_data, "", "");
KSYMTAB_FUNC(mtk_btif_exp_tx_has_pending_data, "", "");
KSYMTAB_FUNC(mtk_btif_is_tx_complete, "", "");
KSYMTAB_FUNC(mtk_btif_exp_rx_thread_get, "", "");

SYMBOL_CRC(mtk_btif_rxd_be_blocked_flag_get, 0x1a9e90a6, "");
SYMBOL_CRC(mtk_wcn_btif_open, 0xb32f99b1, "");
SYMBOL_CRC(mtk_wcn_btif_close, 0x05b602b4, "");
SYMBOL_CRC(mtk_wcn_btif_write, 0x281ca2ad, "");
SYMBOL_CRC(mtk_wcn_btif_dpidle_ctrl, 0xd54d6da4, "");
SYMBOL_CRC(mtk_wcn_btif_rx_cb_register, 0x2e8a2538, "");
SYMBOL_CRC(mtk_wcn_btif_wakeup_consys, 0x30b59ea8, "");
SYMBOL_CRC(mtk_wcn_btif_loopback_ctrl, 0xa0fcb7c0, "");
SYMBOL_CRC(mtk_wcn_btif_dbg_ctrl, 0xf8c1afa1, "");
SYMBOL_CRC(mtk_wcn_btif_parser_wmt_evt, 0xe9a009d3, "");
SYMBOL_CRC(mtk_btif_exp_rx_has_pending_data, 0x93263291, "");
SYMBOL_CRC(mtk_btif_exp_tx_has_pending_data, 0x08f6325f, "");
SYMBOL_CRC(mtk_btif_is_tx_complete, 0x65494a34, "");
SYMBOL_CRC(mtk_btif_exp_rx_thread_get, 0xce680510, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x999e8297, "vfree" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x00148653, "vsnprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbc532593, "mutex_lock_killable" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x60c7c60d, "driver_remove_file" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9166fada, "strncpy" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x60d3b017, "sched_set_fifo" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1b2fa1a9,
	0x56470118,
	0x999e8297,
	0xf23fcb99,
	0x656e4a6e,
	0x92997ed8,
	0x34db050b,
	0x65929cae,
	0xb43f9365,
	0x9ec6ca96,
	0x00148653,
	0x75ca79b5,
	0xc1514a3b,
	0xfcec0987,
	0x27bbf221,
	0x92d5838e,
	0xa6257a2f,
	0x9d2ab8ac,
	0xff732842,
	0xf9a482f9,
	0xbc532593,
	0xed55cabd,
	0xc5b6f236,
	0x3ce4ca6f,
	0xd35cce70,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x037a0cba,
	0x203392c6,
	0x12db679a,
	0x6a19ccfc,
	0xa571f6b0,
	0x60c7c60d,
	0x6fc35f2b,
	0x85df9b6c,
	0x9166fada,
	0x3854774b,
	0x5a9cfed6,
	0xba0aee2e,
	0x60d3b017,
	0xce5bc4d0,
	0x49cd25ed,
	0x2364c85a,
	0x8c03d20c,
	0x608741b5,
	0x2e3bcce2,
	0xb3f7646e,
	0x139f2189,
	0x13d0adf7,
	0xdb760f52,
	0xb39378cc,
	0x03c12dfe,
	0x0ea3c74e,
	0x78cf2345,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0x7e19152a,
	0x9a835040,
	0x815588a6,
	0xb6e6d99d,
	0xeae3dfd6,
	0xfef216eb,
	0xaba63322,
	0x7c611278,
	0x31b65f04,
	0x7726dda9,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xc3055d20,
	0x15ba50a6,
	0xea23ff02,
	0x7c9a7371,
	0xb077e70a,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vmalloc_noprof\0"
	"__warn_printk\0"
	"vfree\0"
	"__kfifo_in\0"
	"snprintf\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"ns_to_timespec64\0"
	"ktime_get\0"
	"ktime_get_real_ts64\0"
	"vsnprintf\0"
	"__fortify_panic\0"
	"free_irq\0"
	"enable_irq\0"
	"disable_irq_nosync\0"
	"request_threaded_irq\0"
	"complete\0"
	"__tasklet_schedule\0"
	"dma_unmap_page_attrs\0"
	"msleep\0"
	"mutex_lock_killable\0"
	"mutex_unlock\0"
	"queue_work_on\0"
	"disable_irq\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kfree\0"
	"mutex_trylock\0"
	"__platform_driver_register\0"
	"driver_create_file\0"
	"__mutex_init\0"
	"driver_remove_file\0"
	"platform_driver_unregister\0"
	"strsep\0"
	"strncpy\0"
	"kstrtoll\0"
	"dma_alloc_attrs\0"
	"kthread_create_on_node\0"
	"sched_set_fifo\0"
	"wake_up_process\0"
	"alloc_workqueue\0"
	"tasklet_init\0"
	"destroy_workqueue\0"
	"__init_swait_queue_head\0"
	"wait_for_completion_interruptible\0"
	"kthread_should_stop\0"
	"__kfifo_alloc\0"
	"__kfifo_out\0"
	"__kfifo_free\0"
	"kthread_stop\0"
	"cancel_work_sync\0"
	"tasklet_kill\0"
	"dma_free_attrs\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"clk_enable\0"
	"clk_disable\0"
	"__const_udelay\0"
	"_raw_spin_trylock\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"of_property_read_u32_index\0"
	"irq_get_irq_data\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"usleep_range_state\0"
	"jiffies\0"
	"devm_clk_get\0"
	"clk_prepare\0"
	"clk_unprepare\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


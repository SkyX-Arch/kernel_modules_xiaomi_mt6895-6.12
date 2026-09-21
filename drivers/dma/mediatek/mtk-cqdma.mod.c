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
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x401167cc, "_dev_info" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x4063976f, "vchan_init" },
	{ 0x6ea0b0e3, "dma_async_device_register" },
	{ 0x34c1733f, "of_dma_controller_register" },
	{ 0x0b19d195, "of_dma_xlate_by_chan_id" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x44bec22d, "dma_async_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x60dd5eb9, "dma_async_tx_descriptor_init" },
	{ 0xd4723cec, "vchan_tx_submit" },
	{ 0x88d1e41c, "vchan_tx_desc_free" },
	{ 0xfcaa25d9, "vchan_dma_desc_free_list" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x56470118, "__warn_printk" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x77879ed5, "dma_run_dependencies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0xe1ce771b, "of_dma_controller_free" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xea23ff02,
	0xb4ce05a5,
	0x401167cc,
	0x47a915f1,
	0x5be9ce07,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf7ca28dd,
	0x4063976f,
	0x6ea0b0e3,
	0x34c1733f,
	0x0b19d195,
	0xa07d1b3c,
	0x44bec22d,
	0xc8c7229e,
	0x34db050b,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0x0296695f,
	0xd35cce70,
	0x7e19152a,
	0x9a835040,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0x60dd5eb9,
	0xd4723cec,
	0x88d1e41c,
	0xfcaa25d9,
	0x25974000,
	0x56470118,
	0x0ea3c74e,
	0xe136f93c,
	0xf9583f23,
	0x27bbf221,
	0xba8fbd64,
	0xb5b54b34,
	0x9d2ab8ac,
	0x608741b5,
	0xd4e81a21,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x13269d10,
	0x5c27c40f,
	0xb6e6d99d,
	0x77879ed5,
	0xfcec0987,
	0xa6257a2f,
	0xe1ce771b,
	0xe523ad75,
	0x5a6368f5,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_clk_get\0"
	"_dev_err\0"
	"_dev_info\0"
	"_dev_warn\0"
	"dma_set_mask\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_irq\0"
	"vchan_init\0"
	"dma_async_device_register\0"
	"of_dma_controller_register\0"
	"of_dma_xlate_by_chan_id\0"
	"tasklet_setup\0"
	"dma_async_device_unregister\0"
	"devm_kmalloc\0"
	"_raw_spin_lock_irqsave\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"refcount_warn_saturate\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"dma_async_tx_descriptor_init\0"
	"vchan_tx_submit\0"
	"vchan_tx_desc_free\0"
	"vchan_dma_desc_free_list\0"
	"wait_for_completion\0"
	"__warn_printk\0"
	"tasklet_kill\0"
	"of_property_read_variable_u32_array\0"
	"devm_request_threaded_irq\0"
	"disable_irq_nosync\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__tasklet_schedule\0"
	"__init_swait_queue_head\0"
	"pm_runtime_enable\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"__pm_runtime_idle\0"
	"__pm_runtime_disable\0"
	"clk_disable\0"
	"dma_run_dependencies\0"
	"enable_irq\0"
	"complete\0"
	"of_dma_controller_free\0"
	"synchronize_irq\0"
	"devm_kfree\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,cqdma");
MODULE_ALIAS("of:N*T*Cmediatek,cqdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-cqdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-cqdmaC*");

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

KSYMTAB_FUNC(mtk_i2c_clock_enable_ex, "", "");
KSYMTAB_FUNC(mtk_i2c_clock_disable_ex, "", "");
KSYMTAB_FUNC(scp_wake_request, "", "");
KSYMTAB_FUNC(scp_wake_release, "", "");

SYMBOL_CRC(mtk_i2c_clock_enable_ex, 0x2eb3da7d, "");
SYMBOL_CRC(mtk_i2c_clock_disable_ex, 0xe04e301e, "");
SYMBOL_CRC(scp_wake_request, 0x8d99fb2b, "");
SYMBOL_CRC(scp_wake_release, 0x8a90110c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x401167cc, "_dev_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x8ad898b0, "pm_runtime_set_autosuspend_delay" },
	{ 0xd98ba5aa, "i2c_add_adapter" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x037a0cba, "kfree" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x5d37f189, "gpio_dump_regs_range" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe6e94f93, "__pm_runtime_suspend" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xfd074c74, "__pm_runtime_use_autosuspend" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf4b3e6f, "i2c_del_adapter" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0x34db050b,
	0xeae3dfd6,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xd35cce70,
	0x12db679a,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf7ca28dd,
	0x14fe5355,
	0x2ccea269,
	0xea23ff02,
	0xb4ce05a5,
	0x556e4390,
	0x5be9ce07,
	0xd4e81a21,
	0x8ad898b0,
	0xd98ba5aa,
	0xc8c7229e,
	0x608741b5,
	0x92997ed8,
	0x6b2dc060,
	0x56470118,
	0x4eb4c414,
	0x52c5c991,
	0x75ca79b5,
	0x037a0cba,
	0xb43f9365,
	0x42041512,
	0x4dae16e4,
	0x4a3ad70e,
	0xe94986d6,
	0xc31db0ce,
	0xba72f076,
	0x7cc1c7f4,
	0xff732842,
	0x5d37f189,
	0x6ebe366f,
	0xe6e94f93,
	0x31b65f04,
	0xe136f93c,
	0x6b201699,
	0x40863ba1,
	0xfd074c74,
	0xf9583f23,
	0xa6257a2f,
	0xedc03953,
	0xaf4b3e6f,
	0x5c27c40f,
	0x6fc35f2b,
	0x0f05f001,
	0xaf56600a,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"_raw_spin_lock_irqsave\0"
	"__const_udelay\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_irq\0"
	"of_device_get_match_data\0"
	"devm_regulator_get_optional\0"
	"devm_clk_get\0"
	"_dev_err\0"
	"clk_get_rate\0"
	"dma_set_mask\0"
	"pm_runtime_enable\0"
	"pm_runtime_set_autosuspend_delay\0"
	"i2c_add_adapter\0"
	"devm_kmalloc\0"
	"__init_swait_queue_head\0"
	"_printk\0"
	"dump_stack\0"
	"__warn_printk\0"
	"__pm_runtime_resume\0"
	"__kmalloc_noprof\0"
	"__fortify_panic\0"
	"kfree\0"
	"ktime_get\0"
	"i2c_get_dma_safe_msg_buf\0"
	"i2c_put_dma_safe_msg_buf\0"
	"wait_for_completion_timeout\0"
	"sched_clock\0"
	"is_vmalloc_addr\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"dma_unmap_page_attrs\0"
	"gpio_dump_regs_range\0"
	"ktime_get_mono_fast_ns\0"
	"__pm_runtime_suspend\0"
	"of_property_read_u32_index\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"ioremap_prot\0"
	"__pm_runtime_use_autosuspend\0"
	"devm_request_threaded_irq\0"
	"complete\0"
	"iounmap\0"
	"i2c_del_adapter\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"arm64_use_ng_mappings\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-common-v2_debug");

MODULE_ALIAS("of:N*T*Cmediatek,mt2712-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6577-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6577-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-i2cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-i2c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-i2cC*");

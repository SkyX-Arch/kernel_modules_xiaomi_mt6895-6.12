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

KSYMTAB_FUNC(mtk_i3c_master_entasx, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_rstdaa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_setmwl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_setmrl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_enttm, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_setdasa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_setnewda, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getmwl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getmrl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getpid, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getbcr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getdcr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_getmxds, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_gethdrcap, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_master_change_i3c_speed, "_gpl", "");
KSYMTAB_FUNC(get_mtk_i3c_list, "_gpl", "");

SYMBOL_CRC(mtk_i3c_master_entasx, 0x98d5988e, "_gpl");
SYMBOL_CRC(mtk_i3c_master_rstdaa, 0x42101294, "_gpl");
SYMBOL_CRC(mtk_i3c_master_setmwl, 0x391868f9, "_gpl");
SYMBOL_CRC(mtk_i3c_master_setmrl, 0x3e21bead, "_gpl");
SYMBOL_CRC(mtk_i3c_master_enttm, 0x0aa4f563, "_gpl");
SYMBOL_CRC(mtk_i3c_master_setdasa, 0xd45527ab, "_gpl");
SYMBOL_CRC(mtk_i3c_master_setnewda, 0x95df6d89, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getmwl, 0x6f95c4db, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getmrl, 0x5c3bf423, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getpid, 0xc51fb831, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getbcr, 0xf7ae3eb4, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getdcr, 0x9ce7a49f, "_gpl");
SYMBOL_CRC(mtk_i3c_master_getmxds, 0x559ff4f7, "_gpl");
SYMBOL_CRC(mtk_i3c_master_gethdrcap, 0xf0d08ed5, "_gpl");
SYMBOL_CRC(mtk_i3c_master_change_i3c_speed, 0xf3a907ee, "_gpl");
SYMBOL_CRC(get_mtk_i3c_list, 0x8de96415, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3355da1c, "down_read" },
	{ 0x6b50e951, "up_read" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0x401167cc, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x322c9d3b, "rt_mutex_lock" },
	{ 0x9a4f004e, "rt_mutex_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd1edde11, "__rt_mutex_init" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xf57b06bf, "i3c_master_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x5d37f189, "gpio_dump_regs_range" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24715bda, "i3c_master_get_free_addr" },
	{ 0xbe95427c, "i3c_master_set_info" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x52a045fb, "i3c_master_add_i3c_dev_locked" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xfca8c6c8, "i3c_master_unregister" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3355da1c,
	0x6b50e951,
	0x28ed2847,
	0x20d81059,
	0x401167cc,
	0x92997ed8,
	0x556e4390,
	0xe17134b6,
	0x52c5c991,
	0x037a0cba,
	0x322c9d3b,
	0x9a4f004e,
	0x12db679a,
	0xd1edde11,
	0x14fe5355,
	0x329da95b,
	0xea23ff02,
	0xf7ca28dd,
	0x5be9ce07,
	0xeae3dfd6,
	0xf9583f23,
	0xf57b06bf,
	0xc8c7229e,
	0x608741b5,
	0xe136f93c,
	0x6b201699,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x6b722180,
	0x0c1a5ee3,
	0x5d37f189,
	0xc905402b,
	0xfa4d3c24,
	0xa6257a2f,
	0x656e4a6e,
	0x24715bda,
	0xbe95427c,
	0x75ca79b5,
	0x52a045fb,
	0x4a3ad70e,
	0x34db050b,
	0x56470118,
	0xa8ade12b,
	0xc31db0ce,
	0xba72f076,
	0x7cc1c7f4,
	0xb43f9365,
	0xd35cce70,
	0xff732842,
	0x7e19152a,
	0xfca8c6c8,
	0x9a835040,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"down_read\0"
	"up_read\0"
	"down_write\0"
	"up_write\0"
	"_dev_info\0"
	"_printk\0"
	"clk_get_rate\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kfree\0"
	"rt_mutex_lock\0"
	"rt_mutex_unlock\0"
	"__platform_driver_register\0"
	"__rt_mutex_init\0"
	"of_device_get_match_data\0"
	"devm_platform_ioremap_resource\0"
	"devm_clk_get\0"
	"platform_get_irq\0"
	"dma_set_mask\0"
	"__const_udelay\0"
	"devm_request_threaded_irq\0"
	"i3c_master_register\0"
	"devm_kmalloc\0"
	"__init_swait_queue_head\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"gpio_dump_regs_range\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"complete\0"
	"snprintf\0"
	"i3c_master_get_free_addr\0"
	"i3c_master_set_info\0"
	"__fortify_panic\0"
	"i3c_master_add_i3c_dev_locked\0"
	"wait_for_completion_timeout\0"
	"_raw_spin_lock_irqsave\0"
	"__warn_printk\0"
	"kmemdup_noprof\0"
	"is_vmalloc_addr\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"ktime_get\0"
	"_raw_spin_unlock_irqrestore\0"
	"dma_unmap_page_attrs\0"
	"__list_add_valid_or_report\0"
	"i3c_master_unregister\0"
	"__list_del_entry_valid_or_report\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-common-v2_debug");

MODULE_ALIAS("of:N*T*Cmediatek,mt6989-i3c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-i3cC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-i3c");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-i3cC*");

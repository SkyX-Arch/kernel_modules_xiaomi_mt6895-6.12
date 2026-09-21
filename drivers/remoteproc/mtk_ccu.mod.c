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

KSYMTAB_FUNC(mtk_ccu_get_pdev, "_gpl", "");
KSYMTAB_FUNC(mtk_ccu_da_to_va, "_gpl", "");
KSYMTAB_FUNC(rproc_bootx, "_gpl", "");
KSYMTAB_FUNC(rproc_shutdownx, "_gpl", "");
KSYMTAB_FUNC(mtk_ccu_ipc_register, "_gpl", "");
KSYMTAB_FUNC(mtk_ccu_ipc_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_ccu_rproc_ipc_send, "_gpl", "");
KSYMTAB_FUNC(mtk_ccu_rproc_get_inforeg, "_gpl", "");

SYMBOL_CRC(mtk_ccu_get_pdev, 0xa8cdac98, "_gpl");
SYMBOL_CRC(mtk_ccu_da_to_va, 0x98ec06fd, "_gpl");
SYMBOL_CRC(rproc_bootx, 0x1725b7aa, "_gpl");
SYMBOL_CRC(rproc_shutdownx, 0x46c18d2a, "_gpl");
SYMBOL_CRC(mtk_ccu_ipc_register, 0xb3cc7a38, "_gpl");
SYMBOL_CRC(mtk_ccu_ipc_unregister, 0x4df73acf, "_gpl");
SYMBOL_CRC(mtk_ccu_rproc_ipc_send, 0x2827a256, "_gpl");
SYMBOL_CRC(mtk_ccu_rproc_get_inforeg, 0xda3b542b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xfaac98c9, "rproc_alloc" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xa0f6226b, "of_find_node_by_phandle" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x700ad7cc, "rproc_add" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x067e2f47, "dma_heap_put" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0x401167cc, "_dev_info" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0x037a0cba, "kfree" },
	{ 0x657deb94, "devm_free_irq" },
	{ 0x8f15998c, "rproc_del" },
	{ 0x44c9a0ee, "rproc_free" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xfa27aa25, "rproc_boot" },
	{ 0x69f3da31, "rproc_shutdown" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9083187d, "dma_buf_mmap" },
	{ 0x6110d3c4, "dma_mmap_attrs" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xb4ce05a5,
	0x689f7bde,
	0xeae3dfd6,
	0xa823db6e,
	0x6b722180,
	0x0c1a5ee3,
	0x1fec5304,
	0xfef216eb,
	0x75ca79b5,
	0xb5b54b34,
	0x12db679a,
	0xd4e81a21,
	0x5c27c40f,
	0xfaac98c9,
	0xee73d233,
	0xa0f6226b,
	0x0be515ae,
	0xa4f72277,
	0xea23ff02,
	0x1f0a95af,
	0x7c611278,
	0xa571f6b0,
	0xd9a5ea54,
	0xf9583f23,
	0x3ce4ca6f,
	0xf9606a4e,
	0x700ad7cc,
	0x6d25698b,
	0xfcec0987,
	0xc905402b,
	0xfa4d3c24,
	0xf93aae46,
	0xc3055d20,
	0xb6e6d99d,
	0xb077e70a,
	0x13269d10,
	0xc6a4a872,
	0x656e4a6e,
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xe136f93c,
	0xba8fbd64,
	0x5be9ce07,
	0xea6f49c8,
	0xf3cdc3c6,
	0x5a9cfed6,
	0xeff75c0b,
	0xe49fbbe6,
	0x067e2f47,
	0x0904e8ad,
	0xfff4bd7c,
	0xe70e1ef3,
	0x18500fa9,
	0x401167cc,
	0x441d0de9,
	0x78cf2345,
	0x7640bcae,
	0xf1e3c830,
	0xecbe3c62,
	0x69020168,
	0x037a0cba,
	0x657deb94,
	0x8f15998c,
	0x44c9a0ee,
	0x6fc35f2b,
	0x0f05f001,
	0x28ba7b6c,
	0x6091b333,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0xfa27aa25,
	0x69f3da31,
	0x47a915f1,
	0x2be0c009,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x9a85eebb,
	0xe2964344,
	0x9083187d,
	0x6110d3c4,
	0x27bbf221,
	0xd5977bfb,
	0xed55cabd,
	0x75fb9062,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"_dev_err\0"
	"mtk_smi_dbg_hang_detect\0"
	"__const_udelay\0"
	"of_find_device_by_node\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__of_parse_phandle_with_args\0"
	"_raw_spin_trylock\0"
	"__fortify_panic\0"
	"_raw_spin_unlock\0"
	"__platform_driver_register\0"
	"pm_runtime_enable\0"
	"__pm_runtime_disable\0"
	"rproc_alloc\0"
	"devm_ioremap\0"
	"of_find_node_by_phandle\0"
	"device_link_add\0"
	"_dev_notice\0"
	"devm_clk_get\0"
	"of_mtk_icc_get\0"
	"irq_of_parse_and_map\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"devm_request_threaded_irq\0"
	"disable_irq\0"
	"mrdump_set_extra_dump\0"
	"rproc_add\0"
	"mtk_icc_set_bw\0"
	"enable_irq\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__arm_smccc_smc\0"
	"usleep_range_state\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"__pm_runtime_idle\0"
	"__clk_is_enabled\0"
	"snprintf\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"of_property_read_variable_u32_array\0"
	"_raw_spin_lock\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"of_find_compatible_node\0"
	"dma_alloc_attrs\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_put\0"
	"mtk_dma_buf_set_name\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_vmap_unlocked\0"
	"_dev_info\0"
	"__kmalloc_large_noprof\0"
	"dma_free_attrs\0"
	"dma_buf_vunmap_unlocked\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_heap_buffer_free\0"
	"kfree\0"
	"devm_free_irq\0"
	"rproc_del\0"
	"rproc_free\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"rproc_boot\0"
	"rproc_shutdown\0"
	"_dev_warn\0"
	"__arch_copy_from_user\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__arch_copy_to_user\0"
	"__wake_up\0"
	"dma_buf_mmap\0"
	"dma_mmap_attrs\0"
	"disable_irq_nosync\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"arch_timer_read_counter\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-smi-dbg,mtk-icc-core,mrdump,aee_aed,system_heap");

MODULE_ALIAS("of:N*T*Cmediatek,ccu_rproc");
MODULE_ALIAS("of:N*T*Cmediatek,ccu_rprocC*");
MODULE_ALIAS("of:N*T*Cmediatek,ccucammain");
MODULE_ALIAS("of:N*T*Cmediatek,ccucammainC*");

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
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x92997ed8, "_printk" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0xc56c09ba, "mmdvfs_get_version" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x7eb4d0e0, "mtk_mmdvfs_enable_vcp" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x53262a34, "mtk_smi_larb_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b85895c, "mtk_smi_larb_disable" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x0fca7d66, "of_clk_get_by_name" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xb4028d67, "proc_create" },
	{ 0x5a921311, "strncmp" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xc5b6a5d2, "dma_buf_fd" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x067e2f47, "dma_heap_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xcd6bb6eb,
	0x92997ed8,
	0x2ccea269,
	0xea23ff02,
	0x166667b7,
	0xc2a5a5eb,
	0xb3bceb42,
	0xc56c09ba,
	0x502a8c68,
	0xf644e56a,
	0x2220455c,
	0x7eb4d0e0,
	0x76d9b876,
	0x53262a34,
	0xeae3dfd6,
	0x6b85895c,
	0xe136f93c,
	0x1fec5304,
	0x4eb4c414,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x6d25698b,
	0xb6e6d99d,
	0x13269d10,
	0x12db679a,
	0xaba63322,
	0x7c611278,
	0xd9a5ea54,
	0x3ce4ca6f,
	0x0fca7d66,
	0x31b65f04,
	0xa823db6e,
	0x0be515ae,
	0xd4e81a21,
	0x75966ec2,
	0xb4028d67,
	0x5a921311,
	0x92d5838e,
	0xe2964344,
	0x1f0a95af,
	0x6b201699,
	0xf3cdc3c6,
	0x5be9ce07,
	0xea6f49c8,
	0xc8c7229e,
	0xd5977bfb,
	0xed55cabd,
	0xc3055d20,
	0xa571f6b0,
	0xe17134b6,
	0x037a0cba,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x689f7bde,
	0x2be0c009,
	0xfcec0987,
	0x0904e8ad,
	0x9a85eebb,
	0xc1514a3b,
	0x330c0b0f,
	0x6fc35f2b,
	0xb2fb935e,
	0x0f05f001,
	0xefe8a82e,
	0xfff4bd7c,
	0xe70e1ef3,
	0xecbe3c62,
	0xf1e3c830,
	0xc5b6a5d2,
	0xaaae9064,
	0x2b3df576,
	0x18500fa9,
	0x7640bcae,
	0xeff75c0b,
	0xe49fbbe6,
	0x067e2f47,
	0x56470118,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"dev_pm_opp_of_add_table\0"
	"_printk\0"
	"devm_regulator_get_optional\0"
	"devm_clk_get\0"
	"dev_pm_opp_get_opp_count\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_put\0"
	"mmdvfs_get_version\0"
	"of_property_match_string\0"
	"dev_pm_opp_get_voltage\0"
	"regulator_set_voltage\0"
	"mtk_mmdvfs_enable_vcp\0"
	"clk_set_rate\0"
	"mtk_smi_larb_enable\0"
	"__const_udelay\0"
	"mtk_smi_larb_disable\0"
	"of_property_read_variable_u32_array\0"
	"__of_parse_phandle_with_args\0"
	"__pm_runtime_resume\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"mtk_icc_set_bw\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"__platform_driver_register\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"__init_waitqueue_head\0"
	"disable_irq\0"
	"of_clk_get_by_name\0"
	"of_property_read_u32_index\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"pm_runtime_enable\0"
	"register_pm_notifier\0"
	"proc_create\0"
	"strncmp\0"
	"request_threaded_irq\0"
	"__wake_up\0"
	"of_mtk_icc_get\0"
	"of_find_property\0"
	"of_find_compatible_node\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"devm_kmalloc\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"usleep_range_state\0"
	"__mutex_init\0"
	"__kmalloc_cache_noprof\0"
	"kfree\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"mtk_smi_dbg_hang_detect\0"
	"__arch_copy_from_user\0"
	"enable_irq\0"
	"mtk_dma_buf_set_name\0"
	"__arch_copy_to_user\0"
	"free_irq\0"
	"remove_proc_entry\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_fd\0"
	"dma_buf_get\0"
	"dma_buf_put\0"
	"dma_buf_vmap_unlocked\0"
	"dma_buf_vunmap_unlocked\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_put\0"
	"__warn_printk\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mmdvfs-v3,mtk-smi,mtk-icc-core,mtk-smi-dbg,system_heap");


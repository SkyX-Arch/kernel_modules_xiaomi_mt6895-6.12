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

KSYMTAB_FUNC(dpe_register_requests, "", "");
KSYMTAB_FUNC(dpe_unregister_requests, "", "");
KSYMTAB_FUNC(dpe_set_engine_ops, "", "");
KSYMTAB_FUNC(dpe_request_running, "", "");
KSYMTAB_FUNC(dpe_enque_request, "", "");
KSYMTAB_FUNC(dpe_request_handler, "", "");
KSYMTAB_FUNC(dpe_update_request, "", "");
KSYMTAB_FUNC(dpe_deque_request, "", "");
KSYMTAB_FUNC(dpe_request_dump, "", "");
KSYMTAB_DATA(vb2_dpe_dma_contig_memops, "_gpl", "");
KSYMTAB_FUNC(vb2_dpe_dma_contig_set_max_seg_size, "_gpl", "");
KSYMTAB_FUNC(vb2_dpe_dma_contig_clear_max_seg_size, "_gpl", "");

SYMBOL_CRC(dpe_register_requests, 0xb02becc9, "");
SYMBOL_CRC(dpe_unregister_requests, 0x17af98da, "");
SYMBOL_CRC(dpe_set_engine_ops, 0x851a747a, "");
SYMBOL_CRC(dpe_request_running, 0x3f88fb44, "");
SYMBOL_CRC(dpe_enque_request, 0x98241c3f, "");
SYMBOL_CRC(dpe_request_handler, 0xeb6bf52a, "");
SYMBOL_CRC(dpe_update_request, 0xc22f2643, "");
SYMBOL_CRC(dpe_deque_request, 0x2bc5a747, "");
SYMBOL_CRC(dpe_request_dump, 0x9c8038f4, "");
SYMBOL_CRC(vb2_dpe_dma_contig_memops, 0x9554715f, "_gpl");
SYMBOL_CRC(vb2_dpe_dma_contig_set_max_seg_size, 0x92e5d931, "_gpl");
SYMBOL_CRC(vb2_dpe_dma_contig_clear_max_seg_size, 0xc55254e2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0x999e8297, "vfree" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x037a0cba, "kfree" },
	{ 0x22df72c1, "cmdq_pkt_destroy" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0x0cc0c39c, "cmdq_pkt_write" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0xacf6ee93, "cmdq_pkt_flush_threaded" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xe2964344, "__wake_up" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xaba63322, "of_iomap" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x0bd17e97, "v4l2_device_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xb523941d, "video_device_release_empty" },
	{ 0x28b1b1f4, "video_unregister_device" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xb14c72d6, "v4l2_device_unregister" },
	{ 0x086324c4, "video_ioctl2" },
	{ 0x372d5b4a, "video_devdata" },
	{ 0x7a2b8b2c, "__video_register_device" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x234c9de3, "put_device" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc2749a62, "get_device" },
	{ 0x0d89e2f7, "dma_buf_export" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0xe5960168, "dma_map_sg_attrs" },
	{ 0xe4e72217, "dma_get_sgtable_attrs" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x1b2fa1a9,
	0xa6257a2f,
	0x999e8297,
	0x25974000,
	0x34db050b,
	0x93d6dd8c,
	0xba8fbd64,
	0xb5b54b34,
	0x608741b5,
	0xd35cce70,
	0x92acb4e9,
	0x0f05f001,
	0xd5977bfb,
	0xed55cabd,
	0xf1e3c830,
	0xecbe3c62,
	0x2b3df576,
	0x037a0cba,
	0x22df72c1,
	0xdfcaaee7,
	0x0cc0c39c,
	0x9f6801a4,
	0xacf6ee93,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0xaaae9064,
	0xfff4bd7c,
	0xe70e1ef3,
	0x75ca79b5,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xe2964344,
	0x656e4a6e,
	0xc5b6f236,
	0x12db679a,
	0x75966ec2,
	0x847188e8,
	0xaba63322,
	0x22ae5020,
	0x7c611278,
	0xe2d5255a,
	0xd4e81a21,
	0xa823db6e,
	0xea23ff02,
	0x6fe9dcd4,
	0x9b1faacb,
	0xd9a5ea54,
	0x49cd25ed,
	0x2364c85a,
	0x0bd17e97,
	0xa571f6b0,
	0xb523941d,
	0x28b1b1f4,
	0xe136f93c,
	0x92d5838e,
	0xe3ec2f2b,
	0x8b808b7f,
	0xa302b90d,
	0xcfc099c4,
	0x7682ba4e,
	0x88db9f48,
	0x2be0c009,
	0x5e515be6,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x9a85eebb,
	0xfc102d94,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0xe1d5b76c,
	0x1fec5304,
	0x0296695f,
	0xb14c72d6,
	0x086324c4,
	0x372d5b4a,
	0x7a2b8b2c,
	0x28ba7b6c,
	0x6091b333,
	0x8c03d20c,
	0x3ce4ca6f,
	0xf7ca28dd,
	0xc1514a3b,
	0x0ea3c74e,
	0x169f5b1f,
	0xef27af6b,
	0x356461c8,
	0x6fc35f2b,
	0xefe8a82e,
	0x2d3385d3,
	0xc8c85086,
	0x78cf2345,
	0x234c9de3,
	0x5a9cfed6,
	0x401167cc,
	0xc2749a62,
	0x0d89e2f7,
	0x7640bcae,
	0xb3f985a8,
	0xfbe215e4,
	0xc6970ad9,
	0xe5960168,
	0xe4e72217,
	0xdd2ef3e5,
	0xfa501412,
	0x18500fa9,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"vmalloc_noprof\0"
	"complete\0"
	"vfree\0"
	"wait_for_completion\0"
	"_raw_spin_lock_irqsave\0"
	"complete_all\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__init_swait_queue_head\0"
	"_raw_spin_unlock_irqrestore\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_put\0"
	"kfree\0"
	"cmdq_pkt_destroy\0"
	"cmdq_pkt_create\0"
	"cmdq_pkt_write\0"
	"cmdq_pkt_wfe\0"
	"cmdq_pkt_flush_threaded\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"dma_buf_get\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"__fortify_panic\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__wake_up\0"
	"snprintf\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"register_pm_notifier\0"
	"krealloc_noprof\0"
	"of_iomap\0"
	"cmdq_mbox_create\0"
	"irq_of_parse_and_map\0"
	"strcmp\0"
	"pm_runtime_enable\0"
	"of_find_device_by_node\0"
	"devm_clk_get\0"
	"class_create\0"
	"device_create\0"
	"__init_waitqueue_head\0"
	"alloc_workqueue\0"
	"tasklet_init\0"
	"v4l2_device_register\0"
	"__mutex_init\0"
	"video_device_release_empty\0"
	"video_unregister_device\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"cdev_init\0"
	"cdev_add\0"
	"__copy_overflow\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"ktime_get_ts64\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__arch_copy_to_user\0"
	"cmdq_mbox_enable\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"cmdq_mbox_disable\0"
	"__of_parse_phandle_with_args\0"
	"refcount_warn_saturate\0"
	"v4l2_device_unregister\0"
	"video_ioctl2\0"
	"video_devdata\0"
	"__video_register_device\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"destroy_workqueue\0"
	"disable_irq\0"
	"platform_get_irq\0"
	"free_irq\0"
	"tasklet_kill\0"
	"device_destroy\0"
	"class_destroy\0"
	"rtc_time64_to_tm\0"
	"platform_driver_unregister\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"sg_free_table\0"
	"dma_free_attrs\0"
	"put_device\0"
	"dma_alloc_attrs\0"
	"_dev_info\0"
	"get_device\0"
	"dma_buf_export\0"
	"dma_buf_vunmap_unlocked\0"
	"sg_alloc_table\0"
	"sg_next\0"
	"dma_unmap_sg_attrs\0"
	"dma_map_sg_attrs\0"
	"dma_get_sgtable_attrs\0"
	"__dma_sync_sg_for_device\0"
	"__dma_sync_sg_for_cpu\0"
	"dma_buf_vmap_unlocked\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-cmdq-drv-ext");


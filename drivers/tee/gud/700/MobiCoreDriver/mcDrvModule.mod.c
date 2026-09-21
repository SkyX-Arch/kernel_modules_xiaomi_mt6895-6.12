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

KSYMTAB_FUNC(mc_open_device, "", "");
KSYMTAB_FUNC(mc_close_device, "", "");
KSYMTAB_FUNC(mc_open_session, "", "");
KSYMTAB_FUNC(mc_open_trustlet, "", "");
KSYMTAB_FUNC(mc_close_session, "", "");
KSYMTAB_FUNC(mc_notify, "", "");
KSYMTAB_FUNC(mc_wait_notification, "", "");
KSYMTAB_FUNC(mc_malloc_wsm, "", "");
KSYMTAB_FUNC(mc_free_wsm, "", "");
KSYMTAB_FUNC(mc_map, "", "");
KSYMTAB_FUNC(mc_unmap, "", "");
KSYMTAB_FUNC(mc_get_session_error_code, "", "");
KSYMTAB_FUNC(tt_ffa_memory_lend, "", "");
KSYMTAB_FUNC(tt_ffa_memory_reclaim, "", "");
KSYMTAB_FUNC(get_tee_ffa_dev, "", "");
KSYMTAB_FUNC(teec_initialize_context, "", "");
KSYMTAB_FUNC(teec_finalize_context, "", "");
KSYMTAB_FUNC(teec_open_session, "", "");
KSYMTAB_FUNC(teec_invoke_command, "", "");
KSYMTAB_FUNC(teec_close_session, "", "");
KSYMTAB_FUNC(teec_register_shared_memory, "", "");
KSYMTAB_FUNC(teec_allocate_shared_memory, "", "");
KSYMTAB_FUNC(teec_release_shared_memory, "", "");
KSYMTAB_FUNC(teec_request_cancellation, "", "");
KSYMTAB_FUNC(teec_tt_lend_shared_memory, "", "");

SYMBOL_CRC(mc_open_device, 0x4f4c4ece, "");
SYMBOL_CRC(mc_close_device, 0xae33f2aa, "");
SYMBOL_CRC(mc_open_session, 0x5628fc79, "");
SYMBOL_CRC(mc_open_trustlet, 0xa7282df8, "");
SYMBOL_CRC(mc_close_session, 0xadb96d11, "");
SYMBOL_CRC(mc_notify, 0xbd49b14c, "");
SYMBOL_CRC(mc_wait_notification, 0xe3ab07f4, "");
SYMBOL_CRC(mc_malloc_wsm, 0x44799845, "");
SYMBOL_CRC(mc_free_wsm, 0x6ceea419, "");
SYMBOL_CRC(mc_map, 0x5cfc9343, "");
SYMBOL_CRC(mc_unmap, 0x611892de, "");
SYMBOL_CRC(mc_get_session_error_code, 0x522a8c41, "");
SYMBOL_CRC(tt_ffa_memory_lend, 0x505ad9ae, "");
SYMBOL_CRC(tt_ffa_memory_reclaim, 0xc770db68, "");
SYMBOL_CRC(get_tee_ffa_dev, 0x9f9d0e40, "");
SYMBOL_CRC(teec_initialize_context, 0x616044b3, "");
SYMBOL_CRC(teec_finalize_context, 0xbab5fb69, "");
SYMBOL_CRC(teec_open_session, 0x3e78947b, "");
SYMBOL_CRC(teec_invoke_command, 0x01eb7c1b, "");
SYMBOL_CRC(teec_close_session, 0x3c2be607, "");
SYMBOL_CRC(teec_register_shared_memory, 0xebbb1cad, "");
SYMBOL_CRC(teec_allocate_shared_memory, 0x5a4d53ec, "");
SYMBOL_CRC(teec_release_shared_memory, 0xf7165c3c, "");
SYMBOL_CRC(teec_request_cancellation, 0x65018172, "");
SYMBOL_CRC(teec_tt_lend_shared_memory, 0x8a0995e6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x999e8297, "vfree" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x04482cdb, "__refrigerator" },
	{ 0x0454d867, "freezing_slow_path" },
	{ 0xa6257a2f, "complete" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x037a0cba, "kfree" },
	{ 0x5420b005, "get_task_mm" },
	{ 0xff275d94, "mmput" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0617db4, "wait_for_completion_state" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3700a11e, "default_llseek" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xcb456737, "__kthread_init_worker" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x00148653, "vsnprintf" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x6510de94, "debugfs_create_u32" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x2f0e6ee4, "sg_miter_start" },
	{ 0x919aa393, "sg_miter_next" },
	{ 0xb5008503, "sg_miter_stop" },
	{ 0x3355da1c, "down_read" },
	{ 0x6b50e951, "up_read" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd7d01741, "vmalloc_to_page" },
	{ 0xe3e03ee0, "release_pages" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3ebbc7f7, "pin_user_pages" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xd352f45d, "unpin_user_page" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x01000e51, "schedule" },
	{ 0xf24361b2, "kstrtol_from_user" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdf6c3c57, "d_path" },
	{ 0x19a8a15b, "crypto_alloc_shash" },
	{ 0xaddc295f, "crypto_shash_update" },
	{ 0xb82883c9, "crypto_shash_final" },
	{ 0xe87ba5ee, "crypto_destroy_tfm" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x999e8297,
	0xd5977bfb,
	0xed55cabd,
	0x401167cc,
	0xf9a482f9,
	0xb4ce05a5,
	0xa571f6b0,
	0xa302b90d,
	0xbee3ddd5,
	0x75ca79b5,
	0x88db9f48,
	0x2be0c009,
	0x608741b5,
	0x04482cdb,
	0x0454d867,
	0xa6257a2f,
	0x2e3bcce2,
	0x9a85eebb,
	0x0f05f001,
	0xd73653c4,
	0x037a0cba,
	0x5420b005,
	0xff275d94,
	0x0296695f,
	0x9a835040,
	0xe17134b6,
	0x476b165a,
	0xa916b694,
	0x7e19152a,
	0xefe8a82e,
	0x1b2fa1a9,
	0xe94986d6,
	0x4e870156,
	0x656e4a6e,
	0xb0617db4,
	0x25974000,
	0x3700a11e,
	0x716425b7,
	0xccf69887,
	0xcb456737,
	0xba0aee2e,
	0x955b0e2e,
	0xce5bc4d0,
	0xb39378cc,
	0x4302d0eb,
	0xa4f72277,
	0x9c81ceff,
	0x19b76060,
	0x9688de8b,
	0xe4bbc1dd,
	0x00148653,
	0x847188e8,
	0xba860d3c,
	0xf3cdc3c6,
	0x12db679a,
	0xe136f93c,
	0x5cf4d4de,
	0xb7c7d237,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0x6091b333,
	0xcfc099c4,
	0x9b1faacb,
	0x28ba7b6c,
	0x169f5b1f,
	0xef27af6b,
	0x6fc35f2b,
	0xf02aa937,
	0x6510de94,
	0x4a3ad70e,
	0x7f02188f,
	0x8f14d45b,
	0x2f0e6ee4,
	0x919aa393,
	0xb5008503,
	0x3355da1c,
	0x6b50e951,
	0xc31db0ce,
	0xd7d01741,
	0xe3e03ee0,
	0xaaae9064,
	0xfff4bd7c,
	0xe70e1ef3,
	0xecbe3c62,
	0x2b3df576,
	0x52c5c991,
	0x3ebbc7f7,
	0xf1e3c830,
	0xd352f45d,
	0x47a915f1,
	0x24f00fda,
	0xd9051672,
	0x3e54ac69,
	0xe2964344,
	0x7c611278,
	0xce2840e7,
	0xd9a5ea54,
	0xc1514a3b,
	0xf5a94b83,
	0x9ec6ca96,
	0x1edb69d6,
	0x92d5838e,
	0x20463df4,
	0x7726dda9,
	0xc3055d20,
	0x482d47c8,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x01000e51,
	0xf24361b2,
	0x017de3d5,
	0x15ba50a6,
	0xc5b6f236,
	0x2d3385d3,
	0x56470118,
	0x8d522714,
	0x2469810f,
	0xdf6c3c57,
	0x19a8a15b,
	0xaddc295f,
	0xb82883c9,
	0xe87ba5ee,
	0x4829a47e,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vfree\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_dev_info\0"
	"msleep\0"
	"_dev_err\0"
	"__mutex_init\0"
	"cdev_init\0"
	"vzalloc_noprof\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__init_swait_queue_head\0"
	"__refrigerator\0"
	"freezing_slow_path\0"
	"complete\0"
	"wait_for_completion_interruptible\0"
	"__arch_copy_to_user\0"
	"mem_alloc_profiling_key\0"
	"freezer_active\0"
	"kfree\0"
	"get_task_mm\0"
	"mmput\0"
	"refcount_warn_saturate\0"
	"__list_del_entry_valid_or_report\0"
	"__kmalloc_cache_noprof\0"
	"sized_strscpy\0"
	"strnlen\0"
	"__list_add_valid_or_report\0"
	"kmalloc_caches\0"
	"vmalloc_noprof\0"
	"sched_clock\0"
	"debugfs_create_file\0"
	"snprintf\0"
	"wait_for_completion_state\0"
	"wait_for_completion\0"
	"default_llseek\0"
	"kthread_queue_work\0"
	"get_free_pages_noprof\0"
	"__kthread_init_worker\0"
	"kthread_create_on_node\0"
	"kthread_worker_fn\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"free_pages\0"
	"_dev_notice\0"
	"simple_read_from_buffer\0"
	"kstrtouint_from_user\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"vsnprintf\0"
	"krealloc_noprof\0"
	"dev_set_name\0"
	"of_find_compatible_node\0"
	"__platform_driver_register\0"
	"of_property_read_variable_u32_array\0"
	"debugfs_create_dir\0"
	"debugfs_remove\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"unregister_chrdev_region\0"
	"cdev_add\0"
	"device_create\0"
	"cdev_del\0"
	"device_destroy\0"
	"class_destroy\0"
	"platform_driver_unregister\0"
	"wait_for_completion_interruptible_timeout\0"
	"debugfs_create_u32\0"
	"wait_for_completion_timeout\0"
	"__msecs_to_jiffies\0"
	"get_zeroed_page_noprof\0"
	"sg_miter_start\0"
	"sg_miter_next\0"
	"sg_miter_stop\0"
	"down_read\0"
	"up_read\0"
	"is_vmalloc_addr\0"
	"vmalloc_to_page\0"
	"release_pages\0"
	"dma_buf_get\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_put\0"
	"__kmalloc_noprof\0"
	"pin_user_pages\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"unpin_user_page\0"
	"_dev_warn\0"
	"set_cpus_allowed_ptr\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"__wake_up\0"
	"irq_of_parse_and_map\0"
	"irq_set_irq_wake\0"
	"__init_waitqueue_head\0"
	"free_irq\0"
	"__init_rwsem\0"
	"ktime_get_real_ts64\0"
	"ktime_get_raw_ts64\0"
	"request_threaded_irq\0"
	"wait_for_completion_killable\0"
	"irq_get_irq_data\0"
	"usleep_range_state\0"
	"blocking_notifier_call_chain\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"schedule\0"
	"kstrtol_from_user\0"
	"nr_cpu_ids\0"
	"jiffies\0"
	"queue_work_on\0"
	"system_wq\0"
	"__warn_printk\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"d_path\0"
	"crypto_alloc_shash\0"
	"crypto_shash_update\0"
	"crypto_shash_final\0"
	"crypto_destroy_tfm\0"
	"memcpy\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


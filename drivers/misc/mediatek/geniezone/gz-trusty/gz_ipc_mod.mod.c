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

KSYMTAB_FUNC(gz_tipc_create_channel, "", "");
KSYMTAB_FUNC(gz_tipc_chan_get_rxbuf, "", "");
KSYMTAB_FUNC(gz_tipc_chan_put_rxbuf, "", "");
KSYMTAB_FUNC(gz_tipc_chan_get_txbuf_timeout, "", "");
KSYMTAB_FUNC(gz_tipc_chan_put_txbuf, "", "");
KSYMTAB_FUNC(gz_tipc_chan_queue_msg, "", "");
KSYMTAB_FUNC(gz_tipc_chan_connect, "", "");
KSYMTAB_FUNC(gz_tipc_chan_shutdown, "", "");
KSYMTAB_FUNC(gz_tipc_chan_destroy, "", "");
KSYMTAB_FUNC(gz_port_lookup_tid, "", "");
KSYMTAB_FUNC(gz_tipc_k_connect, "", "");
KSYMTAB_FUNC(gz_tipc_k_disconnect, "", "");
KSYMTAB_FUNC(gz_tipc_k_read, "", "");
KSYMTAB_FUNC(gz_tipc_k_write, "", "");
KSYMTAB_FUNC(gz_tipc_set_default_cpumask, "", "");

SYMBOL_CRC(gz_tipc_create_channel, 0x3c99dde3, "");
SYMBOL_CRC(gz_tipc_chan_get_rxbuf, 0x7d404897, "");
SYMBOL_CRC(gz_tipc_chan_put_rxbuf, 0x505ce0ce, "");
SYMBOL_CRC(gz_tipc_chan_get_txbuf_timeout, 0x1264b8fe, "");
SYMBOL_CRC(gz_tipc_chan_put_txbuf, 0x234f21dc, "");
SYMBOL_CRC(gz_tipc_chan_queue_msg, 0x9cae4f69, "");
SYMBOL_CRC(gz_tipc_chan_connect, 0x72d4db79, "");
SYMBOL_CRC(gz_tipc_chan_shutdown, 0x0047e956, "");
SYMBOL_CRC(gz_tipc_chan_destroy, 0xfa4f00ef, "");
SYMBOL_CRC(gz_port_lookup_tid, 0x21d401c4, "");
SYMBOL_CRC(gz_tipc_k_connect, 0xb973eb22, "");
SYMBOL_CRC(gz_tipc_k_disconnect, 0x5d1025f8, "");
SYMBOL_CRC(gz_tipc_k_read, 0x9b85dfa4, "");
SYMBOL_CRC(gz_tipc_k_write, 0x2f144c88, "");
SYMBOL_CRC(gz_tipc_set_default_cpumask, 0x6d2c9b84, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe2964344, "__wake_up" },
	{ 0x85df9b6c, "strsep" },
	{ 0x56470118, "__warn_printk" },
	{ 0x037a0cba, "kfree" },
	{ 0x5a921311, "strncmp" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a862714, "gz_trusty_enqueue_nop" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x401167cc, "_dev_info" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb62587b5, "idr_alloc" },
	{ 0x0896c3e8, "alloc_pages_exact_noprof" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x5f351fb5, "virtqueue_add_outbuf" },
	{ 0xb48fb6b1, "virtqueue_kick_prepare" },
	{ 0xc695e671, "virtqueue_notify" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9166fada, "strncpy" },
	{ 0x841a578a, "idr_remove" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x7792044f, "__register_virtio_driver" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73843ec9, "gz_trusty_get_api_version" },
	{ 0x196cc5f2, "virtqueue_get_vring_size" },
	{ 0xc890cb17, "virtqueue_add_inbuf" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7e91c17e, "virtqueue_get_buf" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x01000e51, "schedule" },
	{ 0x59ff91c4, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69154b0e, "_copy_from_iter" },
	{ 0x0229f72d, "strncpy_from_user" },
	{ 0x8426f15b, "idr_for_each" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x31d7c7bc, "idr_find" },
	{ 0xacb58177, "get_smcnr_dev" },
	{ 0xb90a7bc4, "gz_trusty_fast_call32" },
	{ 0x9334b635, "virtqueue_detach_unused_buf" },
	{ 0x2e526de0, "idr_destroy" },
	{ 0xf83334d6, "unregister_virtio_driver" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x6da467cb,
	0x92997ed8,
	0xe2d5255a,
	0xe2964344,
	0x85df9b6c,
	0x56470118,
	0x037a0cba,
	0x5a921311,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x5a862714,
	0x43b0c9c3,
	0x401167cc,
	0x0296695f,
	0xa571f6b0,
	0xe17134b6,
	0x52c5c991,
	0xb62587b5,
	0x0896c3e8,
	0xeb44339a,
	0xd0654aba,
	0x4afb2238,
	0xb308c97d,
	0x37110088,
	0x43babd19,
	0x5f351fb5,
	0xb48fb6b1,
	0xc695e671,
	0x819bebd4,
	0x75ca79b5,
	0x9166fada,
	0x841a578a,
	0x7e19152a,
	0x98cf60b3,
	0xd9a5ea54,
	0x608741b5,
	0xa6257a2f,
	0xf02aa937,
	0x7f02188f,
	0x9a835040,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0x7792044f,
	0xef27af6b,
	0x6091b333,
	0x656e4a6e,
	0x73843ec9,
	0x196cc5f2,
	0xc890cb17,
	0x9f46ced8,
	0x5a6368f5,
	0xc8c7229e,
	0x7e91c17e,
	0xa302b90d,
	0xcfc099c4,
	0x9b1faacb,
	0x28ba7b6c,
	0x01000e51,
	0x59ff91c4,
	0x88db9f48,
	0x69154b0e,
	0x0229f72d,
	0x8426f15b,
	0x169f5b1f,
	0x31d7c7bc,
	0xacb58177,
	0xb90a7bc4,
	0x9334b635,
	0x2e526de0,
	0xf83334d6,
	0xde7ece30,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xac594e02,
	0xa65c6def,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"pfn_is_map_memory\0"
	"_printk\0"
	"strcmp\0"
	"__wake_up\0"
	"strsep\0"
	"__warn_printk\0"
	"kfree\0"
	"strncmp\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"gz_trusty_enqueue_nop\0"
	"preempt_schedule\0"
	"_dev_info\0"
	"refcount_warn_saturate\0"
	"__mutex_init\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"idr_alloc\0"
	"alloc_pages_exact_noprof\0"
	"free_pages_exact\0"
	"woken_wake_function\0"
	"add_wait_queue\0"
	"wait_woken\0"
	"remove_wait_queue\0"
	"sg_init_one\0"
	"virtqueue_add_outbuf\0"
	"virtqueue_kick_prepare\0"
	"virtqueue_notify\0"
	"mutex_is_locked\0"
	"__fortify_panic\0"
	"strncpy\0"
	"idr_remove\0"
	"__list_add_valid_or_report\0"
	"strlen\0"
	"__init_waitqueue_head\0"
	"__init_swait_queue_head\0"
	"complete\0"
	"wait_for_completion_interruptible_timeout\0"
	"__msecs_to_jiffies\0"
	"__list_del_entry_valid_or_report\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"__register_virtio_driver\0"
	"class_destroy\0"
	"unregister_chrdev_region\0"
	"snprintf\0"
	"gz_trusty_get_api_version\0"
	"virtqueue_get_vring_size\0"
	"virtqueue_add_inbuf\0"
	"__sw_hweight64\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"virtqueue_get_buf\0"
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"cdev_del\0"
	"schedule\0"
	"_copy_to_iter\0"
	"__check_object_size\0"
	"_copy_from_iter\0"
	"strncpy_from_user\0"
	"idr_for_each\0"
	"device_destroy\0"
	"idr_find\0"
	"get_smcnr_dev\0"
	"gz_trusty_fast_call32\0"
	"virtqueue_detach_unused_buf\0"
	"idr_destroy\0"
	"unregister_virtio_driver\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"__cpu_online_mask\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_trusty_mod");


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
	{ 0x92997ed8, "_printk" },
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x037a0cba, "kfree" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xa5e3a421, "gz_trusty_dump_systrace" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xacb58177, "get_smcnr_dev" },
	{ 0x5f012538, "gz_trusty_std_call32" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x0896c3e8, "alloc_pages_exact_noprof" },
	{ 0xf8d836b7, "gz_trusty_call_notifier_register" },
	{ 0x99517bf8, "gz_trusty_callback_notifier_register" },
	{ 0x701625e1, "gz_trusty_callback_notifier_unregister" },
	{ 0x0f9a2a8f, "gz_trusty_call_notifier_unregister" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9166fada, "strncpy" },
	{ 0xd42e8662, "register_virtio_device" },
	{ 0xc1b75bae, "vring_new_virtqueue" },
	{ 0x73843ec9, "gz_trusty_get_api_version" },
	{ 0x5a862714, "gz_trusty_enqueue_nop" },
	{ 0x1a4c3154, "gz_trusty_dequeue_nop" },
	{ 0x5111ed84, "vring_del_virtqueue" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xab9aa850, "unregister_virtio_device" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xb90a7bc4, "gz_trusty_fast_call32" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0x401167cc,
	0xa571f6b0,
	0x037a0cba,
	0xe136f93c,
	0xe17134b6,
	0x52c5c991,
	0xa6257a2f,
	0x24f00fda,
	0x7e688f68,
	0xc23eef6c,
	0x656e4a6e,
	0xba0aee2e,
	0xce5bc4d0,
	0xb3f7646e,
	0xf02aa937,
	0xa5e3a421,
	0xd5977bfb,
	0xed55cabd,
	0xacb58177,
	0x5f012538,
	0xff05fa13,
	0x608741b5,
	0x4a3ad70e,
	0x0896c3e8,
	0xf8d836b7,
	0x99517bf8,
	0x701625e1,
	0x0f9a2a8f,
	0xeb44339a,
	0xaf7cb74b,
	0x9166fada,
	0xd42e8662,
	0xc1b75bae,
	0x73843ec9,
	0x5a862714,
	0x1a4c3154,
	0x5111ed84,
	0x7e19152a,
	0xab9aa850,
	0x9a835040,
	0xb90a7bc4,
	0x93d6dd8c,
	0xb39378cc,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xde7ece30,
	0x017de3d5,
	0xaf56600a,
	0x9688de8b,
	0xe4bbc1dd,
	0xac594e02,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"_dev_info\0"
	"__mutex_init\0"
	"kfree\0"
	"of_property_read_variable_u32_array\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"complete\0"
	"set_cpus_allowed_ptr\0"
	"sched_setscheduler\0"
	"set_user_nice\0"
	"snprintf\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_should_stop\0"
	"wait_for_completion_interruptible_timeout\0"
	"gz_trusty_dump_systrace\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"get_smcnr_dev\0"
	"gz_trusty_std_call32\0"
	"vring_interrupt\0"
	"__init_swait_queue_head\0"
	"wait_for_completion_timeout\0"
	"alloc_pages_exact_noprof\0"
	"gz_trusty_call_notifier_register\0"
	"gz_trusty_callback_notifier_register\0"
	"gz_trusty_callback_notifier_unregister\0"
	"gz_trusty_call_notifier_unregister\0"
	"free_pages_exact\0"
	"of_property_read_string\0"
	"strncpy\0"
	"register_virtio_device\0"
	"vring_new_virtqueue\0"
	"gz_trusty_get_api_version\0"
	"gz_trusty_enqueue_nop\0"
	"gz_trusty_dequeue_nop\0"
	"vring_del_virtqueue\0"
	"__list_add_valid_or_report\0"
	"unregister_virtio_device\0"
	"__list_del_entry_valid_or_report\0"
	"gz_trusty_fast_call32\0"
	"complete_all\0"
	"kthread_stop\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_possible_mask\0"
	"nr_cpu_ids\0"
	"arm64_use_ng_mappings\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_trusty_mod");

MODULE_ALIAS("of:N*T*Candroid,trusty-virtio-v1");
MODULE_ALIAS("of:N*T*Candroid,trusty-virtio-v1C*");
MODULE_ALIAS("of:N*T*Candroid,nebula-virtio-v1");
MODULE_ALIAS("of:N*T*Candroid,nebula-virtio-v1C*");

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

KSYMTAB_FUNC(coordinate_map, "_gpl", "");
KSYMTAB_FUNC(hf_device_register, "_gpl", "");
KSYMTAB_FUNC(hf_device_unregister, "_gpl", "");
KSYMTAB_FUNC(hf_manager_create, "_gpl", "");
KSYMTAB_FUNC(hf_manager_destroy, "_gpl", "");
KSYMTAB_FUNC(hf_device_register_manager_create, "_gpl", "");
KSYMTAB_FUNC(hf_device_unregister_manager_destroy, "_gpl", "");
KSYMTAB_FUNC(hf_client_create, "_gpl", "");
KSYMTAB_FUNC(hf_client_destroy, "_gpl", "");
KSYMTAB_FUNC(hf_client_find_sensor, "_gpl", "");
KSYMTAB_FUNC(hf_client_get_sensor_info, "_gpl", "");
KSYMTAB_FUNC(hf_client_request_sensor_cali, "_gpl", "");
KSYMTAB_FUNC(hf_client_control_sensor, "_gpl", "");
KSYMTAB_FUNC(hf_client_poll_sensor_timeout, "_gpl", "");
KSYMTAB_FUNC(hf_client_custom_cmd, "_gpl", "");
KSYMTAB_FUNC(hf_client_debug, "_gpl", "");
KSYMTAB_FUNC(hf_client_custom_data, "_gpl", "");

SYMBOL_CRC(coordinate_map, 0xe4f2a2cd, "_gpl");
SYMBOL_CRC(hf_device_register, 0x08fb92ef, "_gpl");
SYMBOL_CRC(hf_device_unregister, 0x29adad6f, "_gpl");
SYMBOL_CRC(hf_manager_create, 0x8d99bea7, "_gpl");
SYMBOL_CRC(hf_manager_destroy, 0xdb019033, "_gpl");
SYMBOL_CRC(hf_device_register_manager_create, 0xbdaa9167, "_gpl");
SYMBOL_CRC(hf_device_unregister_manager_destroy, 0x3037d83d, "_gpl");
SYMBOL_CRC(hf_client_create, 0x1bb16758, "_gpl");
SYMBOL_CRC(hf_client_destroy, 0x0353d07d, "_gpl");
SYMBOL_CRC(hf_client_find_sensor, 0x9319ccd5, "_gpl");
SYMBOL_CRC(hf_client_get_sensor_info, 0x99be2da4, "_gpl");
SYMBOL_CRC(hf_client_request_sensor_cali, 0x25559bd9, "_gpl");
SYMBOL_CRC(hf_client_control_sensor, 0xce455cc8, "_gpl");
SYMBOL_CRC(hf_client_poll_sensor_timeout, 0x646d8dac, "_gpl");
SYMBOL_CRC(hf_client_custom_cmd, 0x2b775186, "_gpl");
SYMBOL_CRC(hf_client_debug, 0xb381c96c, "_gpl");
SYMBOL_CRC(hf_client_custom_data, 0xc1a002cc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x4956fb44, "kthread_create_worker" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0x92997ed8, "_printk" },
	{ 0x037a0cba, "kfree" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0xe67f6a84, "kthread_flush_work" },
	{ 0x9f999712, "kthread_destroy_worker" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x66431d1b, "__register_chrdev" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0xea82d349,
	0x2364c85a,
	0x4956fb44,
	0xc0744ae3,
	0x92997ed8,
	0x037a0cba,
	0x102fe6de,
	0x0ea3c74e,
	0xe67f6a84,
	0x9f999712,
	0xd9a5ea54,
	0x34db050b,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x7e19152a,
	0x9a835040,
	0xe17134b6,
	0x52c5c991,
	0x716425b7,
	0x9d2ab8ac,
	0xc4f0da12,
	0x135bb7ec,
	0xf5edea2e,
	0xe2964344,
	0x75ca79b5,
	0x476b165a,
	0xa916b694,
	0xd35cce70,
	0xc0b7c197,
	0x6fe9dcd4,
	0x9b1faacb,
	0xa2fa95a0,
	0x169f5b1f,
	0xef27af6b,
	0xa571f6b0,
	0x66431d1b,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x6ac61a02,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0xbcab6ee6,
	0x6bc3fbc0,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"hrtimer_init\0"
	"tasklet_init\0"
	"kthread_create_worker\0"
	"sched_setscheduler_nocheck\0"
	"_printk\0"
	"kfree\0"
	"hrtimer_cancel\0"
	"tasklet_kill\0"
	"kthread_flush_work\0"
	"kthread_destroy_worker\0"
	"__init_waitqueue_head\0"
	"_raw_spin_lock_irqsave\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kthread_queue_work\0"
	"__tasklet_schedule\0"
	"ktime_get_with_offset\0"
	"hrtimer_forward\0"
	"___ratelimit\0"
	"__wake_up\0"
	"__fortify_panic\0"
	"sized_strscpy\0"
	"strnlen\0"
	"_raw_spin_unlock_irqrestore\0"
	"hrtimer_start_range_ns\0"
	"class_create\0"
	"device_create\0"
	"proc_create_data\0"
	"device_destroy\0"
	"class_destroy\0"
	"__mutex_init\0"
	"__register_chrdev\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"nonseekable_open\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"sscanf\0"
	"__unregister_chrdev\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(conap_scp_send_message, "", "");
KSYMTAB_FUNC(conap_scp_is_drv_ready, "", "");
KSYMTAB_FUNC(conap_scp_is_ready, "", "");
KSYMTAB_FUNC(conap_scp_register_drv, "", "");
KSYMTAB_FUNC(conap_scp_unregister_drv, "", "");

SYMBOL_CRC(conap_scp_send_message, 0x8a607195, "");
SYMBOL_CRC(conap_scp_is_drv_ready, 0x775b618a, "");
SYMBOL_CRC(conap_scp_is_ready, 0x8d1e88ae, "");
SYMBOL_CRC(conap_scp_register_drv, 0x6c8ff7c9, "");
SYMBOL_CRC(conap_scp_unregister_drv, 0xf18f6a20, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa6257a2f, "complete" },
	{ 0xbc532593, "mutex_lock_killable" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x0cccfb7c, "connectivity_register_state_notifier" },
	{ 0x5c88ea49, "connectivity_register_dfd_handler" },
	{ 0x999e8297, "vfree" },
	{ 0x5e35749a, "connectivity_unregister_dfd_handler" },
	{ 0x971abb3d, "connectivity_unregister_state_notifier" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2aeafb62, "is_scp_ready" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x9cb5d1d2, "scp_A_register_notify" },
	{ 0x758ef887, "mtk_ipi_unregister" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0x7aa804ca, "scp_get_reserve_mem_size" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x037a0cba, "kfree" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xe2964344,
	0x4a3ad70e,
	0xf9a482f9,
	0x34db050b,
	0xba0aee2e,
	0xd9a5ea54,
	0xce5bc4d0,
	0xb39378cc,
	0x75ca79b5,
	0x608741b5,
	0xd35cce70,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xa6257a2f,
	0xbc532593,
	0xed55cabd,
	0x12db679a,
	0xa571f6b0,
	0x1b2fa1a9,
	0x0cccfb7c,
	0x5c88ea49,
	0x999e8297,
	0x5e35749a,
	0x971abb3d,
	0x6fc35f2b,
	0x0f05f001,
	0x2aeafb62,
	0x9ec6ca96,
	0x65bb94f6,
	0x9cb5d1d2,
	0x758ef887,
	0x4a353d20,
	0x8d21adca,
	0x7aa804ca,
	0xcd709e2e,
	0x66bcb0f8,
	0xe136f93c,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0x28ba7b6c,
	0x6091b333,
	0x037a0cba,
	0x169f5b1f,
	0xef27af6b,
	0xe17134b6,
	0xefe8a82e,
	0x9a835040,
	0x7e19152a,
	0xd5977bfb,
	0xc5b6f236,
	0x6626afca,
	0xcf2a6966,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x5d112304,
	0xedc03953,
	0x40863ba1,
	0x2d3385d3,
	0xaf56600a,
	0xa65c6def,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__wake_up\0"
	"wait_for_completion_timeout\0"
	"msleep\0"
	"_raw_spin_lock_irqsave\0"
	"kthread_create_on_node\0"
	"__init_waitqueue_head\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"__fortify_panic\0"
	"__init_swait_queue_head\0"
	"_raw_spin_unlock_irqrestore\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"complete\0"
	"mutex_lock_killable\0"
	"mutex_unlock\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"vmalloc_noprof\0"
	"connectivity_register_state_notifier\0"
	"connectivity_register_dfd_handler\0"
	"vfree\0"
	"connectivity_unregister_dfd_handler\0"
	"connectivity_unregister_state_notifier\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"is_scp_ready\0"
	"ktime_get_real_ts64\0"
	"mtk_ipi_register\0"
	"scp_A_register_notify\0"
	"mtk_ipi_unregister\0"
	"mtk_ipi_send\0"
	"scp_get_reserve_mem_virt\0"
	"scp_get_reserve_mem_size\0"
	"scp_ipidev\0"
	"of_property_read_u64\0"
	"of_property_read_variable_u32_array\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"kfree\0"
	"device_destroy\0"
	"class_destroy\0"
	"__kmalloc_cache_noprof\0"
	"kmalloc_caches\0"
	"__list_del_entry_valid_or_report\0"
	"__list_add_valid_or_report\0"
	"mutex_lock\0"
	"queue_work_on\0"
	"down\0"
	"up\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__memcpy_fromio\0"
	"iounmap\0"
	"ioremap_prot\0"
	"system_wq\0"
	"arm64_use_ng_mappings\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "connadp,scp,mtk_tinysys_ipi");


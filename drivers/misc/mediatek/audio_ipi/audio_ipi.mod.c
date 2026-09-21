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

KSYMTAB_FUNC(audio_task_register_callback, "_gpl", "");
KSYMTAB_FUNC(audio_send_ipi_msg, "_gpl", "");
KSYMTAB_FUNC(audio_send_ipi_buf_to_dsp, "_gpl", "");
KSYMTAB_FUNC(audio_recv_ipi_buf_from_dsp, "_gpl", "");
KSYMTAB_FUNC(dsp_send_msg_to_queue, "", "");
KSYMTAB_FUNC(dsp_dispatch_ipi_handler_to_queue, "", "");
KSYMTAB_FUNC(is_audio_scp_support, "_gpl", "");
KSYMTAB_FUNC(is_audio_task_dsp_ready, "_gpl", "");
KSYMTAB_FUNC(audio_get_dsp_id, "_gpl", "");

SYMBOL_CRC(audio_task_register_callback, 0x8fca6f04, "_gpl");
SYMBOL_CRC(audio_send_ipi_msg, 0x4862e694, "_gpl");
SYMBOL_CRC(audio_send_ipi_buf_to_dsp, 0xd04d732f, "_gpl");
SYMBOL_CRC(audio_recv_ipi_buf_from_dsp, 0xa8d0aa80, "_gpl");
SYMBOL_CRC(dsp_send_msg_to_queue, 0x03c80f16, "");
SYMBOL_CRC(dsp_dispatch_ipi_handler_to_queue, 0xfe5ac472, "");
SYMBOL_CRC(is_audio_scp_support, 0x19621fd4, "_gpl");
SYMBOL_CRC(is_audio_task_dsp_ready, 0x25486d23, "_gpl");
SYMBOL_CRC(audio_get_dsp_id, 0xbdcba786, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xc2283c34, "adsp_register_feature" },
	{ 0xbaea5c8b, "adsp_deregister_feature" },
	{ 0x1a1da70b, "reset_hal_feature_table" },
	{ 0x34bba055, "adsp_register_notify" },
	{ 0x25758a2c, "misc_register" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xa3e095e2, "adsp_ipi_registration" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ab79e90, "hook_ipi_queue_send_msg_handler" },
	{ 0xdebf52c0, "hook_ipi_queue_recv_msg_hanlder" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xc6b23801, "adsp_send_message" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0xd0d3f0a4, "gen_pool_avail" },
	{ 0x2464da17, "gen_pool_size" },
	{ 0x7d0ba682, "gen_pool_virt_to_phys" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x060ba97c, "gen_pool_free_owner" },
	{ 0x1f1f4d4f, "get_adsp_core_total" },
	{ 0xd82032f9, "is_adsp_ready" },
	{ 0xe4e1ac4c, "adsp_get_reserve_mem_size" },
	{ 0x9b6ae0ff, "adsp_get_reserve_mem_virt" },
	{ 0x14bff320, "adsp_get_reserve_mem_phys" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xc2283c34,
	0xbaea5c8b,
	0x1a1da70b,
	0x34bba055,
	0x25758a2c,
	0xd5977bfb,
	0xed55cabd,
	0x1b2fa1a9,
	0x999e8297,
	0x75ca79b5,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0xc3246938,
	0x0f05f001,
	0xa3e095e2,
	0x34db050b,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xd9a5ea54,
	0xd35cce70,
	0xc3055d20,
	0x8ddd8aad,
	0xf5edea2e,
	0x656e4a6e,
	0x4ab79e90,
	0xdebf52c0,
	0x49cd25ed,
	0x9166fc03,
	0x8c03d20c,
	0xc5b6f236,
	0x7f02188f,
	0xba0aee2e,
	0xce5bc4d0,
	0xc6b23801,
	0x7e688f68,
	0xb3f7646e,
	0x18b48e28,
	0xced0f4d4,
	0x6c224cda,
	0xd0d3f0a4,
	0x2464da17,
	0x7d0ba682,
	0xbefa51a3,
	0x2b593aa8,
	0x060ba97c,
	0x1f1f4d4f,
	0xd82032f9,
	0xe4e1ac4c,
	0x9b6ae0ff,
	0x14bff320,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"adsp_register_feature\0"
	"adsp_deregister_feature\0"
	"reset_hal_feature_table\0"
	"adsp_register_notify\0"
	"misc_register\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"misc_deregister\0"
	"mem_alloc_profiling_key\0"
	"adsp_ipi_registration\0"
	"_raw_spin_lock_irqsave\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__init_waitqueue_head\0"
	"_raw_spin_unlock_irqrestore\0"
	"usleep_range_state\0"
	"schedule_timeout\0"
	"___ratelimit\0"
	"snprintf\0"
	"hook_ipi_queue_send_msg_handler\0"
	"hook_ipi_queue_recv_msg_hanlder\0"
	"alloc_workqueue\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"queue_work_on\0"
	"__msecs_to_jiffies\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"adsp_send_message\0"
	"sched_setscheduler\0"
	"kthread_should_stop\0"
	"__memset_io\0"
	"gen_pool_create\0"
	"gen_pool_destroy\0"
	"gen_pool_avail\0"
	"gen_pool_size\0"
	"gen_pool_virt_to_phys\0"
	"gen_pool_add_owner\0"
	"gen_pool_alloc_algo_owner\0"
	"gen_pool_free_owner\0"
	"get_adsp_core_total\0"
	"is_adsp_ready\0"
	"adsp_get_reserve_mem_size\0"
	"adsp_get_reserve_mem_virt\0"
	"adsp_get_reserve_mem_phys\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "adsp");


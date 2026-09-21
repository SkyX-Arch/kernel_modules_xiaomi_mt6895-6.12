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

KSYMTAB_FUNC(gz_trusty_fast_call32, "", "");
KSYMTAB_FUNC(gz_trusty_std_call32, "", "");
KSYMTAB_FUNC(gz_trusty_call_notifier_register, "", "");
KSYMTAB_FUNC(gz_trusty_call_notifier_unregister, "", "");
KSYMTAB_FUNC(gz_trusty_callback_notifier_register, "", "");
KSYMTAB_FUNC(gz_trusty_callback_notifier_unregister, "", "");
KSYMTAB_FUNC(gz_trusty_adjust_task_attr, "", "");
KSYMTAB_FUNC(gz_trusty_dump_systrace, "", "");
KSYMTAB_FUNC(gz_trusty_version_str_get, "", "");
KSYMTAB_FUNC(gz_trusty_get_api_version, "", "");
KSYMTAB_FUNC(gz_trusty_enqueue_nop, "", "");
KSYMTAB_FUNC(gz_trusty_dequeue_nop, "", "");
KSYMTAB_FUNC(get_smcnr_dev, "", "");

SYMBOL_CRC(gz_trusty_fast_call32, 0xb90a7bc4, "");
SYMBOL_CRC(gz_trusty_std_call32, 0x5f012538, "");
SYMBOL_CRC(gz_trusty_call_notifier_register, 0xf8d836b7, "");
SYMBOL_CRC(gz_trusty_call_notifier_unregister, 0x0f9a2a8f, "");
SYMBOL_CRC(gz_trusty_callback_notifier_register, 0x99517bf8, "");
SYMBOL_CRC(gz_trusty_callback_notifier_unregister, 0x701625e1, "");
SYMBOL_CRC(gz_trusty_adjust_task_attr, 0xed4fa68a, "");
SYMBOL_CRC(gz_trusty_dump_systrace, 0xa5e3a421, "");
SYMBOL_CRC(gz_trusty_version_str_get, 0x498fdaa1, "");
SYMBOL_CRC(gz_trusty_get_api_version, 0x73843ec9, "");
SYMBOL_CRC(gz_trusty_enqueue_nop, 0x5a862714, "");
SYMBOL_CRC(gz_trusty_dequeue_nop, 0x1a4c3154, "");
SYMBOL_CRC(get_smcnr_dev, 0xacb58177, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6257a2f, "complete" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x96848186, "scnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xfba03a3f, "atomic_notifier_call_chain" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xf45608d2, "of_platform_populate" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0xd4cd43a6, "device_for_each_child" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x77dde9c2, "__devm_alloc_percpu" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0x8c6ba271, "kthread_bind" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x999e8297, "vfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0xcb456737, "__kthread_init_worker" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0xbc704fe1, "kthread_flush_worker" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x27ef3d1e, "platform_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0x56470118,
	0xa6257a2f,
	0xed55cabd,
	0x83b96232,
	0xc866487b,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x96848186,
	0x34db050b,
	0x43b0c9c3,
	0xf93aae46,
	0xfba03a3f,
	0x401167cc,
	0xf9a482f9,
	0xc3055d20,
	0x4a3ad70e,
	0x92997ed8,
	0x7e19152a,
	0xd35cce70,
	0x9a835040,
	0x12db679a,
	0xa571f6b0,
	0xf5a94b83,
	0xf45608d2,
	0x11d6167b,
	0xd4cd43a6,
	0xe136f93c,
	0xc8c7229e,
	0x608741b5,
	0xe922b94d,
	0x5a6368f5,
	0x77dde9c2,
	0xba0aee2e,
	0xc23eef6c,
	0x8c6ba271,
	0xce5bc4d0,
	0x999e8297,
	0xb3f7646e,
	0xf02aa937,
	0x24f00fda,
	0xcb456737,
	0x955b0e2e,
	0x7e688f68,
	0x716425b7,
	0xbc704fe1,
	0xb39378cc,
	0x27ef3d1e,
	0x6fc35f2b,
	0x280f9f14,
	0xde7ece30,
	0xac594e02,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"__warn_printk\0"
	"complete\0"
	"mutex_unlock\0"
	"atomic_notifier_chain_register\0"
	"atomic_notifier_chain_unregister\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"scnprintf\0"
	"_raw_spin_lock_irqsave\0"
	"preempt_schedule\0"
	"__arm_smccc_smc\0"
	"atomic_notifier_call_chain\0"
	"_dev_info\0"
	"msleep\0"
	"usleep_range_state\0"
	"wait_for_completion_timeout\0"
	"_printk\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_del_entry_valid_or_report\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"__init_rwsem\0"
	"of_platform_populate\0"
	"device_remove_file\0"
	"device_for_each_child\0"
	"of_property_read_variable_u32_array\0"
	"devm_kmalloc\0"
	"__init_swait_queue_head\0"
	"device_create_file\0"
	"devm_kfree\0"
	"__devm_alloc_percpu\0"
	"kthread_create_on_node\0"
	"set_user_nice\0"
	"kthread_bind\0"
	"wake_up_process\0"
	"vfree\0"
	"kthread_should_stop\0"
	"wait_for_completion_interruptible_timeout\0"
	"set_cpus_allowed_ptr\0"
	"__kthread_init_worker\0"
	"kthread_worker_fn\0"
	"sched_setscheduler\0"
	"kthread_queue_work\0"
	"kthread_flush_worker\0"
	"kthread_stop\0"
	"platform_device_unregister\0"
	"platform_driver_unregister\0"
	"__per_cpu_offset\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


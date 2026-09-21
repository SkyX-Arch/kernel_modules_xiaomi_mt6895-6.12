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

KSYMTAB_FUNC(register_low_battery_notify, "", "");
KSYMTAB_FUNC(register_low_battery_mbrain_cb, "", "");
KSYMTAB_FUNC(lbat_set_ppb_mode, "", "");
KSYMTAB_FUNC(lbat_set_hpt_mode, "", "");

SYMBOL_CRC(register_low_battery_notify, 0xaa643b64, "");
SYMBOL_CRC(register_low_battery_mbrain_cb, 0x00309102, "");
SYMBOL_CRC(lbat_set_ppb_mode, 0x2e6a3d66, "");
SYMBOL_CRC(lbat_set_hpt_mode, 0x1e4766cf, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x31fd0509, "lbat_user_modify_thd_ext_locked" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x56470118, "__warn_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x21cab34a, "__hw_protection_shutdown" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x58f975ae, "lvsys_register_notifier" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x17f66ffe, "lvsys_modify_thd" },
	{ 0x037a0cba, "kfree" },
	{ 0xa5eb60f7, "dump_lvsys_thd" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x3225e8d9, "lbat_user_register_ext" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6b201699, "of_find_property" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x401167cc, "_dev_info" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0x656e4a6e,
	0xa4f72277,
	0xd5977bfb,
	0xed55cabd,
	0x31fd0509,
	0xfdf04ae0,
	0xebdbd5bd,
	0xb6e871b8,
	0xe37ad0cf,
	0xe2d5255a,
	0xc38c83b8,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x56470118,
	0x75ca79b5,
	0xa3783864,
	0xf70e4a4d,
	0x21cab34a,
	0x82ee90dc,
	0x12db679a,
	0x725b192d,
	0x58f975ae,
	0xe922b94d,
	0xe136f93c,
	0xc8c7229e,
	0x17f66ffe,
	0x037a0cba,
	0xa5eb60f7,
	0xe17134b6,
	0x52c5c991,
	0x1ed4c5e6,
	0xa079425d,
	0x5a6368f5,
	0x3225e8d9,
	0xc5b6f236,
	0x6b201699,
	0xbcab6ee6,
	0x401167cc,
	0x3b1b6444,
	0xd9a5ea54,
	0xc6f46339,
	0xba0aee2e,
	0xce5bc4d0,
	0xb39378cc,
	0x1fec5304,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xb3f7646e,
	0x6fc35f2b,
	0x15ba50a6,
	0xac594e02,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"snprintf\0"
	"_dev_notice\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"lbat_user_modify_thd_ext_locked\0"
	"power_supply_get_by_name\0"
	"devm_power_supply_get_by_phandle\0"
	"power_supply_get_property\0"
	"power_supply_set_property\0"
	"strcmp\0"
	"mod_timer\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"__warn_printk\0"
	"__fortify_panic\0"
	"bpf_trace_run2\0"
	"preempt_schedule_notrace\0"
	"__hw_protection_shutdown\0"
	"timer_delete_sync\0"
	"__platform_driver_register\0"
	"power_supply_reg_notifier\0"
	"lvsys_register_notifier\0"
	"device_create_file\0"
	"of_property_read_variable_u32_array\0"
	"devm_kmalloc\0"
	"lvsys_modify_thd\0"
	"kfree\0"
	"dump_lvsys_thd\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_find_node_by_name\0"
	"of_property_count_elems_of_size\0"
	"devm_kfree\0"
	"lbat_user_register_ext\0"
	"queue_work_on\0"
	"of_find_property\0"
	"sscanf\0"
	"_dev_info\0"
	"of_get_property\0"
	"__init_waitqueue_head\0"
	"init_timer_key\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"__of_parse_phandle_with_args\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"kthread_should_stop\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pmic_lbat_service,pmic_lvsys_notify");

MODULE_ALIAS("of:N*T*Cmediatek,low_battery_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,low_battery_throttlingC*");

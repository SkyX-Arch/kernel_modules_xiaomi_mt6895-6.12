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

KSYMTAB_FUNC(mtk_get_pf_ctrl_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_set_pf_ctrl_enable, "_gpl", "");

SYMBOL_CRC(mtk_get_pf_ctrl_enable, 0x97e76f3e, "_gpl");
SYMBOL_CRC(mtk_set_pf_ctrl_enable, 0xb874067b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x92997ed8, "_printk" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x8f77e638, "get_cpu_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x252c7c6e, "dev_pm_opp_find_freq_floor" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x037a0cba, "kfree" },
	{ 0x661601de, "sprint_symbol" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xa24657e7, "freq_qos_add_notifier" },
	{ 0x954c46b1, "freq_qos_remove_notifier" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xb4028d67, "proc_create" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xcb863826, "__tracepoint_android_vh_freq_qos_add_request" },
	{ 0x1fbb4648, "__tracepoint_android_vh_freq_qos_update_request" },
	{ 0x5e5be17e, "__tracepoint_android_vh_freq_qos_remove_request" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x173a86aa, "perf_event_read_local" },
	{ 0x0c78be04, "perf_event_create_kernel_counter" },
	{ 0xfa9b0394, "perf_event_enable" },
	{ 0x5e4dd101, "perf_event_disable" },
	{ 0x27d28863, "perf_event_release_kernel" },
	{ 0x173e2075, "seq_write" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1ed4c5e6,
	0x92997ed8,
	0xa823db6e,
	0x3d0ffa5c,
	0x7518b5f0,
	0xa2fa95a0,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0xf8bd87ca,
	0xcd6f7bae,
	0x9f46ced8,
	0xccf69887,
	0x8f77e638,
	0x4302d0eb,
	0xbcab6ee6,
	0x252c7c6e,
	0x28ed2847,
	0x20d81059,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x40863ba1,
	0xde7ece30,
	0x0f05f001,
	0xaf56600a,
	0x037a0cba,
	0x661601de,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x34db050b,
	0xd35cce70,
	0x476b165a,
	0x98cf60b3,
	0xa916b694,
	0xa24657e7,
	0x954c46b1,
	0x805e2dd2,
	0xb4028d67,
	0x37befc70,
	0x15ba50a6,
	0xefe8a82e,
	0x017de3d5,
	0xcb863826,
	0x1fbb4648,
	0x5e5be17e,
	0xe0da6e4a,
	0x57c959d2,
	0xf5edea2e,
	0x49cd25ed,
	0xc6f46339,
	0xffeedf6a,
	0x8c03d20c,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0x1c7a01a8,
	0xf70e4a4d,
	0xd5977bfb,
	0xcec49a87,
	0xed55cabd,
	0x42ad47ad,
	0xe136f93c,
	0xa04f945a,
	0xc5b6f236,
	0x2f2c95c4,
	0x18fb2caf,
	0xe94986d6,
	0xf93aae46,
	0x173a86aa,
	0x0c78be04,
	0xfa9b0394,
	0x5e4dd101,
	0x27d28863,
	0x173e2075,
	0xac594e02,
	0x2d3385d3,
	0x280f9f14,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"of_find_node_by_name\0"
	"_printk\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"__sw_hweight64\0"
	"get_free_pages_noprof\0"
	"get_cpu_device\0"
	"free_pages\0"
	"sscanf\0"
	"dev_pm_opp_find_freq_floor\0"
	"down_write\0"
	"up_write\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"ioremap_prot\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"arm64_use_ng_mappings\0"
	"kfree\0"
	"sprint_symbol\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"sized_strscpy\0"
	"strlen\0"
	"strnlen\0"
	"freq_qos_add_notifier\0"
	"freq_qos_remove_notifier\0"
	"tracepoint_probe_register\0"
	"proc_create\0"
	"jiffies_to_msecs\0"
	"jiffies\0"
	"kmalloc_caches\0"
	"nr_cpu_ids\0"
	"__tracepoint_android_vh_freq_qos_add_request\0"
	"__tracepoint_android_vh_freq_qos_update_request\0"
	"__tracepoint_android_vh_freq_qos_remove_request\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"___ratelimit\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"destroy_workqueue\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"bpf_trace_run4\0"
	"preempt_schedule_notrace\0"
	"mutex_lock\0"
	"cancel_delayed_work_sync\0"
	"mutex_unlock\0"
	"queue_delayed_work_on\0"
	"of_property_read_variable_u32_array\0"
	"cpus_read_lock\0"
	"queue_work_on\0"
	"flush_work\0"
	"cpus_read_unlock\0"
	"sched_clock\0"
	"__arm_smccc_smc\0"
	"perf_event_read_local\0"
	"perf_event_create_kernel_counter\0"
	"perf_event_enable\0"
	"perf_event_disable\0"
	"perf_event_release_kernel\0"
	"seq_write\0"
	"__cpu_online_mask\0"
	"system_wq\0"
	"__per_cpu_offset\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


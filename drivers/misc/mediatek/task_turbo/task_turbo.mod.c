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

KSYMTAB_DATA(tt_vip_enable_p, "", "");
KSYMTAB_FUNC(launch_turbo_enable, "", "");

SYMBOL_CRC(tt_vip_enable_p, 0x4562d8ed, "");
SYMBOL_CRC(launch_turbo_enable, 0x9ce215b6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xfc28f8db, "get_vip_task_prio" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1f4ba756, "param_get_uint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf23a2c23, "param_set_uint" },
	{ 0x92997ed8, "_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0x42880ac6, "set_task_vvip_and_throttle" },
	{ 0x645be3ff, "unset_task_vvip" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc0b10b8e, "param_get_int" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x9cfca0cf, "__task_rq_lock" },
	{ 0xc9175738, "update_rq_clock" },
	{ 0x5aa39baf, "deactivate_task" },
	{ 0x0c5e04da, "activate_task" },
	{ 0xc062fead, "raw_spin_rq_unlock" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe091c977, "list_sort" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x18b1cc11, "css_next_child" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0xfd3515e0, "sched_feat_keys" },
	{ 0x85d74a37, "sysctl_util_est" },
	{ 0x54552241, "cpu_scale" },
	{ 0xf6833699, "task_turbo_select_task_rq_fair_hook" },
	{ 0xcbfa98d3, "__tracepoint_android_rvh_rtmutex_prepare_setprio" },
	{ 0xf5763c07, "__tracepoint_android_rvh_prepare_prio_fork" },
	{ 0xfdb8802e, "__tracepoint_android_rvh_finish_prio_fork" },
	{ 0xee09b3c7, "__tracepoint_android_rvh_set_user_nice" },
	{ 0x0b501f1f, "__tracepoint_android_rvh_setscheduler" },
	{ 0x4a82b1cc, "__tracepoint_android_vh_binder_transaction_init" },
	{ 0xafca6dd1, "__tracepoint_android_vh_binder_set_priority" },
	{ 0xa98d23f8, "__tracepoint_android_vh_binder_restore_priority" },
	{ 0x5130d9e6, "__tracepoint_android_vh_rwsem_init" },
	{ 0x18df1791, "__tracepoint_android_vh_rwsem_read_wait_finish" },
	{ 0x9977632d, "__tracepoint_android_vh_rwsem_write_wait_finish" },
	{ 0x32044d00, "__tracepoint_android_vh_rwsem_read_wait_start" },
	{ 0x24663cd4, "__tracepoint_android_vh_rwsem_write_wait_start" },
	{ 0x77914da1, "__tracepoint_android_vh_alter_rwsem_list_add" },
	{ 0x3dd6e8bb, "__tracepoint_android_vh_alter_futex_plist_add" },
	{ 0x1e2b324e, "__tracepoint_android_vh_cgroup_set_task" },
	{ 0xd4d36fd0, "__tracepoint_android_rvh_set_task_comm" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xdfda1e61, "root_task_group" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0xfc28f8db,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x1c7a01a8,
	0xa3783864,
	0x881d741f,
	0xf70e4a4d,
	0x1f4ba756,
	0x3b6c41ea,
	0xf23a2c23,
	0x92997ed8,
	0xba8fbd64,
	0x29161415,
	0x8d522714,
	0x0296695f,
	0xc23eef6c,
	0x42880ac6,
	0x645be3ff,
	0xe5010018,
	0x2469810f,
	0xb5b54b34,
	0xc0b10b8e,
	0xc046d25b,
	0x9cfca0cf,
	0xc9175738,
	0x5aa39baf,
	0x0c5e04da,
	0xc062fead,
	0x805e2dd2,
	0x34db050b,
	0xd35cce70,
	0x7e19152a,
	0xe2d5255a,
	0xe091c977,
	0xe17134b6,
	0x18b1cc11,
	0xee46e386,
	0x280f9f14,
	0x73caefdc,
	0xd820ab9a,
	0xac594e02,
	0x15db3b99,
	0xfd3515e0,
	0x85d74a37,
	0x54552241,
	0xf6833699,
	0xcbfa98d3,
	0xf5763c07,
	0xfdb8802e,
	0xee09b3c7,
	0x0b501f1f,
	0x4a82b1cc,
	0xafca6dd1,
	0xa98d23f8,
	0x5130d9e6,
	0x18df1791,
	0x9977632d,
	0x32044d00,
	0x24663cd4,
	0x77914da1,
	0x3dd6e8bb,
	0x1e2b324e,
	0xd4d36fd0,
	0xde7ece30,
	0xe4bc4b09,
	0x0f05f001,
	0xefe8a82e,
	0xdfda1e61,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"get_vip_task_prio\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"bpf_trace_run4\0"
	"bpf_trace_run2\0"
	"bpf_trace_run3\0"
	"preempt_schedule_notrace\0"
	"param_get_uint\0"
	"kstrtouint\0"
	"param_set_uint\0"
	"_printk\0"
	"_raw_spin_lock\0"
	"find_task_by_vpid\0"
	"__rcu_read_lock\0"
	"refcount_warn_saturate\0"
	"set_user_nice\0"
	"set_task_vvip_and_throttle\0"
	"unset_task_vvip\0"
	"__put_task_struct\0"
	"__rcu_read_unlock\0"
	"_raw_spin_unlock\0"
	"param_get_int\0"
	"android_rvh_probe_register\0"
	"__task_rq_lock\0"
	"update_rq_clock\0"
	"deactivate_task\0"
	"activate_task\0"
	"raw_spin_rq_unlock\0"
	"tracepoint_probe_register\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_add_valid_or_report\0"
	"strcmp\0"
	"list_sort\0"
	"__kmalloc_cache_noprof\0"
	"css_next_child\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"init_task\0"
	"vendor_data_pad\0"
	"__cpu_online_mask\0"
	"__cpu_active_mask\0"
	"sched_feat_keys\0"
	"sysctl_util_est\0"
	"cpu_scale\0"
	"task_turbo_select_task_rq_fair_hook\0"
	"__tracepoint_android_rvh_rtmutex_prepare_setprio\0"
	"__tracepoint_android_rvh_prepare_prio_fork\0"
	"__tracepoint_android_rvh_finish_prio_fork\0"
	"__tracepoint_android_rvh_set_user_nice\0"
	"__tracepoint_android_rvh_setscheduler\0"
	"__tracepoint_android_vh_binder_transaction_init\0"
	"__tracepoint_android_vh_binder_set_priority\0"
	"__tracepoint_android_vh_binder_restore_priority\0"
	"__tracepoint_android_vh_rwsem_init\0"
	"__tracepoint_android_vh_rwsem_read_wait_finish\0"
	"__tracepoint_android_vh_rwsem_write_wait_finish\0"
	"__tracepoint_android_vh_rwsem_read_wait_start\0"
	"__tracepoint_android_vh_rwsem_write_wait_start\0"
	"__tracepoint_android_vh_alter_rwsem_list_add\0"
	"__tracepoint_android_vh_alter_futex_plist_add\0"
	"__tracepoint_android_vh_cgroup_set_task\0"
	"__tracepoint_android_rvh_set_task_comm\0"
	"__cpu_possible_mask\0"
	"cpu_topology\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"root_task_group\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scheduler,cpufreq_sugov_ext");


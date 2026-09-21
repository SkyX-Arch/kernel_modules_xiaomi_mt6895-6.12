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

KSYMTAB_FUNC(sched_max_util_task, "", "");
KSYMTAB_FUNC(_capacity_of, "", "");
KSYMTAB_FUNC(get_cpu_util_pct, "", "");
KSYMTAB_FUNC(arch_get_nr_clusters, "", "");
KSYMTAB_FUNC(arch_get_cluster_id, "", "");
KSYMTAB_FUNC(arch_get_cluster_cpus, "", "");
KSYMTAB_FUNC(get_over_threshold, "", "");
KSYMTAB_FUNC(get_max_capacity, "", "");
KSYMTAB_FUNC(set_over_threshold, "", "");
KSYMTAB_FUNC(get_max_nr_running, "", "");
KSYMTAB_FUNC(get_max_rt_nr_running, "", "");
KSYMTAB_FUNC(get_max_vip_nr_running, "", "");
KSYMTAB_FUNC(sched_get_nr_over_thres_avg, "", "");
KSYMTAB_FUNC(policy_chg_notify, "", "");
KSYMTAB_FUNC(get_freq_qos_max_of_min, "", "");
KSYMTAB_FUNC(core_ctl_enable_policy, "", "");
KSYMTAB_DATA(wlan_cur_cpumask_req_hook, "", "");
KSYMTAB_FUNC(core_ctl_get_min_cpus, "", "");
KSYMTAB_FUNC(core_ctl_set_min_cpus, "", "");
KSYMTAB_FUNC(core_ctl_get_max_cpus, "", "");
KSYMTAB_FUNC(core_ctl_set_max_cpus, "", "");
KSYMTAB_FUNC(core_ctl_set_limit_cpus, "", "");
KSYMTAB_FUNC(core_ctl_set_offline_throttle_ms, "", "");
KSYMTAB_FUNC(core_ctl_set_boost, "", "");
KSYMTAB_FUNC(core_ctl_consider_VIP, "", "");
KSYMTAB_FUNC(core_ctl_set_not_preferred, "_gpl", "");
KSYMTAB_FUNC(core_ctl_set_up_thres, "", "");
KSYMTAB_FUNC(core_ctl_force_pause_request, "", "");
KSYMTAB_FUNC(core_ctl_force_pause_cpu, "", "");
KSYMTAB_FUNC(core_ctl_set_cpu_busy_up_thres, "", "");
KSYMTAB_FUNC(core_ctl_set_cpu_busy_down_thres, "", "");
KSYMTAB_FUNC(core_ctl_set_cpu_nr_task_thres, "", "");
KSYMTAB_FUNC(core_ctl_set_cpu_rt_nr_task_thres, "", "");
KSYMTAB_FUNC(core_ctl_set_cpu_active_loading_thres, "", "");
KSYMTAB_FUNC(core_ctl_set_freq_min_thres, "", "");
KSYMTAB_FUNC(core_ctl_notifier_register, "", "");
KSYMTAB_FUNC(core_ctl_notifier_unregister, "", "");
KSYMTAB_FUNC(core_ctl_get_policy, "", "");
KSYMTAB_DATA(calc_eff_hook, "", "");
KSYMTAB_FUNC(core_ctl_update_active_cpu, "", "");

SYMBOL_CRC(sched_max_util_task, 0x5a2a6f47, "");
SYMBOL_CRC(_capacity_of, 0xe2f61c23, "");
SYMBOL_CRC(get_cpu_util_pct, 0x1e4f0dd8, "");
SYMBOL_CRC(arch_get_nr_clusters, 0x2f6859b7, "");
SYMBOL_CRC(arch_get_cluster_id, 0x54200d9b, "");
SYMBOL_CRC(arch_get_cluster_cpus, 0x78e1ae4c, "");
SYMBOL_CRC(get_over_threshold, 0x6816e0e1, "");
SYMBOL_CRC(get_max_capacity, 0xbb04313a, "");
SYMBOL_CRC(set_over_threshold, 0x61c4bbae, "");
SYMBOL_CRC(get_max_nr_running, 0x0a061582, "");
SYMBOL_CRC(get_max_rt_nr_running, 0x767e70c5, "");
SYMBOL_CRC(get_max_vip_nr_running, 0x01a63838, "");
SYMBOL_CRC(sched_get_nr_over_thres_avg, 0x660f1b23, "");
SYMBOL_CRC(policy_chg_notify, 0xbeb8f76c, "");
SYMBOL_CRC(get_freq_qos_max_of_min, 0x9f4d5721, "");
SYMBOL_CRC(core_ctl_enable_policy, 0xb7af24b4, "");
SYMBOL_CRC(wlan_cur_cpumask_req_hook, 0x3bf3de08, "");
SYMBOL_CRC(core_ctl_get_min_cpus, 0xee9f5f4e, "");
SYMBOL_CRC(core_ctl_set_min_cpus, 0x821eb2a4, "");
SYMBOL_CRC(core_ctl_get_max_cpus, 0x0dc2e194, "");
SYMBOL_CRC(core_ctl_set_max_cpus, 0x12cf2a04, "");
SYMBOL_CRC(core_ctl_set_limit_cpus, 0xba7fb571, "");
SYMBOL_CRC(core_ctl_set_offline_throttle_ms, 0x34c6c2fe, "");
SYMBOL_CRC(core_ctl_set_boost, 0xba4235f0, "");
SYMBOL_CRC(core_ctl_consider_VIP, 0x3f16b9f4, "");
SYMBOL_CRC(core_ctl_set_not_preferred, 0x16b43354, "_gpl");
SYMBOL_CRC(core_ctl_set_up_thres, 0xb7ca3e29, "");
SYMBOL_CRC(core_ctl_force_pause_request, 0xd1029c95, "");
SYMBOL_CRC(core_ctl_force_pause_cpu, 0x2e149bab, "");
SYMBOL_CRC(core_ctl_set_cpu_busy_up_thres, 0x9cd3e2dd, "");
SYMBOL_CRC(core_ctl_set_cpu_busy_down_thres, 0xfa1b1b0b, "");
SYMBOL_CRC(core_ctl_set_cpu_nr_task_thres, 0x6bb7e0d0, "");
SYMBOL_CRC(core_ctl_set_cpu_rt_nr_task_thres, 0x9478f47c, "");
SYMBOL_CRC(core_ctl_set_cpu_active_loading_thres, 0xb85b4d32, "");
SYMBOL_CRC(core_ctl_set_freq_min_thres, 0x2a1f161a, "");
SYMBOL_CRC(core_ctl_notifier_register, 0xc097be88, "");
SYMBOL_CRC(core_ctl_notifier_unregister, 0x1b785c5b, "");
SYMBOL_CRC(core_ctl_get_policy, 0x98d6cae9, "");
SYMBOL_CRC(calc_eff_hook, 0xc054ce22, "");
SYMBOL_CRC(core_ctl_update_active_cpu, 0xfb17c067, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb43f9365, "ktime_get" },
	{ 0xf884a651, "mtk_cpu_util_cfs_boost" },
	{ 0x0a7da89b, "mtk_effective_cpu_util_total" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x0ee9c67d, "sum_num_vip_in_cpu" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x02a8552a, "bus_get_dev_root" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x43af29f5, "kobject_uevent" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xa24657e7, "freq_qos_add_notifier" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x39528681, "synchronize_srcu" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x954c46b1, "freq_qos_remove_notifier" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xee46e386, "runqueues" },
	{ 0xfd3515e0, "sched_feat_keys" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x54552241, "cpu_scale" },
	{ 0x85d74a37, "sysctl_util_est" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xabf45b2f, "cpu_subsys" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x3616f081, "__tracepoint_android_rvh_enqueue_task_fair" },
	{ 0x6cce527a, "__tracepoint_android_rvh_dequeue_task_fair" },
	{ 0x22476bf4, "__tracepoint_pelt_se_tp" },
	{ 0xf94af032, "__tracepoint_sched_update_nr_running_tp" },
	{ 0xdc29fcbb, "tracepoint_srcu" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x4d0015e2, "cpu_hotplug_disable" },
	{ 0xf6c8dc62, "cpu_hotplug_enable" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0x369f9403, "bpf_trace_run8" },
	{ 0xcc1cb855, "bpf_trace_run12" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0x1f4ba756, "param_get_uint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49f6d9f4, "get_top_grp_aware" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xfeec946b, "sched_pause_cpu" },
	{ 0xd28b628b, "sched_resume_cpu" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0x73a99429, "get_cpu_temp" },
	{ 0xfba03a3f, "atomic_notifier_call_chain" },
	{ 0x2a8d72aa, "pd_freq2opp" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x183e1569, "register_pt_isolate_cb" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x7b491092, "resume_cpus" },
	{ 0x8f77e638, "get_cpu_device" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0x2064d9c7, "kobject_init" },
	{ 0xc0a02c99, "kobject_add" },
	{ 0x18c317c2, "em_cpu_get" },
	{ 0xd422dc84, "pd_get_opp_capacity_legacy" },
	{ 0x01000e51, "schedule" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x81a6d354, "__cpu_pause_mask" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x08c73112, "__tracepoint_android_vh_scheduler_tick" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb43f9365,
	0xf884a651,
	0x0a7da89b,
	0x34db050b,
	0xe94986d6,
	0x0ee9c67d,
	0x92997ed8,
	0x656e4a6e,
	0xd35cce70,
	0xba8fbd64,
	0xb5b54b34,
	0x02a8552a,
	0x2d405891,
	0x62b33777,
	0x3bd2c4ce,
	0x43af29f5,
	0xf8bd87ca,
	0xa24657e7,
	0xcd6f7bae,
	0x52c5c991,
	0xc046d25b,
	0x805e2dd2,
	0x7aba1ef6,
	0x39528681,
	0x6091797f,
	0x954c46b1,
	0xde7ece30,
	0x280f9f14,
	0xee46e386,
	0xfd3515e0,
	0xe4bc4b09,
	0xac594e02,
	0x54552241,
	0x85d74a37,
	0x73caefdc,
	0xd820ab9a,
	0xabf45b2f,
	0x0f05f001,
	0x3616f081,
	0x6cce527a,
	0x22476bf4,
	0xf94af032,
	0xdc29fcbb,
	0xe0da6e4a,
	0x57c959d2,
	0x4d0015e2,
	0xf6c8dc62,
	0x83b96232,
	0xc866487b,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x1c7a01a8,
	0x369f9403,
	0xcc1cb855,
	0x6bd4d5dc,
	0xa3783864,
	0xe3c00b45,
	0x3d10f515,
	0x1f4ba756,
	0x3b6c41ea,
	0x86a50ae0,
	0xffeedf6a,
	0x49f6d9f4,
	0x7f02188f,
	0x7c173634,
	0x9f46ced8,
	0xf70e4a4d,
	0xce5bc4d0,
	0xfeec946b,
	0xd28b628b,
	0x9fe899b7,
	0x73a99429,
	0xfba03a3f,
	0x2a8d72aa,
	0x7518b5f0,
	0xb4028d67,
	0x183e1569,
	0xb66eb73f,
	0x7b491092,
	0x8f77e638,
	0xba0aee2e,
	0xc0744ae3,
	0x2064d9c7,
	0xc0a02c99,
	0x18c317c2,
	0xd422dc84,
	0x01000e51,
	0xb3f7646e,
	0xbcab6ee6,
	0x96848186,
	0x8427cc7b,
	0x4b750f53,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x2be0c009,
	0xaab744b7,
	0xb2fb935e,
	0x81a6d354,
	0x017de3d5,
	0x15db3b99,
	0x47884890,
	0x08c73112,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ktime_get\0"
	"mtk_cpu_util_cfs_boost\0"
	"mtk_effective_cpu_util_total\0"
	"_raw_spin_lock_irqsave\0"
	"sched_clock\0"
	"sum_num_vip_in_cpu\0"
	"_printk\0"
	"snprintf\0"
	"_raw_spin_unlock_irqrestore\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"bus_get_dev_root\0"
	"kobject_create_and_add\0"
	"sysfs_create_group\0"
	"kobject_put\0"
	"kobject_uevent\0"
	"cpufreq_cpu_get\0"
	"freq_qos_add_notifier\0"
	"cpufreq_cpu_put\0"
	"__kmalloc_noprof\0"
	"android_rvh_probe_register\0"
	"tracepoint_probe_register\0"
	"tracepoint_probe_unregister\0"
	"synchronize_srcu\0"
	"synchronize_rcu\0"
	"freq_qos_remove_notifier\0"
	"__cpu_possible_mask\0"
	"__per_cpu_offset\0"
	"runqueues\0"
	"sched_feat_keys\0"
	"cpu_topology\0"
	"__cpu_online_mask\0"
	"cpu_scale\0"
	"sysctl_util_est\0"
	"init_task\0"
	"vendor_data_pad\0"
	"cpu_subsys\0"
	"mem_alloc_profiling_key\0"
	"__tracepoint_android_rvh_enqueue_task_fair\0"
	"__tracepoint_android_rvh_dequeue_task_fair\0"
	"__tracepoint_pelt_se_tp\0"
	"__tracepoint_sched_update_nr_running_tp\0"
	"tracepoint_srcu\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"cpu_hotplug_disable\0"
	"cpu_hotplug_enable\0"
	"atomic_notifier_chain_register\0"
	"atomic_notifier_chain_unregister\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run4\0"
	"bpf_trace_run8\0"
	"bpf_trace_run12\0"
	"bpf_trace_run6\0"
	"bpf_trace_run2\0"
	"bpf_trace_run5\0"
	"bpf_trace_run7\0"
	"param_get_uint\0"
	"kstrtouint\0"
	"mod_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"get_top_grp_aware\0"
	"__msecs_to_jiffies\0"
	"__bitmap_complement\0"
	"__sw_hweight64\0"
	"preempt_schedule_notrace\0"
	"wake_up_process\0"
	"sched_pause_cpu\0"
	"sched_resume_cpu\0"
	"get_cpu_idle_time\0"
	"get_cpu_temp\0"
	"atomic_notifier_call_chain\0"
	"pd_freq2opp\0"
	"proc_mkdir\0"
	"proc_create\0"
	"register_pt_isolate_cb\0"
	"__cpuhp_setup_state\0"
	"resume_cpus\0"
	"get_cpu_device\0"
	"kthread_create_on_node\0"
	"sched_setscheduler_nocheck\0"
	"kobject_init\0"
	"kobject_add\0"
	"em_cpu_get\0"
	"pd_get_opp_capacity_legacy\0"
	"schedule\0"
	"kthread_should_stop\0"
	"sscanf\0"
	"scnprintf\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__arch_copy_from_user\0"
	"__cpuhp_remove_state\0"
	"param_ops_int\0"
	"__cpu_pause_mask\0"
	"nr_cpu_ids\0"
	"__cpu_active_mask\0"
	"system_power_efficient_wq\0"
	"__tracepoint_android_vh_scheduler_tick\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cpufreq_sugov_ext,scheduler,thermal_interface,mtk_cpu_power_throttling");


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

KSYMTAB_FUNC(exp_trace_turbo_vip, "", "");
KSYMTAB_DATA(wi_add_tgid_hook, "", "");
KSYMTAB_DATA(wi_del_tgid_hook, "", "");
KSYMTAB_DATA(disable_tt_vip_hook, "", "");
KSYMTAB_DATA(turn_on_tgd_hook, "", "");
KSYMTAB_DATA(turn_off_tgd_hook, "", "");
KSYMTAB_DATA(set_tgd_hook, "", "");
KSYMTAB_DATA(unset_tgd_hook, "", "");
KSYMTAB_DATA(set_td_hook, "", "");
KSYMTAB_DATA(unset_td_hook, "", "");
KSYMTAB_DATA(set_tdtgd_hook, "", "");
KSYMTAB_DATA(unset_tdtgd_hook, "", "");
KSYMTAB_FUNC(enforce_ct_to_vip, "_gpl", "");
KSYMTAB_FUNC(do_enable_binder_vipServer, "_gpl", "");
KSYMTAB_FUNC(do_set_server_vip, "_gpl", "");
KSYMTAB_FUNC(get_tgid_util, "", "");
KSYMTAB_FUNC(is_util_overhigh, "", "");
KSYMTAB_DATA(tt_vip_algo_hook, "", "");
KSYMTAB_DATA(is_target_found_hook, "", "");
KSYMTAB_DATA(binder_start_vip_inherit_hook, "", "");
KSYMTAB_DATA(binder_stop_vip_inherit_hook, "", "");
KSYMTAB_FUNC(set_task_priority, "", "");
KSYMTAB_FUNC(vip_loom_select_cfg_apply, "", "");
KSYMTAB_FUNC(vip_loom_flt_cfg_apply, "", "");

SYMBOL_CRC(exp_trace_turbo_vip, 0xed789a62, "");
SYMBOL_CRC(wi_add_tgid_hook, 0xe919695d, "");
SYMBOL_CRC(wi_del_tgid_hook, 0x230a5ef1, "");
SYMBOL_CRC(disable_tt_vip_hook, 0x53106594, "");
SYMBOL_CRC(turn_on_tgd_hook, 0x471d26c5, "");
SYMBOL_CRC(turn_off_tgd_hook, 0x4a89477b, "");
SYMBOL_CRC(set_tgd_hook, 0xf014b67c, "");
SYMBOL_CRC(unset_tgd_hook, 0x7141309c, "");
SYMBOL_CRC(set_td_hook, 0x371a7a13, "");
SYMBOL_CRC(unset_td_hook, 0xb1e93017, "");
SYMBOL_CRC(set_tdtgd_hook, 0x60c50783, "");
SYMBOL_CRC(unset_tdtgd_hook, 0x49eeabf0, "");
SYMBOL_CRC(enforce_ct_to_vip, 0x2a25e433, "_gpl");
SYMBOL_CRC(do_enable_binder_vipServer, 0x9184e830, "_gpl");
SYMBOL_CRC(do_set_server_vip, 0x32e303f0, "_gpl");
SYMBOL_CRC(get_tgid_util, 0xb46fc7f8, "");
SYMBOL_CRC(is_util_overhigh, 0xcbf8942a, "");
SYMBOL_CRC(tt_vip_algo_hook, 0x7aac6fde, "");
SYMBOL_CRC(is_target_found_hook, 0xdd6b4d91, "");
SYMBOL_CRC(binder_start_vip_inherit_hook, 0xcb72228e, "");
SYMBOL_CRC(binder_stop_vip_inherit_hook, 0xbf9784cf, "");
SYMBOL_CRC(set_task_priority, 0xf14b35a5, "");
SYMBOL_CRC(vip_loom_select_cfg_apply, 0x306b2421, "");
SYMBOL_CRC(vip_loom_flt_cfg_apply, 0xb5531779, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x037a0cba, "kfree" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f6827d2, "unset_task_basic_vip" },
	{ 0xa94ae869, "get_cpu_gear_uclamp_max_capacity" },
	{ 0xfc28f8db, "get_vip_task_prio" },
	{ 0xdfb60db3, "set_task_basic_vip" },
	{ 0xafe83224, "input_register_handler" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0x45b8368e, "set_task_priority_based_vip_and_throttle" },
	{ 0x42880ac6, "set_task_vvip_and_throttle" },
	{ 0x9efa19aa, "unset_task_priority_based_vip" },
	{ 0x645be3ff, "unset_task_vvip" },
	{ 0x8843d485, "prio_is_vip" },
	{ 0x7204ae53, "flt_get_mode" },
	{ 0xf6b46438, "flt_set_mode" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7ec06d5c, "param_get_charp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc0b10b8e, "param_get_int" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9ce215b6, "launch_turbo_enable" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x48fe8fe2, "uclamp_eff_value" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xced05c33, "input_register_handle" },
	{ 0x449ef54e, "input_open_device" },
	{ 0x28a50858, "input_unregister_handle" },
	{ 0xff3cf972, "input_close_device" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x7fc43003, "min_freq_scale" },
	{ 0x587f5732, "max_freq_scale" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x81a6d354, "__cpu_pause_mask" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0x54552241, "cpu_scale" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x4562d8ed, "tt_vip_enable_p" },
	{ 0xf0238aae, "task_turbo_enforce_ct_to_vip_fp" },
	{ 0xb5ac3479, "task_turbo_do_set_binder_uclamp_param" },
	{ 0x9964ec65, "task_turbo_do_unset_binder_uclamp_param" },
	{ 0xcba290ee, "task_turbo_do_binder_uclamp_stuff" },
	{ 0xaf586016, "task_turbo_do_enable_binder_uclamp_inheritance" },
	{ 0x3e3c11f3, "vip_engine_set_vip_ctrl_node_cs" },
	{ 0xeec5a1b3, "vip_engine_unset_vip_ctrl_node_cs" },
	{ 0xe7548810, "vip_engine_set_vip_ctrl_node_sbe" },
	{ 0xfee10878, "vip_engine_unset_vip_ctrl_node_sbe" },
	{ 0xab91878e, "vip_loom_select_task_rq_fair_hook" },
	{ 0xf5763c07, "__tracepoint_android_rvh_prepare_prio_fork" },
	{ 0xafca6dd1, "__tracepoint_android_vh_binder_set_priority" },
	{ 0xa98d23f8, "__tracepoint_android_vh_binder_restore_priority" },
	{ 0x08c73112, "__tracepoint_android_vh_scheduler_tick" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0xd5977bfb,
	0xed55cabd,
	0x34db050b,
	0x037a0cba,
	0x29161415,
	0x92997ed8,
	0x4f6827d2,
	0xa94ae869,
	0xfc28f8db,
	0xdfb60db3,
	0xafe83224,
	0xc0744ae3,
	0xc23eef6c,
	0x45b8368e,
	0x42880ac6,
	0x9efa19aa,
	0x645be3ff,
	0x8843d485,
	0x7204ae53,
	0xf6b46438,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x98cf60b3,
	0x2d2c902f,
	0xc61f330d,
	0x6bd4d5dc,
	0xa3783864,
	0x881d741f,
	0x1c7a01a8,
	0xe80494d6,
	0x3d10f515,
	0xf70e4a4d,
	0x7ec06d5c,
	0xbcab6ee6,
	0xc0b10b8e,
	0x3b6c41ea,
	0xc5b6f236,
	0xb43f9365,
	0x9ce215b6,
	0xe17134b6,
	0x52c5c991,
	0x48fe8fe2,
	0xd9346889,
	0x7e19152a,
	0xd35cce70,
	0x9a835040,
	0x8d522714,
	0x2469810f,
	0x0296695f,
	0xe5010018,
	0x8c8569cb,
	0x7c173634,
	0x9f46ced8,
	0xced05c33,
	0x449ef54e,
	0x28a50858,
	0xff3cf972,
	0x12db679a,
	0x49cd25ed,
	0xe136f93c,
	0xc046d25b,
	0x805e2dd2,
	0x9fe899b7,
	0x7aba1ef6,
	0x8c03d20c,
	0xcd91b127,
	0xee46e386,
	0x280f9f14,
	0x7fc43003,
	0x587f5732,
	0xac594e02,
	0x81a6d354,
	0xb2fb935e,
	0xde7ece30,
	0x0f05f001,
	0xefe8a82e,
	0x73caefdc,
	0xd820ab9a,
	0x54552241,
	0x017de3d5,
	0x4562d8ed,
	0xf0238aae,
	0xb5ac3479,
	0x9964ec65,
	0xcba290ee,
	0xaf586016,
	0x3e3c11f3,
	0xeec5a1b3,
	0xe7548810,
	0xfee10878,
	0xab91878e,
	0xf5763c07,
	0xafca6dd1,
	0xa98d23f8,
	0x08c73112,
	0x15db3b99,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_raw_spin_lock_irqsave\0"
	"kfree\0"
	"find_task_by_vpid\0"
	"_printk\0"
	"unset_task_basic_vip\0"
	"get_cpu_gear_uclamp_max_capacity\0"
	"get_vip_task_prio\0"
	"set_task_basic_vip\0"
	"input_register_handler\0"
	"sched_setscheduler_nocheck\0"
	"set_user_nice\0"
	"set_task_priority_based_vip_and_throttle\0"
	"set_task_vvip_and_throttle\0"
	"unset_task_priority_based_vip\0"
	"unset_task_vvip\0"
	"prio_is_vip\0"
	"flt_get_mode\0"
	"flt_set_mode\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"strlen\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run6\0"
	"bpf_trace_run2\0"
	"bpf_trace_run3\0"
	"bpf_trace_run4\0"
	"bpf_trace_run1\0"
	"bpf_trace_run7\0"
	"preempt_schedule_notrace\0"
	"param_get_charp\0"
	"sscanf\0"
	"param_get_int\0"
	"kstrtouint\0"
	"queue_work_on\0"
	"ktime_get\0"
	"launch_turbo_enable\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"uclamp_eff_value\0"
	"sched_setattr_nocheck\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_del_entry_valid_or_report\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"kstrtoint\0"
	"__bitmap_complement\0"
	"__sw_hweight64\0"
	"input_register_handle\0"
	"input_open_device\0"
	"input_unregister_handle\0"
	"input_close_device\0"
	"__platform_driver_register\0"
	"alloc_workqueue\0"
	"of_property_read_variable_u32_array\0"
	"android_rvh_probe_register\0"
	"tracepoint_probe_register\0"
	"get_cpu_idle_time\0"
	"tracepoint_probe_unregister\0"
	"destroy_workqueue\0"
	"system_highpri_wq\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"min_freq_scale\0"
	"max_freq_scale\0"
	"__cpu_online_mask\0"
	"__cpu_pause_mask\0"
	"param_ops_int\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"init_task\0"
	"vendor_data_pad\0"
	"cpu_scale\0"
	"nr_cpu_ids\0"
	"tt_vip_enable_p\0"
	"task_turbo_enforce_ct_to_vip_fp\0"
	"task_turbo_do_set_binder_uclamp_param\0"
	"task_turbo_do_unset_binder_uclamp_param\0"
	"task_turbo_do_binder_uclamp_stuff\0"
	"task_turbo_do_enable_binder_uclamp_inheritance\0"
	"vip_engine_set_vip_ctrl_node_cs\0"
	"vip_engine_unset_vip_ctrl_node_cs\0"
	"vip_engine_set_vip_ctrl_node_sbe\0"
	"vip_engine_unset_vip_ctrl_node_sbe\0"
	"vip_loom_select_task_rq_fair_hook\0"
	"__tracepoint_android_rvh_prepare_prio_fork\0"
	"__tracepoint_android_vh_binder_set_priority\0"
	"__tracepoint_android_vh_binder_restore_priority\0"
	"__tracepoint_android_vh_scheduler_tick\0"
	"__cpu_active_mask\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scheduler,cpufreq_sugov_ext,task_turbo,mtk_fpsgo_v8,mtk_sbe");


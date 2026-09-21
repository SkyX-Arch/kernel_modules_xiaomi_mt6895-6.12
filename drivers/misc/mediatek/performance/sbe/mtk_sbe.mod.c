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

KSYMTAB_DATA(task_turbo_do_set_binder_uclamp_param, "_gpl", "");
KSYMTAB_DATA(task_turbo_do_unset_binder_uclamp_param, "_gpl", "");
KSYMTAB_DATA(task_turbo_do_binder_uclamp_stuff, "_gpl", "");
KSYMTAB_DATA(task_turbo_do_enable_binder_uclamp_inheritance, "_gpl", "");
KSYMTAB_DATA(vip_engine_set_vip_ctrl_node_cs, "_gpl", "");
KSYMTAB_DATA(vip_engine_unset_vip_ctrl_node_cs, "_gpl", "");
KSYMTAB_DATA(register_jank_ux_callback_fp, "", "");
KSYMTAB_DATA(unregister_jank_ux_callback_fp, "", "");
KSYMTAB_DATA(sbe_frame_hint_fp, "", "");
KSYMTAB_DATA(enable_ux_jank_detection_fp, "", "");
KSYMTAB_DATA(vip_engine_set_vip_ctrl_node_sbe, "_gpl", "");
KSYMTAB_DATA(vip_engine_unset_vip_ctrl_node_sbe, "_gpl", "");

SYMBOL_CRC(task_turbo_do_set_binder_uclamp_param, 0xb5ac3479, "_gpl");
SYMBOL_CRC(task_turbo_do_unset_binder_uclamp_param, 0x9964ec65, "_gpl");
SYMBOL_CRC(task_turbo_do_binder_uclamp_stuff, 0xcba290ee, "_gpl");
SYMBOL_CRC(task_turbo_do_enable_binder_uclamp_inheritance, 0xaf586016, "_gpl");
SYMBOL_CRC(vip_engine_set_vip_ctrl_node_cs, 0x3e3c11f3, "_gpl");
SYMBOL_CRC(vip_engine_unset_vip_ctrl_node_cs, 0xeec5a1b3, "_gpl");
SYMBOL_CRC(register_jank_ux_callback_fp, 0xf88ea686, "");
SYMBOL_CRC(unregister_jank_ux_callback_fp, 0x300b8756, "");
SYMBOL_CRC(sbe_frame_hint_fp, 0x0df36b5e, "");
SYMBOL_CRC(enable_ux_jank_detection_fp, 0xfd8b663d, "");
SYMBOL_CRC(vip_engine_set_vip_ctrl_node_sbe, 0xe7548810, "_gpl");
SYMBOL_CRC(vip_engine_unset_vip_ctrl_node_sbe, 0xfee10878, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x4207f7f7, "fpsgo_other2xgf_set_critical_tasks" },
	{ 0x037a0cba, "kfree" },
	{ 0x0b252f78, "reset_runnable_boost_util_est_enable" },
	{ 0x68a1ecb9, "set_runnable_boost_util_est_enable" },
	{ 0x32acd4f0, "fpsgo_other2comp_set_no_boost_info" },
	{ 0x1df41007, "fpsgo_other2xgf_calculate_dep" },
	{ 0xd63230e8, "get_fpsgo_frame_info" },
	{ 0x70c1cca8, "ged_kpi_set_target_FPS_margin" },
	{ 0x87a2f377, "fpsgo_other2xgf_get_critical_tasks" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xab006efb, "fpsgo_other2comp_get_render_fw_info" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xaab7da79, "drm_register_fps_chg_callback" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xb66c0e74, "switch_fpsgo_control" },
	{ 0x4f887c01, "fpsgo_other2xgf_set_attr" },
	{ 0x8fd7d120, "set_fpsgo_attr" },
	{ 0xb7a44653, "fpsgo_other2comp_control_pause" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x6c093fda, "fpsgo_other2fstb_set_target" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x59e44647, "drm_unregister_fps_chg_callback" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x27b8c461, "sbe_notify_rescue_fp" },
	{ 0x46deee95, "sbe_notify_hwui_frame_hint_fp" },
	{ 0x8b8a5ce1, "sbe_notify_webview_policy_fp" },
	{ 0x4cce8fdc, "sbe_consistency_policy_fp" },
	{ 0x4ea7b559, "sbe_set_sbb_fp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x00148653, "vsnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x411fbde8, "cpufreq_get_policy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x999e8297, "vfree" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x9166fada, "strncpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x3f16b9f4, "core_ctl_consider_VIP" },
	{ 0x342971fa, "set_flt_coef_margin_ctrl" },
	{ 0x7a160793, "set_sbb" },
	{ 0x0623dd60, "set_sbb_active_ratio" },
	{ 0x43f35714, "fpsgo_other2comp_user_close" },
	{ 0x5be4fbe9, "fpsgo_other2comp_user_create" },
	{ 0xfa7678f5, "fpsgo_other2comp_control_resume" },
	{ 0x38d4e40c, "set_task_ls_prefer_cpus" },
	{ 0x3e590506, "unset_task_ls_prefer_cpus" },
	{ 0x48fe8fe2, "uclamp_eff_value" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0x821eb2a4, "core_ctl_set_min_cpus" },
	{ 0x75b47fcc, "fpsgo_other2fbt_get_cpu_capacity_area" },
	{ 0x461e85df, "kmem_cache_free" },
	{ 0x30d30c09, "kmem_cache_alloc_noprof" },
	{ 0xaea1526f, "group_set_mode" },
	{ 0x376b16ab, "flt_ctrl_force_set" },
	{ 0x850fc24b, "set_grp_dvfs_ctrl" },
	{ 0x504aafea, "group_set_threshold" },
	{ 0xbdc3209b, "set_top_grp_aware" },
	{ 0xba11750d, "group_reset_threshold" },
	{ 0x9aece762, "set_ignore_idle_ctrl" },
	{ 0x7f8c6877, "set_wl_cpu_manual" },
	{ 0x7f12f414, "set_vip_switch_push" },
	{ 0xd84ff7fa, "unset_vip_switch_push" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f6827d2, "unset_task_basic_vip" },
	{ 0x8f19266e, "unregister_fpsgo_frame_info_callback" },
	{ 0x1d179fbf, "kmem_cache_destroy" },
	{ 0x8dcd8e07, "register_fpsgo_frame_info_callback" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x593b4fdf, "fpsgo_other2fbt_calculate_frame_loading" },
	{ 0xaf177900, "fpsgo_other2fbt_calculate_blc" },
	{ 0x3daad512, "__kmem_cache_create_args" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xd3df5b5c, "change_dpt_support_driver_hook" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x4207f7f7,
	0x037a0cba,
	0x0b252f78,
	0x68a1ecb9,
	0x32acd4f0,
	0x1df41007,
	0xd63230e8,
	0x70c1cca8,
	0x87a2f377,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x2d39b0a7,
	0x85df9b6c,
	0xab006efb,
	0x29161415,
	0x5a921311,
	0x8d522714,
	0x0296695f,
	0xe5010018,
	0x2469810f,
	0x75ca79b5,
	0xe2964344,
	0x7e19152a,
	0xea82d349,
	0xba0aee2e,
	0xce5bc4d0,
	0xaab7da79,
	0xc5b6f236,
	0xc0b7c197,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x9a835040,
	0xb66c0e74,
	0x4f887c01,
	0x8fd7d120,
	0xb7a44653,
	0x476b165a,
	0x98cf60b3,
	0xa916b694,
	0x6c093fda,
	0xb39378cc,
	0x59e44647,
	0x0f05f001,
	0xefe8a82e,
	0x27b8c461,
	0x46deee95,
	0x8b8a5ce1,
	0x4cce8fdc,
	0x4ea7b559,
	0x2d3385d3,
	0x2d405891,
	0x3bd2c4ce,
	0x42aac25f,
	0x92495308,
	0xce8498d7,
	0xe0da6e4a,
	0x57c959d2,
	0x00148653,
	0x656e4a6e,
	0x43b0c9c3,
	0xf8bd87ca,
	0xcd6f7bae,
	0x411fbde8,
	0xa5526619,
	0x4d9b652b,
	0xece784c2,
	0xca9360b5,
	0xbee3ddd5,
	0xa571f6b0,
	0x999e8297,
	0x8c8569cb,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0xf70e4a4d,
	0xe94986d6,
	0x9166fada,
	0x96848186,
	0xde7ece30,
	0xac594e02,
	0x3f16b9f4,
	0x342971fa,
	0x7a160793,
	0x0623dd60,
	0x43f35714,
	0x5be4fbe9,
	0xfa7678f5,
	0x38d4e40c,
	0x3e590506,
	0x48fe8fe2,
	0xd9346889,
	0x821eb2a4,
	0x75b47fcc,
	0x461e85df,
	0x30d30c09,
	0xaea1526f,
	0x376b16ab,
	0x850fc24b,
	0x504aafea,
	0xbdc3209b,
	0xba11750d,
	0x9aece762,
	0x7f8c6877,
	0x7f12f414,
	0xd84ff7fa,
	0x92997ed8,
	0x4f6827d2,
	0x8f19266e,
	0x1d179fbf,
	0x8dcd8e07,
	0x24f00fda,
	0x593b4fdf,
	0xaf177900,
	0x3daad512,
	0xb2fb935e,
	0xd3df5b5c,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"fpsgo_other2xgf_set_critical_tasks\0"
	"kfree\0"
	"reset_runnable_boost_util_est_enable\0"
	"set_runnable_boost_util_est_enable\0"
	"fpsgo_other2comp_set_no_boost_info\0"
	"fpsgo_other2xgf_calculate_dep\0"
	"get_fpsgo_frame_info\0"
	"ged_kpi_set_target_FPS_margin\0"
	"fpsgo_other2xgf_get_critical_tasks\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kstrdup\0"
	"strsep\0"
	"fpsgo_other2comp_get_render_fw_info\0"
	"find_task_by_vpid\0"
	"strncmp\0"
	"__rcu_read_lock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"__rcu_read_unlock\0"
	"__fortify_panic\0"
	"__wake_up\0"
	"__list_add_valid_or_report\0"
	"hrtimer_init\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"drm_register_fps_chg_callback\0"
	"queue_work_on\0"
	"hrtimer_start_range_ns\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__list_del_entry_valid_or_report\0"
	"switch_fpsgo_control\0"
	"fpsgo_other2xgf_set_attr\0"
	"set_fpsgo_attr\0"
	"fpsgo_other2comp_control_pause\0"
	"sized_strscpy\0"
	"strlen\0"
	"strnlen\0"
	"fpsgo_other2fstb_set_target\0"
	"kthread_stop\0"
	"drm_unregister_fps_chg_callback\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"sbe_notify_rescue_fp\0"
	"sbe_notify_hwui_frame_hint_fp\0"
	"sbe_notify_webview_policy_fp\0"
	"sbe_consistency_policy_fp\0"
	"sbe_set_sbb_fp\0"
	"system_wq\0"
	"kobject_create_and_add\0"
	"kobject_put\0"
	"sysfs_create_file_ns\0"
	"sysfs_remove_file_ns\0"
	"kernel_kobj\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"vsnprintf\0"
	"snprintf\0"
	"preempt_schedule\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"cpufreq_get_policy\0"
	"rb_insert_color\0"
	"rb_erase\0"
	"rb_first\0"
	"rb_next\0"
	"vzalloc_noprof\0"
	"__mutex_init\0"
	"vfree\0"
	"kstrtoint\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"preempt_schedule_notrace\0"
	"sched_clock\0"
	"strncpy\0"
	"scnprintf\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"core_ctl_consider_VIP\0"
	"set_flt_coef_margin_ctrl\0"
	"set_sbb\0"
	"set_sbb_active_ratio\0"
	"fpsgo_other2comp_user_close\0"
	"fpsgo_other2comp_user_create\0"
	"fpsgo_other2comp_control_resume\0"
	"set_task_ls_prefer_cpus\0"
	"unset_task_ls_prefer_cpus\0"
	"uclamp_eff_value\0"
	"sched_setattr_nocheck\0"
	"core_ctl_set_min_cpus\0"
	"fpsgo_other2fbt_get_cpu_capacity_area\0"
	"kmem_cache_free\0"
	"kmem_cache_alloc_noprof\0"
	"group_set_mode\0"
	"flt_ctrl_force_set\0"
	"set_grp_dvfs_ctrl\0"
	"group_set_threshold\0"
	"set_top_grp_aware\0"
	"group_reset_threshold\0"
	"set_ignore_idle_ctrl\0"
	"set_wl_cpu_manual\0"
	"set_vip_switch_push\0"
	"unset_vip_switch_push\0"
	"_printk\0"
	"unset_task_basic_vip\0"
	"unregister_fpsgo_frame_info_callback\0"
	"kmem_cache_destroy\0"
	"register_fpsgo_frame_info_callback\0"
	"set_cpus_allowed_ptr\0"
	"fpsgo_other2fbt_calculate_frame_loading\0"
	"fpsgo_other2fbt_calculate_blc\0"
	"__kmem_cache_create_args\0"
	"param_ops_int\0"
	"change_dpt_support_driver_hook\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_fpsgo_v8,scheduler,ged,mediatek-drm,mtk_sbe_ioctl,mtk_core_ctl,cpufreq_sugov_ext");


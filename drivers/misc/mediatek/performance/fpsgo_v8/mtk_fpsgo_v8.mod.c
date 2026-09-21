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

KSYMTAB_FUNC(fpsgo_get_kfpsgo_tid, "", "");
KSYMTAB_FUNC(get_cam_status_for_task_turbo, "", "");
KSYMTAB_FUNC(get_fpsgo_frame_info, "", "");
KSYMTAB_DATA(fpsgo_rl_delete_render_info_fp, "", "");
KSYMTAB_DATA(fpsgo_power_rl_delete_fp, "", "");
KSYMTAB_DATA(set_cpus_allowed_ptr_by_kernel_fp, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_flush_acquire_table, "", "");
KSYMTAB_FUNC(fpsgo_main_trace, "", "");
KSYMTAB_FUNC(fpsgo_render_tree_lock, "_gpl", "");
KSYMTAB_FUNC(fpsgo_render_tree_unlock, "_gpl", "");
KSYMTAB_FUNC(fpsgo_ktf2base_add_delete_structure, "", "");
KSYMTAB_FUNC(fpsgo_ktf2base_fuzz_test_node, "", "");
KSYMTAB_DATA(fpsgo2jank_detection_register_callback_fp, "", "");
KSYMTAB_DATA(fpsgo2jank_detection_unregister_callback_fp, "", "");
KSYMTAB_FUNC(register_fpsgo_frame_info_callback, "", "");
KSYMTAB_FUNC(unregister_fpsgo_frame_info_callback, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_control_resume, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_control_pause, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_user_close, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_user_create, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_report_workload, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_set_timestamp, "", "");
KSYMTAB_FUNC(switch_fpsgo_control, "", "");
KSYMTAB_FUNC(set_fpsgo_attr, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_set_no_boost_info, "", "");
KSYMTAB_FUNC(fpsgo_other2comp_get_render_fw_info, "", "");
KSYMTAB_FUNC(notify_fpsgo_touch_latency_ko_ready, "", "");
KSYMTAB_FUNC(fpsgo_ktf2comp_test_check_BQ_type, "", "");
KSYMTAB_FUNC(fpsgo_ktf2comp_test_queue_dequeue, "", "");
KSYMTAB_FUNC(fpsgo_ktf2comp_fuzz_test_node, "", "");
KSYMTAB_DATA(fbt_cal_target_time_fp, "", "");
KSYMTAB_DATA(fbt_power_rl_fp, "", "");
KSYMTAB_DATA(fpsgo_set_last_target_t_fp, "", "");
KSYMTAB_DATA(fpsgo_set_last_quota_fp, "", "");
KSYMTAB_DATA(fpsgo_rl_create_render_in_list_fp, "", "");
KSYMTAB_DATA(fpsgo_set_last_quota_fps_ori_fp, "", "");
KSYMTAB_DATA(fbt_cpufreq_cb_cap_fp, "", "");
KSYMTAB_DATA(task_turbo_enforce_ct_to_vip_fp, "", "");
KSYMTAB_FUNC(fbt_cluster_X2Y, "", "");
KSYMTAB_FUNC(eara2fbt_set_2nd_t2wnt, "", "");
KSYMTAB_DATA(jatm_notify_fp, "", "");
KSYMTAB_FUNC(fpsgo_other2fbt_calculate_frame_loading, "", "");
KSYMTAB_FUNC(fpsgo_other2fbt_calculate_blc, "", "");
KSYMTAB_FUNC(Test_fbt_get_separatecap, "", "");
KSYMTAB_FUNC(notify_rl_ko_is_ready, "", "");
KSYMTAB_FUNC(notify_powerRL_ko_is_ready, "", "");
KSYMTAB_FUNC(fbt_cal_target_time_ns, "", "");
KSYMTAB_FUNC(Test_fbt_get_loading_exp, "", "");
KSYMTAB_FUNC(fpsgo_other2fbt_get_cpu_capacity_area, "", "");
KSYMTAB_FUNC(fpsgo_other2fbt_deq_end, "", "");
KSYMTAB_FUNC(fbt_get_magt_workaround_passive_mode, "", "");
KSYMTAB_FUNC(fbt_set_magt_workaround_passive_mode, "", "");
KSYMTAB_DATA(xgf_event_buffer, "", "");
KSYMTAB_DATA(xgf_event_buffer_size, "", "");
KSYMTAB_DATA(fstb_event_buffer, "", "");
KSYMTAB_DATA(fstb_event_buffer_size, "", "");
KSYMTAB_DATA(xgf_est_runtime_fp, "", "");
KSYMTAB_DATA(xgf_delete_render_info_fp, "", "");
KSYMTAB_FUNC(xgf_trace, "", "");
KSYMTAB_FUNC(xgf_atomic_read, "", "");
KSYMTAB_FUNC(xgf_div64_s64, "", "");
KSYMTAB_FUNC(xgf_div64_s64_rem, "", "");
KSYMTAB_FUNC(xgf_div_s64, "", "");
KSYMTAB_FUNC(xgf_div64_u64, "", "");
KSYMTAB_FUNC(xgf_div_u64, "", "");
KSYMTAB_FUNC(xgf_get_process_id, "", "");
KSYMTAB_FUNC(xgf_check_main_sf_pid, "", "");
KSYMTAB_FUNC(xgf_calculate_sqrt, "", "");
KSYMTAB_FUNC(xgf_alloc, "", "");
KSYMTAB_FUNC(xgf_alloc_array, "", "");
KSYMTAB_FUNC(xgf_free, "", "");
KSYMTAB_FUNC(xgf_ema2_systrace, "", "");
KSYMTAB_FUNC(xgf_ema2_dump_rho, "", "");
KSYMTAB_FUNC(xgf_ema2_dump_info_frames, "", "");
KSYMTAB_FUNC(xgf_get_runtime, "", "");
KSYMTAB_FUNC(xgf_get_logical_tid, "", "");
KSYMTAB_FUNC(get_cam_hal_pid_for_task_turbo, "", "");
KSYMTAB_FUNC(get_cam_server_pid_for_task_turbo, "", "");
KSYMTAB_FUNC(fpsgo_other2xgf_calculate_dep, "", "");
KSYMTAB_FUNC(fpsgo_other2xgf_set_critical_tasks, "", "");
KSYMTAB_FUNC(fpsgo_other2xgf_get_critical_tasks, "", "");
KSYMTAB_FUNC(fpsgo_other2xgf_set_attr, "", "");
KSYMTAB_FUNC(fpsgo_ktf2xgf_atomic_set, "", "");
KSYMTAB_FUNC(notify_xgf_ko_ready, "", "");
KSYMTAB_FUNC(fpsgo_ktf2xgf_test_collect_trace_event, "", "");
KSYMTAB_FUNC(fpsgo_ktf2xgf_fuzz_test_node, "", "");
KSYMTAB_DATA(fstb_no_r_timer_enable, "", "");
KSYMTAB_DATA(fstb_filter_poll_enable, "", "");
KSYMTAB_DATA(fstb_fi_detect_enable, "", "");
KSYMTAB_DATA(fstb_get_target_fps_fp, "", "");
KSYMTAB_DATA(fstb_check_render_info_status_fp, "", "");
KSYMTAB_DATA(fpsgo2msync_hint_frameinfo_fp, "", "");
KSYMTAB_DATA(fstb_get_logic_head_trace_event_fp, "", "");
KSYMTAB_DATA(fstb_get_is_interpolation_is_on_fp, "", "");
KSYMTAB_DATA(test_fstb_hrtimer_info_update_fp, "", "");
KSYMTAB_FUNC(fstb_record_app_self_ctrl_time, "", "");
KSYMTAB_FUNC(eara2fstb_get_tfps, "", "");
KSYMTAB_FUNC(eara2fstb_tfps_mdiff, "", "");
KSYMTAB_DATA(eara_pre_change_fp, "", "");
KSYMTAB_DATA(eara_pre_change_single_fp, "", "");
KSYMTAB_FUNC(fpsgo_other2fstb_calculate_target_fps, "", "");
KSYMTAB_FUNC(fpsgo_other2fstb_set_target, "", "");
KSYMTAB_FUNC(fpsgo_other2fstb_get_app_self_ctrl_time, "", "");
KSYMTAB_FUNC(fpsgo_other2fstb_get_fps_info, "", "");
KSYMTAB_FUNC(fpsgo_ktf2fstb_test_fstb_hrtimer_info_update, "", "");
KSYMTAB_FUNC(fpsgo_ktf2fstb_fuzz_test_node, "", "");

SYMBOL_CRC(fpsgo_get_kfpsgo_tid, 0x29032b2f, "");
SYMBOL_CRC(get_cam_status_for_task_turbo, 0xde300977, "");
SYMBOL_CRC(get_fpsgo_frame_info, 0xd63230e8, "");
SYMBOL_CRC(fpsgo_rl_delete_render_info_fp, 0xb6ee5d1a, "");
SYMBOL_CRC(fpsgo_power_rl_delete_fp, 0xc72caeac, "");
SYMBOL_CRC(set_cpus_allowed_ptr_by_kernel_fp, 0xbd5a1c79, "");
SYMBOL_CRC(fpsgo_other2comp_flush_acquire_table, 0xb1bcad79, "");
SYMBOL_CRC(fpsgo_main_trace, 0x7c051004, "");
SYMBOL_CRC(fpsgo_render_tree_lock, 0x3fc6faff, "_gpl");
SYMBOL_CRC(fpsgo_render_tree_unlock, 0x19749c1f, "_gpl");
SYMBOL_CRC(fpsgo_ktf2base_add_delete_structure, 0x5a210cee, "");
SYMBOL_CRC(fpsgo_ktf2base_fuzz_test_node, 0x2a4b650a, "");
SYMBOL_CRC(fpsgo2jank_detection_register_callback_fp, 0x17887573, "");
SYMBOL_CRC(fpsgo2jank_detection_unregister_callback_fp, 0x9685ea62, "");
SYMBOL_CRC(register_fpsgo_frame_info_callback, 0x8dcd8e07, "");
SYMBOL_CRC(unregister_fpsgo_frame_info_callback, 0x8f19266e, "");
SYMBOL_CRC(fpsgo_other2comp_control_resume, 0xfa7678f5, "");
SYMBOL_CRC(fpsgo_other2comp_control_pause, 0xb7a44653, "");
SYMBOL_CRC(fpsgo_other2comp_user_close, 0x43f35714, "");
SYMBOL_CRC(fpsgo_other2comp_user_create, 0x5be4fbe9, "");
SYMBOL_CRC(fpsgo_other2comp_report_workload, 0xd9e5102a, "");
SYMBOL_CRC(fpsgo_other2comp_set_timestamp, 0x079d9633, "");
SYMBOL_CRC(switch_fpsgo_control, 0xb66c0e74, "");
SYMBOL_CRC(set_fpsgo_attr, 0x8fd7d120, "");
SYMBOL_CRC(fpsgo_other2comp_set_no_boost_info, 0x32acd4f0, "");
SYMBOL_CRC(fpsgo_other2comp_get_render_fw_info, 0xab006efb, "");
SYMBOL_CRC(notify_fpsgo_touch_latency_ko_ready, 0x17cb0a23, "");
SYMBOL_CRC(fpsgo_ktf2comp_test_check_BQ_type, 0x4e856e0e, "");
SYMBOL_CRC(fpsgo_ktf2comp_test_queue_dequeue, 0x3f3bfa96, "");
SYMBOL_CRC(fpsgo_ktf2comp_fuzz_test_node, 0xf5fdaed7, "");
SYMBOL_CRC(fbt_cal_target_time_fp, 0x8589338c, "");
SYMBOL_CRC(fbt_power_rl_fp, 0x7b3b64bf, "");
SYMBOL_CRC(fpsgo_set_last_target_t_fp, 0xf6309e9c, "");
SYMBOL_CRC(fpsgo_set_last_quota_fp, 0x39ba5d91, "");
SYMBOL_CRC(fpsgo_rl_create_render_in_list_fp, 0x330f3deb, "");
SYMBOL_CRC(fpsgo_set_last_quota_fps_ori_fp, 0x8e3c9c0f, "");
SYMBOL_CRC(fbt_cpufreq_cb_cap_fp, 0x48ce205e, "");
SYMBOL_CRC(task_turbo_enforce_ct_to_vip_fp, 0xf0238aae, "");
SYMBOL_CRC(fbt_cluster_X2Y, 0x31f5969e, "");
SYMBOL_CRC(eara2fbt_set_2nd_t2wnt, 0x30219add, "");
SYMBOL_CRC(jatm_notify_fp, 0xa6402800, "");
SYMBOL_CRC(fpsgo_other2fbt_calculate_frame_loading, 0x593b4fdf, "");
SYMBOL_CRC(fpsgo_other2fbt_calculate_blc, 0xaf177900, "");
SYMBOL_CRC(Test_fbt_get_separatecap, 0xd0a0cdc2, "");
SYMBOL_CRC(notify_rl_ko_is_ready, 0xe14b9a67, "");
SYMBOL_CRC(notify_powerRL_ko_is_ready, 0x848af68f, "");
SYMBOL_CRC(fbt_cal_target_time_ns, 0x4b821418, "");
SYMBOL_CRC(Test_fbt_get_loading_exp, 0xb73a89c4, "");
SYMBOL_CRC(fpsgo_other2fbt_get_cpu_capacity_area, 0x75b47fcc, "");
SYMBOL_CRC(fpsgo_other2fbt_deq_end, 0xf8f4e223, "");
SYMBOL_CRC(fbt_get_magt_workaround_passive_mode, 0x8d94ff2f, "");
SYMBOL_CRC(fbt_set_magt_workaround_passive_mode, 0x6dcbec4a, "");
SYMBOL_CRC(xgf_event_buffer, 0x073314cd, "");
SYMBOL_CRC(xgf_event_buffer_size, 0xed6418b1, "");
SYMBOL_CRC(fstb_event_buffer, 0xac462a67, "");
SYMBOL_CRC(fstb_event_buffer_size, 0xf092ad6d, "");
SYMBOL_CRC(xgf_est_runtime_fp, 0x1afa33b8, "");
SYMBOL_CRC(xgf_delete_render_info_fp, 0xaa15f875, "");
SYMBOL_CRC(xgf_trace, 0x46ea2c6b, "");
SYMBOL_CRC(xgf_atomic_read, 0x88cbdd57, "");
SYMBOL_CRC(xgf_div64_s64, 0x875d25d8, "");
SYMBOL_CRC(xgf_div64_s64_rem, 0x291bd89d, "");
SYMBOL_CRC(xgf_div_s64, 0x26fc0539, "");
SYMBOL_CRC(xgf_div64_u64, 0xac2a38c3, "");
SYMBOL_CRC(xgf_div_u64, 0x0c2932c9, "");
SYMBOL_CRC(xgf_get_process_id, 0xb6006b29, "");
SYMBOL_CRC(xgf_check_main_sf_pid, 0x639b337c, "");
SYMBOL_CRC(xgf_calculate_sqrt, 0xc98bf530, "");
SYMBOL_CRC(xgf_alloc, 0x35811a9a, "");
SYMBOL_CRC(xgf_alloc_array, 0xdf7b5a7c, "");
SYMBOL_CRC(xgf_free, 0x134267d4, "");
SYMBOL_CRC(xgf_ema2_systrace, 0xcb74d57a, "");
SYMBOL_CRC(xgf_ema2_dump_rho, 0x618d13e8, "");
SYMBOL_CRC(xgf_ema2_dump_info_frames, 0xd3889168, "");
SYMBOL_CRC(xgf_get_runtime, 0xfd706cc1, "");
SYMBOL_CRC(xgf_get_logical_tid, 0x1c6b727a, "");
SYMBOL_CRC(get_cam_hal_pid_for_task_turbo, 0x36471ca5, "");
SYMBOL_CRC(get_cam_server_pid_for_task_turbo, 0x4757f33b, "");
SYMBOL_CRC(fpsgo_other2xgf_calculate_dep, 0x1df41007, "");
SYMBOL_CRC(fpsgo_other2xgf_set_critical_tasks, 0x4207f7f7, "");
SYMBOL_CRC(fpsgo_other2xgf_get_critical_tasks, 0x87a2f377, "");
SYMBOL_CRC(fpsgo_other2xgf_set_attr, 0x4f887c01, "");
SYMBOL_CRC(fpsgo_ktf2xgf_atomic_set, 0x095884c1, "");
SYMBOL_CRC(notify_xgf_ko_ready, 0xf1f421d0, "");
SYMBOL_CRC(fpsgo_ktf2xgf_test_collect_trace_event, 0x28deaa6c, "");
SYMBOL_CRC(fpsgo_ktf2xgf_fuzz_test_node, 0x6bbcf3c6, "");
SYMBOL_CRC(fstb_no_r_timer_enable, 0x7a113186, "");
SYMBOL_CRC(fstb_filter_poll_enable, 0xbb20b869, "");
SYMBOL_CRC(fstb_fi_detect_enable, 0x84161659, "");
SYMBOL_CRC(fstb_get_target_fps_fp, 0x9d26c051, "");
SYMBOL_CRC(fstb_check_render_info_status_fp, 0xa0f5cdf3, "");
SYMBOL_CRC(fpsgo2msync_hint_frameinfo_fp, 0xaa290173, "");
SYMBOL_CRC(fstb_get_logic_head_trace_event_fp, 0x5ee98860, "");
SYMBOL_CRC(fstb_get_is_interpolation_is_on_fp, 0x9d0b46b4, "");
SYMBOL_CRC(test_fstb_hrtimer_info_update_fp, 0x81894e5e, "");
SYMBOL_CRC(fstb_record_app_self_ctrl_time, 0x7ae4ec57, "");
SYMBOL_CRC(eara2fstb_get_tfps, 0x7e9ccb11, "");
SYMBOL_CRC(eara2fstb_tfps_mdiff, 0x1a04087a, "");
SYMBOL_CRC(eara_pre_change_fp, 0xbea93101, "");
SYMBOL_CRC(eara_pre_change_single_fp, 0x19b91226, "");
SYMBOL_CRC(fpsgo_other2fstb_calculate_target_fps, 0x1ed96bf1, "");
SYMBOL_CRC(fpsgo_other2fstb_set_target, 0x6c093fda, "");
SYMBOL_CRC(fpsgo_other2fstb_get_app_self_ctrl_time, 0xa115bf1c, "");
SYMBOL_CRC(fpsgo_other2fstb_get_fps_info, 0xbb37ee44, "");
SYMBOL_CRC(fpsgo_ktf2fstb_test_fstb_hrtimer_info_update, 0x80b7638d, "");
SYMBOL_CRC(fpsgo_ktf2fstb_fuzz_test_node, 0x6889d4a7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0xa9fac2a5, "get_curr_cap" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xaab7da79, "drm_register_fps_chg_callback" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x59e44647, "drm_unregister_fps_chg_callback" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x43fc37b1, "fpsgo_notify_vsync_fp" },
	{ 0x2b8dcd34, "fpsgo_notify_vsync_period_fp" },
	{ 0xf11fcc52, "fpsgo_notify_qudeq_fp" },
	{ 0xf0f156b6, "fpsgo_notify_acquire_fp" },
	{ 0xc7b68c5a, "fpsgo_notify_producer_info_fp" },
	{ 0x1968478c, "fpsgo_notify_swap_buffer_fp" },
	{ 0xe740d20d, "power2fpsgo_get_fps_fp" },
	{ 0xebd8412d, "fpsgo_get_cmd_fp" },
	{ 0x815612c6, "fpsgo_notify_buffer_quota_fp" },
	{ 0xbfb92f0e, "fpsgo_other2comp_get_render_fw_info_fp" },
	{ 0x33727b59, "fpsgo_other2comp_flush_acquire_table_fp" },
	{ 0x6e011699, "fpsgo_other2fstb_get_app_self_ctrl_time_fp" },
	{ 0x0c7442f0, "fpsgo_other2fstb_get_fps_info_fp" },
	{ 0x936cc87b, "fpsgo_other2xgf_get_critical_tasks_fp" },
	{ 0x7e4337ad, "powerhal2fpsgo_get_fpsgo_frame_info_fp" },
	{ 0x1d25fb52, "magt2fpsgo_notify_target_fps_fp" },
	{ 0xc9c0fb94, "magt2fpsgo_notify_dep_list_fp" },
	{ 0xee958205, "magt2fpsgo_get_fpsgo_frame_info" },
	{ 0x03522510, "fpsgo_get_lr_pair_fp" },
	{ 0xbfed9edc, "fpsgo_set_rl_l2q_enable_fp" },
	{ 0x79ae2eb0, "fpsgo_set_rl_expected_l2q_us_fp" },
	{ 0x560fb31e, "fpsgo_get_now_logic_head_fp" },
	{ 0x10a28eb0, "fpsgo_get_enable_signal_fp" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x411fbde8, "cpufreq_get_policy" },
	{ 0x00148653, "vsnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7c0f443, "sort" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x20ba2e0b, "fpsgo_notify_fbt_is_boost_fp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc51c6960, "adpf_register_callback" },
	{ 0x60a17349, "pd_X2Y" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5e4dd101, "perf_event_disable" },
	{ 0x27d28863, "perf_event_release_kernel" },
	{ 0x45e4f99e, "turn_on_vip_in_gh" },
	{ 0xcc5d2d34, "turn_off_vip_in_gh" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x45b8368e, "set_task_priority_based_vip_and_throttle" },
	{ 0x9efa19aa, "unset_task_priority_based_vip" },
	{ 0x5deca51a, "set_task_vvip" },
	{ 0x645be3ff, "unset_task_vvip" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x0c78be04, "perf_event_create_kernel_counter" },
	{ 0xfa9b0394, "perf_event_enable" },
	{ 0xb911093e, "set_ct_task" },
	{ 0x38d4e40c, "set_task_ls_prefer_cpus" },
	{ 0x9d91a009, "unset_gear_indices" },
	{ 0x6615d989, "set_gear_indices" },
	{ 0xcf9d5f01, "set_task_ls" },
	{ 0x31048bfd, "unset_task_ls" },
	{ 0xd8f9c132, "perf_event_read_value" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xd544ac4b, "xgff_frame_min_cap_fp" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xa24657e7, "freq_qos_add_notifier" },
	{ 0x81a6d354, "__cpu_pause_mask" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa31907cb, "xgff_frame_startend_fp" },
	{ 0x96a9dd8c, "xgff_frame_getdeplist_maxsize_fp" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x48fe8fe2, "uclamp_eff_value" },
	{ 0xff5a572a, "is_task_latency_sensitive" },
	{ 0x3e590506, "unset_task_ls_prefer_cpus" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x70c1cca8, "ged_kpi_set_target_FPS_margin" },
	{ 0xc2100112, "ged_kpi_output_gfx_info2_fp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x10a09bd4,
	0x805e2dd2,
	0xe2964344,
	0x7e19152a,
	0x75ca79b5,
	0xf8bd87ca,
	0xcd6f7bae,
	0xa9fac2a5,
	0xe2d5255a,
	0x7aba1ef6,
	0xba0aee2e,
	0xce5bc4d0,
	0xa571f6b0,
	0xaab7da79,
	0xd9346889,
	0xc23eef6c,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x9a835040,
	0x037a0cba,
	0xe17134b6,
	0xb39378cc,
	0x59e44647,
	0xde7ece30,
	0x43fc37b1,
	0x2b8dcd34,
	0xf11fcc52,
	0xf0f156b6,
	0xc7b68c5a,
	0x1968478c,
	0xe740d20d,
	0xebd8412d,
	0x815612c6,
	0xbfb92f0e,
	0x33727b59,
	0x6e011699,
	0x0c7442f0,
	0x936cc87b,
	0x7e4337ad,
	0x1d25fb52,
	0xc9c0fb94,
	0xee958205,
	0x03522510,
	0xbfed9edc,
	0x79ae2eb0,
	0x560fb31e,
	0x10a28eb0,
	0x0f05f001,
	0xefe8a82e,
	0xe0da6e4a,
	0x57c959d2,
	0x29161415,
	0x24f00fda,
	0x1b2fa1a9,
	0x999e8297,
	0x43b0c9c3,
	0x411fbde8,
	0x00148653,
	0x656e4a6e,
	0x819bebd4,
	0xa5526619,
	0x4d9b652b,
	0xece784c2,
	0xca9360b5,
	0xbee3ddd5,
	0xd9a5ea54,
	0x96848186,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xa916b694,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x8d522714,
	0x2469810f,
	0x0296695f,
	0xe5010018,
	0x52c5c991,
	0xe94986d6,
	0xf70e4a4d,
	0x8c8569cb,
	0xac594e02,
	0x2d405891,
	0x3bd2c4ce,
	0x42aac25f,
	0x92495308,
	0xce8498d7,
	0x92997ed8,
	0xb7c0f443,
	0x441d0de9,
	0x102fe6de,
	0x8c03d20c,
	0x49cd25ed,
	0xea82d349,
	0xc5b6f236,
	0xc3055d20,
	0xbcab6ee6,
	0xc0b7c197,
	0x20ba2e0b,
	0x2d3385d3,
	0xc51c6960,
	0x60a17349,
	0x56470118,
	0x5e4dd101,
	0x27d28863,
	0x45e4f99e,
	0xcc5d2d34,
	0xb6e871b8,
	0x34db050b,
	0x45b8368e,
	0x9efa19aa,
	0x5deca51a,
	0x645be3ff,
	0xfdf04ae0,
	0x0c78be04,
	0xfa9b0394,
	0xb911093e,
	0x38d4e40c,
	0x9d91a009,
	0x6615d989,
	0xcf9d5f01,
	0x31048bfd,
	0xd8f9c132,
	0x9fe899b7,
	0xd35cce70,
	0x9f46ced8,
	0xb2fb935e,
	0xd544ac4b,
	0x15db3b99,
	0x1af93d4f,
	0xdb4e2667,
	0xa24657e7,
	0x81a6d354,
	0x1e6d26a8,
	0x7aa1756e,
	0x3c3ff9fd,
	0x5a921311,
	0x476b165a,
	0xa31907cb,
	0x96a9dd8c,
	0x12db679a,
	0x6fc35f2b,
	0x48fe8fe2,
	0xff5a572a,
	0x3e590506,
	0xe136f93c,
	0xee46e386,
	0x280f9f14,
	0xb43f9365,
	0x70c1cca8,
	0xc2100112,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x5a9f1d63,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"__wake_up\0"
	"__list_add_valid_or_report\0"
	"__fortify_panic\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"get_curr_cap\0"
	"strcmp\0"
	"tracepoint_probe_unregister\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__mutex_init\0"
	"drm_register_fps_chg_callback\0"
	"sched_setattr_nocheck\0"
	"set_user_nice\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__list_del_entry_valid_or_report\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"kthread_stop\0"
	"drm_unregister_fps_chg_callback\0"
	"__cpu_possible_mask\0"
	"fpsgo_notify_vsync_fp\0"
	"fpsgo_notify_vsync_period_fp\0"
	"fpsgo_notify_qudeq_fp\0"
	"fpsgo_notify_acquire_fp\0"
	"fpsgo_notify_producer_info_fp\0"
	"fpsgo_notify_swap_buffer_fp\0"
	"power2fpsgo_get_fps_fp\0"
	"fpsgo_get_cmd_fp\0"
	"fpsgo_notify_buffer_quota_fp\0"
	"fpsgo_other2comp_get_render_fw_info_fp\0"
	"fpsgo_other2comp_flush_acquire_table_fp\0"
	"fpsgo_other2fstb_get_app_self_ctrl_time_fp\0"
	"fpsgo_other2fstb_get_fps_info_fp\0"
	"fpsgo_other2xgf_get_critical_tasks_fp\0"
	"powerhal2fpsgo_get_fpsgo_frame_info_fp\0"
	"magt2fpsgo_notify_target_fps_fp\0"
	"magt2fpsgo_notify_dep_list_fp\0"
	"magt2fpsgo_get_fpsgo_frame_info\0"
	"fpsgo_get_lr_pair_fp\0"
	"fpsgo_set_rl_l2q_enable_fp\0"
	"fpsgo_set_rl_expected_l2q_us_fp\0"
	"fpsgo_get_now_logic_head_fp\0"
	"fpsgo_get_enable_signal_fp\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"find_task_by_vpid\0"
	"set_cpus_allowed_ptr\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"preempt_schedule\0"
	"cpufreq_get_policy\0"
	"vsnprintf\0"
	"snprintf\0"
	"mutex_is_locked\0"
	"rb_insert_color\0"
	"rb_erase\0"
	"rb_first\0"
	"rb_next\0"
	"vzalloc_noprof\0"
	"__init_waitqueue_head\0"
	"scnprintf\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"strnlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"__kmalloc_noprof\0"
	"sched_clock\0"
	"preempt_schedule_notrace\0"
	"kstrtoint\0"
	"__cpu_online_mask\0"
	"kobject_create_and_add\0"
	"kobject_put\0"
	"sysfs_create_file_ns\0"
	"sysfs_remove_file_ns\0"
	"kernel_kobj\0"
	"_printk\0"
	"sort\0"
	"__kmalloc_large_noprof\0"
	"hrtimer_cancel\0"
	"destroy_workqueue\0"
	"alloc_workqueue\0"
	"hrtimer_init\0"
	"queue_work_on\0"
	"usleep_range_state\0"
	"sscanf\0"
	"hrtimer_start_range_ns\0"
	"fpsgo_notify_fbt_is_boost_fp\0"
	"system_wq\0"
	"adpf_register_callback\0"
	"pd_X2Y\0"
	"__warn_printk\0"
	"perf_event_disable\0"
	"perf_event_release_kernel\0"
	"turn_on_vip_in_gh\0"
	"turn_off_vip_in_gh\0"
	"power_supply_get_property\0"
	"_raw_spin_lock_irqsave\0"
	"set_task_priority_based_vip_and_throttle\0"
	"unset_task_priority_based_vip\0"
	"set_task_vvip\0"
	"unset_task_vvip\0"
	"power_supply_get_by_name\0"
	"perf_event_create_kernel_counter\0"
	"perf_event_enable\0"
	"set_ct_task\0"
	"set_task_ls_prefer_cpus\0"
	"unset_gear_indices\0"
	"set_gear_indices\0"
	"set_task_ls\0"
	"unset_task_ls\0"
	"perf_event_read_value\0"
	"get_cpu_idle_time\0"
	"_raw_spin_unlock_irqrestore\0"
	"__sw_hweight64\0"
	"param_ops_int\0"
	"xgff_frame_min_cap_fp\0"
	"__cpu_active_mask\0"
	"freq_qos_update_request\0"
	"freq_qos_add_request\0"
	"freq_qos_add_notifier\0"
	"__cpu_pause_mask\0"
	"strstr\0"
	"kvfree\0"
	"sprintf\0"
	"strncmp\0"
	"sized_strscpy\0"
	"xgff_frame_startend_fp\0"
	"xgff_frame_getdeplist_maxsize_fp\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"uclamp_eff_value\0"
	"is_task_latency_sensitive\0"
	"unset_task_ls_prefer_cpus\0"
	"of_property_read_variable_u32_array\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"ktime_get\0"
	"ged_kpi_set_target_FPS_margin\0"
	"ged_kpi_output_gfx_info2_fp\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memmove\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cpufreq_sugov_ext,mediatek-drm,mtk_perf_ioctl,powerhal_cpu_ctrl,mtk_perf_ioctl_magt,scheduler,cpuqos_v3,ged");


MODULE_INFO(srcversion, "659E3D4ACD8C1B9CFAED251");

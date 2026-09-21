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

KSYMTAB_DATA(ged_dvfs_set_gpu_core_mask_fp, "", "");
KSYMTAB_FUNC(dcs_enable, "", "");
KSYMTAB_FUNC(dcs_set_adjust_support, "", "");
KSYMTAB_FUNC(dcs_set_adjust_ratio_th, "", "");
KSYMTAB_FUNC(dcs_set_adjust_fr_cnt, "", "");
KSYMTAB_FUNC(dcs_set_adjust_non_dcs_th, "", "");
KSYMTAB_FUNC(dcs_get_adjust_support, "", "");
KSYMTAB_FUNC(dcs_get_adjust_ratio_th, "", "");
KSYMTAB_FUNC(dcs_get_adjust_fr_cnt, "", "");
KSYMTAB_FUNC(dcs_get_adjust_non_dcs_th, "", "");
KSYMTAB_DATA(ged_vsync_notifier_fp, "", "");
KSYMTAB_FUNC(ged_notification, "", "");
KSYMTAB_FUNC(ged_set_target_fps, "", "");
KSYMTAB_FUNC(ged_get_segment_id, "", "");
KSYMTAB_FUNC(ged_is_fdvfs_support, "", "");
KSYMTAB_FUNC(ged_log_buf_alloc, "", "");
KSYMTAB_FUNC(ged_log_buf_get, "", "");
KSYMTAB_FUNC(ged_log_buf_get_early, "", "");
KSYMTAB_FUNC(ged_log_buf_free, "", "");
KSYMTAB_FUNC(ged_log_buf_print, "", "");
KSYMTAB_FUNC(ged_log_buf_print2, "", "");
KSYMTAB_FUNC(ged_log_buf_reset, "", "");
KSYMTAB_FUNC(is_gpu_ged_log_enable, "", "");
KSYMTAB_FUNC(ged_log_dump, "", "");
KSYMTAB_DATA(ged_sw_vsync_event_fp, "", "");
KSYMTAB_FUNC(ged_gpu_power_stress_test_enable, "", "");
KSYMTAB_FUNC(ged_gpu_whitebox_power_test_support, "", "");
KSYMTAB_FUNC(ged_gpu_whitebox_power_test_case, "", "");
KSYMTAB_FUNC(ged_get_whitebox_power_test_support, "", "");
KSYMTAB_FUNC(ged_get_whitebox_power_test_case, "", "");
KSYMTAB_FUNC(ged_get_whitebox_power_test_case_clear, "", "");
KSYMTAB_FUNC(ged_set_whitebox_power_state_store, "", "");
KSYMTAB_FUNC(ged_gpu_apo_support, "", "");
KSYMTAB_FUNC(ged_get_apo_thr_ns, "", "");
KSYMTAB_FUNC(ged_set_apo_thr_ns, "", "");
KSYMTAB_FUNC(ged_get_apo_wakeup_ns, "", "");
KSYMTAB_FUNC(ged_set_apo_wakeup_ns_nolock, "", "");
KSYMTAB_FUNC(ged_set_apo_wakeup_ns, "", "");
KSYMTAB_FUNC(ged_get_apo_lp_thr_ns, "", "");
KSYMTAB_FUNC(ged_set_apo_lp_thr_ns, "", "");
KSYMTAB_FUNC(ged_get_apo_api_boost_thr_ns, "", "");
KSYMTAB_FUNC(ged_set_apo_api_boost_thr_ns, "", "");
KSYMTAB_FUNC(ged_set_all_apo_thr_ns_nolock, "", "");
KSYMTAB_FUNC(ged_get_apo_hint, "", "");
KSYMTAB_FUNC(ged_get_apo_force_hint, "", "");
KSYMTAB_FUNC(ged_set_apo_force_hint, "", "");
KSYMTAB_FUNC(ged_get_apo_autosuspend_delay_ref_count, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_ctrl, "", "");
KSYMTAB_FUNC(ged_get_apo_autosuspend_delay_ctrl, "", "");
KSYMTAB_FUNC(ged_get_apo_autosuspend_delay_target_ref_count, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_target_ref_count, "", "");
KSYMTAB_FUNC(ged_get_apo_autosuspend_delay_ms, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_ms_ref_idletime_nolock, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_ms_ref_idletime, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_ms_nolock, "", "");
KSYMTAB_FUNC(ged_set_apo_autosuspend_delay_ms, "", "");
KSYMTAB_FUNC(ged_get_gpu_frame_time, "", "");
KSYMTAB_FUNC(ged_set_apo_status, "", "");
KSYMTAB_FUNC(ged_set_apo_legacy, "", "");
KSYMTAB_FUNC(ged_get_apo_legacy, "", "");
KSYMTAB_FUNC(ged_set_apo_api_sync_status, "", "");
KSYMTAB_FUNC(ged_gpu_apo_api_sync_support, "", "");
KSYMTAB_FUNC(ged_get_active_time, "", "");
KSYMTAB_FUNC(ged_get_idle_time, "", "");
KSYMTAB_FUNC(ged_gpu_is_heavy, "", "");
KSYMTAB_FUNC(ged_check_apo_api_boost, "", "");
KSYMTAB_FUNC(ged_get_apo_api_boost, "", "");
KSYMTAB_FUNC(ged_check_power_duration, "", "");
KSYMTAB_FUNC(ged_get_power_duration, "", "");
KSYMTAB_FUNC(ged_gpu_apo_init_nolock, "", "");
KSYMTAB_FUNC(ged_gpu_apo_reset_nolock, "", "");
KSYMTAB_FUNC(ged_gpu_apo_reset, "", "");
KSYMTAB_FUNC(ged_gpu_apo_notify, "", "");
KSYMTAB_FUNC(ged_get_predict_active_time, "", "");
KSYMTAB_FUNC(ged_get_predict_idle_time, "", "");
KSYMTAB_FUNC(ged_check_predict_power_autosuspend_nolock, "", "");
KSYMTAB_FUNC(ged_check_predict_power_autosuspend, "", "");
KSYMTAB_FUNC(ged_check_predict_power_duration, "", "");
KSYMTAB_FUNC(ged_get_predict_power_duration, "", "");
KSYMTAB_FUNC(ged_gpu_predict_apo_init_nolock, "", "");
KSYMTAB_FUNC(ged_gpu_predict_apo_reset_nolock, "", "");
KSYMTAB_FUNC(ged_gpu_predict_apo_reset, "", "");
KSYMTAB_FUNC(ged_gpu_predict_apo_notify, "", "");
KSYMTAB_FUNC(ged_get_autosuspend_stress, "", "");
KSYMTAB_FUNC(ged_set_autosuspend_stress, "", "");
KSYMTAB_FUNC(ged_dvfs_gpu_clock_switch_notify, "", "");
KSYMTAB_FUNC(ged_dvfs_query_power_state_time, "", "");
KSYMTAB_FUNC(ged_gpu_autosuspend_timeout_notify, "", "");
KSYMTAB_FUNC(check_pm_callback_state, "", "");
KSYMTAB_FUNC(dump_pm_callback_kbase_info, "", "");
KSYMTAB_FUNC(ged_trace_fw_soi_enabled, "", "");
KSYMTAB_FUNC(ged_trace_scheduler_state, "", "");
KSYMTAB_FUNC(ged_trace_ast_cond, "", "");
KSYMTAB_FUNC(ged_trace_ast, "", "");
KSYMTAB_FUNC(ged_trace_idle_timer_enabled, "", "");
KSYMTAB_FUNC(ged_query_info, "", "");
KSYMTAB_DATA(ged_dvfs_cal_gpu_utilization_ex_fp, "", "");
KSYMTAB_DATA(ged_dvfs_gpu_freq_commit_fp, "", "");
KSYMTAB_DATA(ged_dvfs_gpu_freq_dual_commit_fp, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_idx_test, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_top_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_top_idx_test, "", "");
KSYMTAB_FUNC(ged_dvfs_set_sysram_last_commit_top_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_virtual_commit_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_set_sysram_last_commit_dual_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_stack_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_dual, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_stack_idx_test, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_last_commit_dual_test, "", "");
KSYMTAB_FUNC(ged_dvfs_set_sysram_last_commit_stack_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_get_last_commit_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_get_last_commit_top_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_get_last_commit_stack_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_get_last_commit_dual_idx, "", "");
KSYMTAB_FUNC(ged_dvfs_get_gov_mask_enable, "", "");
KSYMTAB_FUNC(ged_dvfs_get_gov_mask_support, "", "");
KSYMTAB_FUNC(ged_dvfs_set_gov_mask_enable, "", "");
KSYMTAB_FUNC(ged_dvfs_get_desire_mask, "", "");
KSYMTAB_FUNC(ged_dvfs_get_dcs_enable, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_protm_enter, "", "");
KSYMTAB_FUNC(ged_dvfs_write_sysram_protm_exit, "", "");
KSYMTAB_FUNC(ged_write_sysram_pwr_hint, "", "");
KSYMTAB_FUNC(ged_dvfs_record_soc_timer, "", "");
KSYMTAB_FUNC(ged_dvfs_update_step_size, "", "");
KSYMTAB_FUNC(get_api_sync_flag, "", "");
KSYMTAB_FUNC(get_sf_edge_hint, "", "");
KSYMTAB_FUNC(reset_sf_edge_hint, "", "");
KSYMTAB_FUNC(ged_get_api_boost_start_ts_ns, "", "");
KSYMTAB_FUNC(ged_get_api_boost_end_ts_ns, "", "");
KSYMTAB_FUNC(ged_get_api_boost_interval_ns, "", "");
KSYMTAB_FUNC(ged_reset_api_boost_interval_ns, "", "");
KSYMTAB_FUNC(ged_dvfs_query_opp_cost, "", "");
KSYMTAB_FUNC(ged_dvfs_get_real_oppfreq_num, "", "");
KSYMTAB_FUNC(ged_dvfs_query_loading, "", "");
KSYMTAB_FUNC(ged_notify_fix_opp_from_gpufreq, "", "");
KSYMTAB_FUNC(ged_notify_fix_freq_volt_from_gpufreq, "", "");
KSYMTAB_DATA(ged_kpi_output_gfx_info2_fp, "", "");
KSYMTAB_DATA(ged_kpi_gpu_dvfs_fp, "", "");
KSYMTAB_DATA(ged_kpi_trigger_fb_dvfs_fp, "", "");
KSYMTAB_DATA(ged_kpi_check_if_fallback_mode_fp, "", "");
KSYMTAB_DATA(ged_kpi_fastdvfs_update_dcs_fp, "", "");
KSYMTAB_DATA(ged_kpi_set_gpu_dvfs_hint_fp, "", "");
KSYMTAB_DATA(ged_kpi_set_cpu_remained_time_fp, "", "");
KSYMTAB_FUNC(ged_kpi_set_target_FPS_margin, "", "");
KSYMTAB_FUNC(ged_kpi_set_target_FPS_api, "", "");
KSYMTAB_FUNC(ged_kpi_set_fw_idle_mode, "", "");
KSYMTAB_FUNC(ged_kpi_enable_fw_idle_policy, "", "");
KSYMTAB_FUNC(ged_kpi_get_panel_refresh_rate, "", "");
KSYMTAB_FUNC(ged_kpi_get_target_fps, "", "");
KSYMTAB_FUNC(ged_kpi_query_dvfs_freq_pred, "", "");
KSYMTAB_FUNC(ged_kpi_query_gpu_dvfs_info, "", "");
KSYMTAB_FUNC(ged_kpi_hint_frame_info, "", "");
KSYMTAB_FUNC(ged_kpi_set_gift_status, "", "");
KSYMTAB_FUNC(ged_kpi_set_gift_target_pid, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_commit, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_dcs_commit, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_set_frame_done, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_set_frame_base_dvfs, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_set_taget_frame_time, "", "");
KSYMTAB_FUNC(mtk_gpueb_set_fallback_mode, "", "");
KSYMTAB_FUNC(mtk_gpueb_set_stability_mode, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_get_desire_freq, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_get_desire_freq_dual, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_set_mode, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_get_mode, "", "");
KSYMTAB_FUNC(mtk_gpueb_power_modle_cmd, "", "");
KSYMTAB_FUNC(mtk_gpueb_set_power_state, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_get_cur_freq, "", "");
KSYMTAB_FUNC(mtk_gpueb_dvfs_get_frame_loading, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_batch_read, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_read_u64, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_read, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_multi_read, "", "");
KSYMTAB_FUNC(mtk_gpueb_mbrain_read, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_write, "", "");
KSYMTAB_FUNC(mtk_gpueb_sysram_rb_write, "", "");
KSYMTAB_FUNC(ged_register_platform_fp, "", "");
KSYMTAB_FUNC(ged_do_platform_related_init, "", "");
KSYMTAB_FUNC(mtk_bandwidth_resource_init, "", "");
KSYMTAB_FUNC(qos_get_frame_nr, "", "");
KSYMTAB_FUNC(ged_gpu_slc_dynamic_mode, "_gpl", "");
KSYMTAB_FUNC(ged_gpu_slc_get_dynamic_mode, "_gpl", "");
KSYMTAB_FUNC(ged_mali_event_init, "", "");
KSYMTAB_FUNC(ged_mali_event_update_cs_error_nolock, "", "");
KSYMTAB_FUNC(ged_mali_event_update_device_lost, "", "");
KSYMTAB_FUNC(ged_mali_event_update_device_lost_nolock, "", "");
KSYMTAB_FUNC(ged_mali_event_update_gpu_reset, "", "");
KSYMTAB_FUNC(ged_mali_event_update_gpu_reset_nolock, "", "");
KSYMTAB_FUNC(ged_mali_event_update_pmode_flag, "", "");
KSYMTAB_FUNC(ged_mali_event_update_pmode_flag_nolock, "", "");
KSYMTAB_FUNC(ged_mali_event_notify_fence_timeout_event, "", "");
KSYMTAB_FUNC(ged_mali_event_register_fence_timeout_callback, "", "");
KSYMTAB_FUNC(ged_mali_event_unregister_fence_timeout_callback, "", "");
KSYMTAB_FUNC(ged_mali_event_notify_gpu_reset_done, "", "");
KSYMTAB_FUNC(ged_mali_event_register_gpu_reset_done_callback, "", "");
KSYMTAB_FUNC(ged_mali_event_unregister_gpu_reset_done_callback, "", "");
KSYMTAB_FUNC(ged_mali_worker_event_notify_callback, "", "");
KSYMTAB_FUNC(ged_mali_worker_event_register_callback, "", "");
KSYMTAB_FUNC(ged_mali_worker_event_unregister_callback, "", "");
KSYMTAB_FUNC(ged_gpu_memsys_feature_enable, "_gpl", "");

SYMBOL_CRC(ged_dvfs_set_gpu_core_mask_fp, 0xe76b433c, "");
SYMBOL_CRC(dcs_enable, 0x3dfdda96, "");
SYMBOL_CRC(dcs_set_adjust_support, 0x29708168, "");
SYMBOL_CRC(dcs_set_adjust_ratio_th, 0x4cd86ecb, "");
SYMBOL_CRC(dcs_set_adjust_fr_cnt, 0x662279c8, "");
SYMBOL_CRC(dcs_set_adjust_non_dcs_th, 0x10a0f365, "");
SYMBOL_CRC(dcs_get_adjust_support, 0xe11956cf, "");
SYMBOL_CRC(dcs_get_adjust_ratio_th, 0x3a09bf57, "");
SYMBOL_CRC(dcs_get_adjust_fr_cnt, 0xe04fd004, "");
SYMBOL_CRC(dcs_get_adjust_non_dcs_th, 0x3d220121, "");
SYMBOL_CRC(ged_vsync_notifier_fp, 0x4d4f8132, "");
SYMBOL_CRC(ged_notification, 0x07b5db5a, "");
SYMBOL_CRC(ged_set_target_fps, 0xb089b165, "");
SYMBOL_CRC(ged_get_segment_id, 0xf9ef77a4, "");
SYMBOL_CRC(ged_is_fdvfs_support, 0x8756a4a6, "");
SYMBOL_CRC(ged_log_buf_alloc, 0x7d8d0e14, "");
SYMBOL_CRC(ged_log_buf_get, 0xcb3d5adc, "");
SYMBOL_CRC(ged_log_buf_get_early, 0x61ab2eaa, "");
SYMBOL_CRC(ged_log_buf_free, 0x343bee22, "");
SYMBOL_CRC(ged_log_buf_print, 0xec361f90, "");
SYMBOL_CRC(ged_log_buf_print2, 0x21173af9, "");
SYMBOL_CRC(ged_log_buf_reset, 0x46ec0445, "");
SYMBOL_CRC(is_gpu_ged_log_enable, 0x693292e9, "");
SYMBOL_CRC(ged_log_dump, 0x50a50599, "");
SYMBOL_CRC(ged_sw_vsync_event_fp, 0xc0fb37f5, "");
SYMBOL_CRC(ged_gpu_power_stress_test_enable, 0x573c27de, "");
SYMBOL_CRC(ged_gpu_whitebox_power_test_support, 0x1eac475d, "");
SYMBOL_CRC(ged_gpu_whitebox_power_test_case, 0x0a754128, "");
SYMBOL_CRC(ged_get_whitebox_power_test_support, 0x31dcb499, "");
SYMBOL_CRC(ged_get_whitebox_power_test_case, 0xcde3f86b, "");
SYMBOL_CRC(ged_get_whitebox_power_test_case_clear, 0x588e68da, "");
SYMBOL_CRC(ged_set_whitebox_power_state_store, 0x44469fd1, "");
SYMBOL_CRC(ged_gpu_apo_support, 0x94f7d11b, "");
SYMBOL_CRC(ged_get_apo_thr_ns, 0x2c5922a1, "");
SYMBOL_CRC(ged_set_apo_thr_ns, 0x5ba191e4, "");
SYMBOL_CRC(ged_get_apo_wakeup_ns, 0xc2123b65, "");
SYMBOL_CRC(ged_set_apo_wakeup_ns_nolock, 0x27307250, "");
SYMBOL_CRC(ged_set_apo_wakeup_ns, 0x1910e5a3, "");
SYMBOL_CRC(ged_get_apo_lp_thr_ns, 0xe1e17b13, "");
SYMBOL_CRC(ged_set_apo_lp_thr_ns, 0x9a5d59c9, "");
SYMBOL_CRC(ged_get_apo_api_boost_thr_ns, 0x64d73649, "");
SYMBOL_CRC(ged_set_apo_api_boost_thr_ns, 0xf18c07ad, "");
SYMBOL_CRC(ged_set_all_apo_thr_ns_nolock, 0x2af75e15, "");
SYMBOL_CRC(ged_get_apo_hint, 0xee05366b, "");
SYMBOL_CRC(ged_get_apo_force_hint, 0xd3c7cc45, "");
SYMBOL_CRC(ged_set_apo_force_hint, 0x1831c736, "");
SYMBOL_CRC(ged_get_apo_autosuspend_delay_ref_count, 0xecca10bc, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_ctrl, 0x479d8bba, "");
SYMBOL_CRC(ged_get_apo_autosuspend_delay_ctrl, 0x7f33d39f, "");
SYMBOL_CRC(ged_get_apo_autosuspend_delay_target_ref_count, 0x16f2dd3f, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_target_ref_count, 0x2aec1297, "");
SYMBOL_CRC(ged_get_apo_autosuspend_delay_ms, 0x94f49b1e, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_ms_ref_idletime_nolock, 0x56d22064, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_ms_ref_idletime, 0xfb003548, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_ms_nolock, 0x956f7afb, "");
SYMBOL_CRC(ged_set_apo_autosuspend_delay_ms, 0xeb26b989, "");
SYMBOL_CRC(ged_get_gpu_frame_time, 0x866e5bec, "");
SYMBOL_CRC(ged_set_apo_status, 0x4a24ad86, "");
SYMBOL_CRC(ged_set_apo_legacy, 0xb55a47f8, "");
SYMBOL_CRC(ged_get_apo_legacy, 0xbe9fd87c, "");
SYMBOL_CRC(ged_set_apo_api_sync_status, 0x8ea6e90c, "");
SYMBOL_CRC(ged_gpu_apo_api_sync_support, 0x4211af7c, "");
SYMBOL_CRC(ged_get_active_time, 0xbd78bbdb, "");
SYMBOL_CRC(ged_get_idle_time, 0xd79edfc1, "");
SYMBOL_CRC(ged_gpu_is_heavy, 0x9e1ac58e, "");
SYMBOL_CRC(ged_check_apo_api_boost, 0x84bbb152, "");
SYMBOL_CRC(ged_get_apo_api_boost, 0x292ad0fb, "");
SYMBOL_CRC(ged_check_power_duration, 0x1edd2512, "");
SYMBOL_CRC(ged_get_power_duration, 0x64342810, "");
SYMBOL_CRC(ged_gpu_apo_init_nolock, 0xcaa33e10, "");
SYMBOL_CRC(ged_gpu_apo_reset_nolock, 0x69800b75, "");
SYMBOL_CRC(ged_gpu_apo_reset, 0xb8fbef8f, "");
SYMBOL_CRC(ged_gpu_apo_notify, 0x2db97e11, "");
SYMBOL_CRC(ged_get_predict_active_time, 0x95096d9c, "");
SYMBOL_CRC(ged_get_predict_idle_time, 0x65516446, "");
SYMBOL_CRC(ged_check_predict_power_autosuspend_nolock, 0x0a922802, "");
SYMBOL_CRC(ged_check_predict_power_autosuspend, 0xe992fadb, "");
SYMBOL_CRC(ged_check_predict_power_duration, 0x0721b224, "");
SYMBOL_CRC(ged_get_predict_power_duration, 0xa6fa66bd, "");
SYMBOL_CRC(ged_gpu_predict_apo_init_nolock, 0xb7bbcd35, "");
SYMBOL_CRC(ged_gpu_predict_apo_reset_nolock, 0x22f9c7c1, "");
SYMBOL_CRC(ged_gpu_predict_apo_reset, 0xa998e019, "");
SYMBOL_CRC(ged_gpu_predict_apo_notify, 0x628dab59, "");
SYMBOL_CRC(ged_get_autosuspend_stress, 0x850c2121, "");
SYMBOL_CRC(ged_set_autosuspend_stress, 0x96e6a0d3, "");
SYMBOL_CRC(ged_dvfs_gpu_clock_switch_notify, 0xcca965ad, "");
SYMBOL_CRC(ged_dvfs_query_power_state_time, 0xc593883d, "");
SYMBOL_CRC(ged_gpu_autosuspend_timeout_notify, 0xc278e5ad, "");
SYMBOL_CRC(check_pm_callback_state, 0xfce64442, "");
SYMBOL_CRC(dump_pm_callback_kbase_info, 0x7ef2191e, "");
SYMBOL_CRC(ged_trace_fw_soi_enabled, 0x7466e8ef, "");
SYMBOL_CRC(ged_trace_scheduler_state, 0x0072fecf, "");
SYMBOL_CRC(ged_trace_ast_cond, 0xe03e3a34, "");
SYMBOL_CRC(ged_trace_ast, 0xd2812589, "");
SYMBOL_CRC(ged_trace_idle_timer_enabled, 0xade3626a, "");
SYMBOL_CRC(ged_query_info, 0x8f4f0048, "");
SYMBOL_CRC(ged_dvfs_cal_gpu_utilization_ex_fp, 0x1f1724b1, "");
SYMBOL_CRC(ged_dvfs_gpu_freq_commit_fp, 0xe4931974, "");
SYMBOL_CRC(ged_dvfs_gpu_freq_dual_commit_fp, 0xc904191f, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_idx, 0x71d75692, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_idx_test, 0xd9f56975, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_top_idx, 0xae40922f, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_top_idx_test, 0x88271236, "");
SYMBOL_CRC(ged_dvfs_set_sysram_last_commit_top_idx, 0x0f78cd14, "");
SYMBOL_CRC(ged_dvfs_write_sysram_virtual_commit_idx, 0x5773c2e8, "");
SYMBOL_CRC(ged_dvfs_set_sysram_last_commit_dual_idx, 0x3e452355, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_stack_idx, 0x8ea8a514, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_dual, 0x4938108a, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_stack_idx_test, 0x23e0c7af, "");
SYMBOL_CRC(ged_dvfs_write_sysram_last_commit_dual_test, 0xf743f07c, "");
SYMBOL_CRC(ged_dvfs_set_sysram_last_commit_stack_idx, 0xae6bdc17, "");
SYMBOL_CRC(ged_dvfs_get_last_commit_idx, 0xf591cac9, "");
SYMBOL_CRC(ged_dvfs_get_last_commit_top_idx, 0x0ab3f4a2, "");
SYMBOL_CRC(ged_dvfs_get_last_commit_stack_idx, 0xa454238c, "");
SYMBOL_CRC(ged_dvfs_get_last_commit_dual_idx, 0xbd0e9a3e, "");
SYMBOL_CRC(ged_dvfs_get_gov_mask_enable, 0x80df8f62, "");
SYMBOL_CRC(ged_dvfs_get_gov_mask_support, 0x1c0df825, "");
SYMBOL_CRC(ged_dvfs_set_gov_mask_enable, 0x98b369b7, "");
SYMBOL_CRC(ged_dvfs_get_desire_mask, 0xc1d3ce96, "");
SYMBOL_CRC(ged_dvfs_get_dcs_enable, 0x9f2b7f73, "");
SYMBOL_CRC(ged_dvfs_write_sysram_protm_enter, 0xc7b5dd0d, "");
SYMBOL_CRC(ged_dvfs_write_sysram_protm_exit, 0x97952ce9, "");
SYMBOL_CRC(ged_write_sysram_pwr_hint, 0xa1fac806, "");
SYMBOL_CRC(ged_dvfs_record_soc_timer, 0x67f8ce5c, "");
SYMBOL_CRC(ged_dvfs_update_step_size, 0x7cf81440, "");
SYMBOL_CRC(get_api_sync_flag, 0xee17eeb1, "");
SYMBOL_CRC(get_sf_edge_hint, 0x58f1b110, "");
SYMBOL_CRC(reset_sf_edge_hint, 0x05d35fae, "");
SYMBOL_CRC(ged_get_api_boost_start_ts_ns, 0x533f3f13, "");
SYMBOL_CRC(ged_get_api_boost_end_ts_ns, 0x1d751121, "");
SYMBOL_CRC(ged_get_api_boost_interval_ns, 0xa6c8a5d6, "");
SYMBOL_CRC(ged_reset_api_boost_interval_ns, 0xfe109cc7, "");
SYMBOL_CRC(ged_dvfs_query_opp_cost, 0xe0f98233, "");
SYMBOL_CRC(ged_dvfs_get_real_oppfreq_num, 0x40e882c3, "");
SYMBOL_CRC(ged_dvfs_query_loading, 0x5b5ad02a, "");
SYMBOL_CRC(ged_notify_fix_opp_from_gpufreq, 0xdfaa0c7d, "");
SYMBOL_CRC(ged_notify_fix_freq_volt_from_gpufreq, 0xc4cb97d8, "");
SYMBOL_CRC(ged_kpi_output_gfx_info2_fp, 0xc2100112, "");
SYMBOL_CRC(ged_kpi_gpu_dvfs_fp, 0x1ea01a8c, "");
SYMBOL_CRC(ged_kpi_trigger_fb_dvfs_fp, 0x6733c327, "");
SYMBOL_CRC(ged_kpi_check_if_fallback_mode_fp, 0x7dbe8f3c, "");
SYMBOL_CRC(ged_kpi_fastdvfs_update_dcs_fp, 0xb28fb28b, "");
SYMBOL_CRC(ged_kpi_set_gpu_dvfs_hint_fp, 0x289c665d, "");
SYMBOL_CRC(ged_kpi_set_cpu_remained_time_fp, 0xabe542dd, "");
SYMBOL_CRC(ged_kpi_set_target_FPS_margin, 0x70c1cca8, "");
SYMBOL_CRC(ged_kpi_set_target_FPS_api, 0x3da674db, "");
SYMBOL_CRC(ged_kpi_set_fw_idle_mode, 0x5a83b0f2, "");
SYMBOL_CRC(ged_kpi_enable_fw_idle_policy, 0x78b0eaa9, "");
SYMBOL_CRC(ged_kpi_get_panel_refresh_rate, 0x766ac4ae, "");
SYMBOL_CRC(ged_kpi_get_target_fps, 0x066d77ef, "");
SYMBOL_CRC(ged_kpi_query_dvfs_freq_pred, 0x9f3f7969, "");
SYMBOL_CRC(ged_kpi_query_gpu_dvfs_info, 0xc432725b, "");
SYMBOL_CRC(ged_kpi_hint_frame_info, 0x401fd279, "");
SYMBOL_CRC(ged_kpi_set_gift_status, 0xf343507d, "");
SYMBOL_CRC(ged_kpi_set_gift_target_pid, 0xa1d3c8ea, "");
SYMBOL_CRC(mtk_gpueb_dvfs_commit, 0xef60e125, "");
SYMBOL_CRC(mtk_gpueb_dvfs_dcs_commit, 0x66cea722, "");
SYMBOL_CRC(mtk_gpueb_dvfs_set_frame_done, 0x5fe3385c, "");
SYMBOL_CRC(mtk_gpueb_dvfs_set_frame_base_dvfs, 0x23891ae2, "");
SYMBOL_CRC(mtk_gpueb_dvfs_set_taget_frame_time, 0x1284993d, "");
SYMBOL_CRC(mtk_gpueb_set_fallback_mode, 0x126ade94, "");
SYMBOL_CRC(mtk_gpueb_set_stability_mode, 0x8878d3f9, "");
SYMBOL_CRC(mtk_gpueb_dvfs_get_desire_freq, 0x6f9ca63d, "");
SYMBOL_CRC(mtk_gpueb_dvfs_get_desire_freq_dual, 0x4ba83e77, "");
SYMBOL_CRC(mtk_gpueb_dvfs_set_mode, 0x024df890, "");
SYMBOL_CRC(mtk_gpueb_dvfs_get_mode, 0x12b5b116, "");
SYMBOL_CRC(mtk_gpueb_power_modle_cmd, 0x7ac98637, "");
SYMBOL_CRC(mtk_gpueb_set_power_state, 0x4e7bb734, "");
SYMBOL_CRC(mtk_gpueb_dvfs_get_cur_freq, 0xd7cbf701, "");
SYMBOL_CRC(mtk_gpueb_dvfs_get_frame_loading, 0x633a5982, "");
SYMBOL_CRC(mtk_gpueb_sysram_batch_read, 0x6d4ca3d4, "");
SYMBOL_CRC(mtk_gpueb_sysram_read_u64, 0xe384f98c, "");
SYMBOL_CRC(mtk_gpueb_sysram_read, 0xaa194557, "");
SYMBOL_CRC(mtk_gpueb_sysram_multi_read, 0x29e0eb9c, "");
SYMBOL_CRC(mtk_gpueb_mbrain_read, 0x741891c3, "");
SYMBOL_CRC(mtk_gpueb_sysram_write, 0x9dfa3af7, "");
SYMBOL_CRC(mtk_gpueb_sysram_rb_write, 0xc7b6f5cf, "");
SYMBOL_CRC(ged_register_platform_fp, 0xb0163f90, "");
SYMBOL_CRC(ged_do_platform_related_init, 0x30724c84, "");
SYMBOL_CRC(mtk_bandwidth_resource_init, 0x3183b4d6, "");
SYMBOL_CRC(qos_get_frame_nr, 0x95aec6c5, "");
SYMBOL_CRC(ged_gpu_slc_dynamic_mode, 0x15acd8de, "_gpl");
SYMBOL_CRC(ged_gpu_slc_get_dynamic_mode, 0x2a3808cf, "_gpl");
SYMBOL_CRC(ged_mali_event_init, 0xa0871d5b, "");
SYMBOL_CRC(ged_mali_event_update_cs_error_nolock, 0x54ef7b39, "");
SYMBOL_CRC(ged_mali_event_update_device_lost, 0xa5c2c3e6, "");
SYMBOL_CRC(ged_mali_event_update_device_lost_nolock, 0xf5e5515d, "");
SYMBOL_CRC(ged_mali_event_update_gpu_reset, 0x9883df5c, "");
SYMBOL_CRC(ged_mali_event_update_gpu_reset_nolock, 0x6226d2d6, "");
SYMBOL_CRC(ged_mali_event_update_pmode_flag, 0x01a76c65, "");
SYMBOL_CRC(ged_mali_event_update_pmode_flag_nolock, 0xaa8a8271, "");
SYMBOL_CRC(ged_mali_event_notify_fence_timeout_event, 0xbe5b141a, "");
SYMBOL_CRC(ged_mali_event_register_fence_timeout_callback, 0x04734cc2, "");
SYMBOL_CRC(ged_mali_event_unregister_fence_timeout_callback, 0x60657ec4, "");
SYMBOL_CRC(ged_mali_event_notify_gpu_reset_done, 0x347c1987, "");
SYMBOL_CRC(ged_mali_event_register_gpu_reset_done_callback, 0x8da900a3, "");
SYMBOL_CRC(ged_mali_event_unregister_gpu_reset_done_callback, 0x45e91881, "");
SYMBOL_CRC(ged_mali_worker_event_notify_callback, 0x6a3e0593, "");
SYMBOL_CRC(ged_mali_worker_event_register_callback, 0x88288a28, "");
SYMBOL_CRC(ged_mali_worker_event_unregister_callback, 0x802b3ec8, "");
SYMBOL_CRC(ged_gpu_memsys_feature_enable, 0x82e4a3c3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x665b5ccb, "seq_open" },
	{ 0xfb01b4e5, "gpufreq_bringup" },
	{ 0x484164d5, "gpufreq_get_opp_num" },
	{ 0x686d006d, "gpufreq_get_freq_by_idx" },
	{ 0xd11990b4, "gpufreq_get_working_table" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x037a0cba, "kfree" },
	{ 0x0bfda5a8, "gpufreq_get_cur_freq" },
	{ 0xc2fa1ae0, "gpufreq_get_cur_oppidx" },
	{ 0xcff40235, "gpufreq_get_cur_out_freq" },
	{ 0x72e4ff9e, "gpufreq_get_cur_avg_freq" },
	{ 0xdffed6fb, "gpufreq_get_cur_volt" },
	{ 0x170611ee, "gpufreq_get_power_by_idx" },
	{ 0xfc97a9d7, "gpufreq_get_oppidx_by_freq" },
	{ 0x1ce31752, "gpufreq_get_leakage_power" },
	{ 0xd887beae, "gpufreq_get_dynamic_power" },
	{ 0xd3329da2, "gpufreq_get_cur_limit_idx" },
	{ 0xde236815, "gpufreq_get_cur_limiter" },
	{ 0xef55c1b7, "gpufreq_set_limit" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdef472f1, "gpufreq_get_power_state" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x3e1ed8a9, "gpufreq_get_core_num" },
	{ 0x96848186, "scnprintf" },
	{ 0xb886d41f, "gpufreq_get_core_mask_table" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xb4028d67, "proc_create" },
	{ 0x979b55bb, "nvmem_cell_get" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x5a921311, "strncmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9166fada, "strncpy" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xcb1598f4, "mtk_custom_get_gpu_freq_level_count" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xfcadd21b, "mtk_custom_boost_gpu_freq" },
	{ 0xdbc1789a, "mtk_custom_upbound_gpu_freq" },
	{ 0x5bc52a09, "mtk_get_gpu_loading" },
	{ 0xac2fe36d, "mtk_get_gpu_block" },
	{ 0xb004e4df, "mtk_get_gpu_idle" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc1c7417f, "mtk_get_dvfs_margin_value" },
	{ 0x8f2b1460, "mtk_dvfs_margin_value" },
	{ 0xe56161ea, "mtk_get_loading_base_dvfs_step" },
	{ 0x837aa15b, "mtk_loading_base_dvfs_step" },
	{ 0x0090a9e8, "mtk_get_timer_base_dvfs_margin" },
	{ 0x41d6caa8, "mtk_timer_base_dvfs_margin" },
	{ 0x25f85cbd, "mtk_get_dvfs_loading_mode" },
	{ 0xb1db2696, "mtk_dvfs_loading_mode" },
	{ 0x4661f44b, "mtk_get_dvfs_workload_mode" },
	{ 0x01fffb8a, "mtk_dvfs_workload_mode" },
	{ 0x1bdbc4b0, "mtk_get_fastdvfs_mode" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe920b044, "mtk_set_fastdvfs_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
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
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0x40cead39, "bpf_trace_run9" },
	{ 0x369f9403, "bpf_trace_run8" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x00148653, "vsnprintf" },
	{ 0x1f4ba756, "param_get_uint" },
	{ 0xf23a2c23, "param_set_uint" },
	{ 0xd217e9e6, "trace_set_clr_event" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x81eb31a8, "kstrdup_quotable_cmdline" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xa3723568, "mtk_set_bottom_gpu_freq" },
	{ 0x5c0ddd98, "mtk_gpu_fence_debug_dump" },
	{ 0x8a7ec7f9, "gpufreq_get_cur_temperature" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0x0530033f, "mtk_get_bottom_gpu_freq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x086c39c4, "mtk_set_gpu_idle" },
	{ 0x93e46ac7, "__hrtimer_get_remaining" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x01000e51, "schedule" },
	{ 0x1d179fbf, "kmem_cache_destroy" },
	{ 0x30d30c09, "kmem_cache_alloc_noprof" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x064ed30e, "anon_inode_getfile" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x461e85df, "kmem_cache_free" },
	{ 0x27f51596, "fget" },
	{ 0x621ae253, "fput" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x3daad512, "__kmem_cache_create_args" },
	{ 0x38da0bff, "MTKGPUQoS_mode_ratio" },
	{ 0xc0a54449, "pid_task" },
	{ 0xb1d04e67, "find_vpid" },
	{ 0x608e0767, "gpufreq_get_dvfs_state" },
	{ 0x02adb4e4, "mtk_set_bottom_gpu_freq_fp" },
	{ 0x89a3b84a, "mtk_get_bottom_gpu_freq_fp" },
	{ 0xcbfd0482, "mtk_custom_get_gpu_freq_level_count_fp" },
	{ 0x6334feef, "mtk_custom_boost_gpu_freq_fp" },
	{ 0x6d9b18a1, "mtk_custom_upbound_gpu_freq_fp" },
	{ 0xc9568513, "mtk_get_gpu_loading_fp" },
	{ 0xf45a66ac, "mtk_get_gpu_block_fp" },
	{ 0x7ec8fead, "mtk_get_gpu_idle_fp" },
	{ 0x872e1854, "mtk_get_gpu_bottom_freq_fp" },
	{ 0x4e3844bd, "mtk_dvfs_margin_value_fp" },
	{ 0x39642b13, "mtk_get_dvfs_margin_value_fp" },
	{ 0x62d513cd, "mtk_loading_base_dvfs_step_fp" },
	{ 0x4526daa5, "mtk_get_loading_base_dvfs_step_fp" },
	{ 0xa8c8588a, "mtk_timer_base_dvfs_margin_fp" },
	{ 0xad5413dd, "mtk_get_timer_base_dvfs_margin_fp" },
	{ 0x276fb9c7, "mtk_dvfs_loading_mode_fp" },
	{ 0x89dde4cc, "mtk_get_dvfs_loading_mode_fp" },
	{ 0xb59ead2f, "mtk_dvfs_workload_mode_fp" },
	{ 0x8bdb1b37, "mtk_get_dvfs_workload_mode_fp" },
	{ 0x3f8981d2, "mtk_set_fastdvfs_mode_fp" },
	{ 0x2dfc2aad, "mtk_get_fastdvfs_mode_fp" },
	{ 0x1cf2dc32, "ged_get_last_commit_idx_fp" },
	{ 0x6d43198f, "ged_get_last_commit_top_idx_fp" },
	{ 0x8cda41e8, "ged_get_last_commit_stack_idx_fp" },
	{ 0x2f15dfc5, "ged_notify_gpu_fix_opp_fp" },
	{ 0xb5ca8483, "ged_notify_gpu_fix_freq_volt_fp" },
	{ 0xaab7da79, "drm_register_fps_chg_callback" },
	{ 0x59e44647, "drm_unregister_fps_chg_callback" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe82761d1, "mtk_ipi_send_compl_to_gpueb" },
	{ 0x0fbee3af, "get_gpueb_ipidev" },
	{ 0x2fae0e87, "gpueb_get_send_PIN_ID_by_name" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0xa3c8b3eb, "gpueb_get_recv_PIN_ID_by_name" },
	{ 0xd197876c, "mtk_register_gpu_power_change" },
	{ 0xf95d44ce, "mtk_unregister_gpu_power_change" },
	{ 0x0279e4f6, "mtk_notify_gpu_freq_change" },
	{ 0xaba63322, "of_iomap" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2cdce23b, "MTKGPUQoS_setup" },
	{ 0x50d37958, "MTKGPUQoS_mode" },
	{ 0xb6ea4eb1, "sspm_reserve_mem_get_phys" },
	{ 0x238d879c, "sspm_reserve_mem_get_virt" },
	{ 0x317f1dbc, "sspm_reserve_mem_get_size" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xdaf0d189, "gpufreq_set_mfgsys_config" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xc2865ca9, "anon_inode_getfd" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbbda18c4, "dma_fence_free" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x60bbb124, "dma_fence_signal_locked" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x4e870156,
	0x92997ed8,
	0xb7c7d237,
	0x5cf4d4de,
	0xe7ce721f,
	0x69cfdbb0,
	0x3cdb28e3,
	0x665b5ccb,
	0xfb01b4e5,
	0x484164d5,
	0x686d006d,
	0xd11990b4,
	0xa571f6b0,
	0xf3cdc3c6,
	0x037a0cba,
	0x0bfda5a8,
	0xc2fa1ae0,
	0xcff40235,
	0x72e4ff9e,
	0xdffed6fb,
	0x170611ee,
	0xfc97a9d7,
	0x1ce31752,
	0xd887beae,
	0xd3329da2,
	0xde236815,
	0xef55c1b7,
	0xd5977bfb,
	0xed55cabd,
	0x41ed3709,
	0xdef472f1,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0x0f05f001,
	0xefe8a82e,
	0x3e1ed8a9,
	0x96848186,
	0xb886d41f,
	0xf70e4a4d,
	0xac594e02,
	0x1b2fa1a9,
	0x999e8297,
	0x43b0c9c3,
	0x9a85eebb,
	0x88db9f48,
	0x2be0c009,
	0xe94986d6,
	0x12db679a,
	0xb4028d67,
	0x979b55bb,
	0x99f018c4,
	0x85540ebc,
	0x330c0b0f,
	0x6fc35f2b,
	0x2d405891,
	0x3bd2c4ce,
	0x42aac25f,
	0x92495308,
	0xce8498d7,
	0x5a921311,
	0x75ca79b5,
	0x9166fada,
	0x7e19152a,
	0x9a835040,
	0xcb1598f4,
	0x8c8569cb,
	0xfcadd21b,
	0xdbc1789a,
	0x5bc52a09,
	0xac2fe36d,
	0xb004e4df,
	0x3854774b,
	0xc1c7417f,
	0x8f2b1460,
	0xe56161ea,
	0x837aa15b,
	0x0090a9e8,
	0x41d6caa8,
	0x25f85cbd,
	0xb1db2696,
	0x4661f44b,
	0x01fffb8a,
	0x1bdbc4b0,
	0x3b6c41ea,
	0xe920b044,
	0xbcab6ee6,
	0xe0da6e4a,
	0x57c959d2,
	0x656e4a6e,
	0x51a511eb,
	0xe7ab1ecc,
	0x34db050b,
	0x8dee722d,
	0xe2d5255a,
	0xaeb082ad,
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
	0x881d741f,
	0xe80494d6,
	0xa3783864,
	0x6bd4d5dc,
	0x3d10f515,
	0xe3c00b45,
	0x1c7a01a8,
	0x40cead39,
	0x369f9403,
	0xc8f2ae9d,
	0x356461c8,
	0xd35cce70,
	0x9ec6ca96,
	0x00148653,
	0x1f4ba756,
	0xf23a2c23,
	0xd217e9e6,
	0x476b165a,
	0x29161415,
	0x81eb31a8,
	0x1e6d26a8,
	0x8d522714,
	0x2469810f,
	0xfe5d4bb2,
	0xa3723568,
	0x5c0ddd98,
	0x8a7ec7f9,
	0x92acb4e9,
	0xb2fb935e,
	0x7155bcf8,
	0x628c0f8f,
	0x0530033f,
	0xc5b6f236,
	0xe123f3d9,
	0x0296695f,
	0x2d3385d3,
	0x2155f701,
	0x102fe6de,
	0x56470118,
	0x49cd25ed,
	0xea82d349,
	0x9166fc03,
	0x8c03d20c,
	0xc0b7c197,
	0x086c39c4,
	0x93e46ac7,
	0xba0aee2e,
	0xce5bc4d0,
	0xb39378cc,
	0xb3f7646e,
	0x01000e51,
	0x1d179fbf,
	0x30d30c09,
	0xa843805a,
	0x064ed30e,
	0x0f013cdc,
	0x3f4547a7,
	0x461e85df,
	0x27f51596,
	0x621ae253,
	0xaaae9064,
	0x0904e8ad,
	0x2b3df576,
	0x3daad512,
	0x38da0bff,
	0xc0a54449,
	0xb1d04e67,
	0x608e0767,
	0x02adb4e4,
	0x89a3b84a,
	0xcbfd0482,
	0x6334feef,
	0x6d9b18a1,
	0xc9568513,
	0xf45a66ac,
	0x7ec8fead,
	0x872e1854,
	0x4e3844bd,
	0x39642b13,
	0x62d513cd,
	0x4526daa5,
	0xa8c8588a,
	0xad5413dd,
	0x276fb9c7,
	0x89dde4cc,
	0xb59ead2f,
	0x8bdb1b37,
	0x3f8981d2,
	0x2dfc2aad,
	0x1cf2dc32,
	0x6d43198f,
	0x8cda41e8,
	0x2f15dfc5,
	0xb5ca8483,
	0xaab7da79,
	0x59e44647,
	0xba8fbd64,
	0xb5b54b34,
	0xb43f9365,
	0xe82761d1,
	0x0fbee3af,
	0x2fae0e87,
	0x65bb94f6,
	0xa3c8b3eb,
	0xd197876c,
	0xf95d44ce,
	0x0279e4f6,
	0xaba63322,
	0xc1cad332,
	0x3f72e5f3,
	0x8b9c34da,
	0x2cdce23b,
	0x50d37958,
	0xb6ea4eb1,
	0x238d879c,
	0x317f1dbc,
	0x40863ba1,
	0xaf56600a,
	0xdaf0d189,
	0xb318cbab,
	0xcd6bda8d,
	0xc2865ca9,
	0x14605535,
	0xf61b1f04,
	0xdeb99119,
	0xa5526619,
	0xca9360b5,
	0x197d5b60,
	0x4d9b652b,
	0xbbda18c4,
	0x8427cc7b,
	0x60bbb124,
	0x4b750f53,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"debugfs_create_file\0"
	"_printk\0"
	"debugfs_remove\0"
	"debugfs_create_dir\0"
	"seq_lseek\0"
	"seq_read\0"
	"seq_release\0"
	"seq_open\0"
	"gpufreq_bringup\0"
	"gpufreq_get_opp_num\0"
	"gpufreq_get_freq_by_idx\0"
	"gpufreq_get_working_table\0"
	"__mutex_init\0"
	"of_find_compatible_node\0"
	"kfree\0"
	"gpufreq_get_cur_freq\0"
	"gpufreq_get_cur_oppidx\0"
	"gpufreq_get_cur_out_freq\0"
	"gpufreq_get_cur_avg_freq\0"
	"gpufreq_get_cur_volt\0"
	"gpufreq_get_power_by_idx\0"
	"gpufreq_get_oppidx_by_freq\0"
	"gpufreq_get_leakage_power\0"
	"gpufreq_get_dynamic_power\0"
	"gpufreq_get_cur_limit_idx\0"
	"gpufreq_get_cur_limiter\0"
	"gpufreq_set_limit\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"get_random_bytes\0"
	"gpufreq_get_power_state\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"gpufreq_get_core_num\0"
	"scnprintf\0"
	"gpufreq_get_core_mask_table\0"
	"preempt_schedule_notrace\0"
	"__cpu_online_mask\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"preempt_schedule\0"
	"__arch_copy_to_user\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"sched_clock\0"
	"__platform_driver_register\0"
	"proc_create\0"
	"nvmem_cell_get\0"
	"nvmem_cell_read\0"
	"nvmem_cell_put\0"
	"remove_proc_entry\0"
	"platform_driver_unregister\0"
	"kobject_create_and_add\0"
	"kobject_put\0"
	"sysfs_create_file_ns\0"
	"sysfs_remove_file_ns\0"
	"kernel_kobj\0"
	"strncmp\0"
	"__fortify_panic\0"
	"strncpy\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"mtk_custom_get_gpu_freq_level_count\0"
	"kstrtoint\0"
	"mtk_custom_boost_gpu_freq\0"
	"mtk_custom_upbound_gpu_freq\0"
	"mtk_get_gpu_loading\0"
	"mtk_get_gpu_block\0"
	"mtk_get_gpu_idle\0"
	"kstrtoll\0"
	"mtk_get_dvfs_margin_value\0"
	"mtk_dvfs_margin_value\0"
	"mtk_get_loading_base_dvfs_step\0"
	"mtk_loading_base_dvfs_step\0"
	"mtk_get_timer_base_dvfs_margin\0"
	"mtk_timer_base_dvfs_margin\0"
	"mtk_get_dvfs_loading_mode\0"
	"mtk_dvfs_loading_mode\0"
	"mtk_get_dvfs_workload_mode\0"
	"mtk_dvfs_workload_mode\0"
	"mtk_get_fastdvfs_mode\0"
	"kstrtouint\0"
	"mtk_set_fastdvfs_mode\0"
	"sscanf\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"snprintf\0"
	"_raw_write_lock_bh\0"
	"_raw_write_unlock_bh\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_read_lock_bh\0"
	"strcmp\0"
	"_raw_read_unlock_bh\0"
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
	"bpf_trace_run3\0"
	"bpf_trace_run1\0"
	"bpf_trace_run2\0"
	"bpf_trace_run6\0"
	"bpf_trace_run7\0"
	"bpf_trace_run5\0"
	"bpf_trace_run4\0"
	"bpf_trace_run9\0"
	"bpf_trace_run8\0"
	"seq_printf\0"
	"rtc_time64_to_tm\0"
	"_raw_spin_unlock_irqrestore\0"
	"ktime_get_real_ts64\0"
	"vsnprintf\0"
	"param_get_uint\0"
	"param_set_uint\0"
	"trace_set_clr_event\0"
	"sized_strscpy\0"
	"find_task_by_vpid\0"
	"kstrdup_quotable_cmdline\0"
	"strstr\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"sys_tz\0"
	"mtk_set_bottom_gpu_freq\0"
	"mtk_gpu_fence_debug_dump\0"
	"gpufreq_get_cur_temperature\0"
	"param_ops_uint\0"
	"param_ops_int\0"
	"sync_file_get_fence\0"
	"dma_fence_add_callback\0"
	"mtk_get_bottom_gpu_freq\0"
	"queue_work_on\0"
	"dma_fence_release\0"
	"refcount_warn_saturate\0"
	"system_wq\0"
	"hrtimer_try_to_cancel\0"
	"hrtimer_cancel\0"
	"__warn_printk\0"
	"alloc_workqueue\0"
	"hrtimer_init\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"hrtimer_start_range_ns\0"
	"mtk_set_gpu_idle\0"
	"__hrtimer_get_remaining\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"kthread_should_stop\0"
	"schedule\0"
	"kmem_cache_destroy\0"
	"kmem_cache_alloc_noprof\0"
	"get_unused_fd_flags\0"
	"anon_inode_getfile\0"
	"fd_install\0"
	"put_unused_fd\0"
	"kmem_cache_free\0"
	"fget\0"
	"fput\0"
	"dma_buf_get\0"
	"mtk_dma_buf_set_name\0"
	"dma_buf_put\0"
	"__kmem_cache_create_args\0"
	"MTKGPUQoS_mode_ratio\0"
	"pid_task\0"
	"find_vpid\0"
	"gpufreq_get_dvfs_state\0"
	"mtk_set_bottom_gpu_freq_fp\0"
	"mtk_get_bottom_gpu_freq_fp\0"
	"mtk_custom_get_gpu_freq_level_count_fp\0"
	"mtk_custom_boost_gpu_freq_fp\0"
	"mtk_custom_upbound_gpu_freq_fp\0"
	"mtk_get_gpu_loading_fp\0"
	"mtk_get_gpu_block_fp\0"
	"mtk_get_gpu_idle_fp\0"
	"mtk_get_gpu_bottom_freq_fp\0"
	"mtk_dvfs_margin_value_fp\0"
	"mtk_get_dvfs_margin_value_fp\0"
	"mtk_loading_base_dvfs_step_fp\0"
	"mtk_get_loading_base_dvfs_step_fp\0"
	"mtk_timer_base_dvfs_margin_fp\0"
	"mtk_get_timer_base_dvfs_margin_fp\0"
	"mtk_dvfs_loading_mode_fp\0"
	"mtk_get_dvfs_loading_mode_fp\0"
	"mtk_dvfs_workload_mode_fp\0"
	"mtk_get_dvfs_workload_mode_fp\0"
	"mtk_set_fastdvfs_mode_fp\0"
	"mtk_get_fastdvfs_mode_fp\0"
	"ged_get_last_commit_idx_fp\0"
	"ged_get_last_commit_top_idx_fp\0"
	"ged_get_last_commit_stack_idx_fp\0"
	"ged_notify_gpu_fix_opp_fp\0"
	"ged_notify_gpu_fix_freq_volt_fp\0"
	"drm_register_fps_chg_callback\0"
	"drm_unregister_fps_chg_callback\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"ktime_get\0"
	"mtk_ipi_send_compl_to_gpueb\0"
	"get_gpueb_ipidev\0"
	"gpueb_get_send_PIN_ID_by_name\0"
	"mtk_ipi_register\0"
	"gpueb_get_recv_PIN_ID_by_name\0"
	"mtk_register_gpu_power_change\0"
	"mtk_unregister_gpu_power_change\0"
	"mtk_notify_gpu_freq_change\0"
	"of_iomap\0"
	"of_address_to_resource\0"
	"single_release\0"
	"single_open\0"
	"MTKGPUQoS_setup\0"
	"MTKGPUQoS_mode\0"
	"sspm_reserve_mem_get_phys\0"
	"sspm_reserve_mem_get_virt\0"
	"sspm_reserve_mem_get_size\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"gpufreq_set_mfgsys_config\0"
	"of_find_node_opts_by_path\0"
	"of_property_read_string_helper\0"
	"anon_inode_getfd\0"
	"dma_fence_context_alloc\0"
	"sync_file_create\0"
	"dma_fence_init\0"
	"rb_insert_color\0"
	"rb_next\0"
	"dma_fence_default_wait\0"
	"rb_erase\0"
	"dma_fence_free\0"
	"_raw_spin_lock_irq\0"
	"dma_fence_signal_locked\0"
	"_raw_spin_unlock_irq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpufreq_wrapper,mtk_gpu_hal,system_heap,mtk_gpu_qos,mediatek-drm,mtk_gpueb,mtk_tinysys_ipi,sspm_v3");

MODULE_ALIAS("of:N*T*Cmediatek,ged");
MODULE_ALIAS("of:N*T*Cmediatek,gedC*");

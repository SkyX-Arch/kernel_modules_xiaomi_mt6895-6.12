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

KSYMTAB_DATA(rq_data, "", "");
KSYMTAB_DATA(sysctl_util_est, "", "");
KSYMTAB_DATA(fpsgo_notify_fbt_is_boost_fp, "", "");
KSYMTAB_FUNC(_get_sched_debug_lock, "", "");
KSYMTAB_FUNC(_set_sched_debug_lock, "", "");
KSYMTAB_FUNC(set_curr_task_uclamp_ctrl, "", "");
KSYMTAB_FUNC(get_curr_task_uclamp_ctrl, "", "");
KSYMTAB_FUNC(unset_curr_task_uclamp_ctrl, "", "");
KSYMTAB_FUNC(set_dsu_idle_enable, "", "");
KSYMTAB_FUNC(unset_dsu_idle_enable, "", "");
KSYMTAB_FUNC(is_dsu_idle_enable, "", "");
KSYMTAB_FUNC(get_cpufreq_policy, "", "");
KSYMTAB_FUNC(set_hold_freq_enable, "", "");
KSYMTAB_FUNC(unset_hold_freq_enable, "", "");
KSYMTAB_FUNC(is_hold_freq_enable, "", "");
KSYMTAB_FUNC(set_flt_coef_margin_ctrl, "", "");
KSYMTAB_FUNC(get_flt_coef_margin_ctrl, "", "");
KSYMTAB_FUNC(sugov_effective_cpu_perf_clamp, "", "");
KSYMTAB_FUNC(mtk_effective_cpu_util, "", "");
KSYMTAB_FUNC(mtk_effective_cpu_util_dpt_v2, "", "");
KSYMTAB_DATA(sugov_grp_awr_update_cpu_tar_util_hook, "", "");
KSYMTAB_FUNC(is_wl_support, "_gpl", "");
KSYMTAB_FUNC(mtk_get_em_base_info, "", "");
KSYMTAB_DATA(sbb, "", "");
KSYMTAB_DATA(flt_get_fpsgo_boosting, "", "");
KSYMTAB_DATA(curr_collab_state, "_gpl", "");
KSYMTAB_DATA(change_dpt_support_driver_hook, "", "");
KSYMTAB_DATA(val_m, "_gpl", "");
KSYMTAB_DATA(dpt_v2_uclamp2local_cap_hook, "", "");
KSYMTAB_DATA(get_coef1_min_max_ltime_hook, "", "");
KSYMTAB_DATA(get_coef2_min_max_ltime_hook, "", "");
KSYMTAB_DATA(dpt_v2_opp2pwr_eff_hook, "", "");
KSYMTAB_DATA(dpt_v2_linear_local_cap2opp_hook, "", "");
KSYMTAB_DATA(dpt_v2_opp2global_cap_hook, "", "");
KSYMTAB_DATA(get_scaling_factor_shift_bit_hook, "", "");
KSYMTAB_DATA(get_dpt_v2_cs_counter_addr_hook, "", "");
KSYMTAB_DATA(dpt_v2_linear_local_cap2freq_hook, "", "");
KSYMTAB_DATA(get_cpu_perf_scaling_factor_hook, "", "");
KSYMTAB_DATA(get_cpu_power_scaling_factor_hook, "", "");
KSYMTAB_DATA(check_cpu_perf_scaling_factor_hook, "", "");
KSYMTAB_DATA(check_cpu_power_scaling_factor_hook, "", "");
KSYMTAB_DATA(rescale_cpu_util_upscale_hook, "", "");
KSYMTAB_DATA(dpt_v2_util2cap_needed_local_hook, "", "");
KSYMTAB_DATA(change_dpt_v2_support_hook, "", "");
KSYMTAB_DATA(set_dpt_v2_default_status_hook, "", "");
KSYMTAB_DATA(get_dpt_v2_default_status_hook, "", "");
KSYMTAB_DATA(is_dpt_v2_support_hook, "", "");
KSYMTAB_DATA(rescale_coef1_util_or_ratio_hook, "", "");
KSYMTAB_DATA(rescale_coef2_util_or_ratio_hook, "", "");
KSYMTAB_DATA(dpt_v2_freq2linear_cap_local_hook, "", "");
KSYMTAB_DATA(update_coef1_ltime_perf_model_hook, "", "");
KSYMTAB_DATA(update_coef2_ltime_perf_model_hook, "", "");
KSYMTAB_DATA(get_coef1_ltime_perf_model_result_hook, "", "");
KSYMTAB_DATA(get_coef2_ltime_perf_model_result_hook, "", "");
KSYMTAB_DATA(dpt_v2_init_done_hook, "", "");
KSYMTAB_DATA(__dpt_rq, "", "");
KSYMTAB_DATA(max_freq, "", "");
KSYMTAB_DATA(thermal_freq, "", "");
KSYMTAB_DATA(freq_ceiling, "", "");
KSYMTAB_DATA(freq_floor, "", "");
KSYMTAB_DATA(thermal_freq_ceiling_ratio, "", "");
KSYMTAB_DATA(freq_ceiling_ratio, "", "");
KSYMTAB_DATA(dpt_v2_cpu_capacity_all_util_local, "", "");
KSYMTAB_FUNC(get_grp_dvfs_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_grp_dvfs_ctrl, "_gpl", "");
KSYMTAB_FUNC(get_am_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_am_ctrl, "_gpl", "");
KSYMTAB_FUNC(get_eas_dsu_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_eas_dsu_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_dsu_ctrl, "_gpl", "");
KSYMTAB_FUNC(get_dsu_freq_state, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_freq_agg_hook, "", "");
KSYMTAB_FUNC(dsu_freq_agg, "_gpl", "");
KSYMTAB_FUNC(mtk_uclamp_involve, "_gpl", "");
KSYMTAB_FUNC(get_nr_wl, "_gpl", "");
KSYMTAB_FUNC(get_nr_cpu_type, "_gpl", "");
KSYMTAB_FUNC(get_cpu_type, "_gpl", "");
KSYMTAB_FUNC(set_wl_manual, "_gpl", "");
KSYMTAB_FUNC(set_wl_cpu_manual, "_gpl", "");
KSYMTAB_FUNC(set_wl_dsu_manual, "_gpl", "");
KSYMTAB_FUNC(get_wl_manual, "_gpl", "");
KSYMTAB_FUNC(get_wl_dsu_manual, "_gpl", "");
KSYMTAB_DATA(max_freq_scale, "", "");
KSYMTAB_DATA(min_freq_scale, "", "");
KSYMTAB_DATA(min_freq, "", "");
KSYMTAB_FUNC(mtk_available_idle_cpu, "_gpl", "");
KSYMTAB_FUNC(get_thermal_freq_ceiling_ratio, "", "");
KSYMTAB_FUNC(get_freq_ceiling_ratio, "", "");
KSYMTAB_FUNC(dpt_v2_local_capacity_all_util_of, "", "");
KSYMTAB_FUNC(mtk_get_actual_cpu_capacity, "_gpl", "");
KSYMTAB_FUNC(update_wl_tbl, "_gpl", "");
KSYMTAB_FUNC(get_curr_wl, "_gpl", "");
KSYMTAB_FUNC(get_curr_wl_dsu, "_gpl", "");
KSYMTAB_FUNC(get_classify_wl, "_gpl", "");
KSYMTAB_FUNC(get_em_wl, "_gpl", "");
KSYMTAB_FUNC(get_wl_dsu, "_gpl", "");
KSYMTAB_DATA(init_collab_driver_hook, "", "");
KSYMTAB_DATA(init_wl_collab_mask_driver_hook, "", "");
KSYMTAB_DATA(set_curr_collab_state_driver_hook, "", "");
KSYMTAB_DATA(set_val_m_driver_hook, "", "");
KSYMTAB_DATA(set_collab_state_manual_driver_hook, "", "");
KSYMTAB_DATA(is_dpt_support_driver_hook, "", "");
KSYMTAB_DATA(set_v_driver_hook, "", "");
KSYMTAB_FUNC(get_sys_max_cap_cluster, "_gpl", "");
KSYMTAB_FUNC(get_cpu_max_freq, "", "");
KSYMTAB_FUNC(get_cpu_min_freq, "", "");
KSYMTAB_FUNC(update_curr_collab_state, "_gpl", "");
KSYMTAB_FUNC(init_sbb_cpu_data, "_gpl", "");
KSYMTAB_FUNC(set_system_sbb, "_gpl", "");
KSYMTAB_FUNC(get_system_sbb, "_gpl", "");
KSYMTAB_FUNC(set_sbb, "_gpl", "");
KSYMTAB_FUNC(is_sbb_trigger, "_gpl", "");
KSYMTAB_FUNC(set_sbb_active_ratio, "_gpl", "");
KSYMTAB_FUNC(set_sbb_active_ratio_gear, "_gpl", "");
KSYMTAB_FUNC(get_sbb_active_ratio_gear, "_gpl", "");
KSYMTAB_FUNC(is_gearless_support, "_gpl", "");
KSYMTAB_FUNC(get_nr_gears, "_gpl", "");
KSYMTAB_FUNC(get_gear_cpumask, "_gpl", "");
KSYMTAB_DATA(mtk_eas_hook, "", "");
KSYMTAB_FUNC(get_eas_hook, "_gpl", "");
KSYMTAB_DATA(mtk_data_hook, "", "");
KSYMTAB_FUNC(mtk_data_get, "_gpl", "");
KSYMTAB_DATA(mtk_sched_test_hook, "", "");
KSYMTAB_DATA(mtk_opp2freq_hook, "", "");
KSYMTAB_FUNC(pd_opp2freq, "_gpl", "");
KSYMTAB_FUNC(record_sched_pd_opp2cap, "_gpl", "");
KSYMTAB_DATA(mtk_opp2cap_hook, "", "");
KSYMTAB_FUNC(pd_opp2cap, "_gpl", "");
KSYMTAB_FUNC(record_sched_pd_opp2pwr_eff, "_gpl", "");
KSYMTAB_DATA(mtk_opp2pwr_eff_hook, "", "");
KSYMTAB_FUNC(pd_opp2pwr_eff, "_gpl", "");
KSYMTAB_DATA(mtk_opp2dyn_pwr_hook, "", "");
KSYMTAB_FUNC(pd_opp2dyn_pwr, "_gpl", "");
KSYMTAB_DATA(mtk_opp2volt_hook, "", "");
KSYMTAB_FUNC(pd_opp2volt, "_gpl", "");
KSYMTAB_DATA(mtk_cpu_opp2dsu_freq_hook, "", "");
KSYMTAB_FUNC(pd_cpu_opp2dsu_freq, "_gpl", "");
KSYMTAB_DATA(mtk_util2opp_hook, "", "");
KSYMTAB_FUNC(pd_util2opp, "_gpl", "");
KSYMTAB_DATA(mtk_freq2opp_hook, "", "");
KSYMTAB_FUNC(pd_freq2opp, "_gpl", "");
KSYMTAB_DATA(mtk_cpu_volt2opp_hook, "", "");
KSYMTAB_FUNC(pd_cpu_volt2opp, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_weighting_hook, "", "");
KSYMTAB_FUNC(pd_get_dsu_weighting, "_gpl", "");
KSYMTAB_DATA(mtk_emi_weighting_hook, "", "");
KSYMTAB_FUNC(pd_get_emi_weighting, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_freq2opp_hook, "", "");
KSYMTAB_FUNC(dsu_get_freq_opp, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_volt2opp_hook, "", "");
KSYMTAB_FUNC(pd_dsu_volt2opp, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_opp_ps_hook, "", "");
KSYMTAB_FUNC(dsu_get_opp_ps, "_gpl", "");
KSYMTAB_DATA(mtk_leakage_hook, "", "");
KSYMTAB_FUNC(pd_get_opp_leakage, "_gpl", "");
KSYMTAB_DATA(mtk_dsu_freq_hook, "", "");
KSYMTAB_FUNC(pd_get_dsu_freq, "_gpl", "");
KSYMTAB_FUNC(pd_freq2util, "_gpl", "");
KSYMTAB_FUNC(pd_util2freq_r_o, "_gpl", "");
KSYMTAB_FUNC(pd_util2freq, "_gpl", "");
KSYMTAB_FUNC(pd_get_util_opp, "_gpl", "");
KSYMTAB_FUNC(pd_get_util_opp_legacy, "_gpl", "");
KSYMTAB_FUNC(pd_get_util_freq, "_gpl", "");
KSYMTAB_FUNC(pd_get_util_pwr_eff, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_opp, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_opp_legacy, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_opp_legacy_type, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_util_legacy, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_util, "_gpl", "");
KSYMTAB_FUNC(pd_get_freq_pwr_eff, "_gpl", "");
KSYMTAB_FUNC(pd_get_opp_freq, "_gpl", "");
KSYMTAB_FUNC(pd_get_opp_capacity, "_gpl", "");
KSYMTAB_FUNC(pd_get_opp_capacity_legacy, "_gpl", "");
KSYMTAB_FUNC(pd_get_opp_freq_legacy, "_gpl", "");
KSYMTAB_FUNC(pd_get_opp_pwr_eff, "_gpl", "");
KSYMTAB_FUNC(pd_X2Y, "_gpl", "");
KSYMTAB_FUNC(pd_get_cpu_opp, "_gpl", "");
KSYMTAB_FUNC(Adaptive_module_bypass, "_gpl", "");
KSYMTAB_FUNC(get_fpsgo_bypass_flag, "_gpl", "");
KSYMTAB_FUNC(get_curr_uclamp_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_curr_uclamp_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_curr_uclamp_hint, "_gpl", "");
KSYMTAB_FUNC(get_curr_uclamp_hint, "_gpl", "");
KSYMTAB_FUNC(get_gear_uclamp_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_gear_uclamp_ctrl, "_gpl", "");
KSYMTAB_FUNC(get_gear_uclamp_max, "_gpl", "");
KSYMTAB_FUNC(get_cpu_gear_uclamp_max, "_gpl", "");
KSYMTAB_FUNC(get_cpu_gear_uclamp_max_capacity, "_gpl", "");
KSYMTAB_FUNC(set_gear_uclamp_max, "_gpl", "");
KSYMTAB_FUNC(get_mtk_em_api_data, "", "");
KSYMTAB_FUNC(mtk_em_malloc, "", "");
KSYMTAB_FUNC(get_dpt_sram_base, "", "");
KSYMTAB_FUNC(get_dpt_rq, "_gpl", "");
KSYMTAB_FUNC(set_dpt_v2_info_manual, "_gpl", "");
KSYMTAB_FUNC(get_dpt_v2_driver_init_status, "", "");
KSYMTAB_FUNC(get_init_driver_after_vendor_init_done, "", "");
KSYMTAB_FUNC(init_driver_after_vendor_init, "", "");
KSYMTAB_FUNC(__get_scaling_factor_shift_bit, "", "");
KSYMTAB_FUNC(get_nr_collab_type, "", "");
KSYMTAB_FUNC(set_collab_state_manual, "_gpl", "");
KSYMTAB_FUNC(get_dpt_default_status, "_gpl", "");
KSYMTAB_FUNC(get_curr_cap, "_gpl", "");
KSYMTAB_FUNC(set_sched_capacity_margin_dvfs, "_gpl", "");
KSYMTAB_FUNC(get_sched_capacity_margin_dvfs, "_gpl", "");
KSYMTAB_FUNC(set_target_margin, "_gpl", "");
KSYMTAB_FUNC(set_target_margin_low, "_gpl", "");
KSYMTAB_FUNC(get_target_margin, "_gpl", "");
KSYMTAB_FUNC(get_target_margin_low, "_gpl", "");
KSYMTAB_FUNC(unset_target_margin, "_gpl", "");
KSYMTAB_FUNC(unset_target_margin_low, "_gpl", "");
KSYMTAB_FUNC(set_turn_point_freq, "_gpl", "");
KSYMTAB_FUNC(get_turn_point_freq, "_gpl", "");
KSYMTAB_FUNC(get_adaptive_margin, "_gpl", "");
KSYMTAB_FUNC(get_cpu_util_with_margin, "_gpl", "");
KSYMTAB_FUNC(get_cpu_active_ratio_cap, "_gpl", "");
KSYMTAB_FUNC(get_gear_max_active_ratio_cap, "_gpl", "");
KSYMTAB_FUNC(set_target_active_ratio_pct, "_gpl", "");
KSYMTAB_FUNC(set_target_active_ratio_cap, "_gpl", "");
KSYMTAB_FUNC(set_am_ceiling, "_gpl", "");
KSYMTAB_FUNC(get_am_ceiling, "_gpl", "");
KSYMTAB_FUNC(set_ignore_idle_ctrl, "_gpl", "");
KSYMTAB_FUNC(get_ignore_idle_ctrl, "_gpl", "");
KSYMTAB_DATA(flt_sched_get_cpu_group_util_eas_hook, "", "");
KSYMTAB_DATA(flt_sched_get_flt_coef_util_eas_hook, "", "");
KSYMTAB_DATA(flt_get_cpu_util_hook, "", "");
KSYMTAB_DATA(get_group_hint_hook, "", "");
KSYMTAB_FUNC(update_active_ratio_all, "", "");
KSYMTAB_FUNC(get_grp_high_freq, "", "");
KSYMTAB_FUNC(set_grp_high_freq, "", "");
KSYMTAB_FUNC(set_flt_margin, "_gpl", "");
KSYMTAB_FUNC(get_flt_margin, "_gpl", "");
KSYMTAB_FUNC(is_dpt_v2_support, "", "");
KSYMTAB_FUNC(dpt_v2_change_config, "", "");
KSYMTAB_FUNC(dpt_v2_get_config, "", "");
KSYMTAB_FUNC(dpt_v2_get_uclamped_cpu_util, "", "");
KSYMTAB_FUNC(mtk_map_util_freq_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(mtk_map_util_freq, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_next_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_cfs_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_cfs_boost_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(topology_set_non_s_scale_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(topology_set_coef1_s_scale_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(topology_set_coef1_ltime_scale_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(topology_set_coef2_s_scale_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(topology_set_coef2_ltime_scale_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(task_global_to_local_dpt_v2, "_gpl", "");
KSYMTAB_FUNC(get_clkg_sram_base_addr, "_gpl", "");
KSYMTAB_FUNC(get_l3ctl_sram_base_addr, "_gpl", "");
KSYMTAB_FUNC(get_cdsu_sram_base_addr, "_gpl", "");
KSYMTAB_FUNC(update_pelt_data, "_gpl", "");
KSYMTAB_FUNC(set_dsu_fine_ctrl_enable, "", "");
KSYMTAB_FUNC(get_dsu_fine_ctrl_enable, "", "");
KSYMTAB_FUNC(get_dsu_fine_ctrl, "", "");
KSYMTAB_FUNC(get_fine_value_pct_gear, "", "");
KSYMTAB_FUNC(get_fine_value_pct_cpu, "", "");
KSYMTAB_FUNC(sched_dpt_v2_swpm_mode_get, "_gpl", "");
KSYMTAB_FUNC(sched_dpt_v2_swpm_mode_set, "_gpl", "");
KSYMTAB_FUNC(sched_dpt_v2_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_dpt_v2_enable_set, "_gpl", "");
KSYMTAB_FUNC(legacy_api_support_get, "_gpl", "");
KSYMTAB_FUNC(sched_vip_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_gear_hints_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_updown_migration_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_skip_hiIRQ_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_rt_aggre_preempt_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_post_init_util_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_post_init_util_set, "_gpl", "");
KSYMTAB_FUNC(sched_percore_l3_bw_get, "_gpl", "");
KSYMTAB_FUNC(sched_percore_l3_bw_set, "_gpl", "");
KSYMTAB_FUNC(sched_dsu_pwr_enable_get, "_gpl", "");
KSYMTAB_FUNC(sched_dsu_pwr_enable_set, "_gpl", "");
KSYMTAB_FUNC(sched_shortcut_compress_rate_get, "_gpl", "");
KSYMTAB_FUNC(is_runnable_boost_enable, "", "");
KSYMTAB_FUNC(set_runnable_boost_enable, "", "");
KSYMTAB_FUNC(unset_runnable_boost_enable, "", "");
KSYMTAB_FUNC(hook_cpu_util_cfs_boost, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_cfs, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_cfs_boost, "_gpl", "");
KSYMTAB_FUNC(mtk_cpu_util_next, "_gpl", "");
KSYMTAB_FUNC(mtk_effective_cpu_util_total, "_gpl", "");

SYMBOL_CRC(rq_data, 0xfda02835, "");
SYMBOL_CRC(sysctl_util_est, 0x85d74a37, "");
SYMBOL_CRC(fpsgo_notify_fbt_is_boost_fp, 0x20ba2e0b, "");
SYMBOL_CRC(_get_sched_debug_lock, 0x587381ad, "");
SYMBOL_CRC(_set_sched_debug_lock, 0x4a96a1b9, "");
SYMBOL_CRC(set_curr_task_uclamp_ctrl, 0xa449f9d1, "");
SYMBOL_CRC(get_curr_task_uclamp_ctrl, 0x40c16794, "");
SYMBOL_CRC(unset_curr_task_uclamp_ctrl, 0x9e7ddb5b, "");
SYMBOL_CRC(set_dsu_idle_enable, 0xe9aab7af, "");
SYMBOL_CRC(unset_dsu_idle_enable, 0x92a710ed, "");
SYMBOL_CRC(is_dsu_idle_enable, 0x6ed9710d, "");
SYMBOL_CRC(get_cpufreq_policy, 0xd5c359b6, "");
SYMBOL_CRC(set_hold_freq_enable, 0x6c40d2d0, "");
SYMBOL_CRC(unset_hold_freq_enable, 0x00c93f26, "");
SYMBOL_CRC(is_hold_freq_enable, 0xa03fa33f, "");
SYMBOL_CRC(set_flt_coef_margin_ctrl, 0x342971fa, "");
SYMBOL_CRC(get_flt_coef_margin_ctrl, 0xbbbe955b, "");
SYMBOL_CRC(sugov_effective_cpu_perf_clamp, 0xb9c7c033, "");
SYMBOL_CRC(mtk_effective_cpu_util, 0x298df983, "");
SYMBOL_CRC(mtk_effective_cpu_util_dpt_v2, 0x7a42bd60, "");
SYMBOL_CRC(sugov_grp_awr_update_cpu_tar_util_hook, 0x5ad089c6, "");
SYMBOL_CRC(is_wl_support, 0x334c0c6c, "_gpl");
SYMBOL_CRC(mtk_get_em_base_info, 0xed25b5f0, "");
SYMBOL_CRC(sbb, 0x3f322a95, "");
SYMBOL_CRC(flt_get_fpsgo_boosting, 0x92588a78, "");
SYMBOL_CRC(curr_collab_state, 0x9f4dcc60, "_gpl");
SYMBOL_CRC(change_dpt_support_driver_hook, 0xd3df5b5c, "");
SYMBOL_CRC(val_m, 0x397a1f39, "_gpl");
SYMBOL_CRC(dpt_v2_uclamp2local_cap_hook, 0xa9c59fbd, "");
SYMBOL_CRC(get_coef1_min_max_ltime_hook, 0x0b71e7dd, "");
SYMBOL_CRC(get_coef2_min_max_ltime_hook, 0xe838507f, "");
SYMBOL_CRC(dpt_v2_opp2pwr_eff_hook, 0x752dd909, "");
SYMBOL_CRC(dpt_v2_linear_local_cap2opp_hook, 0xc1c3d290, "");
SYMBOL_CRC(dpt_v2_opp2global_cap_hook, 0x1c8315b8, "");
SYMBOL_CRC(get_scaling_factor_shift_bit_hook, 0xf89219d0, "");
SYMBOL_CRC(get_dpt_v2_cs_counter_addr_hook, 0x29aeb8cf, "");
SYMBOL_CRC(dpt_v2_linear_local_cap2freq_hook, 0xfd300587, "");
SYMBOL_CRC(get_cpu_perf_scaling_factor_hook, 0x42936774, "");
SYMBOL_CRC(get_cpu_power_scaling_factor_hook, 0x3628344a, "");
SYMBOL_CRC(check_cpu_perf_scaling_factor_hook, 0x5cd7660d, "");
SYMBOL_CRC(check_cpu_power_scaling_factor_hook, 0x5d477bca, "");
SYMBOL_CRC(rescale_cpu_util_upscale_hook, 0x3e398aaa, "");
SYMBOL_CRC(dpt_v2_util2cap_needed_local_hook, 0xaabd29ec, "");
SYMBOL_CRC(change_dpt_v2_support_hook, 0xa6fce3a0, "");
SYMBOL_CRC(set_dpt_v2_default_status_hook, 0xc416ab98, "");
SYMBOL_CRC(get_dpt_v2_default_status_hook, 0xb37ec649, "");
SYMBOL_CRC(is_dpt_v2_support_hook, 0x1022b6ee, "");
SYMBOL_CRC(rescale_coef1_util_or_ratio_hook, 0x735266ca, "");
SYMBOL_CRC(rescale_coef2_util_or_ratio_hook, 0xc8d97b65, "");
SYMBOL_CRC(dpt_v2_freq2linear_cap_local_hook, 0x753728da, "");
SYMBOL_CRC(update_coef1_ltime_perf_model_hook, 0x79c7ec52, "");
SYMBOL_CRC(update_coef2_ltime_perf_model_hook, 0x07bfa4f4, "");
SYMBOL_CRC(get_coef1_ltime_perf_model_result_hook, 0x9933a512, "");
SYMBOL_CRC(get_coef2_ltime_perf_model_result_hook, 0xa1082e61, "");
SYMBOL_CRC(dpt_v2_init_done_hook, 0xadf40e2e, "");
SYMBOL_CRC(__dpt_rq, 0xa94deba2, "");
SYMBOL_CRC(max_freq, 0x236dcac0, "");
SYMBOL_CRC(thermal_freq, 0x4573fcd1, "");
SYMBOL_CRC(freq_ceiling, 0x440c8d9d, "");
SYMBOL_CRC(freq_floor, 0xea92b60f, "");
SYMBOL_CRC(thermal_freq_ceiling_ratio, 0xecaa1564, "");
SYMBOL_CRC(freq_ceiling_ratio, 0xe6c18888, "");
SYMBOL_CRC(dpt_v2_cpu_capacity_all_util_local, 0xad90773f, "");
SYMBOL_CRC(get_grp_dvfs_ctrl, 0x41750bf4, "_gpl");
SYMBOL_CRC(set_grp_dvfs_ctrl, 0x850fc24b, "_gpl");
SYMBOL_CRC(get_am_ctrl, 0x3a53be71, "_gpl");
SYMBOL_CRC(set_am_ctrl, 0xe80265ab, "_gpl");
SYMBOL_CRC(get_eas_dsu_ctrl, 0x55f0d26c, "_gpl");
SYMBOL_CRC(set_eas_dsu_ctrl, 0x1d4a1606, "_gpl");
SYMBOL_CRC(set_dsu_ctrl, 0x898f3345, "_gpl");
SYMBOL_CRC(get_dsu_freq_state, 0xace41a77, "_gpl");
SYMBOL_CRC(mtk_dsu_freq_agg_hook, 0xa9f8ecd8, "");
SYMBOL_CRC(dsu_freq_agg, 0xb89e8212, "_gpl");
SYMBOL_CRC(mtk_uclamp_involve, 0x2ed4732d, "_gpl");
SYMBOL_CRC(get_nr_wl, 0x2ad3b47b, "_gpl");
SYMBOL_CRC(get_nr_cpu_type, 0x3c671f7b, "_gpl");
SYMBOL_CRC(get_cpu_type, 0xde5ef734, "_gpl");
SYMBOL_CRC(set_wl_manual, 0x49b5917d, "_gpl");
SYMBOL_CRC(set_wl_cpu_manual, 0x7f8c6877, "_gpl");
SYMBOL_CRC(set_wl_dsu_manual, 0xdf343e5e, "_gpl");
SYMBOL_CRC(get_wl_manual, 0x2dc46c3c, "_gpl");
SYMBOL_CRC(get_wl_dsu_manual, 0x2cf2d4e3, "_gpl");
SYMBOL_CRC(max_freq_scale, 0x587f5732, "");
SYMBOL_CRC(min_freq_scale, 0x7fc43003, "");
SYMBOL_CRC(min_freq, 0xf4867881, "");
SYMBOL_CRC(mtk_available_idle_cpu, 0xde01b8b9, "_gpl");
SYMBOL_CRC(get_thermal_freq_ceiling_ratio, 0xd8eff00b, "");
SYMBOL_CRC(get_freq_ceiling_ratio, 0x5c38ed92, "");
SYMBOL_CRC(dpt_v2_local_capacity_all_util_of, 0xc250bbf1, "");
SYMBOL_CRC(mtk_get_actual_cpu_capacity, 0x595d70f0, "_gpl");
SYMBOL_CRC(update_wl_tbl, 0xdfe20281, "_gpl");
SYMBOL_CRC(get_curr_wl, 0x38399da9, "_gpl");
SYMBOL_CRC(get_curr_wl_dsu, 0xbfe84727, "_gpl");
SYMBOL_CRC(get_classify_wl, 0xe16e45ef, "_gpl");
SYMBOL_CRC(get_em_wl, 0xc4019a1f, "_gpl");
SYMBOL_CRC(get_wl_dsu, 0xefd86370, "_gpl");
SYMBOL_CRC(init_collab_driver_hook, 0xe60e0150, "");
SYMBOL_CRC(init_wl_collab_mask_driver_hook, 0xe45c784c, "");
SYMBOL_CRC(set_curr_collab_state_driver_hook, 0x1e8ef4bf, "");
SYMBOL_CRC(set_val_m_driver_hook, 0xa08a1371, "");
SYMBOL_CRC(set_collab_state_manual_driver_hook, 0xd5566a2a, "");
SYMBOL_CRC(is_dpt_support_driver_hook, 0x88010db6, "");
SYMBOL_CRC(set_v_driver_hook, 0xa5bfd138, "");
SYMBOL_CRC(get_sys_max_cap_cluster, 0xa4f53f2a, "_gpl");
SYMBOL_CRC(get_cpu_max_freq, 0x39270c06, "");
SYMBOL_CRC(get_cpu_min_freq, 0x2cacd8f4, "");
SYMBOL_CRC(update_curr_collab_state, 0x072eebfa, "_gpl");
SYMBOL_CRC(init_sbb_cpu_data, 0x11da4dc9, "_gpl");
SYMBOL_CRC(set_system_sbb, 0x0022e216, "_gpl");
SYMBOL_CRC(get_system_sbb, 0x2b15bef7, "_gpl");
SYMBOL_CRC(set_sbb, 0x7a160793, "_gpl");
SYMBOL_CRC(is_sbb_trigger, 0x66d638e3, "_gpl");
SYMBOL_CRC(set_sbb_active_ratio, 0x0623dd60, "_gpl");
SYMBOL_CRC(set_sbb_active_ratio_gear, 0x01b063de, "_gpl");
SYMBOL_CRC(get_sbb_active_ratio_gear, 0x2d17e429, "_gpl");
SYMBOL_CRC(is_gearless_support, 0x49ff5efa, "_gpl");
SYMBOL_CRC(get_nr_gears, 0xef559a24, "_gpl");
SYMBOL_CRC(get_gear_cpumask, 0x84e9f08e, "_gpl");
SYMBOL_CRC(mtk_eas_hook, 0x9d3727bf, "");
SYMBOL_CRC(get_eas_hook, 0x799c4c88, "_gpl");
SYMBOL_CRC(mtk_data_hook, 0x391ea61c, "");
SYMBOL_CRC(mtk_data_get, 0xf8c837c7, "_gpl");
SYMBOL_CRC(mtk_sched_test_hook, 0xd3178186, "");
SYMBOL_CRC(mtk_opp2freq_hook, 0x5e07d705, "");
SYMBOL_CRC(pd_opp2freq, 0x024f95cd, "_gpl");
SYMBOL_CRC(record_sched_pd_opp2cap, 0x4988428c, "_gpl");
SYMBOL_CRC(mtk_opp2cap_hook, 0x8a57ad11, "");
SYMBOL_CRC(pd_opp2cap, 0x750b08aa, "_gpl");
SYMBOL_CRC(record_sched_pd_opp2pwr_eff, 0xaaed9037, "_gpl");
SYMBOL_CRC(mtk_opp2pwr_eff_hook, 0x7d6586df, "");
SYMBOL_CRC(pd_opp2pwr_eff, 0x093e19dd, "_gpl");
SYMBOL_CRC(mtk_opp2dyn_pwr_hook, 0x7e75d2c9, "");
SYMBOL_CRC(pd_opp2dyn_pwr, 0x7d5c8fd5, "_gpl");
SYMBOL_CRC(mtk_opp2volt_hook, 0x1958b5da, "");
SYMBOL_CRC(pd_opp2volt, 0xa3f14019, "_gpl");
SYMBOL_CRC(mtk_cpu_opp2dsu_freq_hook, 0x081e8db0, "");
SYMBOL_CRC(pd_cpu_opp2dsu_freq, 0xcf0f373e, "_gpl");
SYMBOL_CRC(mtk_util2opp_hook, 0x3b9a072e, "");
SYMBOL_CRC(pd_util2opp, 0x5c663238, "_gpl");
SYMBOL_CRC(mtk_freq2opp_hook, 0xed04b23e, "");
SYMBOL_CRC(pd_freq2opp, 0x2a8d72aa, "_gpl");
SYMBOL_CRC(mtk_cpu_volt2opp_hook, 0xa1c8fa40, "");
SYMBOL_CRC(pd_cpu_volt2opp, 0x02a17d41, "_gpl");
SYMBOL_CRC(mtk_dsu_weighting_hook, 0x40bcdcee, "");
SYMBOL_CRC(pd_get_dsu_weighting, 0x87b1262a, "_gpl");
SYMBOL_CRC(mtk_emi_weighting_hook, 0xe01e7a67, "");
SYMBOL_CRC(pd_get_emi_weighting, 0x5245a357, "_gpl");
SYMBOL_CRC(mtk_dsu_freq2opp_hook, 0xafe3cf9a, "");
SYMBOL_CRC(dsu_get_freq_opp, 0xc04dbdb3, "_gpl");
SYMBOL_CRC(mtk_dsu_volt2opp_hook, 0x6924fb6f, "");
SYMBOL_CRC(pd_dsu_volt2opp, 0x9ef66096, "_gpl");
SYMBOL_CRC(mtk_dsu_opp_ps_hook, 0xd6b3a036, "");
SYMBOL_CRC(dsu_get_opp_ps, 0x170ed47b, "_gpl");
SYMBOL_CRC(mtk_leakage_hook, 0xe7718804, "");
SYMBOL_CRC(pd_get_opp_leakage, 0x0d5cb810, "_gpl");
SYMBOL_CRC(mtk_dsu_freq_hook, 0x9fa086e1, "");
SYMBOL_CRC(pd_get_dsu_freq, 0x456d04fc, "_gpl");
SYMBOL_CRC(pd_freq2util, 0x2c21556f, "_gpl");
SYMBOL_CRC(pd_util2freq_r_o, 0x49af5325, "_gpl");
SYMBOL_CRC(pd_util2freq, 0x1ca9257e, "_gpl");
SYMBOL_CRC(pd_get_util_opp, 0x1d6abd42, "_gpl");
SYMBOL_CRC(pd_get_util_opp_legacy, 0xfdd26827, "_gpl");
SYMBOL_CRC(pd_get_util_freq, 0xab4599f1, "_gpl");
SYMBOL_CRC(pd_get_util_pwr_eff, 0x7f994496, "_gpl");
SYMBOL_CRC(pd_get_freq_opp, 0x04c62fab, "_gpl");
SYMBOL_CRC(pd_get_freq_opp_legacy, 0xa3825629, "_gpl");
SYMBOL_CRC(pd_get_freq_opp_legacy_type, 0x1bf1fbe0, "_gpl");
SYMBOL_CRC(pd_get_freq_util_legacy, 0xd63842fd, "_gpl");
SYMBOL_CRC(pd_get_freq_util, 0xb459aae8, "_gpl");
SYMBOL_CRC(pd_get_freq_pwr_eff, 0x6055b727, "_gpl");
SYMBOL_CRC(pd_get_opp_freq, 0xa9d356c9, "_gpl");
SYMBOL_CRC(pd_get_opp_capacity, 0xac073acf, "_gpl");
SYMBOL_CRC(pd_get_opp_capacity_legacy, 0xd422dc84, "_gpl");
SYMBOL_CRC(pd_get_opp_freq_legacy, 0x836f0f34, "_gpl");
SYMBOL_CRC(pd_get_opp_pwr_eff, 0x2ef36bcd, "_gpl");
SYMBOL_CRC(pd_X2Y, 0x60a17349, "_gpl");
SYMBOL_CRC(pd_get_cpu_opp, 0x6bb5ca2c, "_gpl");
SYMBOL_CRC(Adaptive_module_bypass, 0x3e931d13, "_gpl");
SYMBOL_CRC(get_fpsgo_bypass_flag, 0x780e0349, "_gpl");
SYMBOL_CRC(get_curr_uclamp_ctrl, 0xdfccc53f, "_gpl");
SYMBOL_CRC(set_curr_uclamp_ctrl, 0x595f69e7, "_gpl");
SYMBOL_CRC(set_curr_uclamp_hint, 0xcb63ad00, "_gpl");
SYMBOL_CRC(get_curr_uclamp_hint, 0x95d44347, "_gpl");
SYMBOL_CRC(get_gear_uclamp_ctrl, 0x8a3aa29a, "_gpl");
SYMBOL_CRC(set_gear_uclamp_ctrl, 0xaa1ee350, "_gpl");
SYMBOL_CRC(get_gear_uclamp_max, 0x3d84dd40, "_gpl");
SYMBOL_CRC(get_cpu_gear_uclamp_max, 0x3a5210d6, "_gpl");
SYMBOL_CRC(get_cpu_gear_uclamp_max_capacity, 0xa94ae869, "_gpl");
SYMBOL_CRC(set_gear_uclamp_max, 0x64075b2a, "_gpl");
SYMBOL_CRC(get_mtk_em_api_data, 0x2f1e7309, "");
SYMBOL_CRC(mtk_em_malloc, 0x07d883d3, "");
SYMBOL_CRC(get_dpt_sram_base, 0x4c1ceeb2, "");
SYMBOL_CRC(get_dpt_rq, 0xa017db9d, "_gpl");
SYMBOL_CRC(set_dpt_v2_info_manual, 0x098401a1, "_gpl");
SYMBOL_CRC(get_dpt_v2_driver_init_status, 0xc85e28a3, "");
SYMBOL_CRC(get_init_driver_after_vendor_init_done, 0x211127cc, "");
SYMBOL_CRC(init_driver_after_vendor_init, 0xff4cd2da, "");
SYMBOL_CRC(__get_scaling_factor_shift_bit, 0xec6b54e3, "");
SYMBOL_CRC(get_nr_collab_type, 0x27521ed7, "");
SYMBOL_CRC(set_collab_state_manual, 0xfece000e, "_gpl");
SYMBOL_CRC(get_dpt_default_status, 0x875ed69c, "_gpl");
SYMBOL_CRC(get_curr_cap, 0xa9fac2a5, "_gpl");
SYMBOL_CRC(set_sched_capacity_margin_dvfs, 0xa1ea24df, "_gpl");
SYMBOL_CRC(get_sched_capacity_margin_dvfs, 0xd3188918, "_gpl");
SYMBOL_CRC(set_target_margin, 0x62d42e01, "_gpl");
SYMBOL_CRC(set_target_margin_low, 0x353e0e35, "_gpl");
SYMBOL_CRC(get_target_margin, 0xdfbdad0d, "_gpl");
SYMBOL_CRC(get_target_margin_low, 0xc8c5b35e, "_gpl");
SYMBOL_CRC(unset_target_margin, 0x532ff774, "_gpl");
SYMBOL_CRC(unset_target_margin_low, 0x18a0d0bd, "_gpl");
SYMBOL_CRC(set_turn_point_freq, 0xaf8e1795, "_gpl");
SYMBOL_CRC(get_turn_point_freq, 0x94a22efd, "_gpl");
SYMBOL_CRC(get_adaptive_margin, 0x26b142db, "_gpl");
SYMBOL_CRC(get_cpu_util_with_margin, 0xae0d0b25, "_gpl");
SYMBOL_CRC(get_cpu_active_ratio_cap, 0xa959b402, "_gpl");
SYMBOL_CRC(get_gear_max_active_ratio_cap, 0x207516bc, "_gpl");
SYMBOL_CRC(set_target_active_ratio_pct, 0x1e554c0a, "_gpl");
SYMBOL_CRC(set_target_active_ratio_cap, 0xda7d1130, "_gpl");
SYMBOL_CRC(set_am_ceiling, 0x6c7d99de, "_gpl");
SYMBOL_CRC(get_am_ceiling, 0xd73e510f, "_gpl");
SYMBOL_CRC(set_ignore_idle_ctrl, 0x9aece762, "_gpl");
SYMBOL_CRC(get_ignore_idle_ctrl, 0xd04fa292, "_gpl");
SYMBOL_CRC(flt_sched_get_cpu_group_util_eas_hook, 0xd90f43c8, "");
SYMBOL_CRC(flt_sched_get_flt_coef_util_eas_hook, 0xeaf8d67e, "");
SYMBOL_CRC(flt_get_cpu_util_hook, 0x1a2a5056, "");
SYMBOL_CRC(get_group_hint_hook, 0xeb968a0d, "");
SYMBOL_CRC(update_active_ratio_all, 0xe9b09d13, "");
SYMBOL_CRC(get_grp_high_freq, 0x8fed5478, "");
SYMBOL_CRC(set_grp_high_freq, 0x7f952eea, "");
SYMBOL_CRC(set_flt_margin, 0xa30b9555, "_gpl");
SYMBOL_CRC(get_flt_margin, 0x68a6b947, "_gpl");
SYMBOL_CRC(is_dpt_v2_support, 0x83457e9a, "");
SYMBOL_CRC(dpt_v2_change_config, 0xffd8602e, "");
SYMBOL_CRC(dpt_v2_get_config, 0xe4b17381, "");
SYMBOL_CRC(dpt_v2_get_uclamped_cpu_util, 0xf1c5961d, "");
SYMBOL_CRC(mtk_map_util_freq_dpt_v2, 0xd2fa6945, "_gpl");
SYMBOL_CRC(mtk_map_util_freq, 0xfd3b0d3b, "_gpl");
SYMBOL_CRC(mtk_cpu_util_next_dpt_v2, 0x1070e1da, "_gpl");
SYMBOL_CRC(mtk_cpu_util_cfs_dpt_v2, 0xab5a29c9, "_gpl");
SYMBOL_CRC(mtk_cpu_util_cfs_boost_dpt_v2, 0x3c9e2d23, "_gpl");
SYMBOL_CRC(topology_set_non_s_scale_dpt_v2, 0xa0285859, "_gpl");
SYMBOL_CRC(topology_set_coef1_s_scale_dpt_v2, 0x10ef816b, "_gpl");
SYMBOL_CRC(topology_set_coef1_ltime_scale_dpt_v2, 0xfef04fa6, "_gpl");
SYMBOL_CRC(topology_set_coef2_s_scale_dpt_v2, 0x3a5331e3, "_gpl");
SYMBOL_CRC(topology_set_coef2_ltime_scale_dpt_v2, 0x452441b5, "_gpl");
SYMBOL_CRC(task_global_to_local_dpt_v2, 0x574883fb, "_gpl");
SYMBOL_CRC(get_clkg_sram_base_addr, 0x26188cfb, "_gpl");
SYMBOL_CRC(get_l3ctl_sram_base_addr, 0xa3a55de2, "_gpl");
SYMBOL_CRC(get_cdsu_sram_base_addr, 0x085909db, "_gpl");
SYMBOL_CRC(update_pelt_data, 0x23544d9a, "_gpl");
SYMBOL_CRC(set_dsu_fine_ctrl_enable, 0x678eb2c0, "");
SYMBOL_CRC(get_dsu_fine_ctrl_enable, 0x7de1eb2a, "");
SYMBOL_CRC(get_dsu_fine_ctrl, 0x9629cec7, "");
SYMBOL_CRC(get_fine_value_pct_gear, 0x3b74c95b, "");
SYMBOL_CRC(get_fine_value_pct_cpu, 0x3db718ae, "");
SYMBOL_CRC(sched_dpt_v2_swpm_mode_get, 0x1833f18c, "_gpl");
SYMBOL_CRC(sched_dpt_v2_swpm_mode_set, 0x7c0725e9, "_gpl");
SYMBOL_CRC(sched_dpt_v2_enable_get, 0x6166f5e7, "_gpl");
SYMBOL_CRC(sched_dpt_v2_enable_set, 0xfb1668cf, "_gpl");
SYMBOL_CRC(legacy_api_support_get, 0xcbbc1450, "_gpl");
SYMBOL_CRC(sched_vip_enable_get, 0xd2529767, "_gpl");
SYMBOL_CRC(sched_gear_hints_enable_get, 0xd6d3e422, "_gpl");
SYMBOL_CRC(sched_updown_migration_enable_get, 0x86f62e66, "_gpl");
SYMBOL_CRC(sched_skip_hiIRQ_enable_get, 0x999f4d73, "_gpl");
SYMBOL_CRC(sched_rt_aggre_preempt_enable_get, 0xa05d3c2b, "_gpl");
SYMBOL_CRC(sched_post_init_util_enable_get, 0x714c1e53, "_gpl");
SYMBOL_CRC(sched_post_init_util_set, 0xc324a2a2, "_gpl");
SYMBOL_CRC(sched_percore_l3_bw_get, 0x8a42e87a, "_gpl");
SYMBOL_CRC(sched_percore_l3_bw_set, 0x21ff0793, "_gpl");
SYMBOL_CRC(sched_dsu_pwr_enable_get, 0xec449a33, "_gpl");
SYMBOL_CRC(sched_dsu_pwr_enable_set, 0x2c343bea, "_gpl");
SYMBOL_CRC(sched_shortcut_compress_rate_get, 0xd5dd5da2, "_gpl");
SYMBOL_CRC(is_runnable_boost_enable, 0x5c3d5f9e, "");
SYMBOL_CRC(set_runnable_boost_enable, 0x7e1a273f, "");
SYMBOL_CRC(unset_runnable_boost_enable, 0xd91547fa, "");
SYMBOL_CRC(hook_cpu_util_cfs_boost, 0x67a4210e, "_gpl");
SYMBOL_CRC(mtk_cpu_util_cfs, 0x58e50895, "_gpl");
SYMBOL_CRC(mtk_cpu_util_cfs_boost, 0xf884a651, "_gpl");
SYMBOL_CRC(mtk_cpu_util_next, 0x4856b4e2, "_gpl");
SYMBOL_CRC(mtk_effective_cpu_util_total, 0x0a7da89b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x08217b97, "set_cpu_min_opp" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xa65ab83d, "rebuild_sched_domains" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0xcc1cb855, "bpf_trace_run12" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x40cead39, "bpf_trace_run9" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xe5f24ab0, "bpf_trace_run11" },
	{ 0xa5644698, "bpf_trace_run10" },
	{ 0x369f9403, "bpf_trace_run8" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf44d65ec, "cpufreq_enable_fast_switch" },
	{ 0x47aad3b9, "have_governor_per_policy" },
	{ 0x74ee73e6, "gov_attr_set_get" },
	{ 0x681da333, "cpufreq_policy_transition_delay_us" },
	{ 0xfdd0214d, "kobject_init_and_add" },
	{ 0x5a5ad9ec, "get_governor_parent_kobj" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3b3a3d9a, "cpufreq_disable_fast_switch" },
	{ 0x92997ed8, "_printk" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xcb456737, "__kthread_init_worker" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x4770b00e, "kthread_bind_mask" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfc6b021c, "__cpufreq_driver_target" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0x329aa2d0, "gov_attr_set_init" },
	{ 0x037a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbc704fe1, "kthread_flush_worker" },
	{ 0x84d04f84, "gov_attr_set_put" },
	{ 0x1403ad09, "cpufreq_add_update_util_hook" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe97b3aa4, "cpufreq_driver_fast_switch" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x51f5329f, "cpufreq_this_cpu_can_update" },
	{ 0xdf61e07d, "cpufreq_driver_resolve_freq" },
	{ 0x9744353a, "irq_work_queue" },
	{ 0x2943498b, "tick_nohz_get_idle_calls_cpu" },
	{ 0x3192d768, "cpufreq_remove_update_util_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x52027794, "irq_work_sync" },
	{ 0xfcbb845b, "kthread_cancel_work_sync" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xe29a67a2, "topology_clear_scale_freq_source" },
	{ 0x0dc36e4c, "cpufreq_register_governor" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x064b12c2, "cpufreq_unregister_governor" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xee46e386, "runqueues" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x54552241, "cpu_scale" },
	{ 0x056a37c5, "sched_uclamp_used" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x33cd5a06, "governor_sysfs_ops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e498b49, "__scx_switched_all" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xfb5d095f, "__tracepoint_android_rvh_update_cpu_capacity" },
	{ 0xc0ef2c34, "__tracepoint_android_vh_cpufreq_fast_switch" },
	{ 0x64fc8e2d, "__tracepoint_android_vh_cpufreq_target" },
	{ 0xdc53025c, "__tracepoint_android_vh_arch_set_freq_scale" },
	{ 0x20ae29a9, "__tracepoint_android_rvh_build_perf_domains" },
	{ 0xaba63322, "of_iomap" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x6711919a, "__release_region" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x9591bf2b, "iomem_resource" },
	{ 0x55308b41, "get_cpu_ceiling_freq" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x18c317c2, "em_cpu_get" },
	{ 0xb4028d67, "proc_create" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x3f5492e0, "hw_pressure" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd3515e0, "sched_feat_keys" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xceed33cf, "arch_freq_scale" },
	{ 0xdbdda96b, "__scx_ops_enabled" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x08217b97,
	0xd5977bfb,
	0xa65ab83d,
	0xed55cabd,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x6bd4d5dc,
	0xcc1cb855,
	0xe3c00b45,
	0x881d741f,
	0x40cead39,
	0xa3783864,
	0x3d10f515,
	0xe5f24ab0,
	0xa5644698,
	0x369f9403,
	0x1c7a01a8,
	0x8d522714,
	0x2469810f,
	0xf70e4a4d,
	0xf44d65ec,
	0x47aad3b9,
	0x74ee73e6,
	0x681da333,
	0xfdd0214d,
	0x5a5ad9ec,
	0x3bd2c4ce,
	0x28aa6a67,
	0x3b3a3d9a,
	0x92997ed8,
	0xe17134b6,
	0xcb456737,
	0xba0aee2e,
	0x955b0e2e,
	0xd9346889,
	0xb39378cc,
	0x4770b00e,
	0xa571f6b0,
	0xce5bc4d0,
	0x34db050b,
	0xd35cce70,
	0xfc6b021c,
	0x716425b7,
	0x329aa2d0,
	0x037a0cba,
	0x3c3ff9fd,
	0x3b6c41ea,
	0xc5b6f236,
	0xbc704fe1,
	0x84d04f84,
	0x1403ad09,
	0x9f46ced8,
	0xba8fbd64,
	0xe97b3aa4,
	0xb5b54b34,
	0x51f5329f,
	0xdf61e07d,
	0x9744353a,
	0x2943498b,
	0x3192d768,
	0x6091797f,
	0x52027794,
	0xfcbb845b,
	0x7518b5f0,
	0xe29a67a2,
	0x0dc36e4c,
	0xc046d25b,
	0x805e2dd2,
	0x064b12c2,
	0x280f9f14,
	0xee46e386,
	0xe4bc4b09,
	0xde7ece30,
	0x73caefdc,
	0xd820ab9a,
	0xac594e02,
	0x54552241,
	0x056a37c5,
	0xefe8a82e,
	0x33cd5a06,
	0x2d3385d3,
	0x3e498b49,
	0x0f05f001,
	0xfb5d095f,
	0xc0ef2c34,
	0x64fc8e2d,
	0xdc53025c,
	0x20ae29a9,
	0xaba63322,
	0x12db679a,
	0x1fec5304,
	0x52c5c991,
	0x1ed4c5e6,
	0xa823db6e,
	0x3d0ffa5c,
	0xedc03953,
	0x40863ba1,
	0x6711919a,
	0xe136f93c,
	0x6b722180,
	0x0c1a5ee3,
	0xaf56600a,
	0x9591bf2b,
	0x55308b41,
	0x29161415,
	0x18c317c2,
	0xb4028d67,
	0xf8bd87ca,
	0xcd6f7bae,
	0x9fe899b7,
	0xc905402b,
	0xfa4d3c24,
	0xfef216eb,
	0x0296695f,
	0xe5010018,
	0x69cfdbb0,
	0x8b9c34da,
	0xc8f2ae9d,
	0x15db3b99,
	0x3f5492e0,
	0x15ba50a6,
	0xfd3515e0,
	0x017de3d5,
	0xceed33cf,
	0xdbdda96b,
	0x31b65f04,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"set_cpu_min_opp\0"
	"mutex_lock\0"
	"rebuild_sched_domains\0"
	"mutex_unlock\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run6\0"
	"bpf_trace_run12\0"
	"bpf_trace_run5\0"
	"bpf_trace_run3\0"
	"bpf_trace_run9\0"
	"bpf_trace_run2\0"
	"bpf_trace_run7\0"
	"bpf_trace_run11\0"
	"bpf_trace_run10\0"
	"bpf_trace_run8\0"
	"bpf_trace_run4\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"preempt_schedule_notrace\0"
	"cpufreq_enable_fast_switch\0"
	"have_governor_per_policy\0"
	"gov_attr_set_get\0"
	"cpufreq_policy_transition_delay_us\0"
	"kobject_init_and_add\0"
	"get_governor_parent_kobj\0"
	"kobject_put\0"
	"call_rcu\0"
	"cpufreq_disable_fast_switch\0"
	"_printk\0"
	"__kmalloc_cache_noprof\0"
	"__kthread_init_worker\0"
	"kthread_create_on_node\0"
	"kthread_worker_fn\0"
	"sched_setattr_nocheck\0"
	"kthread_stop\0"
	"kthread_bind_mask\0"
	"__mutex_init\0"
	"wake_up_process\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__cpufreq_driver_target\0"
	"kthread_queue_work\0"
	"gov_attr_set_init\0"
	"kfree\0"
	"sprintf\0"
	"kstrtouint\0"
	"queue_work_on\0"
	"kthread_flush_worker\0"
	"gov_attr_set_put\0"
	"cpufreq_add_update_util_hook\0"
	"__sw_hweight64\0"
	"_raw_spin_lock\0"
	"cpufreq_driver_fast_switch\0"
	"_raw_spin_unlock\0"
	"cpufreq_this_cpu_can_update\0"
	"cpufreq_driver_resolve_freq\0"
	"irq_work_queue\0"
	"tick_nohz_get_idle_calls_cpu\0"
	"cpufreq_remove_update_util_hook\0"
	"synchronize_rcu\0"
	"irq_work_sync\0"
	"kthread_cancel_work_sync\0"
	"proc_mkdir\0"
	"topology_clear_scale_freq_source\0"
	"cpufreq_register_governor\0"
	"android_rvh_probe_register\0"
	"tracepoint_probe_register\0"
	"cpufreq_unregister_governor\0"
	"__per_cpu_offset\0"
	"runqueues\0"
	"cpu_topology\0"
	"__cpu_possible_mask\0"
	"init_task\0"
	"vendor_data_pad\0"
	"__cpu_online_mask\0"
	"cpu_scale\0"
	"sched_uclamp_used\0"
	"kmalloc_caches\0"
	"governor_sysfs_ops\0"
	"system_wq\0"
	"__scx_switched_all\0"
	"mem_alloc_profiling_key\0"
	"__tracepoint_android_rvh_update_cpu_capacity\0"
	"__tracepoint_android_vh_cpufreq_fast_switch\0"
	"__tracepoint_android_vh_cpufreq_target\0"
	"__tracepoint_android_vh_arch_set_freq_scale\0"
	"__tracepoint_android_rvh_build_perf_domains\0"
	"of_iomap\0"
	"__platform_driver_register\0"
	"__of_parse_phandle_with_args\0"
	"__kmalloc_noprof\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"iounmap\0"
	"ioremap_prot\0"
	"__release_region\0"
	"of_property_read_variable_u32_array\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"arm64_use_ng_mappings\0"
	"iomem_resource\0"
	"get_cpu_ceiling_freq\0"
	"find_task_by_vpid\0"
	"em_cpu_get\0"
	"proc_create\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"get_cpu_idle_time\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_trylock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"seq_read\0"
	"single_open\0"
	"seq_printf\0"
	"__cpu_active_mask\0"
	"hw_pressure\0"
	"jiffies\0"
	"sched_feat_keys\0"
	"nr_cpu_ids\0"
	"arch_freq_scale\0"
	"__scx_ops_enabled\0"
	"of_property_read_u32_index\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "thermal_interface");


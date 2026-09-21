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

KSYMTAB_DATA(task_turbo_select_task_rq_fair_hook, "", "");
KSYMTAB_DATA(vip_loom_select_task_rq_fair_hook, "", "");
KSYMTAB_DATA(init_swpm_pwr_coef_by_gear_hook, "", "");
KSYMTAB_DATA(set_swpm_pwr_coef_hook, "", "");
KSYMTAB_DATA(get_swpm_pwr_coef_hook, "", "");
KSYMTAB_DATA(get_freq_volt_hook, "", "");
KSYMTAB_DATA(get_cpu_power_hook, "", "");
KSYMTAB_DATA(get_cpu_pwr_eff_hook, "", "");
KSYMTAB_DATA(dsu_freq_changed_hook, "", "");
KSYMTAB_DATA(eenv_dsu_init_hook, "", "");
KSYMTAB_DATA(update_dsu_status_hook, "", "");
KSYMTAB_DATA(mtk_get_dsu_pwr_hook, "", "");
KSYMTAB_FUNC(init_swpm_pwr_coef_by_gear, "_gpl", "");
KSYMTAB_FUNC(set_swpm_pwr_coef, "_gpl", "");
KSYMTAB_FUNC(get_swpm_pwr_coef, "_gpl", "");
KSYMTAB_DATA(__cpu_pause_mask, "", "");
KSYMTAB_FUNC(pd_get_util_cpufreq, "_gpl", "");
KSYMTAB_FUNC(set_wake_sync, "_gpl", "");
KSYMTAB_FUNC(get_wake_sync, "_gpl", "");
KSYMTAB_FUNC(set_newly_idle_balance_interval_us, "_gpl", "");
KSYMTAB_FUNC(get_newly_idle_balance_interval_us, "_gpl", "");
KSYMTAB_FUNC(set_get_thermal_headroom_interval_tick, "_gpl", "");
KSYMTAB_FUNC(get_thermal_headroom_interval_tick, "_gpl", "");
KSYMTAB_FUNC(set_rt_aggre_preempt, "_gpl", "");
KSYMTAB_FUNC(get_rt_aggre_preempt, "_gpl", "");
KSYMTAB_FUNC(set_cpu_irqUtil_threshold, "_gpl", "");
KSYMTAB_FUNC(unset_cpu_irqUtil_threshold, "_gpl", "");
KSYMTAB_FUNC(get_cpu_irqUtil_threshold, "_gpl", "");
KSYMTAB_FUNC(set_cpu_irqRatio_threshold, "_gpl", "");
KSYMTAB_FUNC(unset_cpu_irqRatio_threshold, "_gpl", "");
KSYMTAB_FUNC(get_cpu_irqRatio_threshold, "_gpl", "");
KSYMTAB_FUNC(set_shortcut_compress_rate, "", "");
KSYMTAB_FUNC(reset_shortcut_compress_rate, "", "");
KSYMTAB_FUNC(get_shortcut_compress_rate, "", "");
KSYMTAB_FUNC(set_shortcut_compress_relax_enough_cpu_util, "", "");
KSYMTAB_FUNC(set_shortcut_compress_relax_enough_tsk_util, "", "");
KSYMTAB_FUNC(reset_shortcut_compress_relax_enough_cpu_util, "", "");
KSYMTAB_FUNC(reset_shortcut_compress_relax_enough_tsk_util, "", "");
KSYMTAB_FUNC(get_shortcut_compress_relax_enough_cpu_util, "", "");
KSYMTAB_FUNC(get_shortcut_compress_relax_enough_tsk_util, "", "");
KSYMTAB_FUNC(set_gear_hints_gathering_th, "", "");
KSYMTAB_FUNC(reset_gear_hints_gathering_th, "", "");
KSYMTAB_FUNC(get_gear_hints_gathering_th, "_gpl", "");
KSYMTAB_FUNC(sched_adpf_callback, "_gpl", "");
KSYMTAB_FUNC(set_eas_adpf_enable, "_gpl", "");
KSYMTAB_FUNC(get_eas_adpf_enable, "_gpl", "");
KSYMTAB_FUNC(set_eas_adpf_vip, "_gpl", "");
KSYMTAB_FUNC(unset_eas_adpf_vip, "_gpl", "");
KSYMTAB_FUNC(set_runnable_boost_util_est_enable, "", "");
KSYMTAB_FUNC(reset_runnable_boost_util_est_enable, "", "");
KSYMTAB_FUNC(is_runnable_boost_util_est_enable, "", "");
KSYMTAB_FUNC(get_share_buck, "_gpl", "");
KSYMTAB_FUNC(set_uclamp_min_ls, "_gpl", "");
KSYMTAB_FUNC(get_uclamp_min_ls, "_gpl", "");
KSYMTAB_FUNC(set_group_prefer_cpus, "_gpl", "");
KSYMTAB_FUNC(set_top_app_cpumask, "_gpl", "");
KSYMTAB_FUNC(set_foreground_cpumask, "_gpl", "");
KSYMTAB_FUNC(set_background_cpumask, "_gpl", "");
KSYMTAB_FUNC(get_group_prefer_cpus, "_gpl", "");
KSYMTAB_FUNC(get_top_app_cpumask, "_gpl", "");
KSYMTAB_FUNC(get_foreground_cpumask, "_gpl", "");
KSYMTAB_FUNC(get_background_cpumask, "_gpl", "");
KSYMTAB_FUNC(set_task_ls, "_gpl", "");
KSYMTAB_FUNC(unset_task_ls, "_gpl", "");
KSYMTAB_FUNC(set_task_ls_prefer_cpus, "_gpl", "");
KSYMTAB_FUNC(unset_task_ls_prefer_cpus, "_gpl", "");
KSYMTAB_FUNC(is_task_latency_sensitive, "_gpl", "");
KSYMTAB_FUNC(set_gear_indices, "_gpl", "");
KSYMTAB_FUNC(unset_gear_indices, "_gpl", "");
KSYMTAB_FUNC(get_gear_indices, "_gpl", "");
KSYMTAB_FUNC(set_updown_migration_pct, "_gpl", "");
KSYMTAB_FUNC(unset_updown_migration_pct, "_gpl", "");
KSYMTAB_FUNC(get_updown_migration_pct, "_gpl", "");
KSYMTAB_FUNC(resume_cpus, "", "");
KSYMTAB_FUNC(sched_pause_cpu, "", "");
KSYMTAB_FUNC(sched_resume_cpu, "", "");
KSYMTAB_FUNC(set_big_task_rotation, "_gpl", "");
KSYMTAB_FUNC(sum_num_vip_in_cpu, "_gpl", "");
KSYMTAB_FUNC(turn_on_vip_in_gh, "_gpl", "");
KSYMTAB_FUNC(turn_off_vip_in_gh, "_gpl", "");
KSYMTAB_FUNC(turn_on_vvip_balance_overutilized, "_gpl", "");
KSYMTAB_FUNC(turn_off_vvip_balance_overutilized, "_gpl", "");
KSYMTAB_FUNC(turn_on_vip_balance_overutilized, "_gpl", "");
KSYMTAB_FUNC(turn_off_vip_balance_overutilized, "_gpl", "");
KSYMTAB_FUNC(set_vip_switch_push, "_gpl", "");
KSYMTAB_FUNC(unset_vip_switch_push, "_gpl", "");
KSYMTAB_FUNC(prio_is_vip, "_gpl", "");
KSYMTAB_FUNC(task_is_vip, "_gpl", "");
KSYMTAB_FUNC(unset_group_vip_prio, "_gpl", "");
KSYMTAB_FUNC(set_group_vip_prio, "_gpl", "");
KSYMTAB_FUNC(set_top_app_vip, "_gpl", "");
KSYMTAB_FUNC(unset_top_app_vip, "_gpl", "");
KSYMTAB_FUNC(set_foreground_vip, "_gpl", "");
KSYMTAB_FUNC(unset_foreground_vip, "_gpl", "");
KSYMTAB_FUNC(set_background_vip, "_gpl", "");
KSYMTAB_FUNC(unset_background_vip, "_gpl", "");
KSYMTAB_FUNC(set_ls_task_vip, "_gpl", "");
KSYMTAB_FUNC(unset_ls_task_vip, "_gpl", "");
KSYMTAB_FUNC(set_task_vvip_and_throttle, "", "");
KSYMTAB_FUNC(set_task_vvip, "_gpl", "");
KSYMTAB_FUNC(unset_task_vvip, "", "");
KSYMTAB_FUNC(set_task_priority_based_vip_and_throttle, "", "");
KSYMTAB_FUNC(set_task_priority_based_vip, "_gpl", "");
KSYMTAB_FUNC(unset_task_priority_based_vip, "", "");
KSYMTAB_FUNC(show_tgid, "_gpl", "");
KSYMTAB_FUNC(set_tgid_vip, "", "");
KSYMTAB_FUNC(unset_tgid_vip, "", "");
KSYMTAB_FUNC(turn_on_tgid_vip, "", "");
KSYMTAB_FUNC(turn_off_tgid_vip, "", "");
KSYMTAB_FUNC(set_task_basic_vip_and_throttle, "", "");
KSYMTAB_FUNC(set_task_basic_vip, "", "");
KSYMTAB_FUNC(unset_task_basic_vip, "", "");
KSYMTAB_FUNC(get_vip_task_prio, "_gpl", "");
KSYMTAB_FUNC(get_flt_xrg, "", "");
KSYMTAB_FUNC(get_flt_xrg_size, "", "");
KSYMTAB_FUNC(flt_set_mode, "", "");
KSYMTAB_FUNC(flt_get_mode, "", "");
KSYMTAB_FUNC(flt_get_version, "", "");
KSYMTAB_FUNC(flt_get_chip_sw_ver, "", "");
KSYMTAB_FUNC(flt_init_res, "", "");
KSYMTAB_FUNC(flt_sched_set_group_policy_eas, "_gpl", "");
KSYMTAB_FUNC(flt_sched_get_group_policy_eas, "_gpl", "");
KSYMTAB_FUNC(flt_sched_set_cpu_policy_eas, "_gpl", "");
KSYMTAB_FUNC(flt_sched_get_cpu_policy_eas, "_gpl", "");
KSYMTAB_FUNC(flt_get_sum_group, "_gpl", "");
KSYMTAB_FUNC(flt_get_max_group, "_gpl", "");
KSYMTAB_FUNC(flt_get_gear_sum_pelt_group, "_gpl", "");
KSYMTAB_FUNC(flt_get_gear_max_pelt_group, "_gpl", "");
KSYMTAB_FUNC(flt_get_gear_sum_pelt_group_cnt, "_gpl", "");
KSYMTAB_FUNC(flt_get_gear_max_pelt_group_cnt, "_gpl", "");
KSYMTAB_FUNC(flt_sched_get_gear_sum_group_eas, "_gpl", "");
KSYMTAB_FUNC(flt_sched_get_gear_max_group_eas, "_gpl", "");
KSYMTAB_FUNC(flt_sched_get_cpu_group_eas, "_gpl", "");
KSYMTAB_FUNC(flt_get_cpu_by_wp, "", "");
KSYMTAB_FUNC(flt_get_cpu_by_type, "", "");
KSYMTAB_FUNC(flt_get_task_by_wp, "_gpl", "");
KSYMTAB_FUNC(flt_get_cpu, "", "");
KSYMTAB_FUNC(flt_query_cpu_util, "", "");
KSYMTAB_FUNC(flt_sched_get_cpu_group, "", "");
KSYMTAB_FUNC(flt_get_gp_hint, "", "");
KSYMTAB_FUNC(flt_get_cpu_r, "", "");
KSYMTAB_FUNC(flt_get_cpu_o, "", "");
KSYMTAB_FUNC(flt_get_total_gp, "", "");
KSYMTAB_FUNC(flt_get_gp_r, "", "");
KSYMTAB_FUNC(flt_getnid, "", "");
KSYMTAB_FUNC(flt_setnid, "", "");
KSYMTAB_FUNC(flt_get_grp_weight, "", "");
KSYMTAB_FUNC(flt_set_grp_weight, "", "");
KSYMTAB_FUNC(flt_get_grp_thr_weight, "", "");
KSYMTAB_FUNC(flt_res_init, "", "");
KSYMTAB_FUNC(flt_set_grp_dvfs_ctrl, "_gpl", "");
KSYMTAB_FUNC(flt_ctl, "_gpl", "");
KSYMTAB_FUNC(flt_ctrl_force_set, "_gpl", "");
KSYMTAB_FUNC(flt_ctrl_force_get, "_gpl", "");
KSYMTAB_FUNC(flt_get_pm_status, "", "");
KSYMTAB_DATA(grp_cal_tra, "", "");
KSYMTAB_DATA(grp_cal_rat, "", "");
KSYMTAB_DATA(sysctl_sched_init_task_load_pct, "", "");
KSYMTAB_DATA(sysctl_task_sched_window_stats_policy, "", "");
KSYMTAB_DATA(sysctl_sched_ravg_window_nr_ticks, "", "");
KSYMTAB_FUNC(sched_window_nr_ticks_change, "", "");
KSYMTAB_DATA(grp_awr_update_group_util_hook, "", "");
KSYMTAB_DATA(grp_awr_update_cpu_tar_util_hook, "", "");
KSYMTAB_FUNC(set_grp_awr_marg_ctrl, "", "");
KSYMTAB_FUNC(get_grp_awr_marg_ctrl, "", "");
KSYMTAB_FUNC(set_top_grp_aware, "", "");
KSYMTAB_FUNC(get_top_grp_aware, "", "");
KSYMTAB_FUNC(get_top_grp_aware_refcnt, "", "");
KSYMTAB_FUNC(set_grp_awr_thr, "", "");
KSYMTAB_FUNC(get_grp_awr_thr, "", "");
KSYMTAB_FUNC(get_grp_awr_thr_freq, "", "");
KSYMTAB_FUNC(set_grp_awr_min_opp_margin, "", "");
KSYMTAB_FUNC(get_grp_awr_min_opp_margin, "", "");
KSYMTAB_FUNC(reset_grp_awr_margin, "", "");
KSYMTAB_FUNC(set_group_target_active_ratio_pct, "", "");
KSYMTAB_FUNC(set_group_target_active_ratio_cap, "", "");
KSYMTAB_FUNC(set_cpu_group_active_ratio_pct, "", "");
KSYMTAB_FUNC(set_cpu_group_active_ratio_cap, "", "");
KSYMTAB_FUNC(set_group_active_ratio_pct, "", "");
KSYMTAB_FUNC(set_group_active_ratio_cap, "", "");
KSYMTAB_FUNC(lookup_grp, "", "");
KSYMTAB_FUNC(group_get_cgroup_colocate, "", "");
KSYMTAB_FUNC(group_set_cgroup_colocate, "", "");
KSYMTAB_FUNC(get_grp_id, "", "");
KSYMTAB_FUNC(check_and_get_grp_id, "", "");
KSYMTAB_FUNC(set_task_to_group, "", "");
KSYMTAB_FUNC(group_set_mode, "", "");
KSYMTAB_FUNC(group_get_mode, "", "");
KSYMTAB_FUNC(group_get_threshold_util, "", "");
KSYMTAB_FUNC(group_set_threshold, "", "");
KSYMTAB_FUNC(group_reset_threshold, "", "");
KSYMTAB_FUNC(group_get_threshold, "", "");

SYMBOL_CRC(task_turbo_select_task_rq_fair_hook, 0xf6833699, "");
SYMBOL_CRC(vip_loom_select_task_rq_fair_hook, 0xab91878e, "");
SYMBOL_CRC(init_swpm_pwr_coef_by_gear_hook, 0x20b84179, "");
SYMBOL_CRC(set_swpm_pwr_coef_hook, 0x33bd281f, "");
SYMBOL_CRC(get_swpm_pwr_coef_hook, 0xb7168649, "");
SYMBOL_CRC(get_freq_volt_hook, 0x2d498084, "");
SYMBOL_CRC(get_cpu_power_hook, 0xa27e3a2b, "");
SYMBOL_CRC(get_cpu_pwr_eff_hook, 0xe0d02e86, "");
SYMBOL_CRC(dsu_freq_changed_hook, 0xc999b13b, "");
SYMBOL_CRC(eenv_dsu_init_hook, 0xd4a6c69e, "");
SYMBOL_CRC(update_dsu_status_hook, 0x44200546, "");
SYMBOL_CRC(mtk_get_dsu_pwr_hook, 0x56f18af5, "");
SYMBOL_CRC(init_swpm_pwr_coef_by_gear, 0xafae4c34, "_gpl");
SYMBOL_CRC(set_swpm_pwr_coef, 0x92115d12, "_gpl");
SYMBOL_CRC(get_swpm_pwr_coef, 0x73a6ae7c, "_gpl");
SYMBOL_CRC(__cpu_pause_mask, 0x81a6d354, "");
SYMBOL_CRC(pd_get_util_cpufreq, 0x652117ba, "_gpl");
SYMBOL_CRC(set_wake_sync, 0x4864c421, "_gpl");
SYMBOL_CRC(get_wake_sync, 0x2af25161, "_gpl");
SYMBOL_CRC(set_newly_idle_balance_interval_us, 0xb4833198, "_gpl");
SYMBOL_CRC(get_newly_idle_balance_interval_us, 0xab776f0a, "_gpl");
SYMBOL_CRC(set_get_thermal_headroom_interval_tick, 0x1815fe60, "_gpl");
SYMBOL_CRC(get_thermal_headroom_interval_tick, 0x95eb25f9, "_gpl");
SYMBOL_CRC(set_rt_aggre_preempt, 0xd8f26809, "_gpl");
SYMBOL_CRC(get_rt_aggre_preempt, 0x98ffa741, "_gpl");
SYMBOL_CRC(set_cpu_irqUtil_threshold, 0xd4843566, "_gpl");
SYMBOL_CRC(unset_cpu_irqUtil_threshold, 0x54fa42d4, "_gpl");
SYMBOL_CRC(get_cpu_irqUtil_threshold, 0x44f8944d, "_gpl");
SYMBOL_CRC(set_cpu_irqRatio_threshold, 0x6cb480cb, "_gpl");
SYMBOL_CRC(unset_cpu_irqRatio_threshold, 0x1387867d, "_gpl");
SYMBOL_CRC(get_cpu_irqRatio_threshold, 0x9a44af4b, "_gpl");
SYMBOL_CRC(set_shortcut_compress_rate, 0x01f6a301, "");
SYMBOL_CRC(reset_shortcut_compress_rate, 0xc31ec07d, "");
SYMBOL_CRC(get_shortcut_compress_rate, 0x5884ccd2, "");
SYMBOL_CRC(set_shortcut_compress_relax_enough_cpu_util, 0x0685d7fe, "");
SYMBOL_CRC(set_shortcut_compress_relax_enough_tsk_util, 0xd01d7a00, "");
SYMBOL_CRC(reset_shortcut_compress_relax_enough_cpu_util, 0x922fd4d9, "");
SYMBOL_CRC(reset_shortcut_compress_relax_enough_tsk_util, 0x25350227, "");
SYMBOL_CRC(get_shortcut_compress_relax_enough_cpu_util, 0xd6a0b9f5, "");
SYMBOL_CRC(get_shortcut_compress_relax_enough_tsk_util, 0x61ba6f0b, "");
SYMBOL_CRC(set_gear_hints_gathering_th, 0x857b3dc8, "");
SYMBOL_CRC(reset_gear_hints_gathering_th, 0x696b6669, "");
SYMBOL_CRC(get_gear_hints_gathering_th, 0x2f99421c, "_gpl");
SYMBOL_CRC(sched_adpf_callback, 0x641a4c47, "_gpl");
SYMBOL_CRC(set_eas_adpf_enable, 0x11e47b45, "_gpl");
SYMBOL_CRC(get_eas_adpf_enable, 0xce74533d, "_gpl");
SYMBOL_CRC(set_eas_adpf_vip, 0x373dbfb0, "_gpl");
SYMBOL_CRC(unset_eas_adpf_vip, 0x4bd29264, "_gpl");
SYMBOL_CRC(set_runnable_boost_util_est_enable, 0x68a1ecb9, "");
SYMBOL_CRC(reset_runnable_boost_util_est_enable, 0x0b252f78, "");
SYMBOL_CRC(is_runnable_boost_util_est_enable, 0x90fbcc54, "");
SYMBOL_CRC(get_share_buck, 0xa64d0928, "_gpl");
SYMBOL_CRC(set_uclamp_min_ls, 0xbee4124b, "_gpl");
SYMBOL_CRC(get_uclamp_min_ls, 0x872b7354, "_gpl");
SYMBOL_CRC(set_group_prefer_cpus, 0x52df8f0b, "_gpl");
SYMBOL_CRC(set_top_app_cpumask, 0xdb59c070, "_gpl");
SYMBOL_CRC(set_foreground_cpumask, 0x71ca1bcb, "_gpl");
SYMBOL_CRC(set_background_cpumask, 0x94f6334c, "_gpl");
SYMBOL_CRC(get_group_prefer_cpus, 0xbeab29c8, "_gpl");
SYMBOL_CRC(get_top_app_cpumask, 0x3d51329d, "_gpl");
SYMBOL_CRC(get_foreground_cpumask, 0xe9703230, "_gpl");
SYMBOL_CRC(get_background_cpumask, 0x9be34ff7, "_gpl");
SYMBOL_CRC(set_task_ls, 0xcf9d5f01, "_gpl");
SYMBOL_CRC(unset_task_ls, 0x31048bfd, "_gpl");
SYMBOL_CRC(set_task_ls_prefer_cpus, 0x38d4e40c, "_gpl");
SYMBOL_CRC(unset_task_ls_prefer_cpus, 0x3e590506, "_gpl");
SYMBOL_CRC(is_task_latency_sensitive, 0xff5a572a, "_gpl");
SYMBOL_CRC(set_gear_indices, 0x6615d989, "_gpl");
SYMBOL_CRC(unset_gear_indices, 0x9d91a009, "_gpl");
SYMBOL_CRC(get_gear_indices, 0x78f9d3d4, "_gpl");
SYMBOL_CRC(set_updown_migration_pct, 0x40ab455a, "_gpl");
SYMBOL_CRC(unset_updown_migration_pct, 0xd30a8e4e, "_gpl");
SYMBOL_CRC(get_updown_migration_pct, 0x4a48074e, "_gpl");
SYMBOL_CRC(resume_cpus, 0x7b491092, "");
SYMBOL_CRC(sched_pause_cpu, 0xfeec946b, "");
SYMBOL_CRC(sched_resume_cpu, 0xd28b628b, "");
SYMBOL_CRC(set_big_task_rotation, 0xa12946e7, "_gpl");
SYMBOL_CRC(sum_num_vip_in_cpu, 0x0ee9c67d, "_gpl");
SYMBOL_CRC(turn_on_vip_in_gh, 0x45e4f99e, "_gpl");
SYMBOL_CRC(turn_off_vip_in_gh, 0xcc5d2d34, "_gpl");
SYMBOL_CRC(turn_on_vvip_balance_overutilized, 0xde429bd0, "_gpl");
SYMBOL_CRC(turn_off_vvip_balance_overutilized, 0x8a5dbd76, "_gpl");
SYMBOL_CRC(turn_on_vip_balance_overutilized, 0x44d8421d, "_gpl");
SYMBOL_CRC(turn_off_vip_balance_overutilized, 0x85a9cdeb, "_gpl");
SYMBOL_CRC(set_vip_switch_push, 0x7f12f414, "_gpl");
SYMBOL_CRC(unset_vip_switch_push, 0xd84ff7fa, "_gpl");
SYMBOL_CRC(prio_is_vip, 0x8843d485, "_gpl");
SYMBOL_CRC(task_is_vip, 0x52054920, "_gpl");
SYMBOL_CRC(unset_group_vip_prio, 0xc92cf301, "_gpl");
SYMBOL_CRC(set_group_vip_prio, 0x7405cc21, "_gpl");
SYMBOL_CRC(set_top_app_vip, 0xeb3dce15, "_gpl");
SYMBOL_CRC(unset_top_app_vip, 0x08a4b41b, "_gpl");
SYMBOL_CRC(set_foreground_vip, 0x11fa38b1, "_gpl");
SYMBOL_CRC(unset_foreground_vip, 0xaaa799e1, "_gpl");
SYMBOL_CRC(set_background_vip, 0x422edcc4, "_gpl");
SYMBOL_CRC(unset_background_vip, 0x43c214d3, "_gpl");
SYMBOL_CRC(set_ls_task_vip, 0x782ba8d2, "_gpl");
SYMBOL_CRC(unset_ls_task_vip, 0x23969f88, "_gpl");
SYMBOL_CRC(set_task_vvip_and_throttle, 0x42880ac6, "");
SYMBOL_CRC(set_task_vvip, 0x5deca51a, "_gpl");
SYMBOL_CRC(unset_task_vvip, 0x645be3ff, "");
SYMBOL_CRC(set_task_priority_based_vip_and_throttle, 0x45b8368e, "");
SYMBOL_CRC(set_task_priority_based_vip, 0x438df2b1, "_gpl");
SYMBOL_CRC(unset_task_priority_based_vip, 0x9efa19aa, "");
SYMBOL_CRC(show_tgid, 0xa6a0f55a, "_gpl");
SYMBOL_CRC(set_tgid_vip, 0x7c385089, "");
SYMBOL_CRC(unset_tgid_vip, 0xe87854ba, "");
SYMBOL_CRC(turn_on_tgid_vip, 0xbbd27de3, "");
SYMBOL_CRC(turn_off_tgid_vip, 0xd12d377a, "");
SYMBOL_CRC(set_task_basic_vip_and_throttle, 0x5129af3e, "");
SYMBOL_CRC(set_task_basic_vip, 0xdfb60db3, "");
SYMBOL_CRC(unset_task_basic_vip, 0x4f6827d2, "");
SYMBOL_CRC(get_vip_task_prio, 0xfc28f8db, "_gpl");
SYMBOL_CRC(get_flt_xrg, 0xde8020c6, "");
SYMBOL_CRC(get_flt_xrg_size, 0x99653926, "");
SYMBOL_CRC(flt_set_mode, 0xf6b46438, "");
SYMBOL_CRC(flt_get_mode, 0x7204ae53, "");
SYMBOL_CRC(flt_get_version, 0xcf8bfab7, "");
SYMBOL_CRC(flt_get_chip_sw_ver, 0x67afc87c, "");
SYMBOL_CRC(flt_init_res, 0x89701192, "");
SYMBOL_CRC(flt_sched_set_group_policy_eas, 0x7ce5932f, "_gpl");
SYMBOL_CRC(flt_sched_get_group_policy_eas, 0x5a38e16d, "_gpl");
SYMBOL_CRC(flt_sched_set_cpu_policy_eas, 0xaae445ee, "_gpl");
SYMBOL_CRC(flt_sched_get_cpu_policy_eas, 0x9c309106, "_gpl");
SYMBOL_CRC(flt_get_sum_group, 0x5db7a7d6, "_gpl");
SYMBOL_CRC(flt_get_max_group, 0x921eb47d, "_gpl");
SYMBOL_CRC(flt_get_gear_sum_pelt_group, 0x32892518, "_gpl");
SYMBOL_CRC(flt_get_gear_max_pelt_group, 0xeb84c871, "_gpl");
SYMBOL_CRC(flt_get_gear_sum_pelt_group_cnt, 0xa41e42e9, "_gpl");
SYMBOL_CRC(flt_get_gear_max_pelt_group_cnt, 0x09abadae, "_gpl");
SYMBOL_CRC(flt_sched_get_gear_sum_group_eas, 0x54718893, "_gpl");
SYMBOL_CRC(flt_sched_get_gear_max_group_eas, 0x1fd314c4, "_gpl");
SYMBOL_CRC(flt_sched_get_cpu_group_eas, 0x43a3eff8, "_gpl");
SYMBOL_CRC(flt_get_cpu_by_wp, 0x3da1e898, "");
SYMBOL_CRC(flt_get_cpu_by_type, 0xcc69a788, "");
SYMBOL_CRC(flt_get_task_by_wp, 0x0d27799e, "_gpl");
SYMBOL_CRC(flt_get_cpu, 0x3ec40b40, "");
SYMBOL_CRC(flt_query_cpu_util, 0x77999fd8, "");
SYMBOL_CRC(flt_sched_get_cpu_group, 0xc0aff6db, "");
SYMBOL_CRC(flt_get_gp_hint, 0x50cbfc21, "");
SYMBOL_CRC(flt_get_cpu_r, 0x5cd3385f, "");
SYMBOL_CRC(flt_get_cpu_o, 0x8e833207, "");
SYMBOL_CRC(flt_get_total_gp, 0xea112352, "");
SYMBOL_CRC(flt_get_gp_r, 0xabc797f4, "");
SYMBOL_CRC(flt_getnid, 0xda5a69d9, "");
SYMBOL_CRC(flt_setnid, 0x6f42c2e7, "");
SYMBOL_CRC(flt_get_grp_weight, 0xd0f29e36, "");
SYMBOL_CRC(flt_set_grp_weight, 0x2ed2a671, "");
SYMBOL_CRC(flt_get_grp_thr_weight, 0x8dc89224, "");
SYMBOL_CRC(flt_res_init, 0xfab37e0d, "");
SYMBOL_CRC(flt_set_grp_dvfs_ctrl, 0x57baed0b, "_gpl");
SYMBOL_CRC(flt_ctl, 0x1cb0269a, "_gpl");
SYMBOL_CRC(flt_ctrl_force_set, 0x376b16ab, "_gpl");
SYMBOL_CRC(flt_ctrl_force_get, 0x7a555f61, "_gpl");
SYMBOL_CRC(flt_get_pm_status, 0xf28a63f1, "");
SYMBOL_CRC(grp_cal_tra, 0x11e7ebd9, "");
SYMBOL_CRC(grp_cal_rat, 0x2dcfaf79, "");
SYMBOL_CRC(sysctl_sched_init_task_load_pct, 0x1f29e722, "");
SYMBOL_CRC(sysctl_task_sched_window_stats_policy, 0x29e1eac9, "");
SYMBOL_CRC(sysctl_sched_ravg_window_nr_ticks, 0xfe2f453f, "");
SYMBOL_CRC(sched_window_nr_ticks_change, 0x6c810944, "");
SYMBOL_CRC(grp_awr_update_group_util_hook, 0x09db9b73, "");
SYMBOL_CRC(grp_awr_update_cpu_tar_util_hook, 0x24c4ce3c, "");
SYMBOL_CRC(set_grp_awr_marg_ctrl, 0xa87c1405, "");
SYMBOL_CRC(get_grp_awr_marg_ctrl, 0xcfd8b39d, "");
SYMBOL_CRC(set_top_grp_aware, 0xbdc3209b, "");
SYMBOL_CRC(get_top_grp_aware, 0x49f6d9f4, "");
SYMBOL_CRC(get_top_grp_aware_refcnt, 0x5ea01ca4, "");
SYMBOL_CRC(set_grp_awr_thr, 0x5942dabc, "");
SYMBOL_CRC(get_grp_awr_thr, 0x3033612a, "");
SYMBOL_CRC(get_grp_awr_thr_freq, 0x683a2974, "");
SYMBOL_CRC(set_grp_awr_min_opp_margin, 0x9f4a058d, "");
SYMBOL_CRC(get_grp_awr_min_opp_margin, 0x6104da8c, "");
SYMBOL_CRC(reset_grp_awr_margin, 0x44759faf, "");
SYMBOL_CRC(set_group_target_active_ratio_pct, 0x657dbaa2, "");
SYMBOL_CRC(set_group_target_active_ratio_cap, 0xa155e798, "");
SYMBOL_CRC(set_cpu_group_active_ratio_pct, 0xba6c8a0d, "");
SYMBOL_CRC(set_cpu_group_active_ratio_cap, 0x2c2e1cf1, "");
SYMBOL_CRC(set_group_active_ratio_pct, 0x7c9fb5e7, "");
SYMBOL_CRC(set_group_active_ratio_cap, 0xb8b7e8dd, "");
SYMBOL_CRC(lookup_grp, 0x6ac14f1a, "");
SYMBOL_CRC(group_get_cgroup_colocate, 0x68b52acd, "");
SYMBOL_CRC(group_set_cgroup_colocate, 0xae33b5f5, "");
SYMBOL_CRC(get_grp_id, 0x1646afa7, "");
SYMBOL_CRC(check_and_get_grp_id, 0xb34320f8, "");
SYMBOL_CRC(set_task_to_group, 0x16eac427, "");
SYMBOL_CRC(group_set_mode, 0xaea1526f, "");
SYMBOL_CRC(group_get_mode, 0xca1ff334, "");
SYMBOL_CRC(group_get_threshold_util, 0xebd753e1, "");
SYMBOL_CRC(group_set_threshold, 0x504aafea, "");
SYMBOL_CRC(group_reset_threshold, 0xba11750d, "");
SYMBOL_CRC(group_get_threshold, 0x93d921e5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x799c4c88, "get_eas_hook" },
	{ 0x334c0c6c, "is_wl_support" },
	{ 0x23544d9a, "update_pelt_data" },
	{ 0x92997ed8, "_printk" },
	{ 0x714c1e53, "sched_post_init_util_enable_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x83457e9a, "is_dpt_v2_support" },
	{ 0x1070e1da, "mtk_cpu_util_next_dpt_v2" },
	{ 0x024f95cd, "pd_opp2freq" },
	{ 0xb459aae8, "pd_get_freq_util" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x98cf60b3, "strlen" },
	{ 0x48fe8fe2, "uclamp_eff_value" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x58e50895, "mtk_cpu_util_cfs" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x369f9403, "bpf_trace_run8" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xcc1cb855, "bpf_trace_run12" },
	{ 0xe5f24ab0, "bpf_trace_run11" },
	{ 0xa5644698, "bpf_trace_run10" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0x40cead39, "bpf_trace_run9" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xc51c6960, "adpf_register_callback" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x67a4210e, "hook_cpu_util_cfs_boost" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x9aece762, "set_ignore_idle_ctrl" },
	{ 0xa05d3c2b, "sched_rt_aggre_preempt_enable_get" },
	{ 0x7a160793, "set_sbb" },
	{ 0x0623dd60, "set_sbb_active_ratio" },
	{ 0xaf8e1795, "set_turn_point_freq" },
	{ 0x62d42e01, "set_target_margin" },
	{ 0x353e0e35, "set_target_margin_low" },
	{ 0x532ff774, "unset_target_margin" },
	{ 0x18a0d0bd, "unset_target_margin_low" },
	{ 0xe9aab7af, "set_dsu_idle_enable" },
	{ 0x92a710ed, "unset_dsu_idle_enable" },
	{ 0x7e1a273f, "set_runnable_boost_enable" },
	{ 0xd91547fa, "unset_runnable_boost_enable" },
	{ 0xa449f9d1, "set_curr_task_uclamp_ctrl" },
	{ 0x9e7ddb5b, "unset_curr_task_uclamp_ctrl" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xa94deba2, "__dpt_rq" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xfd3515e0, "sched_feat_keys" },
	{ 0x85d74a37, "sysctl_util_est" },
	{ 0xee46e386, "runqueues" },
	{ 0x54552241, "cpu_scale" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xac593a05, "of_root" },
	{ 0xa4d133ba, "__tracepoint_android_rvh_enqueue_task" },
	{ 0xfda02835, "rq_data" },
	{ 0x08d54e31, "__tracepoint_android_rvh_dequeue_task" },
	{ 0x3616f081, "__tracepoint_android_rvh_enqueue_task_fair" },
	{ 0x6cce527a, "__tracepoint_android_rvh_dequeue_task_fair" },
	{ 0x22476bf4, "__tracepoint_pelt_se_tp" },
	{ 0xeeb97c3a, "__tracepoint_sched_util_est_se_tp" },
	{ 0x00745e59, "__tracepoint_sched_util_est_cfs_tp" },
	{ 0x5fa4e6b5, "__tracepoint_android_rvh_select_task_rq_fair" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x348b72fc, "__tracepoint_android_rvh_sched_balance_find_src_group" },
	{ 0x47b7bc68, "__tracepoint_android_rvh_can_migrate_task" },
	{ 0xe7eb187b, "__tracepoint_android_rvh_cpu_overutilized" },
	{ 0x8f456894, "__tracepoint_android_rvh_tick_entry" },
	{ 0xc0bf9f61, "__tracepoint_android_vh_set_wake_flags" },
	{ 0xb49b0663, "__tracepoint_pelt_rt_tp" },
	{ 0x62717046, "__tracepoint_android_rvh_schedule" },
	{ 0xc11d1319, "__tracepoint_android_rvh_update_misfit_status" },
	{ 0xb13f8066, "__tracepoint_android_rvh_sched_newidle_balance" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0xd3df5b5c, "change_dpt_support_driver_hook" },
	{ 0x8b05e38e, "__tracepoint_android_rvh_util_est_update" },
	{ 0x5fcd4eeb, "__tracepoint_android_rvh_cpu_util_cfs_boost" },
	{ 0x08c73112, "__tracepoint_android_vh_scheduler_tick" },
	{ 0x698da62d, "__tracepoint_android_rvh_after_enqueue_task" },
	{ 0xc589dba6, "__tracepoint_android_rvh_after_dequeue_task" },
	{ 0xb69cc2ab, "__tracepoint_android_rvh_new_task_stats" },
	{ 0xf4048646, "__tracepoint_task_newtask" },
	{ 0xf9571130, "__tracepoint_android_rvh_select_task_rq_rt" },
	{ 0x1e36dca5, "__tracepoint_android_rvh_find_lowest_rq" },
	{ 0xb9c27e91, "__tracepoint_android_vh_sched_pelt_multiplier" },
	{ 0x67524233, "__tracepoint_android_rvh_post_init_entity_util_avg" },
	{ 0x25bab59d, "__tracepoint_android_vh_setscheduler_uclamp" },
	{ 0xb9442279, "__tracepoint_android_rvh_update_rq_clock_pelt" },
	{ 0x50828496, "__tracepoint_android_rvh_update_load_avg_blocked_se" },
	{ 0x2acd61c8, "__tracepoint_android_rvh_update_load_avg_se" },
	{ 0x29ef48f9, "__tracepoint_android_rvh_update_load_avg_cfs_rq" },
	{ 0x18a5922e, "__tracepoint_android_rvh_update_rt_rq_load_avg_internal" },
	{ 0x48ab2955, "__tracepoint_android_rvh_attach_entity_load_avg" },
	{ 0x6d5b4c93, "__tracepoint_android_rvh_detach_entity_load_avg" },
	{ 0xb7b4129d, "__tracepoint_android_rvh_remove_entity_load_avg" },
	{ 0x02a8552a, "bus_get_dev_root" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x234c9de3, "put_device" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x43af29f5, "kobject_uevent" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xabf45b2f, "cpu_subsys" },
	{ 0xaaed9037, "record_sched_pd_opp2pwr_eff" },
	{ 0x4988428c, "record_sched_pd_opp2cap" },
	{ 0x11c68c40, "get_dsu_temp" },
	{ 0x0d1360a0, "get_dsu_ceiling_freq" },
	{ 0x7de1eb2a, "get_dsu_fine_ctrl_enable" },
	{ 0x9629cec7, "get_dsu_fine_ctrl" },
	{ 0x3db718ae, "get_fine_value_pct_cpu" },
	{ 0xa3a55de2, "get_l3ctl_sram_base_addr" },
	{ 0x085909db, "get_cdsu_sram_base_addr" },
	{ 0x8a42e87a, "sched_percore_l3_bw_get" },
	{ 0x26188cfb, "get_clkg_sram_base_addr" },
	{ 0xa4f53f2a, "get_sys_max_cap_cluster" },
	{ 0xab5a29c9, "mtk_cpu_util_cfs_dpt_v2" },
	{ 0xc250bbf1, "dpt_v2_local_capacity_all_util_of" },
	{ 0x26b142db, "get_adaptive_margin" },
	{ 0xfd3b0d3b, "mtk_map_util_freq" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x38399da9, "get_curr_wl" },
	{ 0x84e9f08e, "get_gear_cpumask" },
	{ 0x55308b41, "get_cpu_ceiling_freq" },
	{ 0x2c21556f, "pd_freq2util" },
	{ 0x750b08aa, "pd_opp2cap" },
	{ 0x211127cc, "get_init_driver_after_vendor_init_done" },
	{ 0xff4cd2da, "init_driver_after_vendor_init" },
	{ 0xdfe20281, "update_wl_tbl" },
	{ 0x072eebfa, "update_curr_collab_state" },
	{ 0x66d638e3, "is_sbb_trigger" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0x2d17e429, "get_sbb_active_ratio_gear" },
	{ 0x1833f18c, "sched_dpt_v2_swpm_mode_get" },
	{ 0xae0d0b25, "get_cpu_util_with_margin" },
	{ 0x5c663238, "pd_util2opp" },
	{ 0x093e19dd, "pd_opp2pwr_eff" },
	{ 0x0d5cb810, "pd_get_opp_leakage" },
	{ 0x73a99429, "get_cpu_temp" },
	{ 0xec6b54e3, "__get_scaling_factor_shift_bit" },
	{ 0x574883fb, "task_global_to_local_dpt_v2" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2a8d72aa, "pd_freq2opp" },
	{ 0x39270c06, "get_cpu_max_freq" },
	{ 0x836f0f34, "pd_get_opp_freq_legacy" },
	{ 0xa3825629, "pd_get_freq_opp_legacy" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x4f793f59, "get_thermal_headroom" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x3628344a, "get_cpu_power_scaling_factor_hook" },
	{ 0x397a1f39, "val_m" },
	{ 0xf4867881, "min_freq" },
	{ 0x4573fcd1, "thermal_freq" },
	{ 0x3f5492e0, "hw_pressure" },
	{ 0x3f322a95, "sbb" },
	{ 0x88010db6, "is_dpt_support_driver_hook" },
	{ 0xc1c3d290, "dpt_v2_linear_local_cap2opp_hook" },
	{ 0x752dd909, "dpt_v2_opp2pwr_eff_hook" },
	{ 0x1c8315b8, "dpt_v2_opp2global_cap_hook" },
	{ 0x29aeb8cf, "get_dpt_v2_cs_counter_addr_hook" },
	{ 0x42936774, "get_cpu_perf_scaling_factor_hook" },
	{ 0x5cd7660d, "check_cpu_perf_scaling_factor_hook" },
	{ 0x5d477bca, "check_cpu_power_scaling_factor_hook" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xbd22b8fb, "cpufreq_update_util_data" },
	{ 0x999f4d73, "sched_skip_hiIRQ_enable_get" },
	{ 0x587381ad, "_get_sched_debug_lock" },
	{ 0x0a7da89b, "mtk_effective_cpu_util_total" },
	{ 0xde01b8b9, "mtk_available_idle_cpu" },
	{ 0xa9a58e63, "cpupri_find_fitness" },
	{ 0xceb4af5b, "cpumask_any_and_distribute" },
	{ 0x7a42bd60, "mtk_effective_cpu_util_dpt_v2" },
	{ 0x2ed4732d, "mtk_uclamp_involve" },
	{ 0xb9c7c033, "sugov_effective_cpu_perf_clamp" },
	{ 0xc4019a1f, "get_em_wl" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xaabd29ec, "dpt_v2_util2cap_needed_local_hook" },
	{ 0xa9c59fbd, "dpt_v2_uclamp2local_cap_hook" },
	{ 0xef559a24, "get_nr_gears" },
	{ 0xd5dd5da2, "sched_shortcut_compress_rate_get" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xc9175738, "update_rq_clock" },
	{ 0x5aa39baf, "deactivate_task" },
	{ 0xcf8498fa, "set_task_cpu" },
	{ 0x60d1f7de, "stop_one_cpu_nowait" },
	{ 0xc062fead, "raw_spin_rq_unlock" },
	{ 0x18c317c2, "em_cpu_get" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x0c5e04da, "activate_task" },
	{ 0x6632824b, "wakeup_preempt" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0xf1c5961d, "dpt_v2_get_uclamped_cpu_util" },
	{ 0xbeadee08, "raw_spin_rq_lock_nested" },
	{ 0xaa11486b, "balance_push_callback" },
	{ 0x735266ca, "rescale_coef1_util_or_ratio_hook" },
	{ 0xc8d97b65, "rescale_coef2_util_or_ratio_hook" },
	{ 0xa24657e7, "freq_qos_add_notifier" },
	{ 0xa94ae869, "get_cpu_gear_uclamp_max_capacity" },
	{ 0x236dcac0, "max_freq" },
	{ 0x7fc43003, "min_freq_scale" },
	{ 0x587f5732, "max_freq_scale" },
	{ 0xd2529767, "sched_vip_enable_get" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x40c16794, "get_curr_task_uclamp_ctrl" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x056a37c5, "sched_uclamp_used" },
	{ 0xd2fa6945, "mtk_map_util_freq_dpt_v2" },
	{ 0xec449a33, "sched_dsu_pwr_enable_get" },
	{ 0x55f0d26c, "get_eas_dsu_ctrl" },
	{ 0xefd86370, "get_wl_dsu" },
	{ 0x595d70f0, "mtk_get_actual_cpu_capacity" },
	{ 0xd8eff00b, "get_thermal_freq_ceiling_ratio" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x18b1cc11, "css_next_child" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x037a0cba, "kfree" },
	{ 0xac073acf, "pd_get_opp_capacity" },
	{ 0xd6d3e422, "sched_gear_hints_enable_get" },
	{ 0x86f62e66, "sched_updown_migration_enable_get" },
	{ 0x49af5325, "pd_util2freq_r_o" },
	{ 0x27521ed7, "get_nr_collab_type" },
	{ 0x4856b4e2, "mtk_cpu_util_next" },
	{ 0x5c38ed92, "get_freq_ceiling_ratio" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5c3d5f9e, "is_runnable_boost_enable" },
	{ 0x9166fada, "strncpy" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x4e0f6444, "__traceiter_pelt_se_tp" },
	{ 0x32a53b81, "__traceiter_pelt_cfs_tp" },
	{ 0x4e42169e, "__traceiter_pelt_rt_tp" },
	{ 0x673472ea, "tasklist_lock" },
	{ 0xdfda1e61, "root_task_group" },
	{ 0x9f4dcc60, "curr_collab_state" },
	{ 0x19bd0610, "__tracepoint_android_rvh_sched_fork_init" },
	{ 0xceed33cf, "arch_freq_scale" },
	{ 0x7c644ff9, "__tracepoint_pelt_cfs_tp" },
	{ 0x853d783c, "__balance_callbacks" },
	{ 0xb9b9f56e, "stop_one_cpu" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x01000e51, "schedule" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x5b1557ed, "set_cpu_active_bitmask" },
	{ 0x8f77e638, "get_cpu_device" },
	{ 0xf48490a1, "housekeeping_cpumask" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x1e19eb6c, "_printk_deferred" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x5c37fc05, "pick_task" },
	{ 0xb38316ec, "select_fallback_rq" },
	{ 0x9bcb16e5, "__migrate_task" },
	{ 0x4bdb8dcc, "housekeeping_test_cpu" },
	{ 0x912521b7, "__cpu_dying_mask" },
	{ 0x74e73871, "housekeeping_overridden" },
	{ 0x31048a99, "__tracepoint_android_rvh_is_cpu_allowed" },
	{ 0xed925ccb, "__tracepoint_android_rvh_set_cpus_allowed_by_task" },
	{ 0x70e61a64, "__tracepoint_android_rvh_rto_next_cpu" },
	{ 0x1a5ec78a, "__tracepoint_android_rvh_get_nohz_timer_target" },
	{ 0x29dc828c, "__tracepoint_android_rvh_find_busiest_queue" },
	{ 0x5ccde5b4, "__tracepoint_android_rvh_find_new_ilb" },
	{ 0xdca09a97, "double_rq_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x1ec52290, "migrate_swap" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x8c607079, "resched_curr" },
	{ 0x67962dfb, "__tracepoint_android_rvh_cpu_cgroup_online" },
	{ 0x77f75543, "__tracepoint_android_rvh_check_preempt_wakeup_fair" },
	{ 0x758de876, "__tracepoint_android_rvh_replace_next_task_fair" },
	{ 0xa538f0cc, "__tracepoint_android_rvh_wake_up_new_task" },
	{ 0x2ad3b47b, "get_nr_wl" },
	{ 0x3c671f7b, "get_nr_cpu_type" },
	{ 0xde5ef734, "get_cpu_type" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x1a2a5056, "flt_get_cpu_util_hook" },
	{ 0xd90f43c8, "flt_sched_get_cpu_group_util_eas_hook" },
	{ 0x92588a78, "flt_get_fpsgo_boosting" },
	{ 0xeaf8d67e, "flt_sched_get_flt_coef_util_eas_hook" },
	{ 0x850fc24b, "set_grp_dvfs_ctrl" },
	{ 0xb917b6d7, "return_address" },
	{ 0x661601de, "sprint_symbol" },
	{ 0x1bf1fbe0, "pd_get_freq_opp_legacy_type" },
	{ 0xa959b402, "get_cpu_active_ratio_cap" },
	{ 0x7f952eea, "set_grp_high_freq" },
	{ 0x8fed5478, "get_grp_high_freq" },
	{ 0x9744353a, "irq_work_queue" },
	{ 0x36000566, "irq_work_queue_on" },
	{ 0x41750bf4, "get_grp_dvfs_ctrl" },
	{ 0xe9b09d13, "update_active_ratio_all" },
	{ 0x5ad089c6, "sugov_grp_awr_update_cpu_tar_util_hook" },
	{ 0x82c81f5a, "__tracepoint_android_rvh_sched_cpu_starting" },
	{ 0x4d328923, "__tracepoint_android_rvh_try_to_wake_up" },
	{ 0xfa39035c, "__tracepoint_android_rvh_set_task_cpu" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x58e1853b, "set_group_pd" },
	{ 0xf78f9e90, "get_pid_task" },
	{ 0xb1d04e67, "find_vpid" },
	{ 0xa77e7900, "set_task_pd" },
	{ 0x9cfca0cf, "__task_rq_lock" },
	{ 0xfb6c3ae3, "cgroup_taskset_first" },
	{ 0xd8e26b0b, "cgroup_taskset_next" },
	{ 0x13f642c2, "__tracepoint_android_rvh_flush_task" },
	{ 0xbdb66ee9, "__tracepoint_android_rvh_cpu_cgroup_attach" },
	{ 0x60d0e1f4, "__tracepoint_android_rvh_try_to_wake_up_success" },
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
	0x799c4c88,
	0x334c0c6c,
	0x23544d9a,
	0x92997ed8,
	0x714c1e53,
	0xe2d5255a,
	0x83457e9a,
	0x1070e1da,
	0x024f95cd,
	0xb459aae8,
	0x12db679a,
	0x6fc35f2b,
	0x8d522714,
	0x2469810f,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x98cf60b3,
	0x48fe8fe2,
	0xe94986d6,
	0x58e50895,
	0x2d2c902f,
	0xc61f330d,
	0xe3c00b45,
	0x369f9403,
	0x881d741f,
	0xcc1cb855,
	0xe5f24ab0,
	0xa5644698,
	0x1c7a01a8,
	0xa3783864,
	0x6bd4d5dc,
	0x40cead39,
	0xe80494d6,
	0x3d10f515,
	0xf70e4a4d,
	0x6b201699,
	0xe136f93c,
	0x3b1b6444,
	0xb318cbab,
	0xc51c6960,
	0x7518b5f0,
	0xb4028d67,
	0x67a4210e,
	0x1e6d26a8,
	0x1ac5d3cb,
	0x656e4a6e,
	0x3b6c41ea,
	0x43b0c9c3,
	0xc046d25b,
	0x805e2dd2,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x9aece762,
	0xa05d3c2b,
	0x7a160793,
	0x0623dd60,
	0xaf8e1795,
	0x62d42e01,
	0x353e0e35,
	0x532ff774,
	0x18a0d0bd,
	0xe9aab7af,
	0x92a710ed,
	0x7e1a273f,
	0xd91547fa,
	0xa449f9d1,
	0x9e7ddb5b,
	0x2be0c009,
	0x88db9f48,
	0x9a85eebb,
	0x7aba1ef6,
	0xa94deba2,
	0x280f9f14,
	0xfd3515e0,
	0x85d74a37,
	0xee46e386,
	0x54552241,
	0xac594e02,
	0x15db3b99,
	0x73caefdc,
	0xd820ab9a,
	0xac593a05,
	0xa4d133ba,
	0xfda02835,
	0x08d54e31,
	0x3616f081,
	0x6cce527a,
	0x22476bf4,
	0xeeb97c3a,
	0x00745e59,
	0x5fa4e6b5,
	0x15ba50a6,
	0x348b72fc,
	0x47b7bc68,
	0xe7eb187b,
	0x8f456894,
	0xc0bf9f61,
	0xb49b0663,
	0x62717046,
	0xc11d1319,
	0xb13f8066,
	0xde7ece30,
	0xe4bc4b09,
	0xd3df5b5c,
	0x8b05e38e,
	0x5fcd4eeb,
	0x08c73112,
	0x698da62d,
	0xc589dba6,
	0xb69cc2ab,
	0xf4048646,
	0xf9571130,
	0x1e36dca5,
	0xb9c27e91,
	0x67524233,
	0x25bab59d,
	0xb9442279,
	0x50828496,
	0x2acd61c8,
	0x29ef48f9,
	0x18a5922e,
	0x48ab2955,
	0x6d5b4c93,
	0xb7b4129d,
	0x02a8552a,
	0x2d405891,
	0x234c9de3,
	0x62b33777,
	0x43af29f5,
	0x3bd2c4ce,
	0x3667c9f1,
	0xabf45b2f,
	0xaaed9037,
	0x4988428c,
	0x11c68c40,
	0x0d1360a0,
	0x7de1eb2a,
	0x9629cec7,
	0x3db718ae,
	0xa3a55de2,
	0x085909db,
	0x8a42e87a,
	0x26188cfb,
	0xa4f53f2a,
	0xab5a29c9,
	0xc250bbf1,
	0x26b142db,
	0xfd3b0d3b,
	0x1ed4c5e6,
	0xa823db6e,
	0x3d0ffa5c,
	0x38399da9,
	0x84e9f08e,
	0x55308b41,
	0x2c21556f,
	0x750b08aa,
	0x211127cc,
	0xff4cd2da,
	0xdfe20281,
	0x072eebfa,
	0x66d638e3,
	0x9fe899b7,
	0x2d17e429,
	0x1833f18c,
	0xae0d0b25,
	0x5c663238,
	0x093e19dd,
	0x0d5cb810,
	0x73a99429,
	0xec6b54e3,
	0x574883fb,
	0x56470118,
	0x9f46ced8,
	0xba8fbd64,
	0xb5b54b34,
	0x2a8d72aa,
	0x39270c06,
	0x836f0f34,
	0xa3825629,
	0x40863ba1,
	0x4f793f59,
	0xfef216eb,
	0xc905402b,
	0xfa4d3c24,
	0x3628344a,
	0x397a1f39,
	0xf4867881,
	0x4573fcd1,
	0x3f5492e0,
	0x3f322a95,
	0x88010db6,
	0xc1c3d290,
	0x752dd909,
	0x1c8315b8,
	0x29aeb8cf,
	0x42936774,
	0x5cd7660d,
	0x5d477bca,
	0xaf56600a,
	0xbd22b8fb,
	0x999f4d73,
	0x587381ad,
	0x0a7da89b,
	0xde01b8b9,
	0xa9a58e63,
	0xceb4af5b,
	0x7a42bd60,
	0x2ed4732d,
	0xb9c7c033,
	0xc4019a1f,
	0x017de3d5,
	0xaabd29ec,
	0xa9c59fbd,
	0xef559a24,
	0xd5dd5da2,
	0xe17134b6,
	0x52c5c991,
	0x0f05f001,
	0xefe8a82e,
	0xc9175738,
	0x5aa39baf,
	0xcf8498fa,
	0x60d1f7de,
	0xc062fead,
	0x18c317c2,
	0xf8bd87ca,
	0xcd6f7bae,
	0x0c5e04da,
	0x6632824b,
	0x0296695f,
	0xc4f0da12,
	0xe5010018,
	0xf1c5961d,
	0xbeadee08,
	0xaa11486b,
	0x735266ca,
	0xc8d97b65,
	0xa24657e7,
	0xa94ae869,
	0x236dcac0,
	0x7fc43003,
	0x587f5732,
	0xd2529767,
	0xd5977bfb,
	0xed55cabd,
	0x40c16794,
	0x31b65f04,
	0x056a37c5,
	0xd2fa6945,
	0xec449a33,
	0x55f0d26c,
	0xefd86370,
	0x595d70f0,
	0xd8eff00b,
	0xfe8c61f0,
	0xdd4d55b6,
	0x18b1cc11,
	0x29161415,
	0x037a0cba,
	0xac073acf,
	0xd6d3e422,
	0x86f62e66,
	0x49af5325,
	0x27521ed7,
	0x4856b4e2,
	0x5c38ed92,
	0x34db050b,
	0xd35cce70,
	0x5c3d5f9e,
	0x9166fada,
	0x8810754a,
	0x53a1e8d9,
	0x4e0f6444,
	0x32a53b81,
	0x4e42169e,
	0x673472ea,
	0xdfda1e61,
	0x9f4dcc60,
	0x19bd0610,
	0xceed33cf,
	0x7c644ff9,
	0x853d783c,
	0xb9b9f56e,
	0xb3f7646e,
	0x01000e51,
	0xce5bc4d0,
	0x5b1557ed,
	0x8f77e638,
	0xf48490a1,
	0xba0aee2e,
	0x1e19eb6c,
	0xc0744ae3,
	0x7e19152a,
	0x9a835040,
	0x5c37fc05,
	0xb38316ec,
	0x9bcb16e5,
	0x4bdb8dcc,
	0x912521b7,
	0x74e73871,
	0x31048a99,
	0xed925ccb,
	0x70e61a64,
	0x1a5ec78a,
	0x29dc828c,
	0x5ccde5b4,
	0xdca09a97,
	0xc5b6f236,
	0xa04f945a,
	0x1ec52290,
	0x18fb2caf,
	0x9714e0bb,
	0xcd91b127,
	0x8c607079,
	0x67962dfb,
	0x77f75543,
	0x758de876,
	0xa538f0cc,
	0x2ad3b47b,
	0x3c671f7b,
	0xde5ef734,
	0xb43f9365,
	0x6b722180,
	0x0c1a5ee3,
	0x1a2a5056,
	0xd90f43c8,
	0x92588a78,
	0xeaf8d67e,
	0x850fc24b,
	0xb917b6d7,
	0x661601de,
	0x1bf1fbe0,
	0xa959b402,
	0x7f952eea,
	0x8fed5478,
	0x9744353a,
	0x36000566,
	0x41750bf4,
	0xe9b09d13,
	0x5ad089c6,
	0x82c81f5a,
	0x4d328923,
	0xfa39035c,
	0xe68efe41,
	0x40235c98,
	0x58e1853b,
	0xf78f9e90,
	0xb1d04e67,
	0xa77e7900,
	0x9cfca0cf,
	0xfb6c3ae3,
	0xd8e26b0b,
	0x13f642c2,
	0xbdb66ee9,
	0x60d0e1f4,
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
	"get_eas_hook\0"
	"is_wl_support\0"
	"update_pelt_data\0"
	"_printk\0"
	"sched_post_init_util_enable_get\0"
	"strcmp\0"
	"is_dpt_v2_support\0"
	"mtk_cpu_util_next_dpt_v2\0"
	"pd_opp2freq\0"
	"pd_get_freq_util\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"strlen\0"
	"uclamp_eff_value\0"
	"sched_clock\0"
	"mtk_cpu_util_cfs\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run5\0"
	"bpf_trace_run8\0"
	"bpf_trace_run3\0"
	"bpf_trace_run12\0"
	"bpf_trace_run11\0"
	"bpf_trace_run10\0"
	"bpf_trace_run4\0"
	"bpf_trace_run2\0"
	"bpf_trace_run6\0"
	"bpf_trace_run9\0"
	"bpf_trace_run1\0"
	"bpf_trace_run7\0"
	"preempt_schedule_notrace\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"adpf_register_callback\0"
	"proc_mkdir\0"
	"proc_create\0"
	"hook_cpu_util_cfs_boost\0"
	"strstr\0"
	"strcspn\0"
	"snprintf\0"
	"kstrtouint\0"
	"preempt_schedule\0"
	"android_rvh_probe_register\0"
	"tracepoint_probe_register\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"set_ignore_idle_ctrl\0"
	"sched_rt_aggre_preempt_enable_get\0"
	"set_sbb\0"
	"set_sbb_active_ratio\0"
	"set_turn_point_freq\0"
	"set_target_margin\0"
	"set_target_margin_low\0"
	"unset_target_margin\0"
	"unset_target_margin_low\0"
	"set_dsu_idle_enable\0"
	"unset_dsu_idle_enable\0"
	"set_runnable_boost_enable\0"
	"unset_runnable_boost_enable\0"
	"set_curr_task_uclamp_ctrl\0"
	"unset_curr_task_uclamp_ctrl\0"
	"__arch_copy_from_user\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"tracepoint_probe_unregister\0"
	"__dpt_rq\0"
	"__per_cpu_offset\0"
	"sched_feat_keys\0"
	"sysctl_util_est\0"
	"runqueues\0"
	"cpu_scale\0"
	"__cpu_online_mask\0"
	"__cpu_active_mask\0"
	"init_task\0"
	"vendor_data_pad\0"
	"of_root\0"
	"__tracepoint_android_rvh_enqueue_task\0"
	"rq_data\0"
	"__tracepoint_android_rvh_dequeue_task\0"
	"__tracepoint_android_rvh_enqueue_task_fair\0"
	"__tracepoint_android_rvh_dequeue_task_fair\0"
	"__tracepoint_pelt_se_tp\0"
	"__tracepoint_sched_util_est_se_tp\0"
	"__tracepoint_sched_util_est_cfs_tp\0"
	"__tracepoint_android_rvh_select_task_rq_fair\0"
	"jiffies\0"
	"__tracepoint_android_rvh_sched_balance_find_src_group\0"
	"__tracepoint_android_rvh_can_migrate_task\0"
	"__tracepoint_android_rvh_cpu_overutilized\0"
	"__tracepoint_android_rvh_tick_entry\0"
	"__tracepoint_android_vh_set_wake_flags\0"
	"__tracepoint_pelt_rt_tp\0"
	"__tracepoint_android_rvh_schedule\0"
	"__tracepoint_android_rvh_update_misfit_status\0"
	"__tracepoint_android_rvh_sched_newidle_balance\0"
	"__cpu_possible_mask\0"
	"cpu_topology\0"
	"change_dpt_support_driver_hook\0"
	"__tracepoint_android_rvh_util_est_update\0"
	"__tracepoint_android_rvh_cpu_util_cfs_boost\0"
	"__tracepoint_android_vh_scheduler_tick\0"
	"__tracepoint_android_rvh_after_enqueue_task\0"
	"__tracepoint_android_rvh_after_dequeue_task\0"
	"__tracepoint_android_rvh_new_task_stats\0"
	"__tracepoint_task_newtask\0"
	"__tracepoint_android_rvh_select_task_rq_rt\0"
	"__tracepoint_android_rvh_find_lowest_rq\0"
	"__tracepoint_android_vh_sched_pelt_multiplier\0"
	"__tracepoint_android_rvh_post_init_entity_util_avg\0"
	"__tracepoint_android_vh_setscheduler_uclamp\0"
	"__tracepoint_android_rvh_update_rq_clock_pelt\0"
	"__tracepoint_android_rvh_update_load_avg_blocked_se\0"
	"__tracepoint_android_rvh_update_load_avg_se\0"
	"__tracepoint_android_rvh_update_load_avg_cfs_rq\0"
	"__tracepoint_android_rvh_update_rt_rq_load_avg_internal\0"
	"__tracepoint_android_rvh_attach_entity_load_avg\0"
	"__tracepoint_android_rvh_detach_entity_load_avg\0"
	"__tracepoint_android_rvh_remove_entity_load_avg\0"
	"bus_get_dev_root\0"
	"kobject_create_and_add\0"
	"put_device\0"
	"sysfs_create_group\0"
	"kobject_uevent\0"
	"kobject_put\0"
	"sysfs_remove_group\0"
	"cpu_subsys\0"
	"record_sched_pd_opp2pwr_eff\0"
	"record_sched_pd_opp2cap\0"
	"get_dsu_temp\0"
	"get_dsu_ceiling_freq\0"
	"get_dsu_fine_ctrl_enable\0"
	"get_dsu_fine_ctrl\0"
	"get_fine_value_pct_cpu\0"
	"get_l3ctl_sram_base_addr\0"
	"get_cdsu_sram_base_addr\0"
	"sched_percore_l3_bw_get\0"
	"get_clkg_sram_base_addr\0"
	"get_sys_max_cap_cluster\0"
	"mtk_cpu_util_cfs_dpt_v2\0"
	"dpt_v2_local_capacity_all_util_of\0"
	"get_adaptive_margin\0"
	"mtk_map_util_freq\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"get_curr_wl\0"
	"get_gear_cpumask\0"
	"get_cpu_ceiling_freq\0"
	"pd_freq2util\0"
	"pd_opp2cap\0"
	"get_init_driver_after_vendor_init_done\0"
	"init_driver_after_vendor_init\0"
	"update_wl_tbl\0"
	"update_curr_collab_state\0"
	"is_sbb_trigger\0"
	"get_cpu_idle_time\0"
	"get_sbb_active_ratio_gear\0"
	"sched_dpt_v2_swpm_mode_get\0"
	"get_cpu_util_with_margin\0"
	"pd_util2opp\0"
	"pd_opp2pwr_eff\0"
	"pd_get_opp_leakage\0"
	"get_cpu_temp\0"
	"__get_scaling_factor_shift_bit\0"
	"task_global_to_local_dpt_v2\0"
	"__warn_printk\0"
	"__sw_hweight64\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"pd_freq2opp\0"
	"get_cpu_max_freq\0"
	"pd_get_opp_freq_legacy\0"
	"pd_get_freq_opp_legacy\0"
	"ioremap_prot\0"
	"get_thermal_headroom\0"
	"_raw_spin_trylock\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"get_cpu_power_scaling_factor_hook\0"
	"val_m\0"
	"min_freq\0"
	"thermal_freq\0"
	"hw_pressure\0"
	"sbb\0"
	"is_dpt_support_driver_hook\0"
	"dpt_v2_linear_local_cap2opp_hook\0"
	"dpt_v2_opp2pwr_eff_hook\0"
	"dpt_v2_opp2global_cap_hook\0"
	"get_dpt_v2_cs_counter_addr_hook\0"
	"get_cpu_perf_scaling_factor_hook\0"
	"check_cpu_perf_scaling_factor_hook\0"
	"check_cpu_power_scaling_factor_hook\0"
	"arm64_use_ng_mappings\0"
	"cpufreq_update_util_data\0"
	"sched_skip_hiIRQ_enable_get\0"
	"_get_sched_debug_lock\0"
	"mtk_effective_cpu_util_total\0"
	"mtk_available_idle_cpu\0"
	"cpupri_find_fitness\0"
	"cpumask_any_and_distribute\0"
	"mtk_effective_cpu_util_dpt_v2\0"
	"mtk_uclamp_involve\0"
	"sugov_effective_cpu_perf_clamp\0"
	"get_em_wl\0"
	"nr_cpu_ids\0"
	"dpt_v2_util2cap_needed_local_hook\0"
	"dpt_v2_uclamp2local_cap_hook\0"
	"get_nr_gears\0"
	"sched_shortcut_compress_rate_get\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"update_rq_clock\0"
	"deactivate_task\0"
	"set_task_cpu\0"
	"stop_one_cpu_nowait\0"
	"raw_spin_rq_unlock\0"
	"em_cpu_get\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"activate_task\0"
	"wakeup_preempt\0"
	"refcount_warn_saturate\0"
	"ktime_get_with_offset\0"
	"__put_task_struct\0"
	"dpt_v2_get_uclamped_cpu_util\0"
	"raw_spin_rq_lock_nested\0"
	"balance_push_callback\0"
	"rescale_coef1_util_or_ratio_hook\0"
	"rescale_coef2_util_or_ratio_hook\0"
	"freq_qos_add_notifier\0"
	"get_cpu_gear_uclamp_max_capacity\0"
	"max_freq\0"
	"min_freq_scale\0"
	"max_freq_scale\0"
	"sched_vip_enable_get\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"get_curr_task_uclamp_ctrl\0"
	"of_property_read_u32_index\0"
	"sched_uclamp_used\0"
	"mtk_map_util_freq_dpt_v2\0"
	"sched_dsu_pwr_enable_get\0"
	"get_eas_dsu_ctrl\0"
	"get_wl_dsu\0"
	"mtk_get_actual_cpu_capacity\0"
	"get_thermal_freq_ceiling_ratio\0"
	"_raw_read_lock\0"
	"_raw_read_unlock\0"
	"css_next_child\0"
	"find_task_by_vpid\0"
	"kfree\0"
	"pd_get_opp_capacity\0"
	"sched_gear_hints_enable_get\0"
	"sched_updown_migration_enable_get\0"
	"pd_util2freq_r_o\0"
	"get_nr_collab_type\0"
	"mtk_cpu_util_next\0"
	"get_freq_ceiling_ratio\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"is_runnable_boost_enable\0"
	"strncpy\0"
	"_find_first_bit\0"
	"_find_next_bit\0"
	"__traceiter_pelt_se_tp\0"
	"__traceiter_pelt_cfs_tp\0"
	"__traceiter_pelt_rt_tp\0"
	"tasklist_lock\0"
	"root_task_group\0"
	"curr_collab_state\0"
	"__tracepoint_android_rvh_sched_fork_init\0"
	"arch_freq_scale\0"
	"__tracepoint_pelt_cfs_tp\0"
	"__balance_callbacks\0"
	"stop_one_cpu\0"
	"kthread_should_stop\0"
	"schedule\0"
	"wake_up_process\0"
	"set_cpu_active_bitmask\0"
	"get_cpu_device\0"
	"housekeeping_cpumask\0"
	"kthread_create_on_node\0"
	"_printk_deferred\0"
	"sched_setscheduler_nocheck\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"pick_task\0"
	"select_fallback_rq\0"
	"__migrate_task\0"
	"housekeeping_test_cpu\0"
	"__cpu_dying_mask\0"
	"housekeeping_overridden\0"
	"__tracepoint_android_rvh_is_cpu_allowed\0"
	"__tracepoint_android_rvh_set_cpus_allowed_by_task\0"
	"__tracepoint_android_rvh_rto_next_cpu\0"
	"__tracepoint_android_rvh_get_nohz_timer_target\0"
	"__tracepoint_android_rvh_find_busiest_queue\0"
	"__tracepoint_android_rvh_find_new_ilb\0"
	"double_rq_lock\0"
	"queue_work_on\0"
	"cpus_read_lock\0"
	"migrate_swap\0"
	"cpus_read_unlock\0"
	"ktime_get_raw\0"
	"system_highpri_wq\0"
	"resched_curr\0"
	"__tracepoint_android_rvh_cpu_cgroup_online\0"
	"__tracepoint_android_rvh_check_preempt_wakeup_fair\0"
	"__tracepoint_android_rvh_replace_next_task_fair\0"
	"__tracepoint_android_rvh_wake_up_new_task\0"
	"get_nr_wl\0"
	"get_nr_cpu_type\0"
	"get_cpu_type\0"
	"ktime_get\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"flt_get_cpu_util_hook\0"
	"flt_sched_get_cpu_group_util_eas_hook\0"
	"flt_get_fpsgo_boosting\0"
	"flt_sched_get_flt_coef_util_eas_hook\0"
	"set_grp_dvfs_ctrl\0"
	"return_address\0"
	"sprint_symbol\0"
	"pd_get_freq_opp_legacy_type\0"
	"get_cpu_active_ratio_cap\0"
	"set_grp_high_freq\0"
	"get_grp_high_freq\0"
	"irq_work_queue\0"
	"irq_work_queue_on\0"
	"get_grp_dvfs_ctrl\0"
	"update_active_ratio_all\0"
	"sugov_grp_awr_update_cpu_tar_util_hook\0"
	"__tracepoint_android_rvh_sched_cpu_starting\0"
	"__tracepoint_android_rvh_try_to_wake_up\0"
	"__tracepoint_android_rvh_set_task_cpu\0"
	"_raw_write_lock\0"
	"_raw_write_unlock\0"
	"set_group_pd\0"
	"get_pid_task\0"
	"find_vpid\0"
	"set_task_pd\0"
	"__task_rq_lock\0"
	"cgroup_taskset_first\0"
	"cgroup_taskset_next\0"
	"__tracepoint_android_rvh_flush_task\0"
	"__tracepoint_android_rvh_cpu_cgroup_attach\0"
	"__tracepoint_android_rvh_try_to_wake_up_success\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cpufreq_sugov_ext,powerhal_cpu_ctrl,thermal_interface,cpuqos_v3");


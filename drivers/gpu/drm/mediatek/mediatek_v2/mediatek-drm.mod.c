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

KSYMTAB_DATA(disp_sec_cb, "", "");
KSYMTAB_FUNC(mtk_drm_disp_sec_cb_init, "", "");
KSYMTAB_FUNC(mtk_drm_disp_mtee_cb_init, "", "");
KSYMTAB_FUNC(mtk_aod_scp_ipi_init, "", "");
KSYMTAB_FUNC(mtk_drm_compat_ioctl, "", "");
KSYMTAB_FUNC(mtk_disp_is_svp_on_mtee, "_gpl", "");
KSYMTAB_FUNC(_mtk_sent_aod_scp_sema, "_gpl", "");
KSYMTAB_FUNC(disp_ccorr_notify_backlight_changed, "", "");
KSYMTAB_FUNC(mtk_crtc_wb_get_scn, "", "");
KSYMTAB_DATA(mtk_sync_te_level_decision_fp, "", "");
KSYMTAB_DATA(mtk_sync_slow_descent_fp, "", "");
KSYMTAB_FUNC(mtk_ddp_comp_sel_in_cur_crtc_path, "", "");
KSYMTAB_FUNC(mtk_fb_get_sec_id, "_gpl", "");
KSYMTAB_FUNC(mtk_get_cur_backlight, "", "");
KSYMTAB_FUNC(mtk_dsi_fifo_mon_trigger_start_set, "", "");
KSYMTAB_FUNC(mtk_hrt_issue_flag_set, "", "");
KSYMTAB_FUNC(mtk_dsi_start_engine, "_gpl", "");
KSYMTAB_FUNC(mtk_preconfig_dsi_enable, "_gpl", "");
KSYMTAB_FUNC(mipi_dsi_dcs_write_gce2, "", "");
KSYMTAB_FUNC(mtk_mipi_dsi_cmd, "", "");
KSYMTAB_FUNC(mtk_dsi_cmd_version, "", "");
KSYMTAB_FUNC(mtk_lcm_dsi_ddic_handler, "", "");
KSYMTAB_DATA(g_dsi_cmd_v2_r_log, "", "");
KSYMTAB_DATA(g_dsi_cmd_v2_log, "", "");
KSYMTAB_DATA(g_mobile_log, "", "");
KSYMTAB_DATA(g_detail_log, "", "");
KSYMTAB_DATA(g_msync_debug, "", "");
KSYMTAB_DATA(g_pf_time, "", "");
KSYMTAB_DATA(g_gpuc_direct_push, "", "");
KSYMTAB_DATA(g_ovl_bwm_debug, "", "");
KSYMTAB_DATA(g_vidle_apsrc_debug, "", "");
KSYMTAB_DATA(g_dbgtp_log, "", "");
KSYMTAB_FUNC(mtk_dprec_logger_pr, "", "");
KSYMTAB_FUNC(mtkfb_set_backlight_level_AOD, "", "");
KSYMTAB_FUNC(mtkfb_set_backlight_level, "", "");
KSYMTAB_FUNC(mtk_drm_set_conn_backlight_level, "", "");
KSYMTAB_FUNC(mtk_drm_get_conn_obj_id_from_idx, "", "");
KSYMTAB_FUNC(mtkfb_set_spr_status, "", "");
KSYMTAB_FUNC(mtkfb_get_spr_type, "", "");
KSYMTAB_FUNC(mtkfb_set_aod_backlight_level, "", "");
KSYMTAB_FUNC(mtkfb_set_partial_roi_highlight, "", "");
KSYMTAB_FUNC(mtkfb_is_partial_roi_highlight, "", "");
KSYMTAB_FUNC(mtkfb_set_partial_update, "", "");
KSYMTAB_FUNC(mtkfb_set_force_partial_roi, "", "");
KSYMTAB_FUNC(mtkfb_is_force_partial_roi, "", "");
KSYMTAB_FUNC(mtkfb_force_partial_y_offset, "", "");
KSYMTAB_FUNC(mtkfb_force_partial_height, "", "");
KSYMTAB_FUNC(mtk_disp_mipi_ccci_callback, "", "");
KSYMTAB_FUNC(mtk_disp_mipi_clk_change, "", "");
KSYMTAB_FUNC(mtk_disp_osc_ccci_callback, "", "");
KSYMTAB_FUNC(display_enter_tui, "", "");
KSYMTAB_FUNC(display_exit_tui, "", "");
KSYMTAB_FUNC(mtk_disp_get_pq_data, "", "");
KSYMTAB_FUNC(mtk_disp_get_dsi_data_rate, "", "");
KSYMTAB_FUNC(mtk_disp_is_panel_need_dsc, "", "");
KSYMTAB_FUNC(mtk_disp_get_wrking_exdma_num, "", "");
KSYMTAB_FUNC(mtk_disp_is_ovl_mdp_rsz_en, "", "");
KSYMTAB_FUNC(mtk_disp_is_disp_scaling_en, "", "");
KSYMTAB_FUNC(mtk_disp_get_oddmr_enable, "", "");
KSYMTAB_FUNC(mtk_ddic_dsi_send_cmd, "", "");
KSYMTAB_FUNC(mtk_ddic_dsi_wait_te_send_cmd, "", "");
KSYMTAB_FUNC(mtk_ddic_dsi_read_cmd, "", "");
KSYMTAB_FUNC(mtk_mbrain2disp_register_hrt_cb, "", "");
KSYMTAB_FUNC(mtk_mbrain2disp_unregister_hrt_cb, "", "");
KSYMTAB_FUNC(mtk_ovl_set_aod_scp_hrt, "", "");
KSYMTAB_FUNC(DAL_SetScreenColor, "", "");
KSYMTAB_FUNC(DAL_SetColor, "", "");
KSYMTAB_FUNC(DAL_Clean, "", "");
KSYMTAB_FUNC(DAL_Printf, "", "");
KSYMTAB_FUNC(mtk_drm_esd_recover, "_gpl", "");
KSYMTAB_FUNC(get_panel_dead_flag, "", "");
KSYMTAB_FUNC(set_panel_dead_flag, "", "");
KSYMTAB_FUNC(mtk_aod_scp_set_BW, "", "");
KSYMTAB_FUNC(mtk_dsc_default_setting, "", "");
KSYMTAB_FUNC(mtk_drm_spr_backup, "", "");
KSYMTAB_FUNC(mtk_oddmr_scp_status, "", "");
KSYMTAB_FUNC(mtk_drm_dbi_backup, "", "");
KSYMTAB_FUNC(mtk_drm_dmr_backup, "", "");
KSYMTAB_FUNC(drm_register_fps_chg_callback, "", "");
KSYMTAB_FUNC(drm_unregister_fps_chg_callback, "", "");
KSYMTAB_FUNC(mtk_vidle_config_ff, "", "");
KSYMTAB_FUNC(mtk_vidle_hint_update, "", "");
KSYMTAB_FUNC(mtk_vidle_register, "", "");
KSYMTAB_FUNC(mtk_vdisp_register, "", "");
KSYMTAB_FUNC(mtk_dp_intf_unprepare_clk, "", "");
KSYMTAB_FUNC(mtk_dp_intf_PatternGenEn, "", "");
KSYMTAB_FUNC(mtk_dp_intf_prepare_clk, "", "");
KSYMTAB_FUNC(mtk_dp_dvo_PatternGenEn, "", "");
KSYMTAB_FUNC(mtk_dp_dvo_ChecksumTrigger, "", "");
KSYMTAB_FUNC(mtk_dp_aux_swap_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_dp_set_pin_assign, "_gpl", "");
KSYMTAB_FUNC(mtk_dp_SWInterruptSet, "_gpl", "");
KSYMTAB_FUNC(get_lockdown_info_for_nvt, "", "");
KSYMTAB_FUNC(mi_cooler_brightness_clone_init, "", "");
KSYMTAB_FUNC(mi_cooler_brightness_clone_exit, "", "");
KSYMTAB_FUNC(mi_disp_register_client, "", "");
KSYMTAB_FUNC(mi_disp_unregister_client, "", "");
KSYMTAB_FUNC(mi_disp_notifier_call_chain, "", "");
KSYMTAB_FUNC(disp_log_printk, "", "");
KSYMTAB_FUNC(disp_log_printk_utc, "", "");
KSYMTAB_FUNC(mi_get_disp_lhbm_fod, "_gpl", "");
KSYMTAB_FUNC(mi_disp_lhbm_fod_thread_create, "_gpl", "");
KSYMTAB_FUNC(mi_disp_lhbm_fod_thread_destroy, "_gpl", "");
KSYMTAB_FUNC(mi_disp_set_fod_queue_work, "_gpl", "");

SYMBOL_CRC(disp_sec_cb, 0xae53b918, "");
SYMBOL_CRC(mtk_drm_disp_sec_cb_init, 0xc911b66b, "");
SYMBOL_CRC(mtk_drm_disp_mtee_cb_init, 0xd839694b, "");
SYMBOL_CRC(mtk_aod_scp_ipi_init, 0xd852ffce, "");
SYMBOL_CRC(mtk_drm_compat_ioctl, 0x185d0e04, "");
SYMBOL_CRC(mtk_disp_is_svp_on_mtee, 0x0261d088, "_gpl");
SYMBOL_CRC(_mtk_sent_aod_scp_sema, 0xbc059dcc, "_gpl");
SYMBOL_CRC(disp_ccorr_notify_backlight_changed, 0x0afbaced, "");
SYMBOL_CRC(mtk_crtc_wb_get_scn, 0x7179748d, "");
SYMBOL_CRC(mtk_sync_te_level_decision_fp, 0xc8c2dcfc, "");
SYMBOL_CRC(mtk_sync_slow_descent_fp, 0xe04f8261, "");
SYMBOL_CRC(mtk_ddp_comp_sel_in_cur_crtc_path, 0xdeb9635a, "");
SYMBOL_CRC(mtk_fb_get_sec_id, 0x45fbe6de, "_gpl");
SYMBOL_CRC(mtk_get_cur_backlight, 0xbbd01172, "");
SYMBOL_CRC(mtk_dsi_fifo_mon_trigger_start_set, 0x974a89cc, "");
SYMBOL_CRC(mtk_hrt_issue_flag_set, 0xe7ab30e1, "");
SYMBOL_CRC(mtk_dsi_start_engine, 0xc6f4baa1, "_gpl");
SYMBOL_CRC(mtk_preconfig_dsi_enable, 0x41b247e3, "_gpl");
SYMBOL_CRC(mipi_dsi_dcs_write_gce2, 0x0c94ac16, "");
SYMBOL_CRC(mtk_mipi_dsi_cmd, 0x586d6c46, "");
SYMBOL_CRC(mtk_dsi_cmd_version, 0x24e7b17e, "");
SYMBOL_CRC(mtk_lcm_dsi_ddic_handler, 0x7137b158, "");
SYMBOL_CRC(g_dsi_cmd_v2_r_log, 0x0762aad8, "");
SYMBOL_CRC(g_dsi_cmd_v2_log, 0x9ae132b7, "");
SYMBOL_CRC(g_mobile_log, 0x95eacc30, "");
SYMBOL_CRC(g_detail_log, 0x808d3c5d, "");
SYMBOL_CRC(g_msync_debug, 0x348d5f51, "");
SYMBOL_CRC(g_pf_time, 0xb9d0749c, "");
SYMBOL_CRC(g_gpuc_direct_push, 0x0ab41dc7, "");
SYMBOL_CRC(g_ovl_bwm_debug, 0xa7c66060, "");
SYMBOL_CRC(g_vidle_apsrc_debug, 0xdc3725a7, "");
SYMBOL_CRC(g_dbgtp_log, 0x466328d3, "");
SYMBOL_CRC(mtk_dprec_logger_pr, 0x1beede31, "");
SYMBOL_CRC(mtkfb_set_backlight_level_AOD, 0xdf7bbac6, "");
SYMBOL_CRC(mtkfb_set_backlight_level, 0xacddd9d2, "");
SYMBOL_CRC(mtk_drm_set_conn_backlight_level, 0x602ab713, "");
SYMBOL_CRC(mtk_drm_get_conn_obj_id_from_idx, 0xbbfcfd40, "");
SYMBOL_CRC(mtkfb_set_spr_status, 0xf0472560, "");
SYMBOL_CRC(mtkfb_get_spr_type, 0x04dbb171, "");
SYMBOL_CRC(mtkfb_set_aod_backlight_level, 0x176f094d, "");
SYMBOL_CRC(mtkfb_set_partial_roi_highlight, 0xb9443319, "");
SYMBOL_CRC(mtkfb_is_partial_roi_highlight, 0xe1050e16, "");
SYMBOL_CRC(mtkfb_set_partial_update, 0x7db6360a, "");
SYMBOL_CRC(mtkfb_set_force_partial_roi, 0x1cd1cf91, "");
SYMBOL_CRC(mtkfb_is_force_partial_roi, 0x2b49cda6, "");
SYMBOL_CRC(mtkfb_force_partial_y_offset, 0xa5d535fb, "");
SYMBOL_CRC(mtkfb_force_partial_height, 0xed19d50c, "");
SYMBOL_CRC(mtk_disp_mipi_ccci_callback, 0xf41c01eb, "");
SYMBOL_CRC(mtk_disp_mipi_clk_change, 0x007f1d60, "");
SYMBOL_CRC(mtk_disp_osc_ccci_callback, 0x738e21be, "");
SYMBOL_CRC(display_enter_tui, 0x14a0c390, "");
SYMBOL_CRC(display_exit_tui, 0xd1ed4e2c, "");
SYMBOL_CRC(mtk_disp_get_pq_data, 0xee1a13d5, "");
SYMBOL_CRC(mtk_disp_get_dsi_data_rate, 0xa0fc87c5, "");
SYMBOL_CRC(mtk_disp_is_panel_need_dsc, 0x8e0043c9, "");
SYMBOL_CRC(mtk_disp_get_wrking_exdma_num, 0x414969a2, "");
SYMBOL_CRC(mtk_disp_is_ovl_mdp_rsz_en, 0x725e281a, "");
SYMBOL_CRC(mtk_disp_is_disp_scaling_en, 0x2a334980, "");
SYMBOL_CRC(mtk_disp_get_oddmr_enable, 0xa9a55518, "");
SYMBOL_CRC(mtk_ddic_dsi_send_cmd, 0x2867289d, "");
SYMBOL_CRC(mtk_ddic_dsi_wait_te_send_cmd, 0x27d87d73, "");
SYMBOL_CRC(mtk_ddic_dsi_read_cmd, 0x5c320269, "");
SYMBOL_CRC(mtk_mbrain2disp_register_hrt_cb, 0x04aed2c4, "");
SYMBOL_CRC(mtk_mbrain2disp_unregister_hrt_cb, 0x3b298bb4, "");
SYMBOL_CRC(mtk_ovl_set_aod_scp_hrt, 0x7ce62658, "");
SYMBOL_CRC(DAL_SetScreenColor, 0xd8ff81bb, "");
SYMBOL_CRC(DAL_SetColor, 0x10839f69, "");
SYMBOL_CRC(DAL_Clean, 0x79809043, "");
SYMBOL_CRC(DAL_Printf, 0xf977571c, "");
SYMBOL_CRC(mtk_drm_esd_recover, 0x87104175, "_gpl");
SYMBOL_CRC(get_panel_dead_flag, 0x6ef5b4e0, "");
SYMBOL_CRC(set_panel_dead_flag, 0x9ae1dea5, "");
SYMBOL_CRC(mtk_aod_scp_set_BW, 0xeb772a54, "");
SYMBOL_CRC(mtk_dsc_default_setting, 0xfb260560, "");
SYMBOL_CRC(mtk_drm_spr_backup, 0x9b3678dd, "");
SYMBOL_CRC(mtk_oddmr_scp_status, 0x84d0e345, "");
SYMBOL_CRC(mtk_drm_dbi_backup, 0x3f4bd1b8, "");
SYMBOL_CRC(mtk_drm_dmr_backup, 0x2da50ec6, "");
SYMBOL_CRC(drm_register_fps_chg_callback, 0xaab7da79, "");
SYMBOL_CRC(drm_unregister_fps_chg_callback, 0x59e44647, "");
SYMBOL_CRC(mtk_vidle_config_ff, 0xfa671238, "");
SYMBOL_CRC(mtk_vidle_hint_update, 0xd414cb47, "");
SYMBOL_CRC(mtk_vidle_register, 0x744ff28a, "");
SYMBOL_CRC(mtk_vdisp_register, 0xac9753b0, "");
SYMBOL_CRC(mtk_dp_intf_unprepare_clk, 0x27fbabd7, "");
SYMBOL_CRC(mtk_dp_intf_PatternGenEn, 0xd7a204f2, "");
SYMBOL_CRC(mtk_dp_intf_prepare_clk, 0x3c05d7c8, "");
SYMBOL_CRC(mtk_dp_dvo_PatternGenEn, 0xb0544eae, "");
SYMBOL_CRC(mtk_dp_dvo_ChecksumTrigger, 0x383b9d46, "");
SYMBOL_CRC(mtk_dp_aux_swap_enable, 0x84a1f0f6, "_gpl");
SYMBOL_CRC(mtk_dp_set_pin_assign, 0x4f47eaa9, "_gpl");
SYMBOL_CRC(mtk_dp_SWInterruptSet, 0x309bf00b, "_gpl");
SYMBOL_CRC(get_lockdown_info_for_nvt, 0x266be866, "");
SYMBOL_CRC(mi_cooler_brightness_clone_init, 0xf06bc6d3, "");
SYMBOL_CRC(mi_cooler_brightness_clone_exit, 0x095d48eb, "");
SYMBOL_CRC(mi_disp_register_client, 0x99375a29, "");
SYMBOL_CRC(mi_disp_unregister_client, 0xb03bd4d0, "");
SYMBOL_CRC(mi_disp_notifier_call_chain, 0x6262c652, "");
SYMBOL_CRC(disp_log_printk, 0xb42559fa, "");
SYMBOL_CRC(disp_log_printk_utc, 0x0f34b478, "");
SYMBOL_CRC(mi_get_disp_lhbm_fod, 0xfd71819e, "_gpl");
SYMBOL_CRC(mi_disp_lhbm_fod_thread_create, 0xb27c057f, "_gpl");
SYMBOL_CRC(mi_disp_lhbm_fod_thread_destroy, 0x345cf5a5, "_gpl");
SYMBOL_CRC(mi_disp_set_fod_queue_work, 0xb762dd7b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x5a921311, "strncmp" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x037a0cba, "kfree" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xc2749a62, "get_device" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xe4247826, "pm_runtime_get_if_in_use" },
	{ 0xd77d7c9c, "mmprofile_log_ex" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xd6697a91, "drm_is_current_master" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x33d74e27, "mml_drm_submit_timeout" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xe0368cae, "mml_get_plat_device" },
	{ 0xd4e1458f, "mml_drm_get_context" },
	{ 0xbe87039d, "mml_drm_set_panel_pixel" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x0cc0c39c, "cmdq_pkt_write" },
	{ 0xd843cd45, "cmdq_pkt_set_event" },
	{ 0x9216f0fe, "drm_compat_ioctl" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x37ef8a9e, "drm_mode_object_find" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x69e39a4a, "mml_drm_get_hw_caps" },
	{ 0x9aeb5798, "mml_drm_query_hw_support" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xaba63322, "of_iomap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x8e726dd5, "vcp_A_register_notify_ex" },
	{ 0xc829819a, "pm_runtime_irq_safe" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x9a1ddf64, "sysfs_create_bin_file" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x946de52f, "of_device_is_available" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x401167cc, "_dev_info" },
	{ 0x539ad12b, "component_master_add_with_match" },
	{ 0xfd2c5a12, "sysfs_remove_bin_file" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x121de836, "drm_atomic_helper_commit_modeset_disables" },
	{ 0x62cfe23f, "drm_atomic_helper_commit_modeset_enables" },
	{ 0x953d5f0d, "drm_atomic_helper_commit_planes" },
	{ 0x7cf50a9a, "drm_atomic_helper_wait_for_vblanks" },
	{ 0x147e8f4d, "drm_atomic_helper_cleanup_planes" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0x019c511e, "cmdq_pkt_wait_no_clear" },
	{ 0xacf6ee93, "cmdq_pkt_flush_threaded" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0x22df72c1, "cmdq_pkt_destroy" },
	{ 0x8f1cac91, "cmdq_pkt_flush" },
	{ 0xcfac7fd7, "mml_drm_submit" },
	{ 0x01d6838d, "mml_drm_put_context" },
	{ 0x773efaf7, "mml_drm_split_info" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x6b201699, "of_find_property" },
	{ 0x979b55bb, "nvmem_cell_get" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x0fca7d66, "of_clk_get_by_name" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xe0cbbd4a, "component_match_add_release" },
	{ 0x910de2b2, "drm_dev_alloc" },
	{ 0xec1238d2, "drm_dev_register" },
	{ 0xd00cb03d, "drm_dev_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3781e102, "drm_modeset_acquire_init" },
	{ 0x13e52197, "drm_atomic_state_alloc" },
	{ 0xa403a8f1, "drm_atomic_get_crtc_state" },
	{ 0x0bc028d2, "drm_connector_list_iter_begin" },
	{ 0xf70591ae, "drm_connector_list_iter_next" },
	{ 0x69c889c4, "drm_connector_list_iter_end" },
	{ 0x7c5caf18, "drm_atomic_get_connector_state" },
	{ 0x88e9310d, "drm_atomic_set_crtc_for_connector" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x400c7aeb, "drm_atomic_set_mode_for_crtc" },
	{ 0xb04ffe18, "drm_atomic_commit" },
	{ 0x578c7098, "drm_modeset_drop_locks" },
	{ 0x7c30161a, "drm_modeset_acquire_fini" },
	{ 0x322d0022, "cmdq_pkt_wait_complete" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x86de4a10, "dma_buf_map_attachment" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x8fc545b9, "dma_buf_unmap_attachment" },
	{ 0xa433e422, "drm_read" },
	{ 0x4cf5556c, "drm_poll" },
	{ 0x3079e451, "drm_ioctl" },
	{ 0x78148571, "drm_open" },
	{ 0x31a48fdf, "drm_release" },
	{ 0x95dc706d, "iommu_present" },
	{ 0xfab19e40, "component_bind_all" },
	{ 0x456d1b02, "drm_vblank_init" },
	{ 0xfd00e94a, "drm_mode_config_reset" },
	{ 0x234c9de3, "put_device" },
	{ 0x081129fa, "component_unbind_all" },
	{ 0x30125456, "drm_mode_config_cleanup" },
	{ 0xfb239a47, "drmm_mode_config_init" },
	{ 0xa8d477df, "drm_atomic_helper_check" },
	{ 0x3cdb1e9c, "drm_property_lookup_blob" },
	{ 0x1072b07a, "drm_property_blob_put" },
	{ 0x0a5539c7, "drm_atomic_add_affected_connectors" },
	{ 0x4d0015e2, "cpu_hotplug_disable" },
	{ 0x588a09e1, "drm_atomic_helper_prepare_planes" },
	{ 0xf6c8dc62, "cpu_hotplug_enable" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2e1964c3, "drm_atomic_helper_swap_state" },
	{ 0x33c0f18d, "drm_atomic_state_init" },
	{ 0x8bb5c36f, "drm_atomic_state_clear" },
	{ 0xec67a225, "drm_atomic_state_default_release" },
	{ 0xec0dac4b, "mtk_smi_init_power_off" },
	{ 0x35812b3b, "mtk_mminfra_off_gipc" },
	{ 0x82de2cf6, "mtk_dramc_get_ddr_type" },
	{ 0x2d2b91f1, "drm_kms_helper_poll_fini" },
	{ 0x947c702d, "mml_drm_kick_done" },
	{ 0x3dfb8f12, "drm_dev_unregister" },
	{ 0x57a85210, "component_master_del" },
	{ 0xe2ab7050, "drm_atomic_helper_shutdown" },
	{ 0xc653e4d0, "drm_kms_helper_poll_disable" },
	{ 0xbf76f0c3, "drm_atomic_helper_suspend" },
	{ 0x1e276a9e, "drm_kms_helper_poll_enable" },
	{ 0xcb10c609, "__drm_dev_dbg" },
	{ 0xc9867d6e, "drm_atomic_helper_resume" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x318acf06, "platform_bus_type" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x5df1d53f, "component_add" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xf6efd5a0, "component_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb18f62f3, "mtk_leds_brightness_set" },
	{ 0x41e3079d, "mtk_leds_register_notifier" },
	{ 0xbd8167f8, "mtk_leds_unregister_notifier" },
	{ 0xae1fa283, "cmdq_pkt_write_value_addr_reuse" },
	{ 0xe007361d, "cmdq_pkt_reuse_value" },
	{ 0x12b6f595, "cmdq_pkt_refinalize" },
	{ 0xe9c0c46d, "cmdq_pkt_flush_async" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x4770b00e, "kthread_bind_mask" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xd994ecee, "cpu_all_bits" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xe294cc6f, "iommu_dev_disable_feature" },
	{ 0xc0d9c483, "cmdq_pkt_mem_move" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0x8ed2d989, "iommu_map" },
	{ 0x96848186, "scnprintf" },
	{ 0x4f11972d, "cmdq_pkt_clear_event" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x1f26d82a, "cmdq_pkt_write_indriect" },
	{ 0x90396079, "cmdq_util_hw_trace_dump" },
	{ 0x641247a0, "cmdq_dump_pkt" },
	{ 0x979fc78c, "mtk_smi_dbg_dump_for_disp" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0x0f491c39, "cmdq_pkt_sleep" },
	{ 0xb6c47456, "mtk_mmqos_is_dualpipe_enable" },
	{ 0x6f403924, "slbc_register_activate_ops" },
	{ 0xa4234d01, "slbc_request" },
	{ 0x2a66c694, "slbc_power_on" },
	{ 0x894c65c4, "drm_framebuffer_lookup" },
	{ 0x0cac54c3, "cmdq_pkt_finalize_loop" },
	{ 0xc3d83563, "cmdq_mbox_stop" },
	{ 0xd24e746d, "cmdq_util_enable_disp_va" },
	{ 0x80e38994, "cmdq_pkt_read" },
	{ 0xb9ccd5be, "cmdq_pkt_assign_command" },
	{ 0x81b3429a, "cmdq_pkt_cond_jump_abs" },
	{ 0x7ed3c651, "cmdq_pkt_get_va_by_offset" },
	{ 0xc4f81523, "cmdq_pkt_get_pa_by_offset" },
	{ 0x78d44fc3, "cmdq_reg_shift_addr" },
	{ 0x23daec08, "cmdq_pkt_logic_command" },
	{ 0xdb8d6bd8, "cmdq_pkt_write_reg_addr" },
	{ 0xa9410db2, "cmdq_util_disp_smc_cmd" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xc7fcad2e, "drm_crtc_vblank_on" },
	{ 0xa0a422bd, "drm_panel_prepare" },
	{ 0xebed296c, "drm_panel_enable" },
	{ 0x1f712efd, "drm_crtc_vblank_off" },
	{ 0x2fe050cb, "mml_drm_ctx_idle" },
	{ 0x1d255fdd, "mtk_set_mmmc_rg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa22ae418, "mml_drm_racing_config_sync" },
	{ 0x17fb2d1c, "cmdq_pkt_copy" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd7330377, "cmdq_pkt_jump_addr" },
	{ 0xae1d247c, "cmdq_mbox_get_tpr" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x845780ba, "drm_crtc_handle_vblank" },
	{ 0xb2fb44a1, "cmdq_dev_get_event" },
	{ 0x8ac9531d, "drm_mode_crtc_set_gamma_size" },
	{ 0x0a05c8d7, "wakeup_source_create" },
	{ 0xc2941d2b, "wakeup_source_add" },
	{ 0xa6b4f7d0, "mtk_sync_fence_create" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x329647d2, "cmdq_set_outpin_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb8796193, "mml_drm_stop" },
	{ 0x8af6d9c4, "mml_drm_racing_stop_sync" },
	{ 0x5d6d21aa, "cmdq_pkt_read_addr" },
	{ 0x22977ee9, "hwccf_is_enabled" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x0b46b444, "free_reserved_page" },
	{ 0x970ebe8c, "cmdq_thread_dump_spr" },
	{ 0xf3c051fe, "cmdq_thread_dump" },
	{ 0x814d8d14, "drm_mode_object_put" },
	{ 0x9d32f280, "cmdq_pkt_add_cmd_buffer" },
	{ 0x8877c8c0, "slbc_power_off" },
	{ 0x0e12e362, "slbc_release" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x3f1b48a4, "drm_writeback_signal_completion" },
	{ 0x6a36cdd5, "drm_crtc_send_vblank_event" },
	{ 0x5023944c, "drm_crtc_vblank_put" },
	{ 0x2b320f50, "drm_crtc_init_with_planes" },
	{ 0x2e058fec, "drm_crtc_cleanup" },
	{ 0x25c099d6, "drm_atomic_helper_set_config" },
	{ 0x58095e92, "drm_atomic_helper_page_flip" },
	{ 0x3423e44c, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x42b0a87d, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x040252e7, "drm_crtc_vblank_get" },
	{ 0xfb6952f2, "drm_calc_timestamping_constants" },
	{ 0xb7afafaf, "drm_property_create_range" },
	{ 0x5456b2de, "drm_object_attach_property" },
	{ 0xd6587da7, "drm_property_create_blob" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0x4aaa4dc7, "cmdq_mbox_buf_alloc" },
	{ 0x8647f4a4, "cmdq_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x36bb844e, "mmdvfs_stop_record" },
	{ 0x92dcbd41, "mmqos_stop_record" },
	{ 0x28100ea4, "mmqos_hrt_dump" },
	{ 0xff54165b, "mmdvfs_debug_status_dump" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xf476a89f, "platform_irq_count" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xd7e8fa89, "notify_vb_audio_control" },
	{ 0x699573a9, "of_alias_get_id" },
	{ 0x78e97923, "of_irq_get" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x79146c3e, "mtk_iommu_register_fault_callback" },
	{ 0x53262a34, "mtk_smi_larb_enable" },
	{ 0x6b85895c, "mtk_smi_larb_disable" },
	{ 0xdacda2a8, "drm_gem_object_lookup" },
	{ 0x8a8421f9, "drm_helper_mode_fill_fb_struct" },
	{ 0x2eff4544, "drm_framebuffer_init" },
	{ 0xb5e922b7, "drm_framebuffer_cleanup" },
	{ 0xee515f6c, "drm_gem_handle_create" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x94961283, "vunmap" },
	{ 0xd0305873, "drm_gem_object_release" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x067e2f47, "dma_heap_put" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0xd18c970f, "drm_prime_gem_destroy" },
	{ 0x3bda5108, "drm_gem_create_mmap_offset" },
	{ 0x7a6e9544, "drm_gem_mmap_obj" },
	{ 0x34e4502c, "drm_gem_mmap" },
	{ 0x9d5dbbcf, "dma_buf_get_gid" },
	{ 0x3b3f2cda, "slbc_invalidate" },
	{ 0x4fe5340d, "slbc_gid_release" },
	{ 0xe06f78c7, "slbc_gid_request" },
	{ 0x803673d2, "slbc_validate" },
	{ 0xe4e72217, "dma_get_sgtable_attrs" },
	{ 0xa0a67c1b, "drm_gem_prime_import_dev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3cd9a437, "drm_gem_private_object_init" },
	{ 0x2be2f9a1, "drm_gem_handle_delete" },
	{ 0x392e62f0, "drm_gem_object_init" },
	{ 0x7ee25d67, "vmap" },
	{ 0xe5960168, "dma_map_sg_attrs" },
	{ 0x3eb103cd, "sg_alloc_table_from_pages_segment" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x6110d3c4, "dma_mmap_attrs" },
	{ 0x411aee84, "drm_gem_vm_close" },
	{ 0x68db9aa8, "__vma_start_write" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3077dff, "drm_gem_dma_vm_ops" },
	{ 0xfd6eac84, "drm_universal_plane_init" },
	{ 0x7aa8647b, "drm_plane_create_alpha_property" },
	{ 0x7806f6e6, "drm_plane_create_blend_mode_property" },
	{ 0xf1e7c3ee, "drm_atomic_helper_update_plane" },
	{ 0xbc8903c0, "drm_atomic_helper_disable_plane" },
	{ 0x181808f3, "drm_plane_cleanup" },
	{ 0xbc167924, "__drm_atomic_helper_plane_destroy_state" },
	{ 0xf09e3e5b, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xafe6218d, "drm_atomic_helper_check_plane_state" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42f242bb, "mtk_dramc_get_data_rate" },
	{ 0x4bc2042c, "mtk_emiisu_record_off" },
	{ 0x9f18f417, "__drm_atomic_helper_connector_destroy_state" },
	{ 0x28c7f8d2, "__drm_atomic_helper_connector_reset" },
	{ 0xb6c803ac, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x937e4941, "find_panel_ext" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xeadb5444, "cmdq_pkt_poll_timeout" },
	{ 0x6871ad9c, "phy_power_on" },
	{ 0x69e67f21, "phy_power_off" },
	{ 0x543f6990, "cmdq_pkt_poll" },
	{ 0xbc452f90, "mipi_dsi_host_register" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x101eb6b2, "of_graph_get_next_endpoint" },
	{ 0xb69b1b91, "of_graph_get_remote_port_parent" },
	{ 0x1193916c, "of_drm_find_bridge" },
	{ 0xafee3184, "of_drm_find_panel" },
	{ 0x728b1867, "devm_phy_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb6263535, "mipi_dsi_host_unregister" },
	{ 0xf97cb3e7, "drm_helper_hpd_irq_event" },
	{ 0xb4ee8f82, "of_graph_get_remote_node" },
	{ 0x07ba5792, "platform_device_put" },
	{ 0xe321e679, "drm_object_property_set_value" },
	{ 0x04f2d39b, "drm_panel_disable" },
	{ 0x7a7e2153, "drm_panel_unprepare" },
	{ 0xfe9f72f3, "drm_display_mode_to_videomode" },
	{ 0x9166fada, "strncpy" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x88fea61e, "drm_encoder_init" },
	{ 0xe2886018, "drm_encoder_cleanup" },
	{ 0x4b7239d2, "mtk_disp_notifier_call_chain" },
	{ 0x00b8425f, "mtk_disp_sub_notifier_call_chain" },
	{ 0xe82fea0e, "mtk_disp_3rd_notifier_call_chain" },
	{ 0x1e0c36d2, "drm_bridge_attach" },
	{ 0x496120e1, "drm_connector_init" },
	{ 0x61ad6db3, "drm_connector_attach_encoder" },
	{ 0x5533628a, "drm_helper_probe_single_connector_modes" },
	{ 0xa0be62d0, "drm_connector_cleanup" },
	{ 0x45d3f659, "drm_atomic_helper_connector_destroy_state" },
	{ 0xfe54ba44, "drm_panel_get_modes" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x7507c5a0, "mipi_dsi_dcs_write_buffer" },
	{ 0x65b94165, "mipi_dsi_dcs_read" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xdd8b1969, "devm_clk_register" },
	{ 0x56e33ef5, "devm_phy_create" },
	{ 0x4094ffc4, "__devm_of_phy_provider_register" },
	{ 0x0e606d3f, "of_phy_simple_xlate" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0x26750717, "of_clk_add_provider" },
	{ 0x1859520d, "of_clk_src_simple_get" },
	{ 0x763032c4, "of_clk_del_provider" },
	{ 0x9b9f4a7a, "drm_framebuffer_remove" },
	{ 0x84585e33, "drm_writeback_connector_init" },
	{ 0xfb4d6ba7, "drm_writeback_queue_job" },
	{ 0xbdba416a, "drm_atomic_helper_connector_reset" },
	{ 0x5745c5d3, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf687a20a, "drm_add_modes_noedid" },
	{ 0x669e62ec, "mtk_sync_timeline_inc" },
	{ 0xee9aefdd, "mtk_sync_share_fence_create" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0xdec5777e, "mtk_sync_timeline_create" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x367365db, "mt_get_fmeter_freq" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x44033864, "proc_remove" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa6257a2f, "complete" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0xf159aa44, "kstrtoull_from_user" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xc919a04e, "mtk_mmqos_get_avail_hrt_bw" },
	{ 0x15bd5cb7, "mtk_mmqos_get_cam_hrt" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x6b49f85d, "mml_drm_query_multi_layer" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb44aba4c, "mml_drm_query_cap" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7ffb1903, "mmprofile_register_event" },
	{ 0x899ea9dc, "mmprofile_enable" },
	{ 0x560a0e63, "mmprofile_enable_event_recursive" },
	{ 0xda38583a, "mmprofile_start" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0xd0c189d4, "mmprofile_log_meta_bitmap" },
	{ 0xaa7dc2bb, "mmprofile_log_meta_yuv_bitmap" },
	{ 0x44480f47, "mmprofile_log_meta" },
	{ 0x00148653, "vsnprintf" },
	{ 0x2d41e6f5, "__trace_puts" },
	{ 0x2811d5f8, "mdp_set_resource_callback" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0xfee451c3, "cmdq_pkt_write_value_addr" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0x411fbde8, "cpufreq_get_policy" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0xfefe2f2f, "freq_qos_remove_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa01d3df6, "font_vga_8x16" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0x783a7a9d, "mtk_mmqos_register_bw_throttle_notifier" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x2df41765, "mmdvfs_set_lp_mode" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x4361b3fa, "param_array_ops" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x27f51596, "fget" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x0f013cdc, "fd_install" },
	{ 0xedc03953, "iounmap" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0x239ca61d, "cmdq_set_event" },
	{ 0x1e41fc76, "devm_gpiod_get" },
	{ 0x5a772b88, "gpiod_set_value" },
	{ 0x09a359c5, "devm_gpiod_put" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdeef92c3, "devm_pinctrl_put" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x3339afaa, "mml_dbgtp_register" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x34485386, "param_ops_hexint" },
	{ 0x9b1faacb, "device_create" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0xc54855de, "kobject_uevent_env" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0xb455ab02, "drm_dp_dpcd_write" },
	{ 0x11b9fa4a, "drm_dp_dpcd_read" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x32d261e7, "drm_connector_update_edid_property" },
	{ 0x562e2b16, "drm_dp_link_train_clock_recovery_delay" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0xd1dfa282, "drm_dp_link_train_channel_eq_delay" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0x4124e206, "drm_edid_to_sad" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5f7137ba, "drm_edid_duplicate" },
	{ 0xd1c5e66f, "drm_get_edid" },
	{ 0x3892a491, "drm_display_mode_from_cea_vic" },
	{ 0xda964005, "extcon_set_state_sync" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x56ad78d4, "devm_extcon_dev_allocate" },
	{ 0x5300996c, "devm_extcon_dev_register" },
	{ 0x301f88d4, "dev_pm_domain_attach_by_name" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x493d5ace, "drm_dp_aux_init" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd6c6138a, "drm_dp_aux_register" },
	{ 0xaa4efd5e, "drm_cvt_mode" },
	{ 0x0ef4bf6b, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6cb55984, "drm_mode_probed_add" },
	{ 0xee04c285, "drm_add_edid_modes" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0x5fc727a5, "kobject_set_name" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4d8597ff, "device_register" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x7e73bce6, "sysfs_notify" },
	{ 0xcb456737, "__kthread_init_worker" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xbc704fe1, "kthread_flush_worker" },
	{ 0x0cae9d1d, "noop_llseek" },
	{ 0x2c2067df, "mutex_lock_interruptible" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0x77bc13a0, "strim" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xb24413bf, "param_ops_string" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x0fff5afc, "time64_to_tm" },
	{ 0x70cc6ff8, "debugfs_create_bool" },
	{ 0x30a720ff, "sysfs_create_groups" },
	{ 0xde9e9d67, "sysfs_remove_groups" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x16ad39d4, "irq_to_desc" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x3c50e41e, "gpiod_direction_input" },
	{ 0x2f8ed23c, "thermal_cooling_device_register" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x7a198fd3, "device_create_with_groups" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x60d3b017, "sched_set_fifo" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x1cc7f053,
	0x51fcca8a,
	0x5a921311,
	0x34db050b,
	0x2b3df576,
	0x037a0cba,
	0x502a8c68,
	0xa823db6e,
	0xc2749a62,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xd4e81a21,
	0xe4247826,
	0xd77d7c9c,
	0xe94986d6,
	0x3b1b6444,
	0xd6697a91,
	0x1b2fa1a9,
	0xbee3ddd5,
	0x999e8297,
	0x8ddd8aad,
	0x33d74e27,
	0xd5977bfb,
	0xe0368cae,
	0xd4e1458f,
	0xbe87039d,
	0xed55cabd,
	0x6b2dc060,
	0xf1b5340a,
	0x0cc0c39c,
	0xd843cd45,
	0x9216f0fe,
	0xf3cdc3c6,
	0x1ed4c5e6,
	0xe136f93c,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x7e19152a,
	0xd35cce70,
	0xc5b6f236,
	0x1fec5304,
	0xba8fbd64,
	0x9a835040,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0xb5b54b34,
	0x37ef8a9e,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x5c27c40f,
	0x4eb4c414,
	0x13269d10,
	0xc3055d20,
	0xb318cbab,
	0xcd6bda8d,
	0x7682ba4e,
	0x88db9f48,
	0x2be0c009,
	0x9a85eebb,
	0x69e39a4a,
	0x9aeb5798,
	0xb43f9365,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xb4ce05a5,
	0x12db679a,
	0x6fc35f2b,
	0x14fe5355,
	0xa571f6b0,
	0x31b65f04,
	0xc1cad332,
	0xaba63322,
	0xd9a5ea54,
	0x75966ec2,
	0x8e726dd5,
	0xc829819a,
	0xaf7cb74b,
	0x40863ba1,
	0x9a1ddf64,
	0x1f0a95af,
	0x7c7f271f,
	0x34675dcc,
	0x946de52f,
	0x47a915f1,
	0x401167cc,
	0x539ad12b,
	0xfd2c5a12,
	0xc8c7229e,
	0x121de836,
	0x62cfe23f,
	0x953d5f0d,
	0x7cf50a9a,
	0x147e8f4d,
	0xfc102d94,
	0x019c511e,
	0xacf6ee93,
	0xe1d5b76c,
	0x22df72c1,
	0x8f1cac91,
	0xcfac7fd7,
	0x01d6838d,
	0x773efaf7,
	0xaaae9064,
	0xc905402b,
	0xfa4d3c24,
	0xb9cad492,
	0x0296695f,
	0x6b201699,
	0x979b55bb,
	0x99f018c4,
	0x85540ebc,
	0x5be9ce07,
	0xea6f49c8,
	0x0fca7d66,
	0xb088bcfc,
	0xb57f5be6,
	0x65e0d6d7,
	0xe0cbbd4a,
	0x910de2b2,
	0xec1238d2,
	0xd00cb03d,
	0xc4f0da12,
	0x3781e102,
	0x13e52197,
	0xa403a8f1,
	0x0bc028d2,
	0xf70591ae,
	0x69c889c4,
	0x7c5caf18,
	0x88e9310d,
	0x2ed3c600,
	0x4575a0ca,
	0x400c7aeb,
	0xb04ffe18,
	0x578c7098,
	0x7c30161a,
	0x322d0022,
	0xfff4bd7c,
	0x86de4a10,
	0xecbe3c62,
	0x8fc545b9,
	0xa433e422,
	0x4cf5556c,
	0x3079e451,
	0x78148571,
	0x31a48fdf,
	0x95dc706d,
	0xfab19e40,
	0x456d1b02,
	0xfd00e94a,
	0x234c9de3,
	0x081129fa,
	0x30125456,
	0xfb239a47,
	0xa8d477df,
	0x3cdb1e9c,
	0x1072b07a,
	0x0a5539c7,
	0x4d0015e2,
	0x588a09e1,
	0xf6c8dc62,
	0x2f2c95c4,
	0x2e1964c3,
	0x33c0f18d,
	0x8bb5c36f,
	0xec67a225,
	0xec0dac4b,
	0x35812b3b,
	0x82de2cf6,
	0x2d2b91f1,
	0x947c702d,
	0x3dfb8f12,
	0x57a85210,
	0xe2ab7050,
	0xc653e4d0,
	0xbf76f0c3,
	0x1e276a9e,
	0xcb10c609,
	0xc9867d6e,
	0x2d3385d3,
	0x0f05f001,
	0xefe8a82e,
	0xaf56600a,
	0x318acf06,
	0x6b722180,
	0x0c1a5ee3,
	0x5df1d53f,
	0x5a6368f5,
	0xf6efd5a0,
	0xe2d5255a,
	0xb18f62f3,
	0x41e3079d,
	0xbd8167f8,
	0xae1fa283,
	0xe007361d,
	0x12b6f595,
	0xe9c0c46d,
	0xdfcaaee7,
	0x5e515be6,
	0xbcab6ee6,
	0x656e4a6e,
	0xfef216eb,
	0x49cd25ed,
	0x3c3ff9fd,
	0xba0aee2e,
	0x24f00fda,
	0x7e688f68,
	0xce5bc4d0,
	0xb3f7646e,
	0xf7ca28dd,
	0xf9583f23,
	0x017de3d5,
	0x4770b00e,
	0xf5edea2e,
	0x45b60059,
	0xd994ecee,
	0x62ad2053,
	0x29c37d82,
	0xdb976d85,
	0xe294cc6f,
	0xc0d9c483,
	0xd3cc3c5d,
	0x8ed2d989,
	0x96848186,
	0x4f11972d,
	0xb11ac7a7,
	0x1e6d26a8,
	0x689f7bde,
	0x1f26d82a,
	0x90396079,
	0x641247a0,
	0x979fc78c,
	0x9f6801a4,
	0x0f491c39,
	0xb6c47456,
	0x6f403924,
	0xa4234d01,
	0x2a66c694,
	0x894c65c4,
	0x0cac54c3,
	0xc3d83563,
	0xd24e746d,
	0x80e38994,
	0xb9ccd5be,
	0x81b3429a,
	0x7ed3c651,
	0xc4f81523,
	0x78d44fc3,
	0x23daec08,
	0xdb8d6bd8,
	0xa9410db2,
	0x9ce050be,
	0xc7fcad2e,
	0xa0a422bd,
	0xebed296c,
	0x1f712efd,
	0x2fe050cb,
	0x1d255fdd,
	0xeae3dfd6,
	0xa22ae418,
	0x17fb2d1c,
	0x9ec6ca96,
	0xd7330377,
	0xae1d247c,
	0x65929cae,
	0x845780ba,
	0xb2fb44a1,
	0x8ac9531d,
	0x0a05c8d7,
	0xc2941d2b,
	0xa6b4f7d0,
	0x55eb38da,
	0x329647d2,
	0xfcec0987,
	0x3ce4ca6f,
	0xb8796193,
	0x8af6d9c4,
	0x5d6d21aa,
	0x22977ee9,
	0x7f02188f,
	0x0b46b444,
	0x970ebe8c,
	0xf3c051fe,
	0x814d8d14,
	0x9d32f280,
	0x8877c8c0,
	0x0e12e362,
	0x4e8b8def,
	0x05590c04,
	0x3f1b48a4,
	0x6a36cdd5,
	0x5023944c,
	0x2b320f50,
	0x2e058fec,
	0x25c099d6,
	0x58095e92,
	0x3423e44c,
	0x42b0a87d,
	0x040252e7,
	0xfb6952f2,
	0xb7afafaf,
	0x5456b2de,
	0xd6587da7,
	0x22ae5020,
	0x4aaa4dc7,
	0x8647f4a4,
	0xf9a482f9,
	0x36bb844e,
	0x92dcbd41,
	0x28100ea4,
	0xff54165b,
	0xb2fb935e,
	0x75fb9062,
	0x9688de8b,
	0xf476a89f,
	0xea23ff02,
	0xd7e8fa89,
	0x699573a9,
	0x78e97923,
	0x0be515ae,
	0xa079425d,
	0x79146c3e,
	0x53262a34,
	0x6b85895c,
	0xdacda2a8,
	0x8a8421f9,
	0x2eff4544,
	0xb5e922b7,
	0xee515f6c,
	0xd680a377,
	0xc6970ad9,
	0xc8c85086,
	0x94961283,
	0xd0305873,
	0xeff75c0b,
	0xe49fbbe6,
	0x067e2f47,
	0x69020168,
	0xe70e1ef3,
	0x18500fa9,
	0xd18c970f,
	0x3bda5108,
	0x7a6e9544,
	0x34e4502c,
	0x9d5dbbcf,
	0x3b3f2cda,
	0x4fe5340d,
	0xe06f78c7,
	0x803673d2,
	0xe4e72217,
	0xa0a67c1b,
	0x56470118,
	0x3cd9a437,
	0x2be2f9a1,
	0x392e62f0,
	0x7ee25d67,
	0xe5960168,
	0x3eb103cd,
	0x5a9cfed6,
	0x78cf2345,
	0x6110d3c4,
	0x411aee84,
	0x68db9aa8,
	0xa5526619,
	0xc3077dff,
	0xfd6eac84,
	0x7aa8647b,
	0x7806f6e6,
	0xf1e7c3ee,
	0xbc8903c0,
	0x181808f3,
	0xbc167924,
	0xf09e3e5b,
	0xafe6218d,
	0xc38c83b8,
	0x42f242bb,
	0x4bc2042c,
	0x9f18f417,
	0x28c7f8d2,
	0xb6c803ac,
	0x937e4941,
	0x76d9b876,
	0xeadb5444,
	0x6871ad9c,
	0x69e67f21,
	0x543f6990,
	0xbc452f90,
	0xd7c2b302,
	0x101eb6b2,
	0xb69b1b91,
	0x1193916c,
	0xafee3184,
	0x728b1867,
	0xc6f46339,
	0xb6263535,
	0xf97cb3e7,
	0xb4ee8f82,
	0x07ba5792,
	0xe321e679,
	0x04f2d39b,
	0x7a7e2153,
	0xfe9f72f3,
	0x9166fada,
	0x7c611278,
	0x92d5838e,
	0x7522f3ba,
	0x88fea61e,
	0xe2886018,
	0x4b7239d2,
	0x00b8425f,
	0xe82fea0e,
	0x1e0c36d2,
	0x496120e1,
	0x61ad6db3,
	0x5533628a,
	0xa0be62d0,
	0x45d3f659,
	0xfe54ba44,
	0xdc0e4855,
	0x7507c5a0,
	0x65b94165,
	0x92acb4e9,
	0x15ba50a6,
	0xc569d8ce,
	0xdd8b1969,
	0x56e33ef5,
	0x4094ffc4,
	0x0e606d3f,
	0x09674aa9,
	0x26750717,
	0x1859520d,
	0x763032c4,
	0x9b9f4a7a,
	0x84585e33,
	0xfb4d6ba7,
	0xbdba416a,
	0x5745c5d3,
	0xf687a20a,
	0x669e62ec,
	0xee9aefdd,
	0x7155bcf8,
	0xdec5777e,
	0xe123f3d9,
	0xaa0c318b,
	0x367365db,
	0x4e870156,
	0x5cf4d4de,
	0xb4028d67,
	0x7518b5f0,
	0xb7c7d237,
	0x44033864,
	0x9c81ceff,
	0x85df9b6c,
	0x3b6c41ea,
	0xf02aa937,
	0x9858f364,
	0x9e7d6bd0,
	0xa6257a2f,
	0x665e62b5,
	0x391b5530,
	0x0c6a7f0d,
	0xbf748e79,
	0x0140f701,
	0xdd115996,
	0xf159aa44,
	0x19b76060,
	0x608741b5,
	0xe4bbc1dd,
	0xc919a04e,
	0x15bd5cb7,
	0xe0da6e4a,
	0x57c959d2,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x6b49f85d,
	0x74c134b9,
	0xb44aba4c,
	0xf70e4a4d,
	0xac594e02,
	0x7ffb1903,
	0x899ea9dc,
	0x560a0e63,
	0xda38583a,
	0x7640bcae,
	0xd0c189d4,
	0xaa7dc2bb,
	0x44480f47,
	0x00148653,
	0x2d41e6f5,
	0x2811d5f8,
	0x203392c6,
	0x52384e38,
	0xfee451c3,
	0x6c9565df,
	0x1af93d4f,
	0x411fbde8,
	0xf8bd87ca,
	0xdb4e2667,
	0xcd6f7bae,
	0xfefe2f2f,
	0xcc5005fe,
	0xcf2a6966,
	0x78b887ed,
	0x6bd0e573,
	0x2d39b0a7,
	0xa01d3df6,
	0x20dda19c,
	0x54325131,
	0x1205e506,
	0xb39378cc,
	0x6d25698b,
	0x783a7a9d,
	0xcd6bb6eb,
	0x2ccea269,
	0x2df41765,
	0xc2a5a5eb,
	0xf644e56a,
	0xb3bceb42,
	0x2220455c,
	0x166667b7,
	0x67064f1d,
	0x4361b3fa,
	0xf1969a8e,
	0xee73d233,
	0x9166fc03,
	0x2077fc84,
	0x27f51596,
	0xa843805a,
	0x0f013cdc,
	0xedc03953,
	0x25974000,
	0xf1e3c830,
	0x239ca61d,
	0x1e41fc76,
	0x5a772b88,
	0x09a359c5,
	0x5e292cf6,
	0xce2840e7,
	0xdeef92c3,
	0xa191ccd1,
	0x07183fe6,
	0x3339afaa,
	0x2396c7f0,
	0x556e4390,
	0x34485386,
	0x9b1faacb,
	0xe922b94d,
	0x169f5b1f,
	0x11d6167b,
	0xc54855de,
	0x03c12dfe,
	0xb455ab02,
	0x11b9fa4a,
	0xcec49a87,
	0x32d261e7,
	0x562e2b16,
	0x8d701329,
	0xd1dfa282,
	0xedcf81ce,
	0x4124e206,
	0x167c5967,
	0x5f7137ba,
	0xd1c5e66f,
	0x3892a491,
	0xda964005,
	0x6fe9dcd4,
	0x576b05bf,
	0x56ad78d4,
	0x5300996c,
	0x301f88d4,
	0x49dc0e6c,
	0x493d5ace,
	0xfb384d37,
	0xd6c6138a,
	0xaa4efd5e,
	0x0ef4bf6b,
	0x4a35d30d,
	0x6cb55984,
	0xee04c285,
	0x8c03d20c,
	0xf93aae46,
	0xe3ec2f2b,
	0x8b808b7f,
	0x5fc727a5,
	0xcfc099c4,
	0x28ba7b6c,
	0x6091b333,
	0x4d8597ff,
	0xcc1420a0,
	0x330c0b0f,
	0xef27af6b,
	0x7e73bce6,
	0xcb456737,
	0x955b0e2e,
	0xbc704fe1,
	0x0cae9d1d,
	0x2c2067df,
	0x8427cc7b,
	0x4b750f53,
	0x716425b7,
	0x77bc13a0,
	0x8c8569cb,
	0xb71589f0,
	0x42ad47ad,
	0xb24413bf,
	0x953e1b9e,
	0x0fff5afc,
	0x70cc6ff8,
	0x30a720ff,
	0xde9e9d67,
	0x5c3c7387,
	0x8b9c34da,
	0xc8f2ae9d,
	0xa2fa95a0,
	0x16ad39d4,
	0x27bbf221,
	0x47229b5c,
	0x7ec9701a,
	0x3c50e41e,
	0x2f8ed23c,
	0x62835296,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x7a198fd3,
	0x6a6e05bf,
	0x60d3b017,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scmi_tinysys_common_set\0"
	"get_scmi_tinysys_info\0"
	"strncmp\0"
	"_raw_spin_lock_irqsave\0"
	"dma_buf_put\0"
	"kfree\0"
	"of_property_match_string\0"
	"of_find_device_by_node\0"
	"get_device\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"pm_runtime_enable\0"
	"pm_runtime_get_if_in_use\0"
	"mmprofile_log_ex\0"
	"sched_clock\0"
	"of_get_property\0"
	"drm_is_current_master\0"
	"vmalloc_noprof\0"
	"vzalloc_noprof\0"
	"vfree\0"
	"schedule_timeout\0"
	"mml_drm_submit_timeout\0"
	"mutex_lock\0"
	"mml_get_plat_device\0"
	"mml_drm_get_context\0"
	"mml_drm_set_panel_pixel\0"
	"mutex_unlock\0"
	"dump_stack\0"
	"drm_mode_vrefresh\0"
	"cmdq_pkt_write\0"
	"cmdq_pkt_set_event\0"
	"drm_compat_ioctl\0"
	"of_find_compatible_node\0"
	"of_find_node_by_name\0"
	"of_property_read_variable_u32_array\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"queue_work_on\0"
	"__of_parse_phandle_with_args\0"
	"_raw_spin_lock\0"
	"__list_del_entry_valid_or_report\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"_raw_spin_unlock\0"
	"drm_mode_object_find\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_disable\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"usleep_range_state\0"
	"of_find_node_opts_by_path\0"
	"of_property_read_string_helper\0"
	"__copy_overflow\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"mml_drm_get_hw_caps\0"
	"mml_drm_query_hw_support\0"
	"ktime_get\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"_dev_err\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"of_property_read_u32_index\0"
	"of_address_to_resource\0"
	"of_iomap\0"
	"__init_waitqueue_head\0"
	"register_pm_notifier\0"
	"vcp_A_register_notify_ex\0"
	"pm_runtime_irq_safe\0"
	"of_property_read_string\0"
	"ioremap_prot\0"
	"sysfs_create_bin_file\0"
	"of_mtk_icc_get\0"
	"of_get_next_child\0"
	"of_match_node\0"
	"of_device_is_available\0"
	"_dev_warn\0"
	"_dev_info\0"
	"component_master_add_with_match\0"
	"sysfs_remove_bin_file\0"
	"devm_kmalloc\0"
	"drm_atomic_helper_commit_modeset_disables\0"
	"drm_atomic_helper_commit_modeset_enables\0"
	"drm_atomic_helper_commit_planes\0"
	"drm_atomic_helper_wait_for_vblanks\0"
	"drm_atomic_helper_cleanup_planes\0"
	"cmdq_mbox_enable\0"
	"cmdq_pkt_wait_no_clear\0"
	"cmdq_pkt_flush_threaded\0"
	"cmdq_mbox_disable\0"
	"cmdq_pkt_destroy\0"
	"cmdq_pkt_flush\0"
	"mml_drm_submit\0"
	"mml_drm_put_context\0"
	"mml_drm_split_info\0"
	"dma_buf_get\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__drm_atomic_state_free\0"
	"refcount_warn_saturate\0"
	"of_find_property\0"
	"nvmem_cell_get\0"
	"nvmem_cell_read\0"
	"nvmem_cell_put\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"of_clk_get_by_name\0"
	"of_count_phandle_with_args\0"
	"of_clk_get\0"
	"memory_read_from_buffer\0"
	"component_match_add_release\0"
	"drm_dev_alloc\0"
	"drm_dev_register\0"
	"drm_dev_put\0"
	"ktime_get_with_offset\0"
	"drm_modeset_acquire_init\0"
	"drm_atomic_state_alloc\0"
	"drm_atomic_get_crtc_state\0"
	"drm_connector_list_iter_begin\0"
	"drm_connector_list_iter_next\0"
	"drm_connector_list_iter_end\0"
	"drm_atomic_get_connector_state\0"
	"drm_atomic_set_crtc_for_connector\0"
	"drm_mode_debug_printmodeline\0"
	"drm_mode_set_crtcinfo\0"
	"drm_atomic_set_mode_for_crtc\0"
	"drm_atomic_commit\0"
	"drm_modeset_drop_locks\0"
	"drm_modeset_acquire_fini\0"
	"cmdq_pkt_wait_complete\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment\0"
	"dma_buf_detach\0"
	"dma_buf_unmap_attachment\0"
	"drm_read\0"
	"drm_poll\0"
	"drm_ioctl\0"
	"drm_open\0"
	"drm_release\0"
	"iommu_present\0"
	"component_bind_all\0"
	"drm_vblank_init\0"
	"drm_mode_config_reset\0"
	"put_device\0"
	"component_unbind_all\0"
	"drm_mode_config_cleanup\0"
	"drmm_mode_config_init\0"
	"drm_atomic_helper_check\0"
	"drm_property_lookup_blob\0"
	"drm_property_blob_put\0"
	"drm_atomic_add_affected_connectors\0"
	"cpu_hotplug_disable\0"
	"drm_atomic_helper_prepare_planes\0"
	"cpu_hotplug_enable\0"
	"flush_work\0"
	"drm_atomic_helper_swap_state\0"
	"drm_atomic_state_init\0"
	"drm_atomic_state_clear\0"
	"drm_atomic_state_default_release\0"
	"mtk_smi_init_power_off\0"
	"mtk_mminfra_off_gipc\0"
	"mtk_dramc_get_ddr_type\0"
	"drm_kms_helper_poll_fini\0"
	"mml_drm_kick_done\0"
	"drm_dev_unregister\0"
	"component_master_del\0"
	"drm_atomic_helper_shutdown\0"
	"drm_kms_helper_poll_disable\0"
	"drm_atomic_helper_suspend\0"
	"drm_kms_helper_poll_enable\0"
	"__drm_dev_dbg\0"
	"drm_atomic_helper_resume\0"
	"system_wq\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"arm64_use_ng_mappings\0"
	"platform_bus_type\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"component_add\0"
	"devm_kfree\0"
	"component_del\0"
	"strcmp\0"
	"mtk_leds_brightness_set\0"
	"mtk_leds_register_notifier\0"
	"mtk_leds_unregister_notifier\0"
	"cmdq_pkt_write_value_addr_reuse\0"
	"cmdq_pkt_reuse_value\0"
	"cmdq_pkt_refinalize\0"
	"cmdq_pkt_flush_async\0"
	"cmdq_pkt_create\0"
	"ktime_get_ts64\0"
	"sscanf\0"
	"snprintf\0"
	"_raw_spin_trylock\0"
	"alloc_workqueue\0"
	"sprintf\0"
	"kthread_create_on_node\0"
	"set_cpus_allowed_ptr\0"
	"sched_setscheduler\0"
	"wake_up_process\0"
	"kthread_should_stop\0"
	"platform_get_irq\0"
	"devm_request_threaded_irq\0"
	"nr_cpu_ids\0"
	"kthread_bind_mask\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"cpu_all_bits\0"
	"cpu_bit_bitmap\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"iommu_dev_disable_feature\0"
	"cmdq_pkt_mem_move\0"
	"iommu_get_domain_for_dev\0"
	"iommu_map\0"
	"scnprintf\0"
	"cmdq_pkt_clear_event\0"
	"__drm_err\0"
	"strstr\0"
	"mtk_smi_dbg_hang_detect\0"
	"cmdq_pkt_write_indriect\0"
	"cmdq_util_hw_trace_dump\0"
	"cmdq_dump_pkt\0"
	"mtk_smi_dbg_dump_for_disp\0"
	"cmdq_pkt_wfe\0"
	"cmdq_pkt_sleep\0"
	"mtk_mmqos_is_dualpipe_enable\0"
	"slbc_register_activate_ops\0"
	"slbc_request\0"
	"slbc_power_on\0"
	"drm_framebuffer_lookup\0"
	"cmdq_pkt_finalize_loop\0"
	"cmdq_mbox_stop\0"
	"cmdq_util_enable_disp_va\0"
	"cmdq_pkt_read\0"
	"cmdq_pkt_assign_command\0"
	"cmdq_pkt_cond_jump_abs\0"
	"cmdq_pkt_get_va_by_offset\0"
	"cmdq_pkt_get_pa_by_offset\0"
	"cmdq_reg_shift_addr\0"
	"cmdq_pkt_logic_command\0"
	"cmdq_pkt_write_reg_addr\0"
	"cmdq_util_disp_smc_cmd\0"
	"drm_mode_copy\0"
	"drm_crtc_vblank_on\0"
	"drm_panel_prepare\0"
	"drm_panel_enable\0"
	"drm_crtc_vblank_off\0"
	"mml_drm_ctx_idle\0"
	"mtk_set_mmmc_rg\0"
	"__const_udelay\0"
	"mml_drm_racing_config_sync\0"
	"cmdq_pkt_copy\0"
	"ktime_get_real_ts64\0"
	"cmdq_pkt_jump_addr\0"
	"cmdq_mbox_get_tpr\0"
	"ns_to_timespec64\0"
	"drm_crtc_handle_vblank\0"
	"cmdq_dev_get_event\0"
	"drm_mode_crtc_set_gamma_size\0"
	"wakeup_source_create\0"
	"wakeup_source_add\0"
	"mtk_sync_fence_create\0"
	"drm_format_info\0"
	"cmdq_set_outpin_event\0"
	"enable_irq\0"
	"disable_irq\0"
	"mml_drm_stop\0"
	"mml_drm_racing_stop_sync\0"
	"cmdq_pkt_read_addr\0"
	"hwccf_is_enabled\0"
	"__msecs_to_jiffies\0"
	"free_reserved_page\0"
	"cmdq_thread_dump_spr\0"
	"cmdq_thread_dump\0"
	"drm_mode_object_put\0"
	"cmdq_pkt_add_cmd_buffer\0"
	"slbc_power_off\0"
	"slbc_release\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"drm_writeback_signal_completion\0"
	"drm_crtc_send_vblank_event\0"
	"drm_crtc_vblank_put\0"
	"drm_crtc_init_with_planes\0"
	"drm_crtc_cleanup\0"
	"drm_atomic_helper_set_config\0"
	"drm_atomic_helper_page_flip\0"
	"__drm_atomic_helper_crtc_destroy_state\0"
	"__drm_atomic_helper_crtc_duplicate_state\0"
	"drm_crtc_vblank_get\0"
	"drm_calc_timestamping_constants\0"
	"drm_property_create_range\0"
	"drm_object_attach_property\0"
	"drm_property_create_blob\0"
	"cmdq_mbox_create\0"
	"cmdq_mbox_buf_alloc\0"
	"cmdq_register_device\0"
	"msleep\0"
	"mmdvfs_stop_record\0"
	"mmqos_stop_record\0"
	"mmqos_hrt_dump\0"
	"mmdvfs_debug_status_dump\0"
	"param_ops_int\0"
	"arch_timer_read_counter\0"
	"memstart_addr\0"
	"platform_irq_count\0"
	"devm_clk_get\0"
	"notify_vb_audio_control\0"
	"of_alias_get_id\0"
	"of_irq_get\0"
	"device_link_add\0"
	"of_property_count_elems_of_size\0"
	"mtk_iommu_register_fault_callback\0"
	"mtk_smi_larb_enable\0"
	"mtk_smi_larb_disable\0"
	"drm_gem_object_lookup\0"
	"drm_helper_mode_fill_fb_struct\0"
	"drm_framebuffer_init\0"
	"drm_framebuffer_cleanup\0"
	"drm_gem_handle_create\0"
	"drm_gem_object_free\0"
	"dma_unmap_sg_attrs\0"
	"sg_free_table\0"
	"vunmap\0"
	"drm_gem_object_release\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_put\0"
	"dma_heap_buffer_free\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_vmap_unlocked\0"
	"drm_prime_gem_destroy\0"
	"drm_gem_create_mmap_offset\0"
	"drm_gem_mmap_obj\0"
	"drm_gem_mmap\0"
	"dma_buf_get_gid\0"
	"slbc_invalidate\0"
	"slbc_gid_release\0"
	"slbc_gid_request\0"
	"slbc_validate\0"
	"dma_get_sgtable_attrs\0"
	"drm_gem_prime_import_dev\0"
	"__warn_printk\0"
	"drm_gem_private_object_init\0"
	"drm_gem_handle_delete\0"
	"drm_gem_object_init\0"
	"vmap\0"
	"dma_map_sg_attrs\0"
	"sg_alloc_table_from_pages_segment\0"
	"dma_alloc_attrs\0"
	"dma_free_attrs\0"
	"dma_mmap_attrs\0"
	"drm_gem_vm_close\0"
	"__vma_start_write\0"
	"rb_insert_color\0"
	"drm_gem_dma_vm_ops\0"
	"drm_universal_plane_init\0"
	"drm_plane_create_alpha_property\0"
	"drm_plane_create_blend_mode_property\0"
	"drm_atomic_helper_update_plane\0"
	"drm_atomic_helper_disable_plane\0"
	"drm_plane_cleanup\0"
	"__drm_atomic_helper_plane_destroy_state\0"
	"__drm_atomic_helper_plane_duplicate_state\0"
	"drm_atomic_helper_check_plane_state\0"
	"mod_timer\0"
	"mtk_dramc_get_data_rate\0"
	"mtk_emiisu_record_off\0"
	"__drm_atomic_helper_connector_destroy_state\0"
	"__drm_atomic_helper_connector_reset\0"
	"__drm_atomic_helper_connector_duplicate_state\0"
	"find_panel_ext\0"
	"clk_set_rate\0"
	"cmdq_pkt_poll_timeout\0"
	"phy_power_on\0"
	"phy_power_off\0"
	"cmdq_pkt_poll\0"
	"mipi_dsi_host_register\0"
	"of_match_device\0"
	"of_graph_get_next_endpoint\0"
	"of_graph_get_remote_port_parent\0"
	"of_drm_find_bridge\0"
	"of_drm_find_panel\0"
	"devm_phy_get\0"
	"init_timer_key\0"
	"mipi_dsi_host_unregister\0"
	"drm_helper_hpd_irq_event\0"
	"of_graph_get_remote_node\0"
	"platform_device_put\0"
	"drm_object_property_set_value\0"
	"drm_panel_disable\0"
	"drm_panel_unprepare\0"
	"drm_display_mode_to_videomode\0"
	"strncpy\0"
	"irq_of_parse_and_map\0"
	"request_threaded_irq\0"
	"irq_modify_status\0"
	"drm_encoder_init\0"
	"drm_encoder_cleanup\0"
	"mtk_disp_notifier_call_chain\0"
	"mtk_disp_sub_notifier_call_chain\0"
	"mtk_disp_3rd_notifier_call_chain\0"
	"drm_bridge_attach\0"
	"drm_connector_init\0"
	"drm_connector_attach_encoder\0"
	"drm_helper_probe_single_connector_modes\0"
	"drm_connector_cleanup\0"
	"drm_atomic_helper_connector_destroy_state\0"
	"drm_panel_get_modes\0"
	"timer_delete\0"
	"mipi_dsi_dcs_write_buffer\0"
	"mipi_dsi_dcs_read\0"
	"param_ops_uint\0"
	"jiffies\0"
	"__clk_get_name\0"
	"devm_clk_register\0"
	"devm_phy_create\0"
	"__devm_of_phy_provider_register\0"
	"of_phy_simple_xlate\0"
	"dev_pm_genpd_add_notifier\0"
	"of_clk_add_provider\0"
	"of_clk_src_simple_get\0"
	"of_clk_del_provider\0"
	"drm_framebuffer_remove\0"
	"drm_writeback_connector_init\0"
	"drm_writeback_queue_job\0"
	"drm_atomic_helper_connector_reset\0"
	"drm_atomic_helper_connector_duplicate_state\0"
	"drm_add_modes_noedid\0"
	"mtk_sync_timeline_inc\0"
	"mtk_sync_share_fence_create\0"
	"sync_file_get_fence\0"
	"mtk_sync_timeline_create\0"
	"dma_fence_release\0"
	"vscnprintf\0"
	"mt_get_fmeter_freq\0"
	"debugfs_create_file\0"
	"debugfs_create_dir\0"
	"proc_create\0"
	"proc_mkdir\0"
	"debugfs_remove\0"
	"proc_remove\0"
	"simple_read_from_buffer\0"
	"strsep\0"
	"kstrtouint\0"
	"wait_for_completion_interruptible_timeout\0"
	"get_random_u8\0"
	"__udelay\0"
	"complete\0"
	"generic_file_llseek\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"mrdump_mini_add_extra_file\0"
	"kstrtoull_from_user\0"
	"kstrtouint_from_user\0"
	"__init_swait_queue_head\0"
	"kimage_voffset\0"
	"mtk_mmqos_get_avail_hrt_bw\0"
	"mtk_mmqos_get_cam_hrt\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"mml_drm_query_multi_layer\0"
	"__sw_hweight32\0"
	"mml_drm_query_cap\0"
	"preempt_schedule_notrace\0"
	"__cpu_online_mask\0"
	"mmprofile_register_event\0"
	"mmprofile_enable\0"
	"mmprofile_enable_event_recursive\0"
	"mmprofile_start\0"
	"dma_buf_vunmap_unlocked\0"
	"mmprofile_log_meta_bitmap\0"
	"mmprofile_log_meta_yuv_bitmap\0"
	"mmprofile_log_meta\0"
	"vsnprintf\0"
	"__trace_puts\0"
	"mdp_set_resource_callback\0"
	"mutex_trylock\0"
	"cpu_latency_qos_add_request\0"
	"cmdq_pkt_write_value_addr\0"
	"cpu_latency_qos_update_request\0"
	"freq_qos_update_request\0"
	"cpufreq_get_policy\0"
	"cpufreq_cpu_get\0"
	"freq_qos_add_request\0"
	"cpufreq_cpu_put\0"
	"freq_qos_remove_request\0"
	"msleep_interruptible\0"
	"up\0"
	"vsprintf\0"
	"down_interruptible\0"
	"kstrdup\0"
	"font_vga_8x16\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"devm_pinctrl_get\0"
	"kthread_stop\0"
	"mtk_icc_set_bw\0"
	"mtk_mmqos_register_bw_throttle_notifier\0"
	"dev_pm_opp_of_add_table\0"
	"devm_regulator_get_optional\0"
	"mmdvfs_set_lp_mode\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"regulator_set_voltage\0"
	"dev_pm_opp_get_opp_count\0"
	"of_property_read_variable_u8_array\0"
	"param_array_ops\0"
	"__usecs_to_jiffies\0"
	"devm_ioremap\0"
	"__flush_workqueue\0"
	"of_device_is_compatible\0"
	"fget\0"
	"get_unused_fd_flags\0"
	"fd_install\0"
	"iounmap\0"
	"wait_for_completion\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"cmdq_set_event\0"
	"devm_gpiod_get\0"
	"gpiod_set_value\0"
	"devm_gpiod_put\0"
	"of_get_named_gpio\0"
	"irq_set_irq_wake\0"
	"devm_pinctrl_put\0"
	"gpiod_get_raw_value\0"
	"gpio_to_desc\0"
	"mml_dbgtp_register\0"
	"clk_set_parent\0"
	"clk_get_rate\0"
	"param_ops_hexint\0"
	"device_create\0"
	"device_create_file\0"
	"device_destroy\0"
	"device_remove_file\0"
	"kobject_uevent_env\0"
	"cancel_work_sync\0"
	"drm_dp_dpcd_write\0"
	"drm_dp_dpcd_read\0"
	"cancel_delayed_work_sync\0"
	"drm_connector_update_edid_property\0"
	"drm_dp_link_train_clock_recovery_delay\0"
	"drm_dp_clock_recovery_ok\0"
	"drm_dp_link_train_channel_eq_delay\0"
	"drm_dp_channel_eq_ok\0"
	"drm_edid_to_sad\0"
	"print_hex_dump\0"
	"drm_edid_duplicate\0"
	"drm_get_edid\0"
	"drm_display_mode_from_cea_vic\0"
	"extcon_set_state_sync\0"
	"class_create\0"
	"regmap_update_bits_base\0"
	"devm_extcon_dev_allocate\0"
	"devm_extcon_dev_register\0"
	"dev_pm_domain_attach_by_name\0"
	"dev_get_regmap\0"
	"drm_dp_aux_init\0"
	"kasprintf\0"
	"drm_dp_aux_register\0"
	"drm_cvt_mode\0"
	"drm_mode_duplicate\0"
	"drm_mode_set_name\0"
	"drm_mode_probed_add\0"
	"drm_add_edid_modes\0"
	"destroy_workqueue\0"
	"__arm_smccc_smc\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"kobject_set_name\0"
	"cdev_add\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"device_register\0"
	"device_unregister\0"
	"remove_proc_entry\0"
	"class_destroy\0"
	"sysfs_notify\0"
	"__kthread_init_worker\0"
	"kthread_worker_fn\0"
	"kthread_flush_worker\0"
	"noop_llseek\0"
	"mutex_lock_interruptible\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"kthread_queue_work\0"
	"strim\0"
	"kstrtoint\0"
	"skip_spaces\0"
	"queue_delayed_work_on\0"
	"param_ops_string\0"
	"ktime_get_real_seconds\0"
	"time64_to_tm\0"
	"debugfs_create_bool\0"
	"sysfs_create_groups\0"
	"sysfs_remove_groups\0"
	"kstrtoull\0"
	"single_open\0"
	"seq_printf\0"
	"proc_create_data\0"
	"irq_to_desc\0"
	"disable_irq_nosync\0"
	"gpio_request\0"
	"gpiod_to_irq\0"
	"gpiod_direction_input\0"
	"thermal_cooling_device_register\0"
	"thermal_cooling_device_unregister\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"device_create_with_groups\0"
	"kstrtou8\0"
	"sched_set_fifo\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi,mmprofile,mtk-mml,mtk-cmdq-drv-ext,vcp_status,mtk-icc-core,mtk-smi,mtk-mminfra-debug,mtk_dramc,leds-mtk,aee_aed,mtk-smi-dbg,mmqos-common,mtk_slbc,mtk-mm-monitor-controller,mtk_sync,hwccf,mtk-mmdvfs-debug,mtk-afe-external,iommu_debug,system_heap,drm_dma_helper,emi,mtk_panel_ext,mtk_disp_notify,clk-common,mrdump,cmdq_helper_inf,mtk-mmdvfs,drm_display_helper");

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-display");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-displayC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-dispC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-mmsys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-mmsysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ccorr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ccorrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-gamma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-gammaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dither");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ditherC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-chist");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-chistC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-ovl");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-ovlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mdp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mdp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mdp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mdp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mdp-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mdp-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mdp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mdp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-mdp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-mdp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mdp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mdp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mdp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mdp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-mdp-rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-mdp-rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-wdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-wdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dsi-lpc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dsi-lpcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-dsc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-dscC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-cm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-cmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-cm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-cmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-cm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-cmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-cm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-cmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-cm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-cmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-spr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-sprC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-postalign");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-postalignC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-postalign");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-postalignC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-postalign");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-postalignC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-postalign");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-postalignC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-postalign");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-postalignC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-oddmr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-oddmrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-oddmr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-oddmrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-oddmr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-oddmrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-oddmr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-oddmrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-oddmr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-oddmrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dmdp-aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dmdp-aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-y2r");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-y2rC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dlo-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dlo-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dlo-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dlo-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dlo-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dlo-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-0-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-0-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-1-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-1-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-0-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-0-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-1-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-1-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-2-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-2-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-b-dlo-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-b-dlo-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dli-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-dli-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dli-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-dli-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dli-async3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-dli-async3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-0-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-0-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-1-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-ovl-1-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-0-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-0-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-1-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-1-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-2-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-ovl-2-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-b-dli-async");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-b-dli-asyncC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-relay");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-relayC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-inlinerotate");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-inlinerotateC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mmlsys-bypass");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mmlsys-bypassC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mmlsys-bypass");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mmlsys-bypassC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp1-r2y");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-disp1-r2yC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-exdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-exdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-exdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-exdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-blender");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-blenderC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-blender");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-blenderC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-outproc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-ovl-outprocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-outproc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-ovl-outprocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-vdisp-ao");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-vdisp-aoC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-vdisp-ao");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-vdisp-aoC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-bwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-bwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-bwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-bwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dbi-count");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-disp-dbi-countC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dp-intf");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dp-intfC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dvo");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dvoC*");

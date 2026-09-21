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

KSYMTAB_FUNC(rt_regmap_cache_sync, "", "");
KSYMTAB_FUNC(rt_regmap_cache_write_back, "", "");
KSYMTAB_FUNC(rt_is_reg_volatile, "", "");
KSYMTAB_FUNC(rt_get_regsize, "", "");
KSYMTAB_FUNC(rt_regmap_reg_write, "", "");
KSYMTAB_FUNC(rt_asyn_regmap_reg_write, "", "");
KSYMTAB_FUNC(rt_regmap_reg_read, "", "");
KSYMTAB_FUNC(rt_regmap_update_bits, "", "");
KSYMTAB_FUNC(rt_regmap_block_write, "", "");
KSYMTAB_FUNC(rt_asyn_regmap_block_write, "", "");
KSYMTAB_FUNC(rt_regmap_block_read, "", "");
KSYMTAB_FUNC(rt_cache_getlasterror, "", "");
KSYMTAB_FUNC(rt_cache_clrlasterror, "", "");
KSYMTAB_FUNC(rt_regmap_cache_reload, "", "");
KSYMTAB_FUNC(rt_regmap_add_debugfs, "", "");
KSYMTAB_FUNC(rt_regmap_device_register_ex, "", "");
KSYMTAB_FUNC(rt_regmap_device_unregister, "", "");
KSYMTAB_FUNC(tcpci_check_vbus_valid_from_ic, "", "");
KSYMTAB_FUNC(tcpci_set_auto_dischg_discnt, "", "");
KSYMTAB_FUNC(tcpci_get_vbus_voltage, "", "");
KSYMTAB_FUNC(tcpci_check_vsafe0v, "", "");
KSYMTAB_FUNC(tcpci_alert_status_clear, "", "");
KSYMTAB_FUNC(tcpci_fault_status_clear, "", "");
KSYMTAB_FUNC(tcpci_set_alert_mask, "", "");
KSYMTAB_FUNC(tcpci_get_alert_mask, "", "");
KSYMTAB_FUNC(tcpci_get_alert_status_and_mask, "", "");
KSYMTAB_FUNC(tcpci_get_fault_status, "", "");
KSYMTAB_FUNC(tcpci_get_power_status, "", "");
KSYMTAB_FUNC(tcpci_init, "", "");
KSYMTAB_FUNC(tcpci_init_alert_mask, "", "");
KSYMTAB_FUNC(tcpci_get_cc, "", "");
KSYMTAB_FUNC(tcpci_is_plugged_in, "", "");
KSYMTAB_FUNC(tcpci_set_cc, "", "");
KSYMTAB_FUNC(tcpci_set_polarity, "", "");
KSYMTAB_FUNC(tcpci_set_vconn, "", "");
KSYMTAB_FUNC(tcpci_set_low_power_mode, "", "");
KSYMTAB_FUNC(tcpci_alert_vendor_defined_handler, "", "");
KSYMTAB_FUNC(tcpci_set_water_protection, "", "");
KSYMTAB_FUNC(tcpci_notify_wd_status, "", "");
KSYMTAB_FUNC(tcpci_notify_fod_status, "", "");
KSYMTAB_FUNC(tcpci_notify_cable_type, "", "");
KSYMTAB_FUNC(tcpci_notify_typec_otp, "", "");
KSYMTAB_FUNC(tcpci_set_cc_hidet, "", "");
KSYMTAB_FUNC(tcpci_notify_wd0_state, "", "");
KSYMTAB_FUNC(tcpci_set_vbus_short_cc, "", "");
KSYMTAB_FUNC(tcpci_notify_vbus_short_cc_status, "", "");
KSYMTAB_FUNC(tcpci_set_msg_header, "", "");
KSYMTAB_FUNC(tcpci_set_rx_enable, "", "");
KSYMTAB_FUNC(tcpci_protocol_reset, "", "");
KSYMTAB_FUNC(tcpci_get_message, "", "");
KSYMTAB_FUNC(tcpci_transmit, "", "");
KSYMTAB_FUNC(tcpci_retransmit, "", "");
KSYMTAB_FUNC(tcpci_set_bist_test_mode, "", "");
KSYMTAB_FUNC(tcpci_notify_typec_state, "", "");
KSYMTAB_FUNC(tcpci_notify_role_swap, "", "");
KSYMTAB_FUNC(tcpci_notify_pd_mode, "", "");
KSYMTAB_FUNC(tcpci_notify_pd_state, "", "");
KSYMTAB_FUNC(tcpci_source_vbus, "", "");
KSYMTAB_FUNC(tcpci_sink_vbus, "", "");
KSYMTAB_FUNC(tcpci_disable_vbus_control, "", "");
KSYMTAB_FUNC(tcpci_notify_attachwait_state, "", "");
KSYMTAB_FUNC(tcpci_notify_ps_change, "", "");
KSYMTAB_FUNC(tcpci_notify_cc_hi, "", "");
KSYMTAB_FUNC(tcpci_notify_hard_reset_state, "", "");
KSYMTAB_FUNC(tcpci_notify_wait_new_cap, "", "");
KSYMTAB_FUNC(tcpci_enter_mode, "", "");
KSYMTAB_FUNC(tcpci_exit_mode, "", "");
KSYMTAB_FUNC(tcpci_report_hpd_state, "", "");
KSYMTAB_FUNC(tcpci_dp_status_update, "", "");
KSYMTAB_FUNC(tcpci_dp_configure, "", "");
KSYMTAB_FUNC(tcpci_dp_attention, "", "");
KSYMTAB_FUNC(tcpci_dp_notify_status_update_done, "", "");
KSYMTAB_FUNC(tcpci_dp_notify_config_start, "", "");
KSYMTAB_FUNC(tcpci_dp_notify_config_done, "", "");
KSYMTAB_FUNC(tcpci_notify_cvdm, "", "");
KSYMTAB_FUNC(tcpci_notify_alert, "", "");
KSYMTAB_FUNC(tcpci_notify_status, "", "");
KSYMTAB_FUNC(tcpci_notify_request_bat_info, "", "");
KSYMTAB_FUNC(tcpci_alert_wakeup, "", "");
KSYMTAB_FUNC(tcpci_alert, "", "");
KSYMTAB_DATA(tcpc_class, "_gpl", "");
KSYMTAB_FUNC(tcpc_dev_get_by_name, "", "");
KSYMTAB_FUNC(tcpc_device_register, "", "");
KSYMTAB_FUNC(tcpc_device_irq_enable, "", "");
KSYMTAB_FUNC(tcpc_class_complete_work, "", "");
KSYMTAB_FUNC(register_tcp_dev_notifier, "", "");
KSYMTAB_FUNC(unregister_tcp_dev_notifier, "", "");
KSYMTAB_FUNC(tcpc_device_unregister, "", "");
KSYMTAB_FUNC(tcpc_get_dev_data, "", "");
KSYMTAB_FUNC(tcpci_lock_typec, "", "");
KSYMTAB_FUNC(tcpci_unlock_typec, "", "");
KSYMTAB_FUNC(tcpc_typec_is_act_as_sink_role, "", "");
KSYMTAB_FUNC(tcpc_typec_error_recovery, "", "");
KSYMTAB_FUNC(tcpc_typec_handle_wd, "", "");
KSYMTAB_FUNC(tcpc_typec_handle_fod, "", "");
KSYMTAB_FUNC(tcpc_typec_handle_ctd, "", "");
KSYMTAB_FUNC(tcpc_typec_handle_otp, "", "");
KSYMTAB_FUNC(tcpm_check_pd_attached, "", "");
KSYMTAB_FUNC(tcpm_shutdown, "", "");
KSYMTAB_FUNC(tcpm_check_suspend_pending, "", "");
KSYMTAB_FUNC(tcpm_suspend, "", "");
KSYMTAB_FUNC(tcpm_resume, "", "");
KSYMTAB_FUNC(tcpm_inquire_remote_cc, "", "");
KSYMTAB_FUNC(tcpm_inquire_typec_remote_rp_curr, "", "");
KSYMTAB_FUNC(tcpm_inquire_vbus_level, "", "");
KSYMTAB_FUNC(tcpm_inquire_cc_high, "", "");
KSYMTAB_FUNC(tcpm_inquire_cc_polarity, "", "");
KSYMTAB_FUNC(tcpm_inquire_typec_attach_state, "", "");
KSYMTAB_FUNC(tcpm_inquire_typec_role, "", "");
KSYMTAB_FUNC(tcpm_inquire_typec_role_def, "", "");
KSYMTAB_FUNC(tcpm_inquire_floating_ground, "", "");
KSYMTAB_FUNC(tcpm_inquire_typec_local_rp, "", "");
KSYMTAB_FUNC(tcpm_inquire_sink_vbus, "", "");
KSYMTAB_FUNC(tcpm_typec_set_usb_sink_curr, "", "");
KSYMTAB_FUNC(tcpm_typec_set_rp_level, "", "");
KSYMTAB_FUNC(tcpm_typec_role_swap, "", "");
KSYMTAB_FUNC(tcpm_typec_change_role, "", "");
KSYMTAB_FUNC(tcpm_typec_change_role_postpone, "", "");
KSYMTAB_FUNC(tcpm_typec_error_recovery, "", "");
KSYMTAB_FUNC(tcpm_typec_disable_function, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_connected, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_prev_connected, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_data_role, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_power_role, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_vconn_role, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_pe_ready, "", "");
KSYMTAB_FUNC(tcpm_inquire_cable_current, "", "");
KSYMTAB_FUNC(tcpm_inquire_dpm_flags, "", "");
KSYMTAB_FUNC(tcpm_inquire_dpm_caps, "", "");
KSYMTAB_FUNC(tcpm_set_dpm_caps, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_contract, "", "");
KSYMTAB_FUNC(tcpm_inquire_cable_inform, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_partner_inform, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_partner_svids, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_partner_modes, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_source_cap, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_sink_cap, "", "");
KSYMTAB_FUNC(tcpm_extract_power_cap_val, "", "");
KSYMTAB_FUNC(tcpm_get_remote_power_cap, "", "");
KSYMTAB_FUNC(tcpm_inquire_select_source_cap, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_local_source_cap, "", "");
KSYMTAB_FUNC(tcpm_set_pd_local_source_cap, "", "");
KSYMTAB_FUNC(tcpm_inquire_usb_comm, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_power_swap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_data_swap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_vconn_swap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_goto_min, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_soft_reset, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_source_cap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_sink_cap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_source_cap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_request, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_request_ex, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_bist_cm2, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_source_cap_ext, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_sink_cap_ext, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_fast_swap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_status, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_pps_status_raw, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_pps_status, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_country_code, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_country_info, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_bat_cap, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_bat_status, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_mfrs_info, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_get_revision, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_alert, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_hard_reset, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_error_recovery, "", "");
KSYMTAB_FUNC(tcpm_dpm_pd_cable_soft_reset, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_discover_cable_id, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_discover_id, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_discover_svids, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_discover_modes, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_enter_mode, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_exit_mode, "", "");
KSYMTAB_FUNC(tcpm_dpm_vdm_attention, "", "");
KSYMTAB_FUNC(tcpm_inquire_dp_ufp_u_state, "", "");
KSYMTAB_FUNC(tcpm_dpm_dp_attention, "", "");
KSYMTAB_FUNC(tcpm_inquire_dp_dfp_u_state, "", "");
KSYMTAB_FUNC(tcpm_dpm_dp_status_update, "", "");
KSYMTAB_FUNC(tcpm_dpm_dp_config, "", "");
KSYMTAB_FUNC(tcpm_dpm_send_custom_vdm, "", "");
KSYMTAB_FUNC(tcpm_notify_vbus_stable, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_charging_policy, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_charging_policy_default, "", "");
KSYMTAB_FUNC(tcpm_reset_pd_charging_policy, "", "");
KSYMTAB_FUNC(tcpm_set_pd_charging_policy_default, "", "");
KSYMTAB_FUNC(tcpm_set_pd_charging_policy, "", "");
KSYMTAB_FUNC(tcpm_set_direct_charge_en, "", "");
KSYMTAB_FUNC(tcpm_inquire_during_direct_charge, "", "");
KSYMTAB_FUNC(tcpm_set_exit_attached_snk_via_cc, "", "");
KSYMTAB_FUNC(tcpm_inquire_exit_attached_snk_via_cc, "", "");
KSYMTAB_FUNC(tcpm_dpm_set_vconn_supply_mode, "", "");
KSYMTAB_FUNC(tcpm_set_apdo_charging_policy, "", "");
KSYMTAB_FUNC(tcpm_inquire_pd_source_apdo, "", "");
KSYMTAB_FUNC(tcpm_inquire_during_pps_charge, "", "");
KSYMTAB_FUNC(tcpm_update_bat_status_wh, "", "");
KSYMTAB_FUNC(tcpm_update_bat_status_soc, "", "");
KSYMTAB_FUNC(tcpm_update_bat_last_full, "", "");
KSYMTAB_FUNC(tcpm_update_pd_status_temp, "", "");
KSYMTAB_FUNC(tcpm_update_pd_status_input, "", "");
KSYMTAB_FUNC(tcpm_update_pd_status_bat_input, "", "");
KSYMTAB_FUNC(tcpm_update_pd_status_event, "", "");
KSYMTAB_FUNC(tcpm_dpm_bk_event_cb, "", "");

SYMBOL_CRC(rt_regmap_cache_sync, 0x46dbb47f, "");
SYMBOL_CRC(rt_regmap_cache_write_back, 0x118a17cb, "");
SYMBOL_CRC(rt_is_reg_volatile, 0xa594bdbd, "");
SYMBOL_CRC(rt_get_regsize, 0xc3a2fd54, "");
SYMBOL_CRC(rt_regmap_reg_write, 0xcf29e746, "");
SYMBOL_CRC(rt_asyn_regmap_reg_write, 0xbe9b2de7, "");
SYMBOL_CRC(rt_regmap_reg_read, 0x74712284, "");
SYMBOL_CRC(rt_regmap_update_bits, 0xc337fa78, "");
SYMBOL_CRC(rt_regmap_block_write, 0x2d523528, "");
SYMBOL_CRC(rt_asyn_regmap_block_write, 0xcda46cf1, "");
SYMBOL_CRC(rt_regmap_block_read, 0x48fa9008, "");
SYMBOL_CRC(rt_cache_getlasterror, 0x74b3bd52, "");
SYMBOL_CRC(rt_cache_clrlasterror, 0xa58f9f3a, "");
SYMBOL_CRC(rt_regmap_cache_reload, 0xd63b75b4, "");
SYMBOL_CRC(rt_regmap_add_debugfs, 0x3bac6fdb, "");
SYMBOL_CRC(rt_regmap_device_register_ex, 0xc50a1efd, "");
SYMBOL_CRC(rt_regmap_device_unregister, 0x89435810, "");
SYMBOL_CRC(tcpci_check_vbus_valid_from_ic, 0xb13b52dd, "");
SYMBOL_CRC(tcpci_set_auto_dischg_discnt, 0x44d3cd6f, "");
SYMBOL_CRC(tcpci_get_vbus_voltage, 0xb1e95825, "");
SYMBOL_CRC(tcpci_check_vsafe0v, 0x72760a01, "");
SYMBOL_CRC(tcpci_alert_status_clear, 0xc804a2e0, "");
SYMBOL_CRC(tcpci_fault_status_clear, 0xc4ded01f, "");
SYMBOL_CRC(tcpci_set_alert_mask, 0x2b83a111, "");
SYMBOL_CRC(tcpci_get_alert_mask, 0xd5c2815e, "");
SYMBOL_CRC(tcpci_get_alert_status_and_mask, 0x9f6bd855, "");
SYMBOL_CRC(tcpci_get_fault_status, 0x01129b69, "");
SYMBOL_CRC(tcpci_get_power_status, 0xfbc2d896, "");
SYMBOL_CRC(tcpci_init, 0xba1b06f3, "");
SYMBOL_CRC(tcpci_init_alert_mask, 0xfa3436ec, "");
SYMBOL_CRC(tcpci_get_cc, 0x13ea344d, "");
SYMBOL_CRC(tcpci_is_plugged_in, 0xe74702f5, "");
SYMBOL_CRC(tcpci_set_cc, 0xb4f89b44, "");
SYMBOL_CRC(tcpci_set_polarity, 0xcb41922a, "");
SYMBOL_CRC(tcpci_set_vconn, 0x4b4cfb10, "");
SYMBOL_CRC(tcpci_set_low_power_mode, 0x2d99825b, "");
SYMBOL_CRC(tcpci_alert_vendor_defined_handler, 0x8753eec8, "");
SYMBOL_CRC(tcpci_set_water_protection, 0xc3c71377, "");
SYMBOL_CRC(tcpci_notify_wd_status, 0xf5a4e568, "");
SYMBOL_CRC(tcpci_notify_fod_status, 0x4a61d06f, "");
SYMBOL_CRC(tcpci_notify_cable_type, 0xae34c62d, "");
SYMBOL_CRC(tcpci_notify_typec_otp, 0xc5d81631, "");
SYMBOL_CRC(tcpci_set_cc_hidet, 0xafb6df45, "");
SYMBOL_CRC(tcpci_notify_wd0_state, 0xb3ca8045, "");
SYMBOL_CRC(tcpci_set_vbus_short_cc, 0x547e8d02, "");
SYMBOL_CRC(tcpci_notify_vbus_short_cc_status, 0x00bb8ef4, "");
SYMBOL_CRC(tcpci_set_msg_header, 0x580624a8, "");
SYMBOL_CRC(tcpci_set_rx_enable, 0x78ee96e1, "");
SYMBOL_CRC(tcpci_protocol_reset, 0xe52a0835, "");
SYMBOL_CRC(tcpci_get_message, 0xdb21ac09, "");
SYMBOL_CRC(tcpci_transmit, 0xced72905, "");
SYMBOL_CRC(tcpci_retransmit, 0x45b2100f, "");
SYMBOL_CRC(tcpci_set_bist_test_mode, 0x3f1209b8, "");
SYMBOL_CRC(tcpci_notify_typec_state, 0x4f92a295, "");
SYMBOL_CRC(tcpci_notify_role_swap, 0xf97ee18a, "");
SYMBOL_CRC(tcpci_notify_pd_mode, 0x925569db, "");
SYMBOL_CRC(tcpci_notify_pd_state, 0xb5119837, "");
SYMBOL_CRC(tcpci_source_vbus, 0x0539bdcc, "");
SYMBOL_CRC(tcpci_sink_vbus, 0x1cc3a338, "");
SYMBOL_CRC(tcpci_disable_vbus_control, 0x93068417, "");
SYMBOL_CRC(tcpci_notify_attachwait_state, 0xebcec961, "");
SYMBOL_CRC(tcpci_notify_ps_change, 0xce736891, "");
SYMBOL_CRC(tcpci_notify_cc_hi, 0x6a1e5707, "");
SYMBOL_CRC(tcpci_notify_hard_reset_state, 0xd5cbd101, "");
SYMBOL_CRC(tcpci_notify_wait_new_cap, 0xdf123d82, "");
SYMBOL_CRC(tcpci_enter_mode, 0xfb289e14, "");
SYMBOL_CRC(tcpci_exit_mode, 0x72ff3009, "");
SYMBOL_CRC(tcpci_report_hpd_state, 0xa74bb258, "");
SYMBOL_CRC(tcpci_dp_status_update, 0x7a1ead86, "");
SYMBOL_CRC(tcpci_dp_configure, 0x61ad7ec8, "");
SYMBOL_CRC(tcpci_dp_attention, 0x632c780b, "");
SYMBOL_CRC(tcpci_dp_notify_status_update_done, 0x141d042f, "");
SYMBOL_CRC(tcpci_dp_notify_config_start, 0x74d007b0, "");
SYMBOL_CRC(tcpci_dp_notify_config_done, 0xd153b260, "");
SYMBOL_CRC(tcpci_notify_cvdm, 0xf61c1bca, "");
SYMBOL_CRC(tcpci_notify_alert, 0x1b69d97c, "");
SYMBOL_CRC(tcpci_notify_status, 0xe2c0fe64, "");
SYMBOL_CRC(tcpci_notify_request_bat_info, 0x67c19fa9, "");
SYMBOL_CRC(tcpci_alert_wakeup, 0xb8163483, "");
SYMBOL_CRC(tcpci_alert, 0x75043fe7, "");
SYMBOL_CRC(tcpc_class, 0x99593597, "_gpl");
SYMBOL_CRC(tcpc_dev_get_by_name, 0xd9f704be, "");
SYMBOL_CRC(tcpc_device_register, 0xb992fb1f, "");
SYMBOL_CRC(tcpc_device_irq_enable, 0x687a3168, "");
SYMBOL_CRC(tcpc_class_complete_work, 0xc4fca1be, "");
SYMBOL_CRC(register_tcp_dev_notifier, 0x6f21f22a, "");
SYMBOL_CRC(unregister_tcp_dev_notifier, 0x214a5c13, "");
SYMBOL_CRC(tcpc_device_unregister, 0xf7627274, "");
SYMBOL_CRC(tcpc_get_dev_data, 0xf804f4a9, "");
SYMBOL_CRC(tcpci_lock_typec, 0x1b85ab8d, "");
SYMBOL_CRC(tcpci_unlock_typec, 0xcde0d0de, "");
SYMBOL_CRC(tcpc_typec_is_act_as_sink_role, 0xebe75980, "");
SYMBOL_CRC(tcpc_typec_error_recovery, 0x9bf4819c, "");
SYMBOL_CRC(tcpc_typec_handle_wd, 0xd918cc6c, "");
SYMBOL_CRC(tcpc_typec_handle_fod, 0x966dae61, "");
SYMBOL_CRC(tcpc_typec_handle_ctd, 0x9360f532, "");
SYMBOL_CRC(tcpc_typec_handle_otp, 0x6a330a28, "");
SYMBOL_CRC(tcpm_check_pd_attached, 0x3e0d7c9f, "");
SYMBOL_CRC(tcpm_shutdown, 0xc73d1755, "");
SYMBOL_CRC(tcpm_check_suspend_pending, 0x50069062, "");
SYMBOL_CRC(tcpm_suspend, 0x1bc4e328, "");
SYMBOL_CRC(tcpm_resume, 0xff5ecec8, "");
SYMBOL_CRC(tcpm_inquire_remote_cc, 0xb2ae52e8, "");
SYMBOL_CRC(tcpm_inquire_typec_remote_rp_curr, 0x24989f09, "");
SYMBOL_CRC(tcpm_inquire_vbus_level, 0x050b1e69, "");
SYMBOL_CRC(tcpm_inquire_cc_high, 0xa573608e, "");
SYMBOL_CRC(tcpm_inquire_cc_polarity, 0x029c9652, "");
SYMBOL_CRC(tcpm_inquire_typec_attach_state, 0x9dfe9f99, "");
SYMBOL_CRC(tcpm_inquire_typec_role, 0x8355bfe7, "");
SYMBOL_CRC(tcpm_inquire_typec_role_def, 0x384f7713, "");
SYMBOL_CRC(tcpm_inquire_floating_ground, 0xf042b0f7, "");
SYMBOL_CRC(tcpm_inquire_typec_local_rp, 0x6532657f, "");
SYMBOL_CRC(tcpm_inquire_sink_vbus, 0xd3254fd5, "");
SYMBOL_CRC(tcpm_typec_set_usb_sink_curr, 0xcc7bd40b, "");
SYMBOL_CRC(tcpm_typec_set_rp_level, 0x3ac1fba6, "");
SYMBOL_CRC(tcpm_typec_role_swap, 0xe4f398c7, "");
SYMBOL_CRC(tcpm_typec_change_role, 0x2a7a1d98, "");
SYMBOL_CRC(tcpm_typec_change_role_postpone, 0xcbad2e82, "");
SYMBOL_CRC(tcpm_typec_error_recovery, 0xe01042fb, "");
SYMBOL_CRC(tcpm_typec_disable_function, 0x772591dd, "");
SYMBOL_CRC(tcpm_inquire_pd_connected, 0x003b60b8, "");
SYMBOL_CRC(tcpm_inquire_pd_prev_connected, 0x5a6d8127, "");
SYMBOL_CRC(tcpm_inquire_pd_data_role, 0xdbf8e8d6, "");
SYMBOL_CRC(tcpm_inquire_pd_power_role, 0xb030a2fc, "");
SYMBOL_CRC(tcpm_inquire_pd_vconn_role, 0x294f052e, "");
SYMBOL_CRC(tcpm_inquire_pd_pe_ready, 0xb0987ef8, "");
SYMBOL_CRC(tcpm_inquire_cable_current, 0x6b43e3bc, "");
SYMBOL_CRC(tcpm_inquire_dpm_flags, 0x80f0b1db, "");
SYMBOL_CRC(tcpm_inquire_dpm_caps, 0x8fa07547, "");
SYMBOL_CRC(tcpm_set_dpm_caps, 0x15b84555, "");
SYMBOL_CRC(tcpm_inquire_pd_contract, 0x8dedf30f, "");
SYMBOL_CRC(tcpm_inquire_cable_inform, 0xfa01a280, "");
SYMBOL_CRC(tcpm_inquire_pd_partner_inform, 0x8a168b14, "");
SYMBOL_CRC(tcpm_inquire_pd_partner_svids, 0x42a7f3ca, "");
SYMBOL_CRC(tcpm_inquire_pd_partner_modes, 0xf4b92670, "");
SYMBOL_CRC(tcpm_inquire_pd_source_cap, 0x84ea30ed, "");
SYMBOL_CRC(tcpm_inquire_pd_sink_cap, 0x3376e1ca, "");
SYMBOL_CRC(tcpm_extract_power_cap_val, 0xa4ed0801, "");
SYMBOL_CRC(tcpm_get_remote_power_cap, 0x9988873b, "");
SYMBOL_CRC(tcpm_inquire_select_source_cap, 0xe20c0ac2, "");
SYMBOL_CRC(tcpm_inquire_pd_local_source_cap, 0x04d40841, "");
SYMBOL_CRC(tcpm_set_pd_local_source_cap, 0x8a45f088, "");
SYMBOL_CRC(tcpm_inquire_usb_comm, 0x74892c30, "");
SYMBOL_CRC(tcpm_dpm_pd_power_swap, 0xd4430ef8, "");
SYMBOL_CRC(tcpm_dpm_pd_data_swap, 0xf6488755, "");
SYMBOL_CRC(tcpm_dpm_pd_vconn_swap, 0x7bd09a9c, "");
SYMBOL_CRC(tcpm_dpm_pd_goto_min, 0xaf669841, "");
SYMBOL_CRC(tcpm_dpm_pd_soft_reset, 0x761ab034, "");
SYMBOL_CRC(tcpm_dpm_pd_get_source_cap, 0x29a9644a, "");
SYMBOL_CRC(tcpm_dpm_pd_get_sink_cap, 0x5c341c85, "");
SYMBOL_CRC(tcpm_dpm_pd_source_cap, 0x3afaff81, "");
SYMBOL_CRC(tcpm_dpm_pd_request, 0x62747b96, "");
SYMBOL_CRC(tcpm_dpm_pd_request_ex, 0x219a21f8, "");
SYMBOL_CRC(tcpm_dpm_pd_bist_cm2, 0xfec8f7b2, "");
SYMBOL_CRC(tcpm_dpm_pd_get_source_cap_ext, 0x74fefda5, "");
SYMBOL_CRC(tcpm_dpm_pd_get_sink_cap_ext, 0x01d37d30, "");
SYMBOL_CRC(tcpm_dpm_pd_fast_swap, 0xdde937fd, "");
SYMBOL_CRC(tcpm_dpm_pd_get_status, 0x89cd464e, "");
SYMBOL_CRC(tcpm_dpm_pd_get_pps_status_raw, 0x1797adf6, "");
SYMBOL_CRC(tcpm_dpm_pd_get_pps_status, 0x83a1b867, "");
SYMBOL_CRC(tcpm_dpm_pd_get_country_code, 0x5f7fa9e2, "");
SYMBOL_CRC(tcpm_dpm_pd_get_country_info, 0xc9d50a5d, "");
SYMBOL_CRC(tcpm_dpm_pd_get_bat_cap, 0x48116818, "");
SYMBOL_CRC(tcpm_dpm_pd_get_bat_status, 0x5e493995, "");
SYMBOL_CRC(tcpm_dpm_pd_get_mfrs_info, 0xcd9106e7, "");
SYMBOL_CRC(tcpm_dpm_pd_get_revision, 0x25d30f6e, "");
SYMBOL_CRC(tcpm_dpm_pd_alert, 0xa7392f99, "");
SYMBOL_CRC(tcpm_dpm_pd_hard_reset, 0xe9bce28b, "");
SYMBOL_CRC(tcpm_dpm_pd_error_recovery, 0xa81bb157, "");
SYMBOL_CRC(tcpm_dpm_pd_cable_soft_reset, 0xedba6dbc, "");
SYMBOL_CRC(tcpm_dpm_vdm_discover_cable_id, 0xdc68289f, "");
SYMBOL_CRC(tcpm_dpm_vdm_discover_id, 0x55ff3499, "");
SYMBOL_CRC(tcpm_dpm_vdm_discover_svids, 0x9939f1c8, "");
SYMBOL_CRC(tcpm_dpm_vdm_discover_modes, 0x6657c24d, "");
SYMBOL_CRC(tcpm_dpm_vdm_enter_mode, 0x1aaa9847, "");
SYMBOL_CRC(tcpm_dpm_vdm_exit_mode, 0xa19dfc75, "");
SYMBOL_CRC(tcpm_dpm_vdm_attention, 0xebcce10e, "");
SYMBOL_CRC(tcpm_inquire_dp_ufp_u_state, 0x50995475, "");
SYMBOL_CRC(tcpm_dpm_dp_attention, 0xce0de38f, "");
SYMBOL_CRC(tcpm_inquire_dp_dfp_u_state, 0x39563a9e, "");
SYMBOL_CRC(tcpm_dpm_dp_status_update, 0x4a82428f, "");
SYMBOL_CRC(tcpm_dpm_dp_config, 0xf92c4642, "");
SYMBOL_CRC(tcpm_dpm_send_custom_vdm, 0xf356ebec, "");
SYMBOL_CRC(tcpm_notify_vbus_stable, 0xea4e891a, "");
SYMBOL_CRC(tcpm_inquire_pd_charging_policy, 0x07583d11, "");
SYMBOL_CRC(tcpm_inquire_pd_charging_policy_default, 0xdfcaaae2, "");
SYMBOL_CRC(tcpm_reset_pd_charging_policy, 0x118cef2f, "");
SYMBOL_CRC(tcpm_set_pd_charging_policy_default, 0xcc08b9d0, "");
SYMBOL_CRC(tcpm_set_pd_charging_policy, 0x4fc7acd2, "");
SYMBOL_CRC(tcpm_set_direct_charge_en, 0xe4fc2fa1, "");
SYMBOL_CRC(tcpm_inquire_during_direct_charge, 0xaa084612, "");
SYMBOL_CRC(tcpm_set_exit_attached_snk_via_cc, 0xe8b5c261, "");
SYMBOL_CRC(tcpm_inquire_exit_attached_snk_via_cc, 0x371d0c07, "");
SYMBOL_CRC(tcpm_dpm_set_vconn_supply_mode, 0x851efdc4, "");
SYMBOL_CRC(tcpm_set_apdo_charging_policy, 0x09cae2ef, "");
SYMBOL_CRC(tcpm_inquire_pd_source_apdo, 0x12735c4c, "");
SYMBOL_CRC(tcpm_inquire_during_pps_charge, 0x5795022f, "");
SYMBOL_CRC(tcpm_update_bat_status_wh, 0xa41a33a9, "");
SYMBOL_CRC(tcpm_update_bat_status_soc, 0x2fd98377, "");
SYMBOL_CRC(tcpm_update_bat_last_full, 0xaa69b0b6, "");
SYMBOL_CRC(tcpm_update_pd_status_temp, 0xd118421c, "");
SYMBOL_CRC(tcpm_update_pd_status_input, 0xe6c221e1, "");
SYMBOL_CRC(tcpm_update_pd_status_bat_input, 0x5eb64e47, "");
SYMBOL_CRC(tcpm_update_pd_status_event, 0x5c9ccd86, "");
SYMBOL_CRC(tcpm_dpm_bk_event_cb, 0x70e8ebc2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6626afca, "down" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x401167cc, "_dev_info" },
	{ 0xcf2a6966, "up" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x4d8597ff, "device_register" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0x037a0cba, "kfree" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x113858c3, "simple_write_to_buffer" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xd8f63b34, "__seq_puts" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x48fb7437, "pd_dbg_info" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0xadc6bfc7, "srcu_notifier_call_chain" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xf9874213, "class_find_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x852ccf53, "srcu_init_notifier_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa2670ef1, "device_set_of_node_from_dev" },
	{ 0x5038c782, "srcu_notifier_chain_register" },
	{ 0xa1a0fdd2, "srcu_notifier_chain_unregister" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe038ea74, "alarm_start_relative" },
	{ 0x942ac300, "alarm_try_to_cancel" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x2d26a116, "alarm_init" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x01000e51, "schedule" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x394b5321, "pm_relax" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6626afca,
	0xa4f72277,
	0x401167cc,
	0xcf2a6966,
	0x656e4a6e,
	0x4e870156,
	0x92997ed8,
	0xc6f46339,
	0xffeedf6a,
	0xba860d3c,
	0x4d8597ff,
	0x5cf4d4de,
	0xb7c7d237,
	0xcc1420a0,
	0x037a0cba,
	0x86a50ae0,
	0xe17134b6,
	0x75ca79b5,
	0xc8c7229e,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x113858c3,
	0x85df9b6c,
	0x5c3c7387,
	0x98cf60b3,
	0xa916b694,
	0x6a6e05bf,
	0x8b9c34da,
	0xc8f2ae9d,
	0xd8f63b34,
	0x3da016df,
	0x173e2075,
	0x9c81ceff,
	0x2d3385d3,
	0x0f05f001,
	0xefe8a82e,
	0x48fb7437,
	0xe2964344,
	0xd5977bfb,
	0xed55cabd,
	0xffae8e8b,
	0x598dfa08,
	0xadc6bfc7,
	0xc5b6f236,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x42ad47ad,
	0x7f24de73,
	0x15ba50a6,
	0xf5edea2e,
	0xcec49a87,
	0xe94986d6,
	0xf9874213,
	0x49cd25ed,
	0x852ccf53,
	0xa571f6b0,
	0xd9a5ea54,
	0xa2670ef1,
	0x5038c782,
	0xa1a0fdd2,
	0xc0744ae3,
	0xe2d5255a,
	0x7a4b1be7,
	0x1744f3e7,
	0xfe84e5f9,
	0xfdf04ae0,
	0x725b192d,
	0xb6e871b8,
	0x5a6368f5,
	0x6fe9dcd4,
	0x3b1b6444,
	0xb4ce05a5,
	0xb318cbab,
	0xef27af6b,
	0x34db050b,
	0xe038ea74,
	0x942ac300,
	0x203392c6,
	0xba0aee2e,
	0xce5bc4d0,
	0x2d26a116,
	0xb39378cc,
	0xd35cce70,
	0xb3f7646e,
	0x01000e51,
	0xc3055d20,
	0x56470118,
	0x7f02188f,
	0x1ed4c5e6,
	0xe136f93c,
	0xaf7cb74b,
	0x67064f1d,
	0x6b201699,
	0xaafdc258,
	0x4dd0661c,
	0x394b5321,
	0x819bebd4,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"down\0"
	"_dev_notice\0"
	"_dev_info\0"
	"up\0"
	"snprintf\0"
	"debugfs_create_file\0"
	"_printk\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"dev_set_name\0"
	"device_register\0"
	"debugfs_create_dir\0"
	"debugfs_remove\0"
	"device_unregister\0"
	"kfree\0"
	"mod_delayed_work_on\0"
	"__kmalloc_cache_noprof\0"
	"__fortify_panic\0"
	"devm_kmalloc\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"simple_write_to_buffer\0"
	"strsep\0"
	"kstrtoull\0"
	"strlen\0"
	"strnlen\0"
	"kstrtou8\0"
	"single_open\0"
	"seq_printf\0"
	"__seq_puts\0"
	"seq_putc\0"
	"seq_write\0"
	"simple_read_from_buffer\0"
	"system_wq\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"pd_dbg_info\0"
	"__wake_up\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"nsecs_to_jiffies\0"
	"flush_delayed_work\0"
	"srcu_notifier_call_chain\0"
	"queue_work_on\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"queue_delayed_work_on\0"
	"jiffies_to_usecs\0"
	"jiffies\0"
	"___ratelimit\0"
	"cancel_delayed_work_sync\0"
	"sched_clock\0"
	"class_find_device\0"
	"alloc_workqueue\0"
	"srcu_init_notifier_head\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"device_set_of_node_from_dev\0"
	"srcu_notifier_chain_register\0"
	"srcu_notifier_chain_unregister\0"
	"sched_setscheduler_nocheck\0"
	"strcmp\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"device_property_present\0"
	"power_supply_get_by_name\0"
	"power_supply_reg_notifier\0"
	"power_supply_get_property\0"
	"devm_kfree\0"
	"class_create\0"
	"of_get_property\0"
	"_dev_err\0"
	"of_find_node_opts_by_path\0"
	"class_destroy\0"
	"_raw_spin_lock_irqsave\0"
	"alarm_start_relative\0"
	"alarm_try_to_cancel\0"
	"mutex_trylock\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"alarm_init\0"
	"kthread_stop\0"
	"_raw_spin_unlock_irqrestore\0"
	"kthread_should_stop\0"
	"schedule\0"
	"usleep_range_state\0"
	"__warn_printk\0"
	"__msecs_to_jiffies\0"
	"of_find_node_by_name\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_string\0"
	"of_property_read_variable_u8_array\0"
	"of_find_property\0"
	"strcasecmp\0"
	"pm_stay_awake\0"
	"pm_relax\0"
	"mutex_is_locked\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pd_dbg_info");


MODULE_INFO(srcversion, "A71D4B64632B43BD5A3F588");

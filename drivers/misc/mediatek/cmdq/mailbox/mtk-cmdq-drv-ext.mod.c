#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(gce_mminfra, "", "");
KSYMTAB_DATA(skip_poll_sleep, "", "");
KSYMTAB_DATA(gce_in_vcp, "", "");
KSYMTAB_DATA(cpr_not_support_cookie, "", "");
KSYMTAB_DATA(mtk_cmdq_log, "", "");
KSYMTAB_DATA(cmdq_pwr_log, "", "");
KSYMTAB_DATA(mtk_cmdq_msg, "", "");
KSYMTAB_DATA(mtk_cmdq_err, "", "");
KSYMTAB_DATA(cmdq_trace, "", "");
KSYMTAB_DATA(cmdq_hw_trace, "", "");
KSYMTAB_DATA(cmdq_dump_buf_size, "", "");
KSYMTAB_DATA(error_irq_bug_on, "", "");
KSYMTAB_DATA(cmdq_ut_count, "", "");
KSYMTAB_DATA(cmdq_ut_sleep_time, "", "");
KSYMTAB_DATA(cmdq_print_debug, "", "");
KSYMTAB_DATA(cmdq_proc_debug_off, "", "");
KSYMTAB_DATA(cmdq_ftrace_ena, "", "");
KSYMTAB_DATA(gce_hw_cnt, "", "");
KSYMTAB_FUNC(cmdq_print_trace, "", "");
KSYMTAB_FUNC(cmdq_is_hw_trace_thread, "", "");
KSYMTAB_FUNC(cmdq_get_hw_trace_built_in, "", "");
KSYMTAB_FUNC(cmdq_set_hw_trace_built_in, "", "");
KSYMTAB_FUNC(cmdq_get_hw_flags, "", "");
KSYMTAB_FUNC(cmdq_reg_shift_addr, "", "");
KSYMTAB_FUNC(cmdq_reg_revert_addr, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_tpr, "", "");
KSYMTAB_FUNC(cmdq_get_irq_long_times, "", "");
KSYMTAB_FUNC(cmdq_event_dump_and_clr, "", "");
KSYMTAB_FUNC(cmdq_event_timeout_dump_and_clr, "", "");
KSYMTAB_FUNC(cmdq_get_usage_cb, "", "");
KSYMTAB_FUNC(cmdq_dump_usage, "", "");
KSYMTAB_FUNC(cmdq_get_support_vm, "", "");
KSYMTAB_FUNC(cmdq_get_hw_trace_vm, "", "");
KSYMTAB_FUNC(cmdq_mbox_mtcmos_by_fast_chan, "", "");
KSYMTAB_FUNC(cmdq_mbox_mtcmos_by_fast, "", "");
KSYMTAB_FUNC(cmdq_mbox_dump_fast_mtcmos, "", "");
KSYMTAB_FUNC(cmdq_mbox_dump_gce_req, "", "");
KSYMTAB_FUNC(cmdq_dump_pkt_usage, "", "");
KSYMTAB_FUNC(cmdq_get_thread, "", "");
KSYMTAB_FUNC(cmdq_thread_set_spr, "", "");
KSYMTAB_FUNC(cmdq_task_current_offset, "", "");
KSYMTAB_FUNC(cmdq_thread_reset_timer, "", "");
KSYMTAB_FUNC(cmdq_thread_check_list_empty, "", "");
KSYMTAB_FUNC(cmdq_dump_core, "", "");
KSYMTAB_FUNC(cmdq_thread_dump_spr, "", "");
KSYMTAB_FUNC(cmdq_thread_dump, "", "");
KSYMTAB_FUNC(cmdq_mbox_dump_dbg, "", "");
KSYMTAB_FUNC(cmdq_chan_dump_dbg, "", "");
KSYMTAB_FUNC(cmdq_thread_dump_all, "", "");
KSYMTAB_FUNC(cmdq_thread_dump_all_seq, "", "");
KSYMTAB_FUNC(cmdq_mbox_thread_remove_task, "", "");
KSYMTAB_FUNC(cmdq_check_thread_complete, "", "");
KSYMTAB_FUNC(cmdq_mbox_channel_stop, "", "");
KSYMTAB_FUNC(cmdq_thread_timeout_backup, "", "");
KSYMTAB_FUNC(cmdq_thread_timeout_restore, "", "");
KSYMTAB_FUNC(cmdq_alloc_user_pool, "", "");
KSYMTAB_FUNC(cmdq_mbox_enable, "", "");
KSYMTAB_FUNC(cmdq_mbox_disable, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_usage, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_base, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_base_pa, "", "");
KSYMTAB_FUNC(cmdq_dev_get_base_pa, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_dummy_reg, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_spr_pa, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_dev, "", "");
KSYMTAB_FUNC(cmdq_mbox_thread_reset, "", "");
KSYMTAB_FUNC(cmdq_mbox_thread_suspend, "", "");
KSYMTAB_FUNC(cmdq_mbox_thread_disable, "", "");
KSYMTAB_FUNC(cmdq_mbox_get_thread_timeout, "", "");
KSYMTAB_FUNC(cmdq_mbox_set_thread_timeout, "", "");
KSYMTAB_FUNC(cmdq_mbox_chan_id, "", "");
KSYMTAB_FUNC(cmdq_mbox_check_buffer, "", "");
KSYMTAB_FUNC(cmdq_task_get_thread_pc, "", "");
KSYMTAB_FUNC(cmdq_task_get_thread_irq, "", "");
KSYMTAB_FUNC(cmdq_task_get_pkt_from_thread, "", "");
KSYMTAB_FUNC(cmdq_set_event, "", "");
KSYMTAB_FUNC(cmdq_clear_event, "", "");
KSYMTAB_FUNC(cmdq_get_event, "", "");
KSYMTAB_FUNC(cmdq_dump_event, "", "");
KSYMTAB_FUNC(cmdq_event_verify, "", "");
KSYMTAB_FUNC(cmdq_pkt_hw_trace, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_capability, "", "");
KSYMTAB_FUNC(cmdq_mmp_wait, "", "");
KSYMTAB_FUNC(cmdq_controller_set_fp, "", "");
KSYMTAB_FUNC(cmdq_set_outpin_event, "", "");
KSYMTAB_FUNC(cmdq_get_inst_event, "", "");
KSYMTAB_FUNC(cmdq_hw_trace_dump, "", "");
KSYMTAB_FUNC(cmdq_dump_buffer_size, "", "");
KSYMTAB_FUNC(cmdq_dump_buffer_size_seq, "", "");
KSYMTAB_FUNC(cmdq_subsys_id_to_base, "", "");
KSYMTAB_FUNC(cmdq_pkt_realloc_cmd_buffer, "", "");
KSYMTAB_FUNC(cmdq_register_device, "", "");
KSYMTAB_FUNC(cmdq_mbox_create, "", "");
KSYMTAB_FUNC(cmdq_mbox_stop, "", "");
KSYMTAB_FUNC(cmdq_vcp_enable, "", "");
KSYMTAB_FUNC(cmdq_get_vcp_buf, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_noirq, "", "");
KSYMTAB_FUNC(cmdq_pkt_vcp_reuse_val, "", "");
KSYMTAB_FUNC(cmdq_pkt_readback, "", "");
KSYMTAB_FUNC(cmdq_mbox_pool_set_limit, "", "");
KSYMTAB_FUNC(cmdq_mbox_pool_create, "", "");
KSYMTAB_FUNC(cmdq_mbox_pool_clear, "", "");
KSYMTAB_FUNC(cmdq_mbox_muti_buf_alloc, "", "");
KSYMTAB_FUNC(cmdq_mbox_buf_alloc, "", "");
KSYMTAB_FUNC(cmdq_mbox_muti_buf_free, "", "");
KSYMTAB_FUNC(cmdq_mbox_buf_free, "", "");
KSYMTAB_FUNC(cmdq_dev_get_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_alloc_buf, "", "");
KSYMTAB_FUNC(cmdq_pkt_add_cmd_buffer, "", "");
KSYMTAB_FUNC(cmdq_mbox_destroy, "", "");
KSYMTAB_FUNC(cmdq_pkt_create_with_id, "", "");
KSYMTAB_FUNC(cmdq_pkt_create, "", "");
KSYMTAB_FUNC(cmdq_pkt_destroy_no_wq, "", "");
KSYMTAB_FUNC(cmdq_pkt_destroy, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_curr_offset, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_va_by_offset, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_pa_by_offset, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_curr_buf_pa, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_curr_buf_va, "", "");
KSYMTAB_FUNC(cmdq_pkt_append_command, "", "");
KSYMTAB_FUNC(cmdq_pkt_move, "", "");
KSYMTAB_FUNC(cmdq_pkt_read, "", "");
KSYMTAB_FUNC(cmdq_pkt_read_reg, "", "");
KSYMTAB_FUNC(cmdq_pkt_read_addr, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_reg, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_reg_addr, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_value_addr, "", "");
KSYMTAB_FUNC(cmdq_pkt_assign_command_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_reg_addr_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_value_addr_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_backup, "", "");
KSYMTAB_FUNC(cmdq_pkt_backup_cpr, "", "");
KSYMTAB_FUNC(cmdq_pkt_backup_stamp, "", "");
KSYMTAB_FUNC(cmdq_pkt_backup_update, "", "");
KSYMTAB_FUNC(cmdq_pkt_backup_get, "", "");
KSYMTAB_FUNC(cmdq_pkt_reuse_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_reuse_event_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_reuse_buf_va, "", "");
KSYMTAB_FUNC(cmdq_pkt_reuse_poll, "", "");
KSYMTAB_FUNC(cmdq_reuse_refresh, "", "");
KSYMTAB_FUNC(cmdq_pkt_copy, "", "");
KSYMTAB_FUNC(cmdq_pkt_store_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_store_value_reg, "", "");
KSYMTAB_FUNC(cmdq_pkt_store64_value_reg, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_dummy, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_indriect, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_reg_indriect, "", "");
KSYMTAB_FUNC(cmdq_pkt_write, "", "");
KSYMTAB_FUNC(cmdq_pkt_mem_move_mask, "", "");
KSYMTAB_FUNC(cmdq_pkt_mem_move, "", "");
KSYMTAB_FUNC(cmdq_pkt_assign_command, "", "");
KSYMTAB_FUNC(cmdq_pkt_logic_command, "", "");
KSYMTAB_FUNC(cmdq_pkt_jump, "", "");
KSYMTAB_FUNC(cmdq_pkt_jump_addr, "", "");
KSYMTAB_FUNC(cmdq_pkt_cond_jump, "", "");
KSYMTAB_FUNC(cmdq_pkt_cond_jump_abs, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_addr, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_reg, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_sleep, "", "");
KSYMTAB_FUNC(cmdq_pkt_timer_en, "", "");
KSYMTAB_FUNC(cmdq_pkt_sleep, "", "");
KSYMTAB_FUNC(cmdq_pkt_sleep_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_timeout_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_timeout, "", "");
KSYMTAB_FUNC(cmdq_pkt_perf_begin, "", "");
KSYMTAB_FUNC(cmdq_pkt_perf_end, "", "");
KSYMTAB_FUNC(cmdq_pkt_get_perf_ret, "", "");
KSYMTAB_FUNC(cmdq_hw_trace_check_inst, "", "");
KSYMTAB_FUNC(cmdq_pkt_wfe_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_wfe, "", "");
KSYMTAB_FUNC(cmdq_pkt_wait_no_clear_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_wait_no_clear, "", "");
KSYMTAB_FUNC(cmdq_pkt_acquire_event_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_acquire_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_clear_event_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_clear_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_event_reuse, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_handshake_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_eoc, "", "");
KSYMTAB_FUNC(cmdq_pkt_finalize, "", "");
KSYMTAB_FUNC(cmdq_pkt_refinalize, "", "");
KSYMTAB_FUNC(cmdq_pkt_finalize_loop, "", "");
KSYMTAB_FUNC(cmdq_pkt_flush_async, "", "");
KSYMTAB_FUNC(cmdq_dump_summary, "", "");
KSYMTAB_FUNC(cmdq_pkt_wait_complete, "", "");
KSYMTAB_FUNC(cmdq_pkt_flush_threaded, "", "");
KSYMTAB_FUNC(cmdq_pkt_flush, "", "");
KSYMTAB_FUNC(cmdq_buf_cmd_parse, "", "");
KSYMTAB_FUNC(cmdq_set_alldump, "", "");
KSYMTAB_FUNC(cmdq_buf_cmd_parse_buf, "", "");
KSYMTAB_FUNC(cmdq_pkt_dump_buf, "", "");
KSYMTAB_FUNC(cmdq_dump_pkt, "", "");
KSYMTAB_FUNC(cmdq_pkt_parse_buf, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_err_cb, "", "");
KSYMTAB_FUNC(cmdq_helper_set_fp, "", "");
KSYMTAB_FUNC(cmdq_sec_helper_set_fp, "", "");
KSYMTAB_FUNC(cmdq_set_gce_in_vcp, "", "");
KSYMTAB_FUNC(cmdq_helper_init, "", "");
KSYMTAB_FUNC(cmdq_dump_thrd_irq_history, "", "");
KSYMTAB_DATA(mminfra_power_cb, "", "");
KSYMTAB_FUNC(cmdq_get_mminfra_cb, "", "");
KSYMTAB_DATA(mminfra_gce_cg, "", "");
KSYMTAB_FUNC(cmdq_get_mminfra_gce_cg_cb, "", "");
KSYMTAB_FUNC(cmdq_util_set_fp, "", "");
KSYMTAB_FUNC(cmdq_util_reset_fp, "", "");
KSYMTAB_FUNC(cmdq_util_check_hw_trace_work, "", "");
KSYMTAB_FUNC(cmdq_util_event_module_dispatch, "", "");
KSYMTAB_FUNC(cmdq_util_thread_module_dispatch, "", "");
KSYMTAB_FUNC(cmdq_util_get_hw_id, "", "");
KSYMTAB_FUNC(cmdq_util_test_get_subsys_list, "", "");
KSYMTAB_FUNC(cmdq_util_test_set_ostd, "", "");
KSYMTAB_FUNC(cmdq_util_get_bit_feature, "", "");
KSYMTAB_FUNC(cmdq_util_is_feature_en, "", "");
KSYMTAB_FUNC(cmdq_util_error_enable, "", "");
KSYMTAB_FUNC(cmdq_util_error_disable, "", "");
KSYMTAB_FUNC(cmdq_util_dump_lock, "", "");
KSYMTAB_FUNC(cmdq_util_dump_unlock, "", "");
KSYMTAB_FUNC(cmdq_util_error_save_lst, "", "");
KSYMTAB_FUNC(cmdq_util_error_save, "", "");
KSYMTAB_FUNC(cmdq_util_log_feature_set, "", "");
KSYMTAB_FUNC(cmdq_util_is_prebuilt_client, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_set_client, "", "");
KSYMTAB_FUNC(cmdq_util_is_secure_client, "", "");
KSYMTAB_FUNC(cmdq_util_set_domain, "", "");
KSYMTAB_FUNC(cmdq_client_get_thread, "", "");
KSYMTAB_FUNC(cmdq_util_set_mml_aid_selmode, "", "");
KSYMTAB_FUNC(cmdq_util_mmuen_devapc_disable, "", "");
KSYMTAB_FUNC(cmdq_util_enable_disp_va, "", "");
KSYMTAB_FUNC(cmdq_util_disp_smc_cmd, "", "");
KSYMTAB_FUNC(cmdq_util_pkvm_disable, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_init, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_enable, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_disable, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_dump, "", "");
KSYMTAB_FUNC(cmdq_util_prebuilt_dump_cpr, "", "");
KSYMTAB_FUNC(cmdq_util_hw_trace_set_client, "", "");
KSYMTAB_FUNC(cmdq_util_hw_trace_enable, "", "");
KSYMTAB_FUNC(cmdq_util_hw_trace_disable, "", "");
KSYMTAB_FUNC(cmdq_util_hw_trace_dump, "", "");
KSYMTAB_FUNC(cmdq_util_hw_trace_mode_update, "", "");
KSYMTAB_FUNC(cmdq_util_mminfra_cmd, "", "");
KSYMTAB_FUNC(cmdq_util_enable_dbg, "", "");
KSYMTAB_FUNC(cmdq_util_return_dbg, "", "");
KSYMTAB_FUNC(cmdq_util_user_buf_track, "", "");
KSYMTAB_FUNC(cmdq_util_buff_track, "", "");
KSYMTAB_FUNC(cmdq_util_track, "", "");
KSYMTAB_FUNC(cmdq_util_dump_smi, "", "");
KSYMTAB_FUNC(cmdq_util_devapc_dump, "", "");
KSYMTAB_FUNC(cmdq_util_dump_fast_mtcmos, "", "");
KSYMTAB_FUNC(cmdq_util_track_ctrl, "", "");
KSYMTAB_FUNC(cmdq_util_set_first_err_mod, "", "");
KSYMTAB_FUNC(cmdq_util_get_first_err_mod, "", "");
KSYMTAB_FUNC(cmdq_proc_create, "", "");
KSYMTAB_FUNC(cmdq_util_reserved_memory_lookup, "", "");
KSYMTAB_FUNC(cmdq_util_init, "", "");

SYMBOL_CRC(gce_mminfra, 0xe22be631, "");
SYMBOL_CRC(skip_poll_sleep, 0x7d8fc5ca, "");
SYMBOL_CRC(gce_in_vcp, 0x3ce775a1, "");
SYMBOL_CRC(cpr_not_support_cookie, 0x619a6e0b, "");
SYMBOL_CRC(mtk_cmdq_log, 0xde2fadca, "");
SYMBOL_CRC(cmdq_pwr_log, 0x880d5273, "");
SYMBOL_CRC(mtk_cmdq_msg, 0x73af90bb, "");
SYMBOL_CRC(mtk_cmdq_err, 0x806c3477, "");
SYMBOL_CRC(cmdq_trace, 0x662c4764, "");
SYMBOL_CRC(cmdq_hw_trace, 0x41f9e21d, "");
SYMBOL_CRC(cmdq_dump_buf_size, 0x0389bd43, "");
SYMBOL_CRC(error_irq_bug_on, 0x939aad73, "");
SYMBOL_CRC(cmdq_ut_count, 0x90205143, "");
SYMBOL_CRC(cmdq_ut_sleep_time, 0x700bd28e, "");
SYMBOL_CRC(cmdq_print_debug, 0x35153fe3, "");
SYMBOL_CRC(cmdq_proc_debug_off, 0x8d6e2abb, "");
SYMBOL_CRC(cmdq_ftrace_ena, 0x0d702cff, "");
SYMBOL_CRC(gce_hw_cnt, 0x9bd7c6f2, "");
SYMBOL_CRC(cmdq_print_trace, 0x3375e996, "");
SYMBOL_CRC(cmdq_is_hw_trace_thread, 0x41ad697e, "");
SYMBOL_CRC(cmdq_get_hw_trace_built_in, 0xe62cf2ce, "");
SYMBOL_CRC(cmdq_set_hw_trace_built_in, 0xc81ad5cd, "");
SYMBOL_CRC(cmdq_get_hw_flags, 0x766f1ee7, "");
SYMBOL_CRC(cmdq_reg_shift_addr, 0x78d44fc3, "");
SYMBOL_CRC(cmdq_reg_revert_addr, 0x17202518, "");
SYMBOL_CRC(cmdq_mbox_get_tpr, 0xae1d247c, "");
SYMBOL_CRC(cmdq_get_irq_long_times, 0x82ef0a57, "");
SYMBOL_CRC(cmdq_event_dump_and_clr, 0x31f28440, "");
SYMBOL_CRC(cmdq_event_timeout_dump_and_clr, 0x0e9285ab, "");
SYMBOL_CRC(cmdq_get_usage_cb, 0xb8d43efc, "");
SYMBOL_CRC(cmdq_dump_usage, 0x0dd32e2c, "");
SYMBOL_CRC(cmdq_get_support_vm, 0x061cf820, "");
SYMBOL_CRC(cmdq_get_hw_trace_vm, 0xc325e52e, "");
SYMBOL_CRC(cmdq_mbox_mtcmos_by_fast_chan, 0xd0206ed2, "");
SYMBOL_CRC(cmdq_mbox_mtcmos_by_fast, 0x0f9f71f3, "");
SYMBOL_CRC(cmdq_mbox_dump_fast_mtcmos, 0x729fb5d9, "");
SYMBOL_CRC(cmdq_mbox_dump_gce_req, 0xf7fb4ce7, "");
SYMBOL_CRC(cmdq_dump_pkt_usage, 0xc289b394, "");
SYMBOL_CRC(cmdq_get_thread, 0x4bcedd53, "");
SYMBOL_CRC(cmdq_thread_set_spr, 0x002ad581, "");
SYMBOL_CRC(cmdq_task_current_offset, 0x48c173b8, "");
SYMBOL_CRC(cmdq_thread_reset_timer, 0x69a8f863, "");
SYMBOL_CRC(cmdq_thread_check_list_empty, 0x7450be63, "");
SYMBOL_CRC(cmdq_dump_core, 0xe67b6e72, "");
SYMBOL_CRC(cmdq_thread_dump_spr, 0x970ebe8c, "");
SYMBOL_CRC(cmdq_thread_dump, 0xf3c051fe, "");
SYMBOL_CRC(cmdq_mbox_dump_dbg, 0xb0d2da58, "");
SYMBOL_CRC(cmdq_chan_dump_dbg, 0xd1c915d0, "");
SYMBOL_CRC(cmdq_thread_dump_all, 0x65324ed3, "");
SYMBOL_CRC(cmdq_thread_dump_all_seq, 0x0acf8da6, "");
SYMBOL_CRC(cmdq_mbox_thread_remove_task, 0xb7b5a2a6, "");
SYMBOL_CRC(cmdq_check_thread_complete, 0x19beeae3, "");
SYMBOL_CRC(cmdq_mbox_channel_stop, 0xf51bea3d, "");
SYMBOL_CRC(cmdq_thread_timeout_backup, 0x66c78613, "");
SYMBOL_CRC(cmdq_thread_timeout_restore, 0xe3c30054, "");
SYMBOL_CRC(cmdq_alloc_user_pool, 0x8276f3c2, "");
SYMBOL_CRC(cmdq_mbox_enable, 0xfc102d94, "");
SYMBOL_CRC(cmdq_mbox_disable, 0xe1d5b76c, "");
SYMBOL_CRC(cmdq_mbox_get_usage, 0x00196e07, "");
SYMBOL_CRC(cmdq_mbox_get_base, 0x53dbb4cb, "");
SYMBOL_CRC(cmdq_mbox_get_base_pa, 0x484e9ead, "");
SYMBOL_CRC(cmdq_dev_get_base_pa, 0xd89a87ca, "");
SYMBOL_CRC(cmdq_mbox_get_dummy_reg, 0x7d33217f, "");
SYMBOL_CRC(cmdq_mbox_get_spr_pa, 0x8caf17e7, "");
SYMBOL_CRC(cmdq_mbox_get_dev, 0xbf79609b, "");
SYMBOL_CRC(cmdq_mbox_thread_reset, 0x901484ca, "");
SYMBOL_CRC(cmdq_mbox_thread_suspend, 0x4d9c7bda, "");
SYMBOL_CRC(cmdq_mbox_thread_disable, 0x51eb453b, "");
SYMBOL_CRC(cmdq_mbox_get_thread_timeout, 0x14837105, "");
SYMBOL_CRC(cmdq_mbox_set_thread_timeout, 0xf0a64874, "");
SYMBOL_CRC(cmdq_mbox_chan_id, 0x6aa05c15, "");
SYMBOL_CRC(cmdq_mbox_check_buffer, 0x3c9f7209, "");
SYMBOL_CRC(cmdq_task_get_thread_pc, 0x92527842, "");
SYMBOL_CRC(cmdq_task_get_thread_irq, 0x3d866b78, "");
SYMBOL_CRC(cmdq_task_get_pkt_from_thread, 0xcae38b3d, "");
SYMBOL_CRC(cmdq_set_event, 0x239ca61d, "");
SYMBOL_CRC(cmdq_clear_event, 0xc9cc8982, "");
SYMBOL_CRC(cmdq_get_event, 0x8bd20a76, "");
SYMBOL_CRC(cmdq_dump_event, 0xe910c897, "");
SYMBOL_CRC(cmdq_event_verify, 0xc2b7020c, "");
SYMBOL_CRC(cmdq_pkt_hw_trace, 0x7ae6d845, "");
SYMBOL_CRC(cmdq_pkt_set_capability, 0x716e71ab, "");
SYMBOL_CRC(cmdq_mmp_wait, 0xae7d1bc5, "");
SYMBOL_CRC(cmdq_controller_set_fp, 0xd1b241f1, "");
SYMBOL_CRC(cmdq_set_outpin_event, 0x329647d2, "");
SYMBOL_CRC(cmdq_get_inst_event, 0x52267f3e, "");
SYMBOL_CRC(cmdq_hw_trace_dump, 0x289680aa, "");
SYMBOL_CRC(cmdq_dump_buffer_size, 0xe9521a17, "");
SYMBOL_CRC(cmdq_dump_buffer_size_seq, 0x7f541cc8, "");
SYMBOL_CRC(cmdq_subsys_id_to_base, 0xd710dcf6, "");
SYMBOL_CRC(cmdq_pkt_realloc_cmd_buffer, 0x8a50584a, "");
SYMBOL_CRC(cmdq_register_device, 0x8647f4a4, "");
SYMBOL_CRC(cmdq_mbox_create, 0x22ae5020, "");
SYMBOL_CRC(cmdq_mbox_stop, 0xc3d83563, "");
SYMBOL_CRC(cmdq_vcp_enable, 0x50309be5, "");
SYMBOL_CRC(cmdq_get_vcp_buf, 0x85292f1d, "");
SYMBOL_CRC(cmdq_pkt_set_noirq, 0x34871db9, "");
SYMBOL_CRC(cmdq_pkt_vcp_reuse_val, 0x470b446f, "");
SYMBOL_CRC(cmdq_pkt_readback, 0xea999344, "");
SYMBOL_CRC(cmdq_mbox_pool_set_limit, 0x14fe3da7, "");
SYMBOL_CRC(cmdq_mbox_pool_create, 0x0542948e, "");
SYMBOL_CRC(cmdq_mbox_pool_clear, 0xe4dce64f, "");
SYMBOL_CRC(cmdq_mbox_muti_buf_alloc, 0x23d02d9e, "");
SYMBOL_CRC(cmdq_mbox_buf_alloc, 0x4aaa4dc7, "");
SYMBOL_CRC(cmdq_mbox_muti_buf_free, 0x739ba6af, "");
SYMBOL_CRC(cmdq_mbox_buf_free, 0xbf592a78, "");
SYMBOL_CRC(cmdq_dev_get_event, 0xb2fb44a1, "");
SYMBOL_CRC(cmdq_pkt_alloc_buf, 0x3078e06e, "");
SYMBOL_CRC(cmdq_pkt_add_cmd_buffer, 0x9d32f280, "");
SYMBOL_CRC(cmdq_mbox_destroy, 0x8e9e427a, "");
SYMBOL_CRC(cmdq_pkt_create_with_id, 0x7bfe7d73, "");
SYMBOL_CRC(cmdq_pkt_create, 0xdfcaaee7, "");
SYMBOL_CRC(cmdq_pkt_destroy_no_wq, 0x62c195b9, "");
SYMBOL_CRC(cmdq_pkt_destroy, 0x22df72c1, "");
SYMBOL_CRC(cmdq_pkt_get_curr_offset, 0x099e2abc, "");
SYMBOL_CRC(cmdq_pkt_get_va_by_offset, 0x7ed3c651, "");
SYMBOL_CRC(cmdq_pkt_get_pa_by_offset, 0xc4f81523, "");
SYMBOL_CRC(cmdq_pkt_get_curr_buf_pa, 0x0ec1871a, "");
SYMBOL_CRC(cmdq_pkt_get_curr_buf_va, 0x1248aaa7, "");
SYMBOL_CRC(cmdq_pkt_append_command, 0x306c7ee9, "");
SYMBOL_CRC(cmdq_pkt_move, 0xb93c8913, "");
SYMBOL_CRC(cmdq_pkt_read, 0x80e38994, "");
SYMBOL_CRC(cmdq_pkt_read_reg, 0x5a0e645c, "");
SYMBOL_CRC(cmdq_pkt_read_addr, 0x5d6d21aa, "");
SYMBOL_CRC(cmdq_pkt_write_reg, 0x736d6f55, "");
SYMBOL_CRC(cmdq_pkt_write_value, 0x8e40540e, "");
SYMBOL_CRC(cmdq_pkt_write_reg_addr, 0xdb8d6bd8, "");
SYMBOL_CRC(cmdq_pkt_write_value_addr, 0xfee451c3, "");
SYMBOL_CRC(cmdq_pkt_assign_command_reuse, 0x378b35bb, "");
SYMBOL_CRC(cmdq_pkt_write_reg_addr_reuse, 0x05f4f059, "");
SYMBOL_CRC(cmdq_pkt_write_value_addr_reuse, 0xae1fa283, "");
SYMBOL_CRC(cmdq_pkt_backup, 0xb445669b, "");
SYMBOL_CRC(cmdq_pkt_backup_cpr, 0x00181a96, "");
SYMBOL_CRC(cmdq_pkt_backup_stamp, 0x9c5c6d9a, "");
SYMBOL_CRC(cmdq_pkt_backup_update, 0x0af1183d, "");
SYMBOL_CRC(cmdq_pkt_backup_get, 0x2cc1f107, "");
SYMBOL_CRC(cmdq_pkt_reuse_value, 0xe007361d, "");
SYMBOL_CRC(cmdq_pkt_reuse_event_value, 0x5d08fc34, "");
SYMBOL_CRC(cmdq_pkt_reuse_buf_va, 0x512ee865, "");
SYMBOL_CRC(cmdq_pkt_reuse_poll, 0x0f8c20fc, "");
SYMBOL_CRC(cmdq_reuse_refresh, 0x419702da, "");
SYMBOL_CRC(cmdq_pkt_copy, 0x17fb2d1c, "");
SYMBOL_CRC(cmdq_pkt_store_value, 0x6756b0f4, "");
SYMBOL_CRC(cmdq_pkt_store_value_reg, 0xc805827c, "");
SYMBOL_CRC(cmdq_pkt_store64_value_reg, 0x8b0537d0, "");
SYMBOL_CRC(cmdq_pkt_write_dummy, 0xc109e912, "");
SYMBOL_CRC(cmdq_pkt_write_indriect, 0x1f26d82a, "");
SYMBOL_CRC(cmdq_pkt_write_reg_indriect, 0x43c4b7b5, "");
SYMBOL_CRC(cmdq_pkt_write, 0x0cc0c39c, "");
SYMBOL_CRC(cmdq_pkt_mem_move_mask, 0x5c10c3aa, "");
SYMBOL_CRC(cmdq_pkt_mem_move, 0xc0d9c483, "");
SYMBOL_CRC(cmdq_pkt_assign_command, 0xb9ccd5be, "");
SYMBOL_CRC(cmdq_pkt_logic_command, 0x23daec08, "");
SYMBOL_CRC(cmdq_pkt_jump, 0xbb0497d8, "");
SYMBOL_CRC(cmdq_pkt_jump_addr, 0xd7330377, "");
SYMBOL_CRC(cmdq_pkt_cond_jump, 0x900ff898, "");
SYMBOL_CRC(cmdq_pkt_cond_jump_abs, 0x81b3429a, "");
SYMBOL_CRC(cmdq_pkt_poll_addr, 0x85178254, "");
SYMBOL_CRC(cmdq_pkt_poll_reg, 0x759c0b99, "");
SYMBOL_CRC(cmdq_pkt_poll, 0x543f6990, "");
SYMBOL_CRC(cmdq_pkt_poll_sleep, 0xd357a756, "");
SYMBOL_CRC(cmdq_pkt_timer_en, 0xfd028958, "");
SYMBOL_CRC(cmdq_pkt_sleep, 0x0f491c39, "");
SYMBOL_CRC(cmdq_pkt_sleep_reuse, 0x661b7490, "");
SYMBOL_CRC(cmdq_pkt_poll_timeout_reuse, 0xc839a644, "");
SYMBOL_CRC(cmdq_pkt_poll_timeout, 0xeadb5444, "");
SYMBOL_CRC(cmdq_pkt_perf_begin, 0xe78c00e1, "");
SYMBOL_CRC(cmdq_pkt_perf_end, 0x26769a55, "");
SYMBOL_CRC(cmdq_pkt_get_perf_ret, 0xf2324c8d, "");
SYMBOL_CRC(cmdq_hw_trace_check_inst, 0x280633b0, "");
SYMBOL_CRC(cmdq_pkt_wfe_reuse, 0xa44fa63d, "");
SYMBOL_CRC(cmdq_pkt_wfe, 0x9f6801a4, "");
SYMBOL_CRC(cmdq_pkt_wait_no_clear_reuse, 0x4c598333, "");
SYMBOL_CRC(cmdq_pkt_wait_no_clear, 0x019c511e, "");
SYMBOL_CRC(cmdq_pkt_acquire_event_reuse, 0x4a8ae127, "");
SYMBOL_CRC(cmdq_pkt_acquire_event, 0x03d12347, "");
SYMBOL_CRC(cmdq_pkt_clear_event_reuse, 0x491fe9d7, "");
SYMBOL_CRC(cmdq_pkt_clear_event, 0x4f11972d, "");
SYMBOL_CRC(cmdq_pkt_set_event_reuse, 0xceb3d525, "");
SYMBOL_CRC(cmdq_pkt_set_event, 0xd843cd45, "");
SYMBOL_CRC(cmdq_pkt_handshake_event, 0xe36792eb, "");
SYMBOL_CRC(cmdq_pkt_eoc, 0x799ce33d, "");
SYMBOL_CRC(cmdq_pkt_finalize, 0xeca02049, "");
SYMBOL_CRC(cmdq_pkt_refinalize, 0x12b6f595, "");
SYMBOL_CRC(cmdq_pkt_finalize_loop, 0x0cac54c3, "");
SYMBOL_CRC(cmdq_pkt_flush_async, 0xe9c0c46d, "");
SYMBOL_CRC(cmdq_dump_summary, 0x69c8c1ed, "");
SYMBOL_CRC(cmdq_pkt_wait_complete, 0x322d0022, "");
SYMBOL_CRC(cmdq_pkt_flush_threaded, 0xacf6ee93, "");
SYMBOL_CRC(cmdq_pkt_flush, 0x8f1cac91, "");
SYMBOL_CRC(cmdq_buf_cmd_parse, 0xfbf47c5c, "");
SYMBOL_CRC(cmdq_set_alldump, 0x875435c7, "");
SYMBOL_CRC(cmdq_buf_cmd_parse_buf, 0x74752652, "");
SYMBOL_CRC(cmdq_pkt_dump_buf, 0x561e5b97, "");
SYMBOL_CRC(cmdq_dump_pkt, 0x641247a0, "");
SYMBOL_CRC(cmdq_pkt_parse_buf, 0xbfa34ab5, "");
SYMBOL_CRC(cmdq_pkt_set_err_cb, 0x4a820ef2, "");
SYMBOL_CRC(cmdq_helper_set_fp, 0xd93728c6, "");
SYMBOL_CRC(cmdq_sec_helper_set_fp, 0xe1778ae5, "");
SYMBOL_CRC(cmdq_set_gce_in_vcp, 0x39e795a8, "");
SYMBOL_CRC(cmdq_helper_init, 0x7d40c8ad, "");
SYMBOL_CRC(cmdq_dump_thrd_irq_history, 0x637d1cbd, "");
SYMBOL_CRC(mminfra_power_cb, 0xa9b58fb1, "");
SYMBOL_CRC(cmdq_get_mminfra_cb, 0xf1470828, "");
SYMBOL_CRC(mminfra_gce_cg, 0xeb836211, "");
SYMBOL_CRC(cmdq_get_mminfra_gce_cg_cb, 0x1964de55, "");
SYMBOL_CRC(cmdq_util_set_fp, 0x58a785aa, "");
SYMBOL_CRC(cmdq_util_reset_fp, 0x69ac48ff, "");
SYMBOL_CRC(cmdq_util_check_hw_trace_work, 0x72449e26, "");
SYMBOL_CRC(cmdq_util_event_module_dispatch, 0x02c72cd1, "");
SYMBOL_CRC(cmdq_util_thread_module_dispatch, 0x37f681d6, "");
SYMBOL_CRC(cmdq_util_get_hw_id, 0x8c874bc4, "");
SYMBOL_CRC(cmdq_util_test_get_subsys_list, 0x2d580448, "");
SYMBOL_CRC(cmdq_util_test_set_ostd, 0x9905a4c2, "");
SYMBOL_CRC(cmdq_util_get_bit_feature, 0x531ec665, "");
SYMBOL_CRC(cmdq_util_is_feature_en, 0x9cddefee, "");
SYMBOL_CRC(cmdq_util_error_enable, 0x1cf259a2, "");
SYMBOL_CRC(cmdq_util_error_disable, 0xf36be3ca, "");
SYMBOL_CRC(cmdq_util_dump_lock, 0x3a724b9a, "");
SYMBOL_CRC(cmdq_util_dump_unlock, 0xc56dae99, "");
SYMBOL_CRC(cmdq_util_error_save_lst, 0xb15e0dca, "");
SYMBOL_CRC(cmdq_util_error_save, 0xf95cc9b1, "");
SYMBOL_CRC(cmdq_util_log_feature_set, 0x32e4682b, "");
SYMBOL_CRC(cmdq_util_is_prebuilt_client, 0x71e112e8, "");
SYMBOL_CRC(cmdq_util_prebuilt_set_client, 0x70b2c197, "");
SYMBOL_CRC(cmdq_util_is_secure_client, 0xc49a2acd, "");
SYMBOL_CRC(cmdq_util_set_domain, 0x1acadfab, "");
SYMBOL_CRC(cmdq_client_get_thread, 0x7065c63f, "");
SYMBOL_CRC(cmdq_util_set_mml_aid_selmode, 0x515e661f, "");
SYMBOL_CRC(cmdq_util_mmuen_devapc_disable, 0xbaf3c9e9, "");
SYMBOL_CRC(cmdq_util_enable_disp_va, 0xd24e746d, "");
SYMBOL_CRC(cmdq_util_disp_smc_cmd, 0xa9410db2, "");
SYMBOL_CRC(cmdq_util_pkvm_disable, 0xba8d7d65, "");
SYMBOL_CRC(cmdq_util_prebuilt_init, 0x941a2387, "");
SYMBOL_CRC(cmdq_util_prebuilt_enable, 0xefbd0bfe, "");
SYMBOL_CRC(cmdq_util_prebuilt_disable, 0xeb659f37, "");
SYMBOL_CRC(cmdq_util_prebuilt_dump, 0x188e924c, "");
SYMBOL_CRC(cmdq_util_prebuilt_dump_cpr, 0xc052e495, "");
SYMBOL_CRC(cmdq_util_hw_trace_set_client, 0x4e1b70e6, "");
SYMBOL_CRC(cmdq_util_hw_trace_enable, 0x56f856e8, "");
SYMBOL_CRC(cmdq_util_hw_trace_disable, 0xd7888f4b, "");
SYMBOL_CRC(cmdq_util_hw_trace_dump, 0x90396079, "");
SYMBOL_CRC(cmdq_util_hw_trace_mode_update, 0xe62ff317, "");
SYMBOL_CRC(cmdq_util_mminfra_cmd, 0x6bd3152d, "");
SYMBOL_CRC(cmdq_util_enable_dbg, 0xc5ed8f4d, "");
SYMBOL_CRC(cmdq_util_return_dbg, 0xf3591563, "");
SYMBOL_CRC(cmdq_util_user_buf_track, 0x2430294a, "");
SYMBOL_CRC(cmdq_util_buff_track, 0xeba2b37f, "");
SYMBOL_CRC(cmdq_util_track, 0xf2f64756, "");
SYMBOL_CRC(cmdq_util_dump_smi, 0x9d8f503b, "");
SYMBOL_CRC(cmdq_util_devapc_dump, 0xacc32d54, "");
SYMBOL_CRC(cmdq_util_dump_fast_mtcmos, 0xa2b42350, "");
SYMBOL_CRC(cmdq_util_track_ctrl, 0xe17d4dcd, "");
SYMBOL_CRC(cmdq_util_set_first_err_mod, 0xd400d514, "");
SYMBOL_CRC(cmdq_util_get_first_err_mod, 0x86ce8797, "");
SYMBOL_CRC(cmdq_proc_create, 0xb2b7fd10, "");
SYMBOL_CRC(cmdq_util_reserved_memory_lookup, 0x63cd1fe5, "");
SYMBOL_CRC(cmdq_util_init, 0xb1973513, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x00148653, "vsnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96848186, "scnprintf" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x037a0cba, "kfree" },
	{ 0x8bdffccb, "dma_pool_create" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xdb3ccf12, "iommu_iova_to_phys" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbeefe2e7, "mtk_mminfra_on_off" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xd77d7c9c, "mmprofile_log_ex" },
	{ 0x2d41e6f5, "__trace_puts" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xff3c2c9f, "of_irq_get_byname" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ef1b6a, "mbox_controller_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x79146c3e, "mtk_iommu_register_fault_callback" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x899ea9dc, "mmprofile_enable" },
	{ 0xda38583a, "mmprofile_start" },
	{ 0x7ffb1903, "mmprofile_register_event" },
	{ 0x560a0e63, "mmprofile_enable_event_recursive" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xc829819a, "pm_runtime_irq_safe" },
	{ 0x2d0cdef4, "dev_pm_domain_attach_by_id" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb27f86de, "mbox_controller_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x2b2020a7, "mbox_request_channel" },
	{ 0x9c00ff0a, "vcp_get_reserve_mem_phys_ex" },
	{ 0x88b539b6, "vcp_register_feature_ex" },
	{ 0x885260b9, "vcp_get_reserve_mem_virt_ex" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0x595fecf3, "mbox_free_channel" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x273ac0d0, "mbox_send_message" },
	{ 0x06eec503, "mbox_client_txdone" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb1f33e13, "is_vcp_ready_ex" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x4b47ea11, "dump_page" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4e86d8bc, "vcp_deregister_feature_ex" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xfeba6173, "debugfs_lookup" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x9bf142b5, "dput" },
	{ 0x94c0bce2, "register_devapc_vio_callback" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x173e2075, "seq_write" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x00148653,
	0x92997ed8,
	0x3b6c41ea,
	0x34db050b,
	0x96848186,
	0x43b0c9c3,
	0xe94986d6,
	0xc38c83b8,
	0x6b2dc060,
	0x14de1090,
	0xc8f2ae9d,
	0x037a0cba,
	0x8bdffccb,
	0xd3cc3c5d,
	0xdb3ccf12,
	0xd5977bfb,
	0xed55cabd,
	0xbeefe2e7,
	0x3d0ffa5c,
	0xd77d7c9c,
	0x2d41e6f5,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0xd35cce70,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x7f02188f,
	0x9a835040,
	0xa823db6e,
	0xf3cdc3c6,
	0x1fec5304,
	0x4eb4c414,
	0xf93aae46,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0xe17134b6,
	0x7e19152a,
	0x12db679a,
	0x14fe5355,
	0x9f0ef8fa,
	0xff3c2c9f,
	0xf7ca28dd,
	0xa4f72277,
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0xea23ff02,
	0xa571f6b0,
	0xb088bcfc,
	0x0be515ae,
	0xc6f46339,
	0x15ef1b6a,
	0x49cd25ed,
	0x79146c3e,
	0xc8c7229e,
	0xf9583f23,
	0xe2964344,
	0xdf521442,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x6b201699,
	0xe136f93c,
	0x899ea9dc,
	0xda38583a,
	0x7ffb1903,
	0x560a0e63,
	0xa079425d,
	0xb7d99956,
	0xea6f49c8,
	0x5a9cfed6,
	0xc829819a,
	0x2d0cdef4,
	0xd4e81a21,
	0xc5b6f236,
	0x40863ba1,
	0x8c03d20c,
	0xb27f86de,
	0xb2fb935e,
	0x15ba50a6,
	0x0f05f001,
	0xefe8a82e,
	0xaf56600a,
	0x2b2020a7,
	0x9c00ff0a,
	0x88b539b6,
	0x885260b9,
	0xb5aa7165,
	0x502a8c68,
	0x595fecf3,
	0x656e4a6e,
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0x45b60059,
	0x273ac0d0,
	0x06eec503,
	0xdc0e4855,
	0xb1f33e13,
	0xcc5005fe,
	0x78cf2345,
	0x678b96ec,
	0x2f7754a8,
	0x608741b5,
	0xa6257a2f,
	0x4b47ea11,
	0x4a3ad70e,
	0x25974000,
	0x52c5c991,
	0x4e86d8bc,
	0xf9a482f9,
	0x9688de8b,
	0x18b48e28,
	0x689f7bde,
	0x7518b5f0,
	0xb4028d67,
	0x5cf50b74,
	0x1ed4c5e6,
	0xbee3ddd5,
	0xfeba6173,
	0x5cf4d4de,
	0x4e870156,
	0x9bf142b5,
	0x94c0bce2,
	0xf9606a4e,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x173e2075,
	0x665e62b5,
	0x391b5530,
	0x0c6a7f0d,
	0xbf748e79,
	0x0140f701,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vsnprintf\0"
	"_printk\0"
	"kstrtouint\0"
	"_raw_spin_lock_irqsave\0"
	"scnprintf\0"
	"preempt_schedule\0"
	"sched_clock\0"
	"mod_timer\0"
	"dump_stack\0"
	"mt_irq_dump_status\0"
	"seq_printf\0"
	"kfree\0"
	"dma_pool_create\0"
	"iommu_get_domain_for_dev\0"
	"iommu_iova_to_phys\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mtk_mminfra_on_off\0"
	"platform_get_resource\0"
	"mmprofile_log_ex\0"
	"__trace_puts\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"_raw_spin_unlock_irqrestore\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__msecs_to_jiffies\0"
	"__list_del_entry_valid_or_report\0"
	"of_find_device_by_node\0"
	"of_find_compatible_node\0"
	"__of_parse_phandle_with_args\0"
	"__pm_runtime_resume\0"
	"__arm_smccc_smc\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"devm_ioremap_resource\0"
	"of_irq_get_byname\0"
	"platform_get_irq\0"
	"_dev_notice\0"
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"devm_clk_get\0"
	"__mutex_init\0"
	"of_count_phandle_with_args\0"
	"device_link_add\0"
	"init_timer_key\0"
	"mbox_controller_register\0"
	"alloc_workqueue\0"
	"mtk_iommu_register_fault_callback\0"
	"devm_kmalloc\0"
	"devm_request_threaded_irq\0"
	"__wake_up\0"
	"_find_next_zero_bit\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"mmprofile_enable\0"
	"mmprofile_start\0"
	"mmprofile_register_event\0"
	"mmprofile_enable_event_recursive\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u16_array\0"
	"dma_set_coherent_mask\0"
	"dma_alloc_attrs\0"
	"pm_runtime_irq_safe\0"
	"dev_pm_domain_attach_by_id\0"
	"pm_runtime_enable\0"
	"queue_work_on\0"
	"ioremap_prot\0"
	"destroy_workqueue\0"
	"mbox_controller_unregister\0"
	"param_ops_int\0"
	"jiffies\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"arm64_use_ng_mappings\0"
	"mbox_request_channel\0"
	"vcp_get_reserve_mem_phys_ex\0"
	"vcp_register_feature_ex\0"
	"vcp_get_reserve_mem_virt_ex\0"
	"dma_pool_destroy\0"
	"of_property_match_string\0"
	"mbox_free_channel\0"
	"snprintf\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"mbox_send_message\0"
	"mbox_client_txdone\0"
	"timer_delete\0"
	"is_vcp_ready_ex\0"
	"msleep_interruptible\0"
	"dma_free_attrs\0"
	"dma_pool_alloc\0"
	"dma_pool_free\0"
	"__init_swait_queue_head\0"
	"complete\0"
	"dump_page\0"
	"wait_for_completion_timeout\0"
	"wait_for_completion\0"
	"__kmalloc_noprof\0"
	"vcp_deregister_feature_ex\0"
	"msleep\0"
	"memstart_addr\0"
	"__memset_io\0"
	"mtk_smi_dbg_hang_detect\0"
	"proc_mkdir\0"
	"proc_create\0"
	"of_reserved_mem_lookup\0"
	"of_find_node_by_name\0"
	"vzalloc_noprof\0"
	"debugfs_lookup\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"dput\0"
	"register_devapc_vio_callback\0"
	"mrdump_set_extra_dump\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_write\0"
	"generic_file_llseek\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "irq-dbg,mtk-mminfra-util-dummy,mmprofile,iommu_debug,vcp_status,aee_aed,mtk-smi-dbg,device-apc-common,mrdump");


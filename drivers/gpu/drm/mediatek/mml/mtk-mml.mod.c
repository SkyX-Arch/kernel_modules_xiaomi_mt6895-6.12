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

KSYMTAB_FUNC(mml_get_swpm_func, "", "");
KSYMTAB_FUNC(mml_get_plat_device, "_gpl", "");
KSYMTAB_FUNC(mml_topology_get_cache, "_gpl", "");
KSYMTAB_FUNC(mml_dev_get_comp_by_id, "_gpl", "");
KSYMTAB_FUNC(mml_dl_enable, "_gpl", "");
KSYMTAB_FUNC(mml_dpc_disable, "_gpl", "");
KSYMTAB_FUNC(mml_racing_enable, "_gpl", "");
KSYMTAB_FUNC(mml_max_layer, "_gpl", "");
KSYMTAB_FUNC(mml_tablet_ext, "_gpl", "");
KSYMTAB_FUNC(mml_get_chip_swver, "_gpl", "");
KSYMTAB_DATA(mtk_mml_msg, "", "");
KSYMTAB_DATA(mml_dl_disp_dump, "", "");
KSYMTAB_DATA(mtk_mml_hrt_mode, "", "");
KSYMTAB_DATA(mml_cmdq_err, "", "");
KSYMTAB_DATA(mml_stash, "", "");
KSYMTAB_DATA(mml_log_rec, "", "");
KSYMTAB_FUNC(mml_save_log_record, "_gpl", "");
KSYMTAB_FUNC(mml_topology_register_ip, "_gpl", "");
KSYMTAB_FUNC(mml_topology_unregister_ip, "_gpl", "");
KSYMTAB_DATA(mml_dc, "", "");
KSYMTAB_FUNC(mml_drm_get_hw_caps, "_gpl", "");
KSYMTAB_FUNC(mml_drm_query_hw_support, "_gpl", "");
KSYMTAB_FUNC(mml_drm_query_cap, "_gpl", "");
KSYMTAB_FUNC(mml_drm_query_multi_layer, "_gpl", "");
KSYMTAB_FUNC(mml_drm_try_frame, "_gpl", "");
KSYMTAB_FUNC(mml_drm_submit, "_gpl", "");
KSYMTAB_FUNC(mml_drm_stop, "_gpl", "");
KSYMTAB_FUNC(mml_drm_config_rdone, "_gpl", "");
KSYMTAB_FUNC(mml_drm_dump, "_gpl", "");
KSYMTAB_FUNC(mml_drm_get_context, "_gpl", "");
KSYMTAB_FUNC(mml_drm_ctx_idle, "_gpl", "");
KSYMTAB_FUNC(mml_drm_put_context, "_gpl", "");
KSYMTAB_FUNC(mml_drm_kick_done, "_gpl", "");
KSYMTAB_FUNC(mml_drm_set_panel_pixel, "_gpl", "");
KSYMTAB_FUNC(mml_drm_racing_config_sync, "_gpl", "");
KSYMTAB_FUNC(mml_drm_racing_stop_sync, "_gpl", "");
KSYMTAB_FUNC(mml_drm_split_info, "_gpl", "");
KSYMTAB_FUNC(mml_drm_submit_timeout, "_gpl", "");
KSYMTAB_FUNC(mml_dbgtp_register, "_gpl", "");
KSYMTAB_FUNC(mml_dpc_register, "_gpl", "");

SYMBOL_CRC(mml_get_swpm_func, 0xf0598b67, "");
SYMBOL_CRC(mml_get_plat_device, 0xe0368cae, "_gpl");
SYMBOL_CRC(mml_topology_get_cache, 0xa72ad834, "_gpl");
SYMBOL_CRC(mml_dev_get_comp_by_id, 0x3df92418, "_gpl");
SYMBOL_CRC(mml_dl_enable, 0xce9ccfe5, "_gpl");
SYMBOL_CRC(mml_dpc_disable, 0x4e7e18dc, "_gpl");
SYMBOL_CRC(mml_racing_enable, 0x97844d01, "_gpl");
SYMBOL_CRC(mml_max_layer, 0xafdf799f, "_gpl");
SYMBOL_CRC(mml_tablet_ext, 0x84e59aee, "_gpl");
SYMBOL_CRC(mml_get_chip_swver, 0xdf7a8084, "_gpl");
SYMBOL_CRC(mtk_mml_msg, 0x7148f48d, "");
SYMBOL_CRC(mml_dl_disp_dump, 0x32e77738, "");
SYMBOL_CRC(mtk_mml_hrt_mode, 0x8a5f62e8, "");
SYMBOL_CRC(mml_cmdq_err, 0x38e6f699, "");
SYMBOL_CRC(mml_stash, 0xbf9a91ed, "");
SYMBOL_CRC(mml_log_rec, 0x0360a9c1, "");
SYMBOL_CRC(mml_save_log_record, 0x8810d83a, "_gpl");
SYMBOL_CRC(mml_topology_register_ip, 0x9364a812, "_gpl");
SYMBOL_CRC(mml_topology_unregister_ip, 0x224d976d, "_gpl");
SYMBOL_CRC(mml_dc, 0x70ce1254, "");
SYMBOL_CRC(mml_drm_get_hw_caps, 0x69e39a4a, "_gpl");
SYMBOL_CRC(mml_drm_query_hw_support, 0x9aeb5798, "_gpl");
SYMBOL_CRC(mml_drm_query_cap, 0xb44aba4c, "_gpl");
SYMBOL_CRC(mml_drm_query_multi_layer, 0x6b49f85d, "_gpl");
SYMBOL_CRC(mml_drm_try_frame, 0xa41542ac, "_gpl");
SYMBOL_CRC(mml_drm_submit, 0xcfac7fd7, "_gpl");
SYMBOL_CRC(mml_drm_stop, 0xb8796193, "_gpl");
SYMBOL_CRC(mml_drm_config_rdone, 0xdbb3a6ef, "_gpl");
SYMBOL_CRC(mml_drm_dump, 0x9ea7f865, "_gpl");
SYMBOL_CRC(mml_drm_get_context, 0xd4e1458f, "_gpl");
SYMBOL_CRC(mml_drm_ctx_idle, 0x2fe050cb, "_gpl");
SYMBOL_CRC(mml_drm_put_context, 0x01d6838d, "_gpl");
SYMBOL_CRC(mml_drm_kick_done, 0x947c702d, "_gpl");
SYMBOL_CRC(mml_drm_set_panel_pixel, 0xbe87039d, "_gpl");
SYMBOL_CRC(mml_drm_racing_config_sync, 0xa22ae418, "_gpl");
SYMBOL_CRC(mml_drm_racing_stop_sync, 0x8af6d9c4, "_gpl");
SYMBOL_CRC(mml_drm_split_info, 0x773efaf7, "_gpl");
SYMBOL_CRC(mml_drm_submit_timeout, 0x33d74e27, "_gpl");
SYMBOL_CRC(mml_dbgtp_register, 0x3339afaa, "_gpl");
SYMBOL_CRC(mml_dpc_register, 0x39f3254c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92997ed8, "_printk" },
	{ 0xf95cc9b1, "cmdq_util_error_save" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x5df1d53f, "component_add" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xd77d7c9c, "mmprofile_log_ex" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x46e3017e, "dev_pm_opp_of_add_table_indexed" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xaba63322, "of_iomap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0x53262a34, "mtk_smi_larb_enable" },
	{ 0x6b85895c, "mtk_smi_larb_disable" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0xa4234d01, "slbc_request" },
	{ 0x2a66c694, "slbc_power_on" },
	{ 0x8877c8c0, "slbc_power_off" },
	{ 0x0e12e362, "slbc_release" },
	{ 0xf3c051fe, "cmdq_thread_dump" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xd2db42b8, "aee_kernel_fatal_api_func" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x7eb4d0e0, "mtk_mmdvfs_enable_vcp" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x3e1f887d, "devm_platform_get_and_ioremap_resource" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0x0fca7d66, "of_clk_get_by_name" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0x401167cc, "_dev_info" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x3e19cd49, "__platform_register_drivers" },
	{ 0x4956fb44, "kthread_create_worker" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8647f4a4, "cmdq_register_device" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x8e9e427a, "cmdq_mbox_destroy" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x3fb62392, "component_match_add_typed" },
	{ 0x539ad12b, "component_master_add_with_match" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xfab19e40, "component_bind_all" },
	{ 0x081129fa, "component_unbind_all" },
	{ 0xfeba6173, "debugfs_lookup" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x9bf142b5, "dput" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0xb5510d21, "single_open_size" },
	{ 0x173e2075, "seq_write" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x3da016df, "seq_putc" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x85df9b6c, "strsep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f999712, "kthread_destroy_worker" },
	{ 0x44033864, "proc_remove" },
	{ 0x999e8297, "vfree" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x57a85210, "component_master_del" },
	{ 0x314737eb, "platform_unregister_drivers" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x00148653, "vsnprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x037a0cba, "kfree" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x22df72c1, "cmdq_pkt_destroy" },
	{ 0xb9ccd5be, "cmdq_pkt_assign_command" },
	{ 0x378b35bb, "cmdq_pkt_assign_command_reuse" },
	{ 0xfee451c3, "cmdq_pkt_write_value_addr" },
	{ 0xae1fa283, "cmdq_pkt_write_value_addr_reuse" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x561e5b97, "cmdq_pkt_dump_buf" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x512ee865, "cmdq_pkt_reuse_buf_va" },
	{ 0x12b6f595, "cmdq_pkt_refinalize" },
	{ 0x19beeae3, "cmdq_check_thread_complete" },
	{ 0xa6257a2f, "complete" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xe9c0c46d, "cmdq_pkt_flush_async" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0x941a2387, "cmdq_util_prebuilt_init" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x2cc1f107, "cmdq_pkt_backup_get" },
	{ 0xf2324c8d, "cmdq_pkt_get_perf_ret" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0xe67f6a84, "kthread_flush_work" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf51bea3d, "cmdq_mbox_channel_stop" },
	{ 0x00196e07, "cmdq_mbox_get_usage" },
	{ 0x002ad581, "cmdq_thread_set_spr" },
	{ 0x2d41e6f5, "__trace_puts" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x263c3152, "bcmp" },
	{ 0x4aaa4dc7, "cmdq_mbox_buf_alloc" },
	{ 0xbf592a78, "cmdq_mbox_buf_free" },
	{ 0x25758a2c, "misc_register" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x27c95ba3, "refcount_dec_and_mutex_lock" },
	{ 0xb1c51e6e, "dma_alloc_pages" },
	{ 0x07a5d28d, "dma_free_pages" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x01000e51, "schedule" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x17fb2d1c, "cmdq_pkt_copy" },
	{ 0x419702da, "cmdq_reuse_refresh" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6b4f7d0, "mtk_sync_fence_create" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xbc704fe1, "kthread_flush_worker" },
	{ 0x4f11972d, "cmdq_pkt_clear_event" },
	{ 0x019c511e, "cmdq_pkt_wait_no_clear" },
	{ 0x23daec08, "cmdq_pkt_logic_command" },
	{ 0xd843cd45, "cmdq_pkt_set_event" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0xdec5777e, "mtk_sync_timeline_create" },
	{ 0x39e54c23, "mtk_sync_timeline_destroy" },
	{ 0x0bd17e97, "v4l2_device_register" },
	{ 0xb14c72d6, "v4l2_device_unregister" },
	{ 0x4a794ef1, "video_device_alloc" },
	{ 0x1976ea8e, "video_device_release" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xe9c4aca5, "v4l2_m2m_fop_poll" },
	{ 0x086324c4, "video_ioctl2" },
	{ 0x99e5e6e4, "v4l2_m2m_fop_mmap" },
	{ 0x372d5b4a, "video_devdata" },
	{ 0x5fc4b410, "v4l2_m2m_ctx_init" },
	{ 0xcf322846, "v4l2_ctrl_handler_setup" },
	{ 0x2c2067df, "mutex_lock_interruptible" },
	{ 0x40b1171e, "v4l2_fh_init" },
	{ 0xd7448d00, "v4l2_fh_add" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0x089a8c5a, "v4l2_m2m_ctx_release" },
	{ 0xc9699ec5, "v4l2_m2m_job_finish" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe0e08877, "vb2_buffer_done" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x3b7b22c0, "vb2_queue_init" },
	{ 0xa95dc2ca, "vb2_ops_wait_prepare" },
	{ 0x2d6ea4da, "vb2_ops_wait_finish" },
	{ 0xb43af541, "v4l2_m2m_buf_remove" },
	{ 0x66e211ff, "v4l2_m2m_buf_queue" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0x77287511, "v4l2_ctrl_new_custom" },
	{ 0x869692a0, "v4l2_m2m_get_vq" },
	{ 0x7a01c5e3, "v4l2_fh_del" },
	{ 0xb799696e, "v4l2_fh_exit" },
	{ 0x97685821, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x34da767f, "v4l2_m2m_ioctl_querybuf" },
	{ 0xbab6e1de, "v4l2_m2m_ioctl_qbuf" },
	{ 0xdc18e2ab, "v4l2_m2m_ioctl_expbuf" },
	{ 0x8cceddfd, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x409f68ce, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x23f40ab4, "v4l2_m2m_ioctl_streamon" },
	{ 0x2070bcf2, "v4l2_m2m_ioctl_streamoff" },
	{ 0x6e0e44c0, "v4l2_ctrl_subscribe_event" },
	{ 0x6db6bfc6, "v4l2_event_unsubscribe" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6a88efa7, "v4l2_m2m_buf_copy_metadata" },
	{ 0xf1a3f8fa, "vb2_plane_cookie" },
	{ 0x7a2b8b2c, "__video_register_device" },
	{ 0x28b1b1f4, "video_unregister_device" },
	{ 0x2cca8e1e, "vb2_dma_contig_memops" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x27929ba7, "dma_buf_end_cpu_access" },
	{ 0x2e2980cc, "dma_buf_begin_cpu_access" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xbeefe2e7, "mtk_mminfra_on_off" },
	{ 0xf6efd5a0, "component_del" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xf2c5c2b9, "component_add_typed" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x2c235092, "of_prop_next_u32" },
	{ 0x0cc0c39c, "cmdq_pkt_write" },
	{ 0x099e2abc, "cmdq_pkt_get_curr_offset" },
	{ 0x81b3429a, "cmdq_pkt_cond_jump_abs" },
	{ 0x0f491c39, "cmdq_pkt_sleep" },
	{ 0x799ce33d, "cmdq_pkt_eoc" },
	{ 0x7ed3c651, "cmdq_pkt_get_va_by_offset" },
	{ 0x78d44fc3, "cmdq_reg_shift_addr" },
	{ 0xc4f81523, "cmdq_pkt_get_pa_by_offset" },
	{ 0x0af1183d, "cmdq_pkt_backup_update" },
	{ 0x515e661f, "cmdq_util_set_mml_aid_selmode" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc9cc8982, "cmdq_clear_event" },
	{ 0xb445669b, "cmdq_pkt_backup" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x543f6990, "cmdq_pkt_poll" },
	{ 0x85292f1d, "cmdq_get_vcp_buf" },
	{ 0x50309be5, "cmdq_vcp_enable" },
	{ 0xea999344, "cmdq_pkt_readback" },
	{ 0xdb8d6bd8, "cmdq_pkt_write_reg_addr" },
	{ 0x85178254, "cmdq_pkt_poll_addr" },
	{ 0x5d6d21aa, "cmdq_pkt_read_addr" },
	{ 0x43c4b7b5, "cmdq_pkt_write_reg_indriect" },
	{ 0x470b446f, "cmdq_pkt_vcp_reuse_val" },
	{ 0x0f8c20fc, "cmdq_pkt_reuse_poll" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xacf6ee93, "cmdq_pkt_flush_threaded" },
	{ 0xd679e36d, "__dma_sync_single_for_device" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x8f1cac91, "cmdq_pkt_flush" },
	{ 0x9c5c6d9a, "cmdq_pkt_backup_stamp" },
	{ 0x00181a96, "cmdq_pkt_backup_cpr" },
	{ 0x699573a9, "of_alias_get_id" },
	{ 0x188e924c, "cmdq_util_prebuilt_dump" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x899ea9dc, "mmprofile_enable" },
	{ 0x7ffb1903, "mmprofile_register_event" },
	{ 0x560a0e63, "mmprofile_enable_event_recursive" },
	{ 0xda38583a, "mmprofile_start" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x8c8569cb,
	0x92997ed8,
	0xf95cc9b1,
	0xba0aee2e,
	0xce5bc4d0,
	0xb39378cc,
	0x65929cae,
	0xc4f0da12,
	0xb3f7646e,
	0xc3055d20,
	0xb2fb935e,
	0x5df1d53f,
	0xb4ce05a5,
	0xa823db6e,
	0xd5977bfb,
	0xd77d7c9c,
	0xed55cabd,
	0xa571f6b0,
	0xb088bcfc,
	0x46e3017e,
	0xcd6bb6eb,
	0x2ccea269,
	0xea23ff02,
	0x166667b7,
	0xc2a5a5eb,
	0xf644e56a,
	0xb3bceb42,
	0x2220455c,
	0x76d9b876,
	0xc1cad332,
	0xaba63322,
	0x656e4a6e,
	0x1f0a95af,
	0x53262a34,
	0x6b85895c,
	0x6d25698b,
	0xa4234d01,
	0x2a66c694,
	0x8877c8c0,
	0x0e12e362,
	0xf3c051fe,
	0x4e8b8def,
	0x05590c04,
	0xf5edea2e,
	0xd2db42b8,
	0x34db050b,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x1fec5304,
	0x7eb4d0e0,
	0x31b65f04,
	0xcd6bda8d,
	0x3e1f887d,
	0x6b201699,
	0xeab7088e,
	0x0fca7d66,
	0xb57f5be6,
	0x401167cc,
	0x67064f1d,
	0x4eb4c414,
	0x13269d10,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0xd35cce70,
	0x7e19152a,
	0x9a835040,
	0x3e19cd49,
	0x4956fb44,
	0x7e688f68,
	0xd9a5ea54,
	0x8647f4a4,
	0x22ae5020,
	0x0f314d3e,
	0xa2fa95a0,
	0x8e9e427a,
	0x5a6368f5,
	0xc8c7229e,
	0x3b1b6444,
	0xb318cbab,
	0xf3cdc3c6,
	0x5be9ce07,
	0xea6f49c8,
	0xb7d99956,
	0xa4f72277,
	0x3fb62392,
	0x539ad12b,
	0xe136f93c,
	0xfab19e40,
	0x081129fa,
	0xfeba6173,
	0x5cf4d4de,
	0x4e870156,
	0x9bf142b5,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0xb5510d21,
	0x173e2075,
	0x1b2fa1a9,
	0x3da016df,
	0x9c81ceff,
	0x85df9b6c,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x5a921311,
	0x9f999712,
	0x44033864,
	0x999e8297,
	0x0288226a,
	0x57a85210,
	0x314737eb,
	0x0f05f001,
	0xefe8a82e,
	0x00148653,
	0xe2d5255a,
	0x037a0cba,
	0xaf7cb74b,
	0x22df72c1,
	0xb9ccd5be,
	0x378b35bb,
	0xfee451c3,
	0xae1fa283,
	0x365acda7,
	0xe94986d6,
	0x561e5b97,
	0xaacf03c1,
	0x716425b7,
	0xdfcaaee7,
	0xbee3ddd5,
	0x512ee865,
	0x12b6f595,
	0x19beeae3,
	0xa6257a2f,
	0x25974000,
	0xe9c0c46d,
	0xfc102d94,
	0x941a2387,
	0x64d11af1,
	0x9ec6ca96,
	0xe123f3d9,
	0x0296695f,
	0x2cc1f107,
	0xf2324c8d,
	0xe1d5b76c,
	0xe67f6a84,
	0x608741b5,
	0xf51bea3d,
	0x00196e07,
	0x002ad581,
	0x2d41e6f5,
	0x98cf60b3,
	0xa916b694,
	0x263c3152,
	0x4aaa4dc7,
	0xbf592a78,
	0x25758a2c,
	0xc3246938,
	0x27c95ba3,
	0xb1c51e6e,
	0x07a5d28d,
	0x41ed3709,
	0xeae3dfd6,
	0x29c37d82,
	0xdb976d85,
	0x7f02188f,
	0x01000e51,
	0x9a85eebb,
	0x3b6c41ea,
	0xa6f6226c,
	0x17fb2d1c,
	0x419702da,
	0x49cd25ed,
	0x8c03d20c,
	0xc5b6f236,
	0xa6b4f7d0,
	0x7155bcf8,
	0x4a3ad70e,
	0xffae8e8b,
	0xbc704fe1,
	0x4f11972d,
	0x019c511e,
	0x23daec08,
	0xd843cd45,
	0x9f6801a4,
	0xdec5777e,
	0x39e54c23,
	0x0bd17e97,
	0xb14c72d6,
	0x4a794ef1,
	0x1976ea8e,
	0x730f2eae,
	0xc6fca5ad,
	0xe9c4aca5,
	0x086324c4,
	0x99e5e6e4,
	0x372d5b4a,
	0x5fc4b410,
	0xcf322846,
	0x2c2067df,
	0x40b1171e,
	0xd7448d00,
	0x6823b9fe,
	0x089a8c5a,
	0xc9699ec5,
	0xcc5005fe,
	0xe0e08877,
	0xf5ef842e,
	0x3b7b22c0,
	0xa95dc2ca,
	0x2d6ea4da,
	0xb43af541,
	0x66e211ff,
	0x1b00f04b,
	0x1f9923b3,
	0x77287511,
	0x869692a0,
	0x7a01c5e3,
	0xb799696e,
	0x97685821,
	0x34da767f,
	0xbab6e1de,
	0xdc18e2ab,
	0x8cceddfd,
	0x409f68ce,
	0x23f40ab4,
	0x2070bcf2,
	0x6e0e44c0,
	0x6db6bfc6,
	0x476b165a,
	0x6a88efa7,
	0xf1a3f8fa,
	0x7a2b8b2c,
	0x28b1b1f4,
	0x2cca8e1e,
	0xaaae9064,
	0x0904e8ad,
	0x18500fa9,
	0x7640bcae,
	0x2b3df576,
	0x27929ba7,
	0x2e2980cc,
	0x56470118,
	0xfff4bd7c,
	0xe70e1ef3,
	0xecbe3c62,
	0xf1e3c830,
	0xbeefe2e7,
	0xf6efd5a0,
	0x14fe5355,
	0xf2c5c2b9,
	0xa079425d,
	0x5c27c40f,
	0xd4e81a21,
	0x2c235092,
	0x0cc0c39c,
	0x099e2abc,
	0x81b3429a,
	0x0f491c39,
	0x799ce33d,
	0x7ed3c651,
	0x78d44fc3,
	0xc4f81523,
	0x0af1183d,
	0x515e661f,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xc9cc8982,
	0xb445669b,
	0xedc03953,
	0x40863ba1,
	0xaf56600a,
	0xf7ca28dd,
	0x543f6990,
	0x85292f1d,
	0x50309be5,
	0xea999344,
	0xdb8d6bd8,
	0x85178254,
	0x5d6d21aa,
	0x43c4b7b5,
	0x470b446f,
	0x0f8c20fc,
	0xf9583f23,
	0xacf6ee93,
	0xd679e36d,
	0xe6de52c9,
	0x93d6dd8c,
	0x8f1cac91,
	0x9c5c6d9a,
	0x00181a96,
	0x699573a9,
	0x188e924c,
	0x1cc7f053,
	0x51fcca8a,
	0x899ea9dc,
	0x7ffb1903,
	0x560a0e63,
	0xda38583a,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x4829a47e,
	0x5a9f1d63,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kstrtoint\0"
	"_printk\0"
	"cmdq_util_error_save\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"ns_to_timespec64\0"
	"ktime_get_with_offset\0"
	"kthread_should_stop\0"
	"usleep_range_state\0"
	"param_ops_int\0"
	"component_add\0"
	"_dev_err\0"
	"of_find_device_by_node\0"
	"mutex_lock\0"
	"mmprofile_log_ex\0"
	"mutex_unlock\0"
	"__mutex_init\0"
	"of_count_phandle_with_args\0"
	"dev_pm_opp_of_add_table_indexed\0"
	"dev_pm_opp_of_add_table\0"
	"devm_regulator_get_optional\0"
	"devm_clk_get\0"
	"dev_pm_opp_get_opp_count\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"regulator_set_voltage\0"
	"clk_set_rate\0"
	"of_address_to_resource\0"
	"of_iomap\0"
	"snprintf\0"
	"of_mtk_icc_get\0"
	"mtk_smi_larb_enable\0"
	"mtk_smi_larb_disable\0"
	"mtk_icc_set_bw\0"
	"slbc_request\0"
	"slbc_power_on\0"
	"slbc_power_off\0"
	"slbc_release\0"
	"cmdq_thread_dump\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"___ratelimit\0"
	"aee_kernel_fatal_api_func\0"
	"_raw_spin_lock_irqsave\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__of_parse_phandle_with_args\0"
	"mtk_mmdvfs_enable_vcp\0"
	"of_property_read_u32_index\0"
	"of_property_read_string_helper\0"
	"devm_platform_get_and_ioremap_resource\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"of_clk_get_by_name\0"
	"of_clk_get\0"
	"_dev_info\0"
	"of_property_read_variable_u8_array\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"__platform_register_drivers\0"
	"kthread_create_worker\0"
	"sched_setscheduler\0"
	"__init_waitqueue_head\0"
	"cmdq_register_device\0"
	"cmdq_mbox_create\0"
	"wakeup_source_register\0"
	"proc_create_data\0"
	"cmdq_mbox_destroy\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"of_find_compatible_node\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"of_property_read_variable_u16_array\0"
	"_dev_notice\0"
	"component_match_add_typed\0"
	"component_master_add_with_match\0"
	"of_property_read_variable_u32_array\0"
	"component_bind_all\0"
	"component_unbind_all\0"
	"debugfs_lookup\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"dput\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open_size\0"
	"seq_write\0"
	"vmalloc_noprof\0"
	"seq_putc\0"
	"simple_read_from_buffer\0"
	"strsep\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"strncmp\0"
	"kthread_destroy_worker\0"
	"proc_remove\0"
	"vfree\0"
	"wakeup_source_unregister\0"
	"component_master_del\0"
	"platform_unregister_drivers\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"vsnprintf\0"
	"strcmp\0"
	"kfree\0"
	"of_property_read_string\0"
	"cmdq_pkt_destroy\0"
	"cmdq_pkt_assign_command\0"
	"cmdq_pkt_assign_command_reuse\0"
	"cmdq_pkt_write_value_addr\0"
	"cmdq_pkt_write_value_addr_reuse\0"
	"set_normalized_timespec64\0"
	"sched_clock\0"
	"cmdq_pkt_dump_buf\0"
	"dma_fence_signal\0"
	"kthread_queue_work\0"
	"cmdq_pkt_create\0"
	"vzalloc_noprof\0"
	"cmdq_pkt_reuse_buf_va\0"
	"cmdq_pkt_refinalize\0"
	"cmdq_check_thread_complete\0"
	"complete\0"
	"wait_for_completion\0"
	"cmdq_pkt_flush_async\0"
	"cmdq_mbox_enable\0"
	"cmdq_util_prebuilt_init\0"
	"dma_fence_wait_timeout\0"
	"ktime_get_real_ts64\0"
	"dma_fence_release\0"
	"refcount_warn_saturate\0"
	"cmdq_pkt_backup_get\0"
	"cmdq_pkt_get_perf_ret\0"
	"cmdq_mbox_disable\0"
	"kthread_flush_work\0"
	"__init_swait_queue_head\0"
	"cmdq_mbox_channel_stop\0"
	"cmdq_mbox_get_usage\0"
	"cmdq_thread_set_spr\0"
	"__trace_puts\0"
	"strlen\0"
	"strnlen\0"
	"bcmp\0"
	"cmdq_mbox_buf_alloc\0"
	"cmdq_mbox_buf_free\0"
	"misc_register\0"
	"misc_deregister\0"
	"refcount_dec_and_mutex_lock\0"
	"dma_alloc_pages\0"
	"dma_free_pages\0"
	"get_random_bytes\0"
	"__const_udelay\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"__msecs_to_jiffies\0"
	"schedule\0"
	"__arch_copy_to_user\0"
	"kstrtouint\0"
	"kasan_flag_enabled\0"
	"cmdq_pkt_copy\0"
	"cmdq_reuse_refresh\0"
	"alloc_workqueue\0"
	"destroy_workqueue\0"
	"queue_work_on\0"
	"mtk_sync_fence_create\0"
	"sync_file_get_fence\0"
	"wait_for_completion_timeout\0"
	"nsecs_to_jiffies\0"
	"kthread_flush_worker\0"
	"cmdq_pkt_clear_event\0"
	"cmdq_pkt_wait_no_clear\0"
	"cmdq_pkt_logic_command\0"
	"cmdq_pkt_set_event\0"
	"cmdq_pkt_wfe\0"
	"mtk_sync_timeline_create\0"
	"mtk_sync_timeline_destroy\0"
	"v4l2_device_register\0"
	"v4l2_device_unregister\0"
	"video_device_alloc\0"
	"video_device_release\0"
	"v4l2_m2m_init\0"
	"v4l2_m2m_release\0"
	"v4l2_m2m_fop_poll\0"
	"video_ioctl2\0"
	"v4l2_m2m_fop_mmap\0"
	"video_devdata\0"
	"v4l2_m2m_ctx_init\0"
	"v4l2_ctrl_handler_setup\0"
	"mutex_lock_interruptible\0"
	"v4l2_fh_init\0"
	"v4l2_fh_add\0"
	"v4l2_ctrl_handler_free\0"
	"v4l2_m2m_ctx_release\0"
	"v4l2_m2m_job_finish\0"
	"msleep_interruptible\0"
	"vb2_buffer_done\0"
	"v4l_bound_align_image\0"
	"vb2_queue_init\0"
	"vb2_ops_wait_prepare\0"
	"vb2_ops_wait_finish\0"
	"v4l2_m2m_buf_remove\0"
	"v4l2_m2m_buf_queue\0"
	"v4l2_ctrl_handler_init_class\0"
	"v4l2_ctrl_new_std\0"
	"v4l2_ctrl_new_custom\0"
	"v4l2_m2m_get_vq\0"
	"v4l2_fh_del\0"
	"v4l2_fh_exit\0"
	"v4l2_m2m_ioctl_reqbufs\0"
	"v4l2_m2m_ioctl_querybuf\0"
	"v4l2_m2m_ioctl_qbuf\0"
	"v4l2_m2m_ioctl_expbuf\0"
	"v4l2_m2m_ioctl_dqbuf\0"
	"v4l2_m2m_ioctl_create_bufs\0"
	"v4l2_m2m_ioctl_streamon\0"
	"v4l2_m2m_ioctl_streamoff\0"
	"v4l2_ctrl_subscribe_event\0"
	"v4l2_event_unsubscribe\0"
	"sized_strscpy\0"
	"v4l2_m2m_buf_copy_metadata\0"
	"vb2_plane_cookie\0"
	"__video_register_device\0"
	"video_unregister_device\0"
	"vb2_dma_contig_memops\0"
	"dma_buf_get\0"
	"mtk_dma_buf_set_name\0"
	"dma_buf_vmap_unlocked\0"
	"dma_buf_vunmap_unlocked\0"
	"dma_buf_put\0"
	"dma_buf_end_cpu_access\0"
	"dma_buf_begin_cpu_access\0"
	"__warn_printk\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"mtk_mminfra_on_off\0"
	"component_del\0"
	"of_device_get_match_data\0"
	"component_add_typed\0"
	"of_property_count_elems_of_size\0"
	"__pm_runtime_disable\0"
	"pm_runtime_enable\0"
	"of_prop_next_u32\0"
	"cmdq_pkt_write\0"
	"cmdq_pkt_get_curr_offset\0"
	"cmdq_pkt_cond_jump_abs\0"
	"cmdq_pkt_sleep\0"
	"cmdq_pkt_eoc\0"
	"cmdq_pkt_get_va_by_offset\0"
	"cmdq_reg_shift_addr\0"
	"cmdq_pkt_get_pa_by_offset\0"
	"cmdq_pkt_backup_update\0"
	"cmdq_util_set_mml_aid_selmode\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"cmdq_clear_event\0"
	"cmdq_pkt_backup\0"
	"iounmap\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"platform_get_irq\0"
	"cmdq_pkt_poll\0"
	"cmdq_get_vcp_buf\0"
	"cmdq_vcp_enable\0"
	"cmdq_pkt_readback\0"
	"cmdq_pkt_write_reg_addr\0"
	"cmdq_pkt_poll_addr\0"
	"cmdq_pkt_read_addr\0"
	"cmdq_pkt_write_reg_indriect\0"
	"cmdq_pkt_vcp_reuse_val\0"
	"cmdq_pkt_reuse_poll\0"
	"devm_request_threaded_irq\0"
	"cmdq_pkt_flush_threaded\0"
	"__dma_sync_single_for_device\0"
	"param_ops_bool\0"
	"complete_all\0"
	"cmdq_pkt_flush\0"
	"cmdq_pkt_backup_stamp\0"
	"cmdq_pkt_backup_cpr\0"
	"of_alias_get_id\0"
	"cmdq_util_prebuilt_dump\0"
	"scmi_tinysys_common_set\0"
	"get_scmi_tinysys_info\0"
	"mmprofile_enable\0"
	"mmprofile_register_event\0"
	"mmprofile_enable_event_recursive\0"
	"mmprofile_start\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memcpy\0"
	"memmove\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-cmdq-drv-ext,mmprofile,mtk-icc-core,mtk-smi,mtk_slbc,aee_aed,mtk-mmdvfs-v3,mtk_sync,system_heap,mtk-mminfra-util-dummy,tinysys-scmi");

MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_sys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_sysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mmlsys0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mmlsys0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmlsys0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmlsys0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mmlC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlsys2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_aal0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_aal0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_aal1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_aal1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_aal");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_aalC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_color");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_colorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_fg");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_fgC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_hdr");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_hdrC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmlt_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmlt_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlt_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlt_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlf_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmlf_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmld_mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmld_mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rdma0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rdma0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rdma1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rdma1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_rdma1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_rdma1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_rsz3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml0_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_rsz2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_rsz2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_rsz3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_rsz3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_pq_rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_pq_rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_birsz");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_birszC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_tcc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_tccC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_tdshp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_tdshpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-mml_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_wrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_rrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_rrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml_rrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_rrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml_rrotC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_merge");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml2_mergeC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_c3d");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mml_c3dC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_c3d0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml1_c3d0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_c3d0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mml0_c3d0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_c3d0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml1_c3d0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_c3d0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mml0_c3d0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_c3d0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_c3d0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_chist0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mml1_chist0C*");

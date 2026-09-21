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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2e03c4c3, "vcodec_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c3f0379, "mtk_vcodec_set_log" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x3f2465d8, "mtk_vcodec_get_chipid" },
	{ 0x401167cc, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf069a5bd, "mtk_vcodec_dec_irq_setup" },
	{ 0x0bd17e97, "v4l2_device_register" },
	{ 0x4a794ef1, "video_device_alloc" },
	{ 0x1976ea8e, "video_device_release" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x41812116, "mtk_vcodec_set_dev" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x28b1b1f4, "video_unregister_device" },
	{ 0xb14c72d6, "v4l2_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xe9c4aca5, "v4l2_m2m_fop_poll" },
	{ 0x086324c4, "video_ioctl2" },
	{ 0x99e5e6e4, "v4l2_m2m_fop_mmap" },
	{ 0x5e9ec63c, "mtk_vcodec_is_vcp" },
	{ 0x88b539b6, "vcp_register_feature_ex" },
	{ 0x7eb4d0e0, "mtk_mmdvfs_enable_vcp" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x0b90d228, "mtk_vcodec_send_info_to_vgo" },
	{ 0x40b1171e, "v4l2_fh_init" },
	{ 0x372d5b4a, "video_devdata" },
	{ 0xd7448d00, "v4l2_fh_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5fc4b410, "v4l2_m2m_ctx_init" },
	{ 0xbdb534a0, "vcp_get_io_device_ex" },
	{ 0x869692a0, "v4l2_m2m_get_vq" },
	{ 0x92768bf6, "v4l2_fh_is_singular" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x089a8c5a, "v4l2_m2m_ctx_release" },
	{ 0x966fde5c, "mtk_vcodec_del_ctx_list" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0x7a01c5e3, "v4l2_fh_del" },
	{ 0xb799696e, "v4l2_fh_exit" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x4e86d8bc, "vcp_deregister_feature_ex" },
	{ 0x7a2b8b2c, "__video_register_device" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xcf2a6966, "up" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x313401e5, "mtk_v4l2_dbg_level" },
	{ 0xdb2ecddb, "mtk_vdec_lpw_level" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x8de528fb, "mtk_vcodec_dbg" },
	{ 0x77f7811a, "mtk_vcodec_perf" },
	{ 0x287e4788, "mtk_vcodec_trace_enable" },
	{ 0x4456ca7b, "mtk_vcodec_dvfs_qos_log_en" },
	{ 0x7d817ffb, "mtk_vcodec_vcp" },
	{ 0xe84ecab5, "mtk_vdec_open_cgrp_delay" },
	{ 0xd51da8ca, "mtk_vdec_slc_enable" },
	{ 0x47c1f0f9, "mtk_vdec_acp_enable" },
	{ 0x7da209d8, "mtk_vdec_acp_debug" },
	{ 0xe395f0a0, "mtk_vdec_vcp_log" },
	{ 0x4144fca1, "mtk_vdec_property" },
	{ 0x88ab5185, "vcu_func" },
	{ 0x0e78b31d, "support_svp_region" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7d20fbc2, "v4l2_event_queue_fh" },
	{ 0x98548440, "mtk_vcodec_set_state" },
	{ 0xb1da0206, "mtk_vcodec_state_in_range" },
	{ 0x616c4d73, "mtk_vcodec_get_state" },
	{ 0x311fc0b9, "v4l2_m2m_try_schedule" },
	{ 0x6f1d8445, "mtk_vcodec_is_state" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34da767f, "v4l2_m2m_ioctl_querybuf" },
	{ 0xdc18e2ab, "v4l2_m2m_ioctl_expbuf" },
	{ 0x409f68ce, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x23f40ab4, "v4l2_m2m_ioctl_streamon" },
	{ 0x2070bcf2, "v4l2_m2m_ioctl_streamoff" },
	{ 0x6db6bfc6, "v4l2_event_unsubscribe" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0xcf322846, "v4l2_ctrl_handler_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b7b22c0, "vb2_queue_init" },
	{ 0x01515fa9, "vb2_queue_release" },
	{ 0xeda7362e, "v4l2_m2m_streamoff" },
	{ 0xab1fdd1a, "v4l2_m2m_src_buf_remove_check" },
	{ 0x5eabd1f5, "v4l2_m2m_dst_buf_remove_check" },
	{ 0x6626afca, "down" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xca85fa22, "v4l2_m2m_next_buf" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0xa846541f, "mtk_vcodec_in_out_trace_count" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x564e4893, "v4l2_m2m_buf_queue_check" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x9e0f82e9, "mtk_vcodec_dma_unmap_detach" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0x27929ba7, "dma_buf_end_cpu_access" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6ea2ae0a, "v4l_fill_mtk_fmtdesc" },
	{ 0x3813e2d9, "is_vcp_ao_ex" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xba81dd80, "mtk_vcodec_set_state_from" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x5f8a9d3e, "v4l2_m2m_reqbufs" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xe0e08877, "vb2_buffer_done" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x993115cb, "v4l2_m2m_qbuf" },
	{ 0x1ac32cee, "v4l2_m2m_dqbuf" },
	{ 0x20e57009, "v4l2_event_subscribe" },
	{ 0x0c63da46, "v4l2_src_change_event_subscribe" },
	{ 0x6e0e44c0, "v4l2_ctrl_subscribe_event" },
	{ 0xc23eef6c, "set_user_nice" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xf08f89c2, "mtk_vcodec_get_fb" },
	{ 0x56166861, "vb2_plane_vaddr" },
	{ 0xc9699ec5, "v4l2_m2m_job_finish" },
	{ 0xf1a3f8fa, "vb2_plane_cookie" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x05a064d7, "mtk_vcodec_get_log" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x77287511, "v4l2_ctrl_new_custom" },
	{ 0xa95dc2ca, "vb2_ops_wait_prepare" },
	{ 0x2d6ea4da, "vb2_ops_wait_finish" },
	{ 0x9f249c10, "mtk_vcodec_dma_attach_map" },
	{ 0xfac965ef, "mtk_dma_sync_sg_range" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x2cca8e1e, "vb2_dma_contig_memops" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x5a921311, "strncmp" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4089cb21, "mtk_smi_dbg_register_pwr_ctrl_cb" },
	{ 0xb7d0e3f9, "mtk_smi_dbg_unregister_pwr_ctrl_cb" },
	{ 0x79146c3e, "mtk_iommu_register_fault_callback" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xe06f78c7, "slbc_gid_request" },
	{ 0x803673d2, "slbc_validate" },
	{ 0x9d5dbbcf, "dma_buf_get_gid" },
	{ 0xd81801d8, "slbc_read_invalidate" },
	{ 0x3b3f2cda, "slbc_invalidate" },
	{ 0x4fe5340d, "slbc_gid_release" },
	{ 0x8646b0ba, "slbc_roi_update" },
	{ 0xe31386d6, "mtk_vcodec_add_ctx_list" },
	{ 0xfb3bd834, "mtk_vcodec_set_curr_ctx" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x47d2021a, "mtk_thermal_hint_notify_register" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0x999e8297, "vfree" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x6a268403, "mtk_vcodec_ctx_list_empty" },
	{ 0xa3f122e9, "mtk_vcodec_check_alive" },
	{ 0x24d273d1, "add_timer" },
	{ 0x0041d6dd, "mtk_vcodec_set_cpu_hint" },
	{ 0xb874067b, "mtk_set_pf_ctrl_enable" },
	{ 0x97e76f3e, "mtk_get_pf_ctrl_enable" },
	{ 0x8ffdfa58, "slbc_disable_dcc" },
	{ 0xc8c5b35e, "get_target_margin_low" },
	{ 0xaf8e1795, "set_turn_point_freq" },
	{ 0x62d42e01, "set_target_margin" },
	{ 0x353e0e35, "set_target_margin_low" },
	{ 0x532ff774, "unset_target_margin" },
	{ 0x18a0d0bd, "unset_target_margin_low" },
	{ 0x5c3d5f9e, "is_runnable_boost_enable" },
	{ 0x7e1a273f, "set_runnable_boost_enable" },
	{ 0xd91547fa, "unset_runnable_boost_enable" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc9ab4b6a, "mtk_vcodec_gce_timeout_dump" },
	{ 0x96030f7e, "mtk_vcodec_wait_for_done_ctx" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6fabe556, "dma_resv_iter_first_unlocked" },
	{ 0x2b98a5ef, "mtk_vcodec_fence_signal" },
	{ 0x25e8314c, "dma_resv_iter_next_unlocked" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0x9c00ff0a, "vcp_get_reserve_mem_phys_ex" },
	{ 0x885260b9, "vcp_get_reserve_mem_virt_ex" },
	{ 0x84072dc8, "vcp_get_ipidev" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0x9ec9ebb7, "mtk_vcodec_dump_ctx_list" },
	{ 0x2477f0b0, "vcp_cmd_ex" },
	{ 0x835eb5e5, "mtk_smi_dbg_dump_for_vdec" },
	{ 0xff54165b, "mmdvfs_debug_status_dump" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x8e726dd5, "vcp_A_register_notify_ex" },
	{ 0x95b57945, "vcp_get_reserve_mem_size_ex" },
	{ 0x87bfd2c9, "mtk_vcodec_alloc_mem" },
	{ 0xb1f33e13, "is_vcp_ready_ex" },
	{ 0x51b8698f, "mtk_emidbg_dump" },
	{ 0x68a654f5, "dump_vcp_irq_status_ex" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x36098ba8, "mtk_vcodec_free_mem" },
	{ 0xdec13d25, "mtk_vcodec_vp_mode_buf_prepare" },
	{ 0x98525fd6, "mtk_vcodec_get_curr_ctx" },
	{ 0x8ba04d05, "mtk_vcodec_vp_mode_buf_unprepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2e03c4c3,
	0x92997ed8,
	0x3c3f0379,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x12db679a,
	0xa571f6b0,
	0xaf7cb74b,
	0x3f2465d8,
	0x401167cc,
	0xe2d5255a,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf069a5bd,
	0x0bd17e97,
	0x4a794ef1,
	0x1976ea8e,
	0x730f2eae,
	0x49cd25ed,
	0x31b65f04,
	0xd3cc3c5d,
	0x75966ec2,
	0x41812116,
	0xb39378cc,
	0xc6fca5ad,
	0x28b1b1f4,
	0xb14c72d6,
	0xc8c7229e,
	0xa823db6e,
	0x1fec5304,
	0xe136f93c,
	0xcd6bda8d,
	0xe9c4aca5,
	0x086324c4,
	0x99e5e6e4,
	0x5e9ec63c,
	0x88b539b6,
	0x7eb4d0e0,
	0xd5977bfb,
	0x0b90d228,
	0x40b1171e,
	0x372d5b4a,
	0xd7448d00,
	0xd9a5ea54,
	0x5fc4b410,
	0xbdb534a0,
	0x869692a0,
	0x92768bf6,
	0xed55cabd,
	0x089a8c5a,
	0x966fde5c,
	0x6823b9fe,
	0x7a01c5e3,
	0xb799696e,
	0x037a0cba,
	0x441d0de9,
	0xe17134b6,
	0x4e86d8bc,
	0x7a2b8b2c,
	0x5be9ce07,
	0xea6f49c8,
	0x6b201699,
	0xf3cdc3c6,
	0x9166fc03,
	0x8c03d20c,
	0xe9ffc063,
	0xcf2a6966,
	0x6fc35f2b,
	0xb2fb935e,
	0x313401e5,
	0xdb2ecddb,
	0xe6de52c9,
	0x8de528fb,
	0x77f7811a,
	0x287e4788,
	0x4456ca7b,
	0x7d817ffb,
	0xe84ecab5,
	0xd51da8ca,
	0x47c1f0f9,
	0x7da209d8,
	0xe395f0a0,
	0x4144fca1,
	0x88ab5185,
	0x0e78b31d,
	0x0f05f001,
	0xefe8a82e,
	0x9ec6ca96,
	0x56470118,
	0x7d20fbc2,
	0x98548440,
	0xb1da0206,
	0x616c4d73,
	0x311fc0b9,
	0x6f1d8445,
	0xca21ebd3,
	0x34da767f,
	0xdc18e2ab,
	0x409f68ce,
	0x23f40ab4,
	0x2070bcf2,
	0x6db6bfc6,
	0xba0aee2e,
	0xce5bc4d0,
	0xeae3dfd6,
	0xf5ef842e,
	0x1b00f04b,
	0x1f9923b3,
	0xcf322846,
	0x656e4a6e,
	0x3b7b22c0,
	0x01515fa9,
	0xeda7362e,
	0xab1fdd1a,
	0x5eabd1f5,
	0x6626afca,
	0x6bd0e573,
	0x34db050b,
	0xdc0e4855,
	0xd35cce70,
	0xca85fa22,
	0x6da467cb,
	0xa846541f,
	0x65929cae,
	0x2b3df576,
	0x564e4893,
	0xc5b6f236,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x2e3bcce2,
	0x2f2c95c4,
	0x82ee90dc,
	0x9e0f82e9,
	0x7640bcae,
	0x27929ba7,
	0x476b165a,
	0x6ea2ae0a,
	0x3813e2d9,
	0x2688ec10,
	0xba81dd80,
	0xe2964344,
	0x7e19152a,
	0x5f8a9d3e,
	0x21ea5251,
	0xe0e08877,
	0x53a1e8d9,
	0x993115cb,
	0x1ac32cee,
	0x20e57009,
	0x0c63da46,
	0x6e0e44c0,
	0xc23eef6c,
	0xb3f7646e,
	0x9a835040,
	0xf08f89c2,
	0x56166861,
	0xc9699ec5,
	0xf1a3f8fa,
	0x365acda7,
	0xc38c83b8,
	0xffae8e8b,
	0x7f24de73,
	0x93d6dd8c,
	0x608741b5,
	0xc6f46339,
	0x05a064d7,
	0x88db9f48,
	0x2be0c009,
	0x77287511,
	0xa95dc2ca,
	0x2d6ea4da,
	0x9f249c10,
	0xfac965ef,
	0xaaae9064,
	0xdd2ef3e5,
	0xfa501412,
	0x0904e8ad,
	0x2cca8e1e,
	0x9688de8b,
	0x15ba50a6,
	0xea23ff02,
	0x76d9b876,
	0x0be515ae,
	0x5a921311,
	0xd4e81a21,
	0x37befc70,
	0x4089cb21,
	0xb7d0e3f9,
	0x79146c3e,
	0x5c27c40f,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xb6e6d99d,
	0x6b2dc060,
	0x13269d10,
	0xe06f78c7,
	0x803673d2,
	0x9d5dbbcf,
	0xd81801d8,
	0x3b3f2cda,
	0x4fe5340d,
	0x8646b0ba,
	0xe31386d6,
	0xfb3bd834,
	0xfcec0987,
	0x3ce4ca6f,
	0x47d2021a,
	0xcd6bb6eb,
	0x2ccea269,
	0x166667b7,
	0xc2a5a5eb,
	0xb3bceb42,
	0x1f0a95af,
	0xf644e56a,
	0x2220455c,
	0x6d25698b,
	0x999e8297,
	0xbee3ddd5,
	0xa079425d,
	0x6a268403,
	0xa3f122e9,
	0x24d273d1,
	0x0041d6dd,
	0xb874067b,
	0x97e76f3e,
	0x8ffdfa58,
	0xc8c5b35e,
	0xaf8e1795,
	0x62d42e01,
	0x353e0e35,
	0x532ff774,
	0x18a0d0bd,
	0x5c3d5f9e,
	0x7e1a273f,
	0xd91547fa,
	0xc4f0da12,
	0xc9ab4b6a,
	0x96030f7e,
	0x8ddd8aad,
	0x6fabe556,
	0x2b98a5ef,
	0x25e8314c,
	0xe123f3d9,
	0x0296695f,
	0xc3055d20,
	0x7e688f68,
	0x9c00ff0a,
	0x885260b9,
	0x84072dc8,
	0x4a353d20,
	0x9ec9ebb7,
	0x2477f0b0,
	0x835eb5e5,
	0xff54165b,
	0x689f7bde,
	0x65bb94f6,
	0x8e726dd5,
	0x95b57945,
	0x87bfd2c9,
	0xb1f33e13,
	0x51b8698f,
	0x68a654f5,
	0x7f02188f,
	0x36098ba8,
	0xdec13d25,
	0x98525fd6,
	0x8ba04d05,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vcodec_trace\0"
	"_printk\0"
	"mtk_vcodec_set_log\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"of_property_read_string\0"
	"mtk_vcodec_get_chipid\0"
	"_dev_info\0"
	"strcmp\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"mtk_vcodec_dec_irq_setup\0"
	"v4l2_device_register\0"
	"video_device_alloc\0"
	"video_device_release\0"
	"v4l2_m2m_init\0"
	"alloc_workqueue\0"
	"of_property_read_u32_index\0"
	"iommu_get_domain_for_dev\0"
	"register_pm_notifier\0"
	"mtk_vcodec_set_dev\0"
	"kthread_stop\0"
	"v4l2_m2m_release\0"
	"video_unregister_device\0"
	"v4l2_device_unregister\0"
	"devm_kmalloc\0"
	"of_find_device_by_node\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_string_helper\0"
	"v4l2_m2m_fop_poll\0"
	"video_ioctl2\0"
	"v4l2_m2m_fop_mmap\0"
	"mtk_vcodec_is_vcp\0"
	"vcp_register_feature_ex\0"
	"mtk_mmdvfs_enable_vcp\0"
	"mutex_lock\0"
	"mtk_vcodec_send_info_to_vgo\0"
	"v4l2_fh_init\0"
	"video_devdata\0"
	"v4l2_fh_add\0"
	"__init_waitqueue_head\0"
	"v4l2_m2m_ctx_init\0"
	"vcp_get_io_device_ex\0"
	"v4l2_m2m_get_vq\0"
	"v4l2_fh_is_singular\0"
	"mutex_unlock\0"
	"v4l2_m2m_ctx_release\0"
	"mtk_vcodec_del_ctx_list\0"
	"v4l2_ctrl_handler_free\0"
	"v4l2_fh_del\0"
	"v4l2_fh_exit\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"vcp_deregister_feature_ex\0"
	"__video_register_device\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"of_find_property\0"
	"of_find_compatible_node\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"down_trylock\0"
	"up\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"mtk_v4l2_dbg_level\0"
	"mtk_vdec_lpw_level\0"
	"param_ops_bool\0"
	"mtk_vcodec_dbg\0"
	"mtk_vcodec_perf\0"
	"mtk_vcodec_trace_enable\0"
	"mtk_vcodec_dvfs_qos_log_en\0"
	"mtk_vcodec_vcp\0"
	"mtk_vdec_open_cgrp_delay\0"
	"mtk_vdec_slc_enable\0"
	"mtk_vdec_acp_enable\0"
	"mtk_vdec_acp_debug\0"
	"mtk_vdec_vcp_log\0"
	"mtk_vdec_property\0"
	"vcu_func\0"
	"support_svp_region\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"ktime_get_real_ts64\0"
	"__warn_printk\0"
	"v4l2_event_queue_fh\0"
	"mtk_vcodec_set_state\0"
	"mtk_vcodec_state_in_range\0"
	"mtk_vcodec_get_state\0"
	"v4l2_m2m_try_schedule\0"
	"mtk_vcodec_is_state\0"
	"bitmap_free\0"
	"v4l2_m2m_ioctl_querybuf\0"
	"v4l2_m2m_ioctl_expbuf\0"
	"v4l2_m2m_ioctl_create_bufs\0"
	"v4l2_m2m_ioctl_streamon\0"
	"v4l2_m2m_ioctl_streamoff\0"
	"v4l2_event_unsubscribe\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__const_udelay\0"
	"v4l_bound_align_image\0"
	"v4l2_ctrl_handler_init_class\0"
	"v4l2_ctrl_new_std\0"
	"v4l2_ctrl_handler_setup\0"
	"snprintf\0"
	"vb2_queue_init\0"
	"vb2_queue_release\0"
	"v4l2_m2m_streamoff\0"
	"v4l2_m2m_src_buf_remove_check\0"
	"v4l2_m2m_dst_buf_remove_check\0"
	"down\0"
	"down_interruptible\0"
	"_raw_spin_lock_irqsave\0"
	"timer_delete\0"
	"_raw_spin_unlock_irqrestore\0"
	"v4l2_m2m_next_buf\0"
	"pfn_is_map_memory\0"
	"mtk_vcodec_in_out_trace_count\0"
	"ns_to_timespec64\0"
	"dma_buf_put\0"
	"v4l2_m2m_buf_queue_check\0"
	"queue_work_on\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"wait_for_completion_interruptible\0"
	"flush_work\0"
	"timer_delete_sync\0"
	"mtk_vcodec_dma_unmap_detach\0"
	"dma_buf_vunmap_unlocked\0"
	"dma_buf_end_cpu_access\0"
	"sized_strscpy\0"
	"v4l_fill_mtk_fmtdesc\0"
	"is_vcp_ao_ex\0"
	"bitmap_zalloc\0"
	"mtk_vcodec_set_state_from\0"
	"__wake_up\0"
	"__list_add_valid_or_report\0"
	"v4l2_m2m_reqbufs\0"
	"__bitmap_weight\0"
	"vb2_buffer_done\0"
	"_find_next_bit\0"
	"v4l2_m2m_qbuf\0"
	"v4l2_m2m_dqbuf\0"
	"v4l2_event_subscribe\0"
	"v4l2_src_change_event_subscribe\0"
	"v4l2_ctrl_subscribe_event\0"
	"set_user_nice\0"
	"kthread_should_stop\0"
	"__list_del_entry_valid_or_report\0"
	"mtk_vcodec_get_fb\0"
	"vb2_plane_vaddr\0"
	"v4l2_m2m_job_finish\0"
	"vb2_plane_cookie\0"
	"set_normalized_timespec64\0"
	"mod_timer\0"
	"nsecs_to_jiffies\0"
	"jiffies_to_usecs\0"
	"complete_all\0"
	"__init_swait_queue_head\0"
	"init_timer_key\0"
	"mtk_vcodec_get_log\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"v4l2_ctrl_new_custom\0"
	"vb2_ops_wait_prepare\0"
	"vb2_ops_wait_finish\0"
	"mtk_vcodec_dma_attach_map\0"
	"mtk_dma_sync_sg_range\0"
	"dma_buf_get\0"
	"__dma_sync_sg_for_device\0"
	"__dma_sync_sg_for_cpu\0"
	"mtk_dma_buf_set_name\0"
	"vb2_dma_contig_memops\0"
	"memstart_addr\0"
	"jiffies\0"
	"devm_clk_get\0"
	"clk_set_rate\0"
	"device_link_add\0"
	"strncmp\0"
	"pm_runtime_enable\0"
	"jiffies_to_msecs\0"
	"mtk_smi_dbg_register_pwr_ctrl_cb\0"
	"mtk_smi_dbg_unregister_pwr_ctrl_cb\0"
	"mtk_iommu_register_fault_callback\0"
	"__pm_runtime_disable\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"clk_disable\0"
	"dump_stack\0"
	"__pm_runtime_idle\0"
	"slbc_gid_request\0"
	"slbc_validate\0"
	"dma_buf_get_gid\0"
	"slbc_read_invalidate\0"
	"slbc_invalidate\0"
	"slbc_gid_release\0"
	"slbc_roi_update\0"
	"mtk_vcodec_add_ctx_list\0"
	"mtk_vcodec_set_curr_ctx\0"
	"enable_irq\0"
	"disable_irq\0"
	"mtk_thermal_hint_notify_register\0"
	"dev_pm_opp_of_add_table\0"
	"devm_regulator_get_optional\0"
	"dev_pm_opp_get_opp_count\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_put\0"
	"of_mtk_icc_get\0"
	"dev_pm_opp_get_voltage\0"
	"regulator_set_voltage\0"
	"mtk_icc_set_bw\0"
	"vfree\0"
	"vzalloc_noprof\0"
	"of_property_count_elems_of_size\0"
	"mtk_vcodec_ctx_list_empty\0"
	"mtk_vcodec_check_alive\0"
	"add_timer\0"
	"mtk_vcodec_set_cpu_hint\0"
	"mtk_set_pf_ctrl_enable\0"
	"mtk_get_pf_ctrl_enable\0"
	"slbc_disable_dcc\0"
	"get_target_margin_low\0"
	"set_turn_point_freq\0"
	"set_target_margin\0"
	"set_target_margin_low\0"
	"unset_target_margin\0"
	"unset_target_margin_low\0"
	"is_runnable_boost_enable\0"
	"set_runnable_boost_enable\0"
	"unset_runnable_boost_enable\0"
	"ktime_get_with_offset\0"
	"mtk_vcodec_gce_timeout_dump\0"
	"mtk_vcodec_wait_for_done_ctx\0"
	"schedule_timeout\0"
	"dma_resv_iter_first_unlocked\0"
	"mtk_vcodec_fence_signal\0"
	"dma_resv_iter_next_unlocked\0"
	"dma_fence_release\0"
	"refcount_warn_saturate\0"
	"usleep_range_state\0"
	"sched_setscheduler\0"
	"vcp_get_reserve_mem_phys_ex\0"
	"vcp_get_reserve_mem_virt_ex\0"
	"vcp_get_ipidev\0"
	"mtk_ipi_send\0"
	"mtk_vcodec_dump_ctx_list\0"
	"vcp_cmd_ex\0"
	"mtk_smi_dbg_dump_for_vdec\0"
	"mmdvfs_debug_status_dump\0"
	"mtk_smi_dbg_hang_detect\0"
	"mtk_ipi_register\0"
	"vcp_A_register_notify_ex\0"
	"vcp_get_reserve_mem_size_ex\0"
	"mtk_vcodec_alloc_mem\0"
	"is_vcp_ready_ex\0"
	"mtk_emidbg_dump\0"
	"dump_vcp_irq_status_ex\0"
	"__msecs_to_jiffies\0"
	"mtk_vcodec_free_mem\0"
	"mtk_vcodec_vp_mode_buf_prepare\0"
	"mtk_vcodec_get_curr_ctx\0"
	"mtk_vcodec_vp_mode_buf_unprepare\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-vcodec-common,vcp_status,mtk-mmdvfs-v3,system_heap,mtk-smi-dbg,iommu_debug,mtk_slbc,thermal_interface,mtk-icc-core,cpudvfs,cpufreq_sugov_ext,mtk_tinysys_ipi,mtk-mmdvfs-debug,emi");

MODULE_ALIAS("of:N*T*Cmediatek,vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,vdec_gcon");
MODULE_ALIAS("of:N*T*Cmediatek,vdec_gconC*");

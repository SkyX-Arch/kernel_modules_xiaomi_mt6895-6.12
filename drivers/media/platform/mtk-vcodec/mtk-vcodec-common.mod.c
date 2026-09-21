#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_vcodec_set_dev, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_check_alive, "_gpl", "");
KSYMTAB_DATA(mtk_vcodec_dbg, "_gpl", "");
KSYMTAB_DATA(mtk_vcodec_perf, "_gpl", "");
KSYMTAB_DATA(mtk_v4l2_dbg_level, "_gpl", "");
KSYMTAB_DATA(mtk_vdec_lpw_level, "_gpl", "");
KSYMTAB_DATA(mtk_vcodec_trace_enable, "_gpl", "");
KSYMTAB_DATA(mtk_vcodec_vcp, "_gpl", "");
KSYMTAB_DATA(mtk_vcodec_dvfs_qos_log_en, "_gpl", "");
KSYMTAB_DATA(mtk_vdec_property, "", "");
KSYMTAB_DATA(mtk_venc_property, "", "");
KSYMTAB_DATA(mtk_vdec_vcp_log, "", "");
KSYMTAB_DATA(mtk_venc_vcp_log, "", "");
KSYMTAB_DATA(mtk_venc_slb_cb, "", "");
KSYMTAB_DATA(mtk_vdec_open_cgrp_delay, "_gpl", "");
KSYMTAB_DATA(mtk_vdec_slc_enable, "_gpl", "");
KSYMTAB_DATA(mtk_vdec_acp_enable, "_gpl", "");
KSYMTAB_DATA(mtk_venc_acp_enable, "_gpl", "");
KSYMTAB_DATA(mtk_venc_input_acp_enable, "_gpl", "");
KSYMTAB_DATA(mtk_vdec_acp_debug, "_gpl", "");
KSYMTAB_DATA(vcu_func, "_gpl", "");
KSYMTAB_DATA(support_svp_region, "_gpl", "");
KSYMTAB_DATA(support_wfd_region, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_chipid, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_is_vcp, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_state_in_range, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_is_state, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_state, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_state_from, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_state_except, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_state, "_gpl", "");
KSYMTAB_DATA(venc_disable_hw_break, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_register_trace, "", "");
KSYMTAB_FUNC(vcodec_trace, "", "");
KSYMTAB_FUNC(mtk_vcodec_in_out_trace_count, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_dec_reg_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_enc_reg_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_curr_ctx, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_curr_ctx, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_add_ctx_list, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_del_ctx_list, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_ctx_list_empty, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_dump_ctx_list, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_op_by_pid, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_cpu_hint, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_init_slice_info, "", "");
KSYMTAB_FUNC(mtk_vcodec_get_fb, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_bs, "", "");
KSYMTAB_FUNC(v4l2_m2m_buf_queue_check, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_src_buf_remove_check, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_dst_buf_remove_check, "_gpl", "");
KSYMTAB_FUNC(mtk_dma_sync_sg_range, "", "");
KSYMTAB_FUNC(v4l_fill_mtk_fmtdesc, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_dma_attach_map, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_dma_unmap_detach, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_alloc_mem, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_free_mem, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_vp_mode_buf_prepare, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_vp_mode_buf_unprepare, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_set_log, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_get_log, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_vgo_send, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_send_info_to_vgo, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_wait_for_done_ctx, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_dec_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_lat_dec_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_line_count_irq_handler, "", "");
KSYMTAB_FUNC(mtk_vcodec_enc_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_c1_enc_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_dec_irq_setup, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_enc_irq_setup, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_gce_timeout_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fence_signal, "", "");
KSYMTAB_FUNC(mtk_vcodec_create_fence, "", "");

SYMBOL_CRC(mtk_vcodec_set_dev, 0x41812116, "_gpl");
SYMBOL_CRC(mtk_vcodec_check_alive, 0xa3f122e9, "_gpl");
SYMBOL_CRC(mtk_vcodec_dbg, 0x8de528fb, "_gpl");
SYMBOL_CRC(mtk_vcodec_perf, 0x77f7811a, "_gpl");
SYMBOL_CRC(mtk_v4l2_dbg_level, 0x313401e5, "_gpl");
SYMBOL_CRC(mtk_vdec_lpw_level, 0xdb2ecddb, "_gpl");
SYMBOL_CRC(mtk_vcodec_trace_enable, 0x287e4788, "_gpl");
SYMBOL_CRC(mtk_vcodec_vcp, 0x7d817ffb, "_gpl");
SYMBOL_CRC(mtk_vcodec_dvfs_qos_log_en, 0x4456ca7b, "_gpl");
SYMBOL_CRC(mtk_vdec_property, 0x4144fca1, "");
SYMBOL_CRC(mtk_venc_property, 0xed40812a, "");
SYMBOL_CRC(mtk_vdec_vcp_log, 0xe395f0a0, "");
SYMBOL_CRC(mtk_venc_vcp_log, 0x5b113b8b, "");
SYMBOL_CRC(mtk_venc_slb_cb, 0x3f26cfd6, "");
SYMBOL_CRC(mtk_vdec_open_cgrp_delay, 0xe84ecab5, "_gpl");
SYMBOL_CRC(mtk_vdec_slc_enable, 0xd51da8ca, "_gpl");
SYMBOL_CRC(mtk_vdec_acp_enable, 0x47c1f0f9, "_gpl");
SYMBOL_CRC(mtk_venc_acp_enable, 0xb10210fc, "_gpl");
SYMBOL_CRC(mtk_venc_input_acp_enable, 0x0951545e, "_gpl");
SYMBOL_CRC(mtk_vdec_acp_debug, 0x7da209d8, "_gpl");
SYMBOL_CRC(vcu_func, 0x88ab5185, "_gpl");
SYMBOL_CRC(support_svp_region, 0x0e78b31d, "_gpl");
SYMBOL_CRC(support_wfd_region, 0x6823520a, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_chipid, 0x3f2465d8, "_gpl");
SYMBOL_CRC(mtk_vcodec_is_vcp, 0x5e9ec63c, "_gpl");
SYMBOL_CRC(mtk_vcodec_state_in_range, 0xb1da0206, "_gpl");
SYMBOL_CRC(mtk_vcodec_is_state, 0x6f1d8445, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_state, 0x616c4d73, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_state_from, 0xba81dd80, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_state_except, 0xf6abdf8a, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_state, 0x98548440, "_gpl");
SYMBOL_CRC(venc_disable_hw_break, 0x5f74cf9a, "_gpl");
SYMBOL_CRC(mtk_vcodec_register_trace, 0x9f00ce62, "");
SYMBOL_CRC(vcodec_trace, 0x2e03c4c3, "");
SYMBOL_CRC(mtk_vcodec_in_out_trace_count, 0xa846541f, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_dec_reg_addr, 0x2ad7ac01, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_enc_reg_addr, 0x4bd5e2f1, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_curr_ctx, 0xfb3bd834, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_curr_ctx, 0x98525fd6, "_gpl");
SYMBOL_CRC(mtk_vcodec_add_ctx_list, 0xe31386d6, "_gpl");
SYMBOL_CRC(mtk_vcodec_del_ctx_list, 0x966fde5c, "_gpl");
SYMBOL_CRC(mtk_vcodec_ctx_list_empty, 0x6a268403, "_gpl");
SYMBOL_CRC(mtk_vcodec_dump_ctx_list, 0x9ec9ebb7, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_op_by_pid, 0x0264df32, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_cpu_hint, 0x0041d6dd, "_gpl");
SYMBOL_CRC(mtk_vcodec_init_slice_info, 0xb7807f44, "");
SYMBOL_CRC(mtk_vcodec_get_fb, 0xf08f89c2, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_bs, 0x4c9b89fc, "");
SYMBOL_CRC(v4l2_m2m_buf_queue_check, 0x564e4893, "_gpl");
SYMBOL_CRC(v4l2_m2m_src_buf_remove_check, 0xab1fdd1a, "_gpl");
SYMBOL_CRC(v4l2_m2m_dst_buf_remove_check, 0x5eabd1f5, "_gpl");
SYMBOL_CRC(mtk_dma_sync_sg_range, 0xfac965ef, "");
SYMBOL_CRC(v4l_fill_mtk_fmtdesc, 0x6ea2ae0a, "_gpl");
SYMBOL_CRC(mtk_vcodec_dma_attach_map, 0x9f249c10, "_gpl");
SYMBOL_CRC(mtk_vcodec_dma_unmap_detach, 0x9e0f82e9, "_gpl");
SYMBOL_CRC(mtk_vcodec_alloc_mem, 0x87bfd2c9, "_gpl");
SYMBOL_CRC(mtk_vcodec_free_mem, 0x36098ba8, "_gpl");
SYMBOL_CRC(mtk_vcodec_vp_mode_buf_prepare, 0xdec13d25, "_gpl");
SYMBOL_CRC(mtk_vcodec_vp_mode_buf_unprepare, 0x8ba04d05, "_gpl");
SYMBOL_CRC(mtk_vcodec_set_log, 0x3c3f0379, "_gpl");
SYMBOL_CRC(mtk_vcodec_get_log, 0x05a064d7, "_gpl");
SYMBOL_CRC(mtk_vcodec_vgo_send, 0x7faa791c, "_gpl");
SYMBOL_CRC(mtk_vcodec_send_info_to_vgo, 0x0b90d228, "_gpl");
SYMBOL_CRC(mtk_vcodec_wait_for_done_ctx, 0x96030f7e, "_gpl");
SYMBOL_CRC(mtk_vcodec_dec_irq_handler, 0x85ada4b3, "_gpl");
SYMBOL_CRC(mtk_vcodec_lat_dec_irq_handler, 0x6cb223e9, "_gpl");
SYMBOL_CRC(mtk_vcodec_line_count_irq_handler, 0x08be33a7, "");
SYMBOL_CRC(mtk_vcodec_enc_irq_handler, 0x995408ab, "_gpl");
SYMBOL_CRC(mtk_vcodec_c1_enc_irq_handler, 0xc5f155f9, "_gpl");
SYMBOL_CRC(mtk_vcodec_dec_irq_setup, 0xf069a5bd, "_gpl");
SYMBOL_CRC(mtk_vcodec_enc_irq_setup, 0x61032ac4, "_gpl");
SYMBOL_CRC(mtk_vcodec_gce_timeout_dump, 0xc9ab4b6a, "_gpl");
SYMBOL_CRC(mtk_vcodec_fence_signal, 0x2b98a5ef, "");
SYMBOL_CRC(mtk_vcodec_create_fence, 0xf3282a4d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x24d273d1, "add_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x56470118, "__warn_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x00148653, "vsnprintf" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbdc3209b, "set_top_grp_aware" },
	{ 0x9f4a058d, "set_grp_awr_min_opp_margin" },
	{ 0x5942dabc, "set_grp_awr_thr" },
	{ 0xa4ff9585, "dma_resv_add_fence" },
	{ 0x56166861, "vb2_plane_vaddr" },
	{ 0x66e211ff, "v4l2_m2m_buf_queue" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0x037a0cba, "kfree" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0x2e2980cc, "dma_buf_begin_cpu_access" },
	{ 0x27929ba7, "dma_buf_end_cpu_access" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x188ead67, "ww_mutex_lock" },
	{ 0x191c4b97, "ww_mutex_unlock" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xca85fa22, "v4l2_m2m_next_buf" },
	{ 0xf1a3f8fa, "vb2_plane_cookie" },
	{ 0xb43af541, "v4l2_m2m_buf_remove" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x9b3ab3da, "dma_fence_array_create" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x8a833583, "dma_fence_array_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x24d273d1,
	0x92997ed8,
	0x3b1b6444,
	0x56470118,
	0x656e4a6e,
	0x34db050b,
	0x00148653,
	0xd5977bfb,
	0xed55cabd,
	0xbdc3209b,
	0x9f4a058d,
	0x5942dabc,
	0xa4ff9585,
	0x56166861,
	0x66e211ff,
	0xb3f985a8,
	0x037a0cba,
	0xfbe215e4,
	0xc8c85086,
	0xfff4bd7c,
	0xe70e1ef3,
	0xf1e3c830,
	0xecbe3c62,
	0xeff75c0b,
	0xe49fbbe6,
	0x0904e8ad,
	0x69020168,
	0x18500fa9,
	0x2e2980cc,
	0x27929ba7,
	0x7640bcae,
	0xbee3ddd5,
	0x999e8297,
	0x85df9b6c,
	0xe2d5255a,
	0xc5b6f236,
	0xb318cbab,
	0x75ca79b5,
	0xd35cce70,
	0x7e19152a,
	0xc6f46339,
	0x9a835040,
	0x9166fc03,
	0x82ee90dc,
	0x29161415,
	0xd9346889,
	0x8d522714,
	0x0296695f,
	0xe5010018,
	0x2469810f,
	0x188ead67,
	0x191c4b97,
	0xe123f3d9,
	0xca85fa22,
	0xf1a3f8fa,
	0xb43af541,
	0xe17134b6,
	0xdd2ef3e5,
	0xfa501412,
	0x476b165a,
	0x98cf60b3,
	0xa916b694,
	0x3854774b,
	0x15ba50a6,
	0x0f05f001,
	0xefe8a82e,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xe2964344,
	0xf7ca28dd,
	0x3ce4ca6f,
	0x7f02188f,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xf9583f23,
	0xaacf03c1,
	0x14605535,
	0xdeb99119,
	0x9b3ab3da,
	0x52c5c991,
	0x44c10a52,
	0xb2fb935e,
	0x8a833583,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"add_timer\0"
	"_printk\0"
	"of_get_property\0"
	"__warn_printk\0"
	"snprintf\0"
	"_raw_spin_lock_irqsave\0"
	"vsnprintf\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"set_top_grp_aware\0"
	"set_grp_awr_min_opp_margin\0"
	"set_grp_awr_thr\0"
	"dma_resv_add_fence\0"
	"vb2_plane_vaddr\0"
	"v4l2_m2m_buf_queue\0"
	"sg_alloc_table\0"
	"kfree\0"
	"sg_next\0"
	"sg_free_table\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"mtk_dma_buf_set_name\0"
	"dma_heap_buffer_free\0"
	"dma_buf_vmap_unlocked\0"
	"dma_buf_begin_cpu_access\0"
	"dma_buf_end_cpu_access\0"
	"dma_buf_vunmap_unlocked\0"
	"vzalloc_noprof\0"
	"vfree\0"
	"strsep\0"
	"strcmp\0"
	"queue_work_on\0"
	"of_find_node_opts_by_path\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_add_valid_or_report\0"
	"init_timer_key\0"
	"__list_del_entry_valid_or_report\0"
	"__flush_workqueue\0"
	"timer_delete_sync\0"
	"find_task_by_vpid\0"
	"sched_setattr_nocheck\0"
	"__rcu_read_lock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"__rcu_read_unlock\0"
	"ww_mutex_lock\0"
	"ww_mutex_unlock\0"
	"dma_fence_release\0"
	"v4l2_m2m_next_buf\0"
	"vb2_plane_cookie\0"
	"v4l2_m2m_buf_remove\0"
	"__kmalloc_cache_noprof\0"
	"__dma_sync_sg_for_device\0"
	"__dma_sync_sg_for_cpu\0"
	"sized_strscpy\0"
	"strlen\0"
	"strnlen\0"
	"kstrtoll\0"
	"jiffies\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__wake_up\0"
	"platform_get_irq\0"
	"disable_irq\0"
	"__msecs_to_jiffies\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"devm_request_threaded_irq\0"
	"dma_fence_signal\0"
	"dma_fence_context_alloc\0"
	"dma_fence_init\0"
	"dma_fence_array_create\0"
	"__kmalloc_noprof\0"
	"kvfree_call_rcu\0"
	"param_ops_int\0"
	"dma_fence_array_ops\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scheduler,system_heap");


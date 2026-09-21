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
	{ 0xa95dc2ca, "vb2_ops_wait_prepare" },
	{ 0x2d6ea4da, "vb2_ops_wait_finish" },
	{ 0x92997ed8, "_printk" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0x5b77c8de, "dma_buf_begin_cpu_access_partial" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0xca85fa22, "v4l2_m2m_next_buf" },
	{ 0xb43af541, "v4l2_m2m_buf_remove" },
	{ 0xe0e08877, "vb2_buffer_done" },
	{ 0x392d71a6, "v4l2_m2m_last_buffer_done" },
	{ 0x56166861, "vb2_plane_vaddr" },
	{ 0x869692a0, "v4l2_m2m_get_vq" },
	{ 0x66e211ff, "v4l2_m2m_buf_queue" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x7d20fbc2, "v4l2_event_queue_fh" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc9699ec5, "v4l2_m2m_job_finish" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xf1a3f8fa, "vb2_plane_cookie" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x97685821, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x34da767f, "v4l2_m2m_ioctl_querybuf" },
	{ 0xdc18e2ab, "v4l2_m2m_ioctl_expbuf" },
	{ 0x8cceddfd, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x409f68ce, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xf5de0b70, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x23f40ab4, "v4l2_m2m_ioctl_streamon" },
	{ 0x2070bcf2, "v4l2_m2m_ioctl_streamoff" },
	{ 0x7500f874, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x6db6bfc6, "v4l2_event_unsubscribe" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x372d5b4a, "video_devdata" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x993115cb, "v4l2_m2m_qbuf" },
	{ 0xf73fc5a5, "v4l2_m2m_ioctl_decoder_cmd" },
	{ 0x0c63da46, "v4l2_src_change_event_subscribe" },
	{ 0x20e57009, "v4l2_event_subscribe" },
	{ 0x6e0e44c0, "v4l2_ctrl_subscribe_event" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x53262a34, "mtk_smi_larb_enable" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xc56c09ba, "mmdvfs_get_version" },
	{ 0x7eb4d0e0, "mtk_mmdvfs_enable_vcp" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xbc6d29da, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0x82c90b6e, "v4l2_m2m_ioctl_encoder_cmd" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x401167cc, "_dev_info" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x0bd17e97, "v4l2_device_register" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x4a794ef1, "video_device_alloc" },
	{ 0x1976ea8e, "video_device_release" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xb14c72d6, "v4l2_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6b201699, "of_find_property" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x6793cb57, "devm_clk_bulk_get" },
	{ 0x234c9de3, "put_device" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0xe9c4aca5, "v4l2_m2m_fop_poll" },
	{ 0x086324c4, "video_ioctl2" },
	{ 0x99e5e6e4, "v4l2_m2m_fop_mmap" },
	{ 0x2c2067df, "mutex_lock_interruptible" },
	{ 0x40b1171e, "v4l2_fh_init" },
	{ 0xd7448d00, "v4l2_fh_add" },
	{ 0x5fc4b410, "v4l2_m2m_ctx_init" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7a01c5e3, "v4l2_fh_del" },
	{ 0xb799696e, "v4l2_fh_exit" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x3b7b22c0, "vb2_queue_init" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0xcf322846, "v4l2_ctrl_handler_setup" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x089a8c5a, "v4l2_m2m_ctx_release" },
	{ 0x6b85895c, "mtk_smi_larb_disable" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x7a2b8b2c, "__video_register_device" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x28b1b1f4, "video_unregister_device" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2cca8e1e, "vb2_dma_contig_memops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xa95dc2ca,
	0x2d6ea4da,
	0x92997ed8,
	0xfff4bd7c,
	0xe70e1ef3,
	0x5b77c8de,
	0xf1e3c830,
	0xecbe3c62,
	0xca85fa22,
	0xb43af541,
	0xe0e08877,
	0x392d71a6,
	0x56166861,
	0x869692a0,
	0x66e211ff,
	0x75ca79b5,
	0x7d20fbc2,
	0x9e87b2ff,
	0x459e133f,
	0xb4ce05a5,
	0xc9699ec5,
	0x13269d10,
	0x34db050b,
	0x4eb4c414,
	0x42ad47ad,
	0xf1a3f8fa,
	0xd35cce70,
	0x97685821,
	0x34da767f,
	0xdc18e2ab,
	0x8cceddfd,
	0x409f68ce,
	0xf5de0b70,
	0x23f40ab4,
	0x2070bcf2,
	0x7500f874,
	0x6db6bfc6,
	0x656e4a6e,
	0x372d5b4a,
	0x476b165a,
	0xa916b694,
	0xe2d5255a,
	0x993115cb,
	0xf73fc5a5,
	0x0c63da46,
	0x20e57009,
	0x6e0e44c0,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x7f24de73,
	0x53262a34,
	0xead5c8e5,
	0xc7a7e770,
	0x63c08029,
	0x6d25698b,
	0xe136f93c,
	0xc2a5a5eb,
	0xf644e56a,
	0xb3bceb42,
	0x2220455c,
	0xc56c09ba,
	0x7eb4d0e0,
	0x76d9b876,
	0xbc6d29da,
	0x82c90b6e,
	0x12db679a,
	0xa571f6b0,
	0x14fe5355,
	0xc6f46339,
	0xffeedf6a,
	0x401167cc,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xee73d233,
	0x31b65f04,
	0xf7ca28dd,
	0x0bd17e97,
	0x730f2eae,
	0x4a794ef1,
	0x1976ea8e,
	0xd4e81a21,
	0xc6fca5ad,
	0xb14c72d6,
	0xc8c7229e,
	0xa823db6e,
	0xf3cdc3c6,
	0x1fec5304,
	0x6b201699,
	0xa079425d,
	0xf9583f23,
	0x0be515ae,
	0x6793cb57,
	0x234c9de3,
	0xcd6bb6eb,
	0x2ccea269,
	0xea23ff02,
	0x166667b7,
	0x502a8c68,
	0x1f0a95af,
	0xe9c4aca5,
	0x086324c4,
	0x99e5e6e4,
	0x2c2067df,
	0x40b1171e,
	0xd7448d00,
	0x5fc4b410,
	0x1b00f04b,
	0xed55cabd,
	0x7a01c5e3,
	0xb799696e,
	0x037a0cba,
	0xe17134b6,
	0x3b7b22c0,
	0x1f9923b3,
	0x6823b9fe,
	0xcf322846,
	0xd5977bfb,
	0x089a8c5a,
	0x6b85895c,
	0x479f7d4b,
	0x7a2b8b2c,
	0x5be9ce07,
	0xea6f49c8,
	0x28b1b1f4,
	0x5c27c40f,
	0x6fc35f2b,
	0xb2fb935e,
	0x2d3385d3,
	0x15ba50a6,
	0x0f05f001,
	0xefe8a82e,
	0x2cca8e1e,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vb2_ops_wait_prepare\0"
	"vb2_ops_wait_finish\0"
	"_printk\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_begin_cpu_access_partial\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_detach\0"
	"v4l2_m2m_next_buf\0"
	"v4l2_m2m_buf_remove\0"
	"vb2_buffer_done\0"
	"v4l2_m2m_last_buffer_done\0"
	"vb2_plane_vaddr\0"
	"v4l2_m2m_get_vq\0"
	"v4l2_m2m_buf_queue\0"
	"__fortify_panic\0"
	"v4l2_event_queue_fh\0"
	"cancel_delayed_work\0"
	"v4l2_m2m_get_curr_priv\0"
	"_dev_err\0"
	"v4l2_m2m_job_finish\0"
	"__pm_runtime_idle\0"
	"_raw_spin_lock_irqsave\0"
	"__pm_runtime_resume\0"
	"queue_delayed_work_on\0"
	"vb2_plane_cookie\0"
	"_raw_spin_unlock_irqrestore\0"
	"v4l2_m2m_ioctl_reqbufs\0"
	"v4l2_m2m_ioctl_querybuf\0"
	"v4l2_m2m_ioctl_expbuf\0"
	"v4l2_m2m_ioctl_dqbuf\0"
	"v4l2_m2m_ioctl_create_bufs\0"
	"v4l2_m2m_ioctl_prepare_buf\0"
	"v4l2_m2m_ioctl_streamon\0"
	"v4l2_m2m_ioctl_streamoff\0"
	"v4l2_m2m_ioctl_try_decoder_cmd\0"
	"v4l2_event_unsubscribe\0"
	"snprintf\0"
	"video_devdata\0"
	"sized_strscpy\0"
	"strnlen\0"
	"strcmp\0"
	"v4l2_m2m_qbuf\0"
	"v4l2_m2m_ioctl_decoder_cmd\0"
	"v4l2_src_change_event_subscribe\0"
	"v4l2_event_subscribe\0"
	"v4l2_ctrl_subscribe_event\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"jiffies_to_usecs\0"
	"mtk_smi_larb_enable\0"
	"clk_bulk_prepare\0"
	"clk_bulk_enable\0"
	"clk_bulk_unprepare\0"
	"mtk_icc_set_bw\0"
	"of_property_read_variable_u32_array\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"regulator_set_voltage\0"
	"mmdvfs_get_version\0"
	"mtk_mmdvfs_enable_vcp\0"
	"clk_set_rate\0"
	"v4l2_m2m_ioctl_try_encoder_cmd\0"
	"v4l2_m2m_ioctl_encoder_cmd\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"of_device_get_match_data\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"_dev_info\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"devm_ioremap\0"
	"of_property_read_u32_index\0"
	"platform_get_irq\0"
	"v4l2_device_register\0"
	"v4l2_m2m_init\0"
	"video_device_alloc\0"
	"video_device_release\0"
	"pm_runtime_enable\0"
	"v4l2_m2m_release\0"
	"v4l2_device_unregister\0"
	"devm_kmalloc\0"
	"of_find_device_by_node\0"
	"of_find_compatible_node\0"
	"__of_parse_phandle_with_args\0"
	"of_find_property\0"
	"of_property_count_elems_of_size\0"
	"devm_request_threaded_irq\0"
	"device_link_add\0"
	"devm_clk_bulk_get\0"
	"put_device\0"
	"dev_pm_opp_of_add_table\0"
	"devm_regulator_get_optional\0"
	"devm_clk_get\0"
	"dev_pm_opp_get_opp_count\0"
	"of_property_match_string\0"
	"of_mtk_icc_get\0"
	"v4l2_m2m_fop_poll\0"
	"video_ioctl2\0"
	"v4l2_m2m_fop_mmap\0"
	"mutex_lock_interruptible\0"
	"v4l2_fh_init\0"
	"v4l2_fh_add\0"
	"v4l2_m2m_ctx_init\0"
	"v4l2_ctrl_handler_init_class\0"
	"mutex_unlock\0"
	"v4l2_fh_del\0"
	"v4l2_fh_exit\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"vb2_queue_init\0"
	"v4l2_ctrl_new_std\0"
	"v4l2_ctrl_handler_free\0"
	"v4l2_ctrl_handler_setup\0"
	"mutex_lock\0"
	"v4l2_m2m_ctx_release\0"
	"mtk_smi_larb_disable\0"
	"clk_bulk_disable\0"
	"__video_register_device\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"video_unregister_device\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"system_wq\0"
	"jiffies\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"vb2_dma_contig_memops\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-smi,mtk-icc-core,mtk-mmdvfs-v3");

MODULE_ALIAS("of:N*T*Cmediatek,mt8173-jpgdec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-jpgdecC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-jpgdec");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-jpgdecC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgenc");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgencC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgenc_c1");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgenc_c1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgenc_c0_c1");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-jpgenc_c0_c1C*");

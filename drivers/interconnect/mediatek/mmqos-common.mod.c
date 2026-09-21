#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_mmqos_is_dualpipe_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_system_qos_update, "_gpl", "");
KSYMTAB_FUNC(mmqos_stop_record, "_gpl", "");
KSYMTAB_FUNC(update_channel_bw, "_gpl", "");
KSYMTAB_FUNC(get_mm_bw_data_for_mbrain, "", "");
KSYMTAB_FUNC(calculate_hrt_total_bw, "_gpl", "");
KSYMTAB_FUNC(mmqos_hrt_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_probe, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_v2_probe, "_gpl", "");
KSYMTAB_FUNC(clear_chnn_bw, "_gpl", "");
KSYMTAB_FUNC(check_disp_chnn_bw, "_gpl", "");
KSYMTAB_FUNC(check_chnn_bw, "_gpl", "");
KSYMTAB_FUNC(create_fake_comm_port_node, "_gpl", "");
KSYMTAB_FUNC(mmqos_set_met, "_gpl", "");
KSYMTAB_FUNC(mmqos_debug_set_ftrace, "_gpl", "");
KSYMTAB_FUNC(set_mmqos_state, "_gpl", "");
KSYMTAB_FUNC(get_mmqos_state, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_remove, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_get_avail_hrt_bw, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_get_cam_hrt, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_register_bw_throttle_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_unregister_bw_throttle_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_wait_throttle_done, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_set_hrt_bw, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_get_hrt_ratio, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_hrt_scen, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_set_md_type, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_init_hrt, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_register_hrt_sysfs, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_unregister_hrt_sysfs, "_gpl", "");
KSYMTAB_FUNC(mmqos_kernel_test, "_gpl", "");
KSYMTAB_FUNC(mmqos_get_vcp_base, "_gpl", "");
KSYMTAB_FUNC(mmqos_is_init_done, "_gpl", "");
KSYMTAB_FUNC(mmqos_vcp_ipi_send, "_gpl", "");
KSYMTAB_FUNC(mtk_mmqos_enable_vcp, "_gpl", "");
KSYMTAB_FUNC(mmqos_vcp_init_thread, "_gpl", "");
KSYMTAB_FUNC(mmqos_mmup_init_thread, "_gpl", "");

SYMBOL_CRC(mtk_mmqos_is_dualpipe_enable, 0xb6c47456, "_gpl");
SYMBOL_CRC(mtk_mmqos_system_qos_update, 0x58fc193b, "_gpl");
SYMBOL_CRC(mmqos_stop_record, 0x92dcbd41, "_gpl");
SYMBOL_CRC(update_channel_bw, 0x913ed035, "_gpl");
SYMBOL_CRC(get_mm_bw_data_for_mbrain, 0x9410e4c1, "");
SYMBOL_CRC(calculate_hrt_total_bw, 0x18636646, "_gpl");
SYMBOL_CRC(mmqos_hrt_dump, 0x28100ea4, "_gpl");
SYMBOL_CRC(mtk_mmqos_probe, 0xc82cb3fd, "_gpl");
SYMBOL_CRC(mtk_mmqos_v2_probe, 0x23d814df, "_gpl");
SYMBOL_CRC(clear_chnn_bw, 0x011164fe, "_gpl");
SYMBOL_CRC(check_disp_chnn_bw, 0x310d8640, "_gpl");
SYMBOL_CRC(check_chnn_bw, 0xab20f058, "_gpl");
SYMBOL_CRC(create_fake_comm_port_node, 0x4320778b, "_gpl");
SYMBOL_CRC(mmqos_set_met, 0x72991830, "_gpl");
SYMBOL_CRC(mmqos_debug_set_ftrace, 0x826c1e67, "_gpl");
SYMBOL_CRC(set_mmqos_state, 0xa9862de0, "_gpl");
SYMBOL_CRC(get_mmqos_state, 0xe5041c73, "_gpl");
SYMBOL_CRC(mtk_mmqos_remove, 0xe484a9a8, "_gpl");
SYMBOL_CRC(mtk_mmqos_get_avail_hrt_bw, 0xc919a04e, "_gpl");
SYMBOL_CRC(mtk_mmqos_get_cam_hrt, 0x15bd5cb7, "_gpl");
SYMBOL_CRC(mtk_mmqos_register_bw_throttle_notifier, 0x783a7a9d, "_gpl");
SYMBOL_CRC(mtk_mmqos_unregister_bw_throttle_notifier, 0xb01420b0, "_gpl");
SYMBOL_CRC(mtk_mmqos_wait_throttle_done, 0x047c826f, "_gpl");
SYMBOL_CRC(mtk_mmqos_set_hrt_bw, 0x85f1a0f0, "_gpl");
SYMBOL_CRC(mtk_mmqos_get_hrt_ratio, 0x66026d1d, "_gpl");
SYMBOL_CRC(mtk_mmqos_hrt_scen, 0xe85e80b7, "_gpl");
SYMBOL_CRC(mtk_mmqos_set_md_type, 0xcf63969b, "_gpl");
SYMBOL_CRC(mtk_mmqos_init_hrt, 0xda182b0b, "_gpl");
SYMBOL_CRC(mtk_mmqos_register_hrt_sysfs, 0x0c6ced01, "_gpl");
SYMBOL_CRC(mtk_mmqos_unregister_hrt_sysfs, 0x591dca1b, "_gpl");
SYMBOL_CRC(mmqos_kernel_test, 0x3e117278, "_gpl");
SYMBOL_CRC(mmqos_get_vcp_base, 0x21c641cf, "_gpl");
SYMBOL_CRC(mmqos_is_init_done, 0x0590033c, "_gpl");
SYMBOL_CRC(mmqos_vcp_ipi_send, 0x2ffa0935, "_gpl");
SYMBOL_CRC(mtk_mmqos_enable_vcp, 0x93c9c521, "_gpl");
SYMBOL_CRC(mmqos_vcp_init_thread, 0x875c3b35, "_gpl");
SYMBOL_CRC(mmqos_mmup_init_thread, 0x90a2a4c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0x461afebf, "of_phandle_iterator_init" },
	{ 0x5ae8d936, "of_phandle_iterator_next" },
	{ 0x946de52f, "of_device_is_available" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0cfb2db5, "of_platform_device_create" },
	{ 0xe7a53457, "mtk_icc_provider_add" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xd3b1cf61, "mtk_icc_node_create" },
	{ 0x87439f1d, "mtk_icc_node_add" },
	{ 0x434fd13c, "mtk_icc_link_create" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0xd1edde11, "__rt_mutex_init" },
	{ 0x82de2cf6, "mtk_dramc_get_ddr_type" },
	{ 0x458ec8f9, "mtk_dramc_get_steps_freq" },
	{ 0xd702d989, "mtk_emicen_get_ch_cnt" },
	{ 0xadacaa18, "register_mmdvfs_notifier" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7324bcff, "mtk_icc_node_del" },
	{ 0xd6e12eba, "mtk_icc_node_destroy" },
	{ 0xef97eb74, "mtk_icc_provider_del" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x88f68e11, "unregister_mmdvfs_notifier" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x322c9d3b, "rt_mutex_lock" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x9a4f004e, "rt_mutex_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5be6773f, "mtk_smi_larb_bw_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x6cb988b8, "mtk_smi_common_bw_set" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x7eb4d0e0, "mtk_mmdvfs_enable_vcp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x43159e09, "get_mux_axi_pair_by_comm_port" },
	{ 0xcd96d90b, "mtk_smi_set_hrt_perm" },
	{ 0x89fb6c4f, "get_mux_axi_pair_by_larb" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0x252c7c6e, "dev_pm_opp_find_freq_floor" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x7d0f0af3, "mtk_smi_common_ostdl_set" },
	{ 0xb40b7068, "get_min_freq_from_axi_mon" },
	{ 0xba2df52b, "mtk_mmmc_set_ostdbl_by_larb" },
	{ 0x16f5dcb2, "mtk_mmmc_set_ostdbl" },
	{ 0x36381ea2, "mtk_mmmc_set_bw_limiter" },
	{ 0xd7a333dc, "mtk_mmmc_enable_axi_limiter" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x6b201699, "of_find_property" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1f4ba756, "param_get_uint" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa2f47ba2, "mtk_mmdvfs_debug_release_step0" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x543b2c3d, "mmmc_get_state" },
	{ 0xb1f33e13, "is_vcp_ready_ex" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2477f0b0, "vcp_cmd_ex" },
	{ 0x84072dc8, "vcp_get_ipidev" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0x101529b7, "is_vcp_suspending_ex" },
	{ 0x88b539b6, "vcp_register_feature_ex" },
	{ 0x4e86d8bc, "vcp_deregister_feature_ex" },
	{ 0x9c00ff0a, "vcp_get_reserve_mem_phys_ex" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xdb3ccf12, "iommu_iova_to_phys" },
	{ 0x885260b9, "vcp_get_reserve_mem_virt_ex" },
	{ 0x8e726dd5, "vcp_A_register_notify_ex" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x335fe0ad, "mtk_mmmc_smmu_factor_register_notifier" },
	{ 0xae2f8d0a, "mtk_mmmc_threshold_us_register_notifier" },
	{ 0x6d26a66a, "get_ostdbl_smmu_factor" },
	{ 0x71f2ae6a, "get_axi_mon_threshold_us" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0xdd115996,
	0x461afebf,
	0x5ae8d936,
	0x946de52f,
	0xa823db6e,
	0x0cfb2db5,
	0xe7a53457,
	0xa4f72277,
	0x14fe5355,
	0xd3b1cf61,
	0x87439f1d,
	0x434fd13c,
	0xea23ff02,
	0x556e4390,
	0x49eaeb64,
	0x2ccea269,
	0xcd6bb6eb,
	0xd1edde11,
	0x82de2cf6,
	0x458ec8f9,
	0xd702d989,
	0xadacaa18,
	0x5a6368f5,
	0x7518b5f0,
	0xb4028d67,
	0x49cd25ed,
	0xc6f46339,
	0xffeedf6a,
	0x7324bcff,
	0xd6e12eba,
	0xef97eb74,
	0xba0aee2e,
	0xce5bc4d0,
	0x88f68e11,
	0xcec49a87,
	0x8c03d20c,
	0x322c9d3b,
	0xb39378cc,
	0x9a4f004e,
	0xbcab6ee6,
	0x5be6773f,
	0x3c3ff9fd,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x3d10f515,
	0xe3c00b45,
	0x881d741f,
	0xa3783864,
	0x6cb988b8,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x7eb4d0e0,
	0x656e4a6e,
	0xc8c7229e,
	0xe17134b6,
	0xe136f93c,
	0x1fec5304,
	0x43159e09,
	0xcd96d90b,
	0x89fb6c4f,
	0xe94986d6,
	0xf70e4a4d,
	0x95bab132,
	0x2220455c,
	0xc2a5a5eb,
	0x252c7c6e,
	0xf644e56a,
	0xb3bceb42,
	0x7d0f0af3,
	0xb40b7068,
	0xba2df52b,
	0x16f5dcb2,
	0x36381ea2,
	0xd7a333dc,
	0x7e19152a,
	0x6b201699,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x42ad47ad,
	0x40863ba1,
	0x3b6c41ea,
	0xb3f7646e,
	0xf9a482f9,
	0xc3055d20,
	0x1f4ba756,
	0x9688de8b,
	0xe4bbc1dd,
	0x92acb4e9,
	0x0f05f001,
	0xefe8a82e,
	0xac594e02,
	0xaf56600a,
	0xd5977bfb,
	0xed55cabd,
	0xd9051672,
	0x3e54ac69,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xa2f47ba2,
	0xf5a94b83,
	0xa571f6b0,
	0xd9a5ea54,
	0x62b33777,
	0x3667c9f1,
	0xe80494d6,
	0x482d47c8,
	0x37befc70,
	0xe2964344,
	0x8c8569cb,
	0x15ba50a6,
	0x2d3385d3,
	0x543b2c3d,
	0xb1f33e13,
	0xeae3dfd6,
	0x2477f0b0,
	0x84072dc8,
	0x4a353d20,
	0x101529b7,
	0x88b539b6,
	0x4e86d8bc,
	0x9c00ff0a,
	0xd3cc3c5d,
	0xdb3ccf12,
	0x885260b9,
	0x8e726dd5,
	0x6db70f53,
	0x65bb94f6,
	0x335fe0ad,
	0xae2f8d0a,
	0x6d26a66a,
	0x71f2ae6a,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"mrdump_mini_add_extra_file\0"
	"of_phandle_iterator_init\0"
	"of_phandle_iterator_next\0"
	"of_device_is_available\0"
	"of_find_device_by_node\0"
	"of_platform_device_create\0"
	"mtk_icc_provider_add\0"
	"_dev_notice\0"
	"of_device_get_match_data\0"
	"mtk_icc_node_create\0"
	"mtk_icc_node_add\0"
	"mtk_icc_link_create\0"
	"devm_clk_get\0"
	"clk_get_rate\0"
	"of_icc_get\0"
	"devm_regulator_get_optional\0"
	"dev_pm_opp_of_add_table\0"
	"__rt_mutex_init\0"
	"mtk_dramc_get_ddr_type\0"
	"mtk_dramc_get_steps_freq\0"
	"mtk_emicen_get_ch_cnt\0"
	"register_mmdvfs_notifier\0"
	"devm_kfree\0"
	"proc_mkdir\0"
	"proc_create\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"mtk_icc_node_del\0"
	"mtk_icc_node_destroy\0"
	"mtk_icc_provider_del\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"unregister_mmdvfs_notifier\0"
	"cancel_delayed_work_sync\0"
	"destroy_workqueue\0"
	"rt_mutex_lock\0"
	"kthread_stop\0"
	"rt_mutex_unlock\0"
	"sscanf\0"
	"mtk_smi_larb_bw_set\0"
	"sprintf\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run7\0"
	"bpf_trace_run5\0"
	"bpf_trace_run3\0"
	"bpf_trace_run2\0"
	"mtk_smi_common_bw_set\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"mtk_mmdvfs_enable_vcp\0"
	"snprintf\0"
	"devm_kmalloc\0"
	"__kmalloc_cache_noprof\0"
	"of_property_read_variable_u32_array\0"
	"__of_parse_phandle_with_args\0"
	"get_mux_axi_pair_by_comm_port\0"
	"mtk_smi_set_hrt_perm\0"
	"get_mux_axi_pair_by_larb\0"
	"sched_clock\0"
	"preempt_schedule_notrace\0"
	"icc_set_bw\0"
	"regulator_set_voltage\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_find_freq_floor\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"mtk_smi_common_ostdl_set\0"
	"get_min_freq_from_axi_mon\0"
	"mtk_mmmc_set_ostdbl_by_larb\0"
	"mtk_mmmc_set_ostdbl\0"
	"mtk_mmmc_set_bw_limiter\0"
	"mtk_mmmc_enable_axi_limiter\0"
	"__list_add_valid_or_report\0"
	"of_find_property\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"queue_delayed_work_on\0"
	"ioremap_prot\0"
	"kstrtouint\0"
	"kthread_should_stop\0"
	"msleep\0"
	"usleep_range_state\0"
	"param_get_uint\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_online_mask\0"
	"arm64_use_ng_mappings\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"mtk_mmdvfs_debug_release_step0\0"
	"__init_rwsem\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"bpf_trace_run1\0"
	"blocking_notifier_call_chain\0"
	"jiffies_to_msecs\0"
	"__wake_up\0"
	"kstrtoint\0"
	"jiffies\0"
	"system_wq\0"
	"mmmc_get_state\0"
	"is_vcp_ready_ex\0"
	"__const_udelay\0"
	"vcp_cmd_ex\0"
	"vcp_get_ipidev\0"
	"mtk_ipi_send\0"
	"is_vcp_suspending_ex\0"
	"vcp_register_feature_ex\0"
	"vcp_deregister_feature_ex\0"
	"vcp_get_reserve_mem_phys_ex\0"
	"iommu_get_domain_for_dev\0"
	"iommu_iova_to_phys\0"
	"vcp_get_reserve_mem_virt_ex\0"
	"vcp_A_register_notify_ex\0"
	"mtk_ipi_send_compl\0"
	"mtk_ipi_register\0"
	"mtk_mmmc_smmu_factor_register_notifier\0"
	"mtk_mmmc_threshold_us_register_notifier\0"
	"get_ostdbl_smmu_factor\0"
	"get_axi_mon_threshold_us\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mrdump,mtk-icc-core,mtk_dramc,emi,mtk-mmdvfs,mtk-smi,mtk-mmdvfs-v3,mtk-mm-monitor-controller,mtk-mmdvfs-debug,vcp_status,mtk_tinysys_ipi");


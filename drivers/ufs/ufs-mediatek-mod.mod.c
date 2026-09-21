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

KSYMTAB_FUNC(ufs_mtk_init_sysfs, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_remove_sysfs, "_gpl", "");
KSYMTAB_FUNC(ufs_mb_get_info, "_gpl", "");
KSYMTAB_FUNC(ufs_mb_register, "_gpl", "");
KSYMTAB_FUNC(ufs_mb_unregister, "_gpl", "");
KSYMTAB_FUNC(ufs_mb_queue_error, "_gpl", "");
KSYMTAB_FUNC(ufs_mb_init, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_btag_send_command, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_btag_compl_command, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_btag_init, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_btag_exit, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_rpmb_get_raw_dev, "_gpl", "");
KSYMTAB_FUNC(ufs_mtk_rpmb_init, "_gpl", "");

SYMBOL_CRC(ufs_mtk_init_sysfs, 0x24fd35ee, "_gpl");
SYMBOL_CRC(ufs_mtk_remove_sysfs, 0xfbed2e4e, "_gpl");
SYMBOL_CRC(ufs_mb_get_info, 0x09fb5995, "_gpl");
SYMBOL_CRC(ufs_mb_register, 0xa47f9166, "_gpl");
SYMBOL_CRC(ufs_mb_unregister, 0xdb1834ef, "_gpl");
SYMBOL_CRC(ufs_mb_queue_error, 0xd6874261, "_gpl");
SYMBOL_CRC(ufs_mb_init, 0xb390567b, "_gpl");
SYMBOL_CRC(ufs_mtk_btag_send_command, 0x263aaf83, "_gpl");
SYMBOL_CRC(ufs_mtk_btag_compl_command, 0xad2fa388, "_gpl");
SYMBOL_CRC(ufs_mtk_btag_init, 0x2107baa8, "_gpl");
SYMBOL_CRC(ufs_mtk_btag_exit, 0x33d2a604, "_gpl");
SYMBOL_CRC(ufs_mtk_rpmb_get_raw_dev, 0x684e7988, "_gpl");
SYMBOL_CRC(ufs_mtk_rpmb_init, 0x5e05b888, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8f27ba6d, "devfreq_resume_device" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x944cab1a, "devfreq_suspend_device" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xa4260bd8, "ufshcd_dme_get_attr" },
	{ 0x86fd146b, "ufshcd_dme_set_attr" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xee7796cb, "scsi_block_requests" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xca705e00, "ufshcd_hold" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xca7572dd, "ufshcd_config_pwr_mode" },
	{ 0x401167cc, "_dev_info" },
	{ 0xcf1400ef, "ufshcd_release" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xe935e988, "sbitmap_weight" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x78d86329, "scsi_unblock_requests" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x87d7d9a3, "ufshcd_pltfrm_init" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xe2f48c74, "ufs_mtk_dbg_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x8790a642, "devm_of_phy_get_by_index" },
	{ 0x1051d96a, "__devm_reset_control_get" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x6871ad9c, "phy_power_on" },
	{ 0x69e67f21, "phy_power_off" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x135e366e, "irq_set_affinity" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x723b1abf, "ufshcd_delay_us" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x73063e31, "ufs_mtk_eh_unipro_set_lpm" },
	{ 0x4638ca69, "ufshcd_init_host_params" },
	{ 0xe835e845, "ufshcd_negotiate_pwr_params" },
	{ 0x92997ed8, "_printk" },
	{ 0xcf0d551a, "ufshcd_uic_change_pwr_mode" },
	{ 0x39ce7c71, "ufshcd_dme_configure_adapt" },
	{ 0x5a921311, "strncmp" },
	{ 0xa473c71c, "ufshcd_fixup_dev_quirks" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf6915d6b, "ufshcd_populate_vreg" },
	{ 0x0134c59d, "ufshcd_get_vreg" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x96473a6e, "ufshcd_link_recovery" },
	{ 0xb1d231a0, "ufshcd_hba_enable" },
	{ 0x8522ad57, "ufshcd_update_evt_hist" },
	{ 0xc99bfa41, "ufshcd_uic_hibern8_exit" },
	{ 0x22c14398, "ufshcd_make_hba_operational" },
	{ 0x3fae38b9, "ufshcd_mcq_make_queues_operational" },
	{ 0xce6412ed, "ufshcd_mcq_config_mac" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x24768719, "ufshcd_mcq_read_cqis" },
	{ 0x5f578f9a, "ufshcd_mcq_write_cqis" },
	{ 0x683b4b5b, "ufshcd_mcq_poll_cqe_lock" },
	{ 0xe5e55228, "__cpuhp_state_add_instance" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x0309d923, "ufshcd_dump_regs" },
	{ 0x063b1cb6, "ufs_mtk_dbg_dump" },
	{ 0xc5059485, "ufs_mtk_eh_err_cnt" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x686e6db3, "ufshcd_hba_stop" },
	{ 0x7d16f320, "ufs_mtk_dbg_l2_dump" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd2601a4c, "ufs_mtk_eh_abort" },
	{ 0x7012d3b5, "blk_queue_flag_set" },
	{ 0xa6257a2f, "complete" },
	{ 0x51786ad8, "__irq_apply_affinity_hint" },
	{ 0xc7100a5a, "regulator_set_mode" },
	{ 0xc4451827, "ufshcd_remove" },
	{ 0x18245177, "__cpuhp_state_remove_instance" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xbec44c3b, "ufshcd_suspend_prepare" },
	{ 0x7871801f, "ufshcd_resume_complete" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xee1cfc32, "ufshcd_system_suspend" },
	{ 0xcf2a6966, "up" },
	{ 0xb5518ded, "ufshcd_system_resume" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x774837f9, "ufshcd_runtime_suspend" },
	{ 0xe8cbfcee, "ufshcd_runtime_resume" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x2cb7851f, "ufshcd_query_flag" },
	{ 0x037a0cba, "kfree" },
	{ 0x6626afca, "down" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x16ad39d4, "irq_to_desc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb97220ff, "bitmap_parse" },
	{ 0xa6a0e9ff, "ufs_mtk_dbg_tp_unregister" },
	{ 0x668e7439, "ufs_mtk_dbg_tp_register" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xcc357530, "mtk_btag_ufs_send_command" },
	{ 0x896cd710, "mtk_btag_ufs_transfer_req_compl" },
	{ 0xe4c16222, "mtk_btag_ufs_init" },
	{ 0x9d7537c1, "mtk_btag_ufs_exit" },
	{ 0x168f37b4, "scsi_execute_cmd" },
	{ 0x22433596, "scsi_print_sense_hdr" },
	{ 0xd38ba925, "scsi_dma_unmap" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1c4c3b34, "__scsi_iterate_devices" },
	{ 0xd243cffa, "scsi_device_put" },
	{ 0x5fe2347c, "ufshcd_read_desc_param" },
	{ 0x067cae8e, "scsi_device_get" },
	{ 0xa8dcb1ae, "rpmb_mtk_dev_register" },
	{ 0xacac3bbb, "scsi_autopm_get_device" },
	{ 0x5f1c499b, "scsi_autopm_put_device" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x34db050b,
	0x8f27ba6d,
	0x03c12dfe,
	0x944cab1a,
	0x47a915f1,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0x75ca79b5,
	0x881d741f,
	0xa4260bd8,
	0x86fd146b,
	0x4eb4c414,
	0xee7796cb,
	0x4e8b8def,
	0xb43f9365,
	0x05590c04,
	0xca705e00,
	0xb4ce05a5,
	0xca7572dd,
	0x401167cc,
	0xcf1400ef,
	0xc3055d20,
	0xfbc4f89e,
	0x6b722180,
	0x0c1a5ee3,
	0xe935e988,
	0x6c9565df,
	0x2220455c,
	0x2396c7f0,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0xd35cce70,
	0x78d86329,
	0x13269d10,
	0xc905402b,
	0xfa4d3c24,
	0x6ebe366f,
	0xeae3dfd6,
	0xc5b6f236,
	0x12db679a,
	0xf3cdc3c6,
	0xa4f72277,
	0xa823db6e,
	0x0be515ae,
	0xd4e81a21,
	0x87d7d9a3,
	0x1fec5304,
	0x146a11fc,
	0xd7c2b302,
	0x1ed4c5e6,
	0x52384e38,
	0xc6f46339,
	0xffeedf6a,
	0x49cd25ed,
	0x0f314d3e,
	0xea82d349,
	0xe2f48c74,
	0xc8c7229e,
	0x3b1b6444,
	0xe136f93c,
	0x2ccea269,
	0xea23ff02,
	0x03b28b1f,
	0xf7ca28dd,
	0x8790a642,
	0x1051d96a,
	0xf93aae46,
	0x6b201699,
	0xe2d5255a,
	0x9a835040,
	0x57d5e131,
	0x6871ad9c,
	0x69e67f21,
	0x031dffa4,
	0x608741b5,
	0xe2964344,
	0xb66eb73f,
	0x135e366e,
	0x556e4390,
	0xf70e4a4d,
	0x723b1abf,
	0x3ce4ca6f,
	0xfcec0987,
	0x6c4b6684,
	0xb2210d64,
	0x73063e31,
	0x4638ca69,
	0xe835e845,
	0x92997ed8,
	0xcf0d551a,
	0x39ce7c71,
	0x5a921311,
	0xa473c71c,
	0x656e4a6e,
	0xf6915d6b,
	0x0134c59d,
	0x5a6368f5,
	0x10a09bd4,
	0x805e2dd2,
	0x96473a6e,
	0xb1d231a0,
	0x8522ad57,
	0xc99bfa41,
	0x22c14398,
	0x3fae38b9,
	0xce6412ed,
	0xf9583f23,
	0x24768719,
	0x5f578f9a,
	0x683b4b5b,
	0xe5e55228,
	0xaab744b7,
	0x14de1090,
	0x0309d923,
	0x063b1cb6,
	0xc5059485,
	0x40863ba1,
	0x42ad47ad,
	0x686e6db3,
	0x7d16f320,
	0x9ec6ca96,
	0xd2601a4c,
	0x7012d3b5,
	0xa6257a2f,
	0x51786ad8,
	0xc7100a5a,
	0xc4451827,
	0x18245177,
	0x7aba1ef6,
	0xbec44c3b,
	0x7871801f,
	0xe9ffc063,
	0xee1cfc32,
	0xcf2a6966,
	0xb5518ded,
	0xc0b7c197,
	0x774837f9,
	0xe8cbfcee,
	0x6fc35f2b,
	0x377bbcbc,
	0x2d3385d3,
	0x017de3d5,
	0xac594e02,
	0xaf56600a,
	0x62ad2053,
	0x2cb7851f,
	0x037a0cba,
	0x6626afca,
	0x62b33777,
	0x3667c9f1,
	0xe17134b6,
	0x52c5c991,
	0xa916b694,
	0xe783e261,
	0xd5977bfb,
	0xed55cabd,
	0x3b6c41ea,
	0x16ad39d4,
	0x5c3c7387,
	0xb97220ff,
	0xa6a0e9ff,
	0x668e7439,
	0x0f05f001,
	0xefe8a82e,
	0xcc357530,
	0x896cd710,
	0xe4c16222,
	0x9d7537c1,
	0x168f37b4,
	0x22433596,
	0xd38ba925,
	0x167c5967,
	0xc38c83b8,
	0xba8fbd64,
	0xdc0e4855,
	0xb5b54b34,
	0xf5f370e0,
	0x4a3ad70e,
	0x1c4c3b34,
	0xd243cffa,
	0x5fe2347c,
	0x067cae8e,
	0xa8dcb1ae,
	0xacac3bbb,
	0x5f1c499b,
	0xa6f6226c,
	0x15ba50a6,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_raw_spin_lock_irqsave\0"
	"devfreq_resume_device\0"
	"cancel_work_sync\0"
	"devfreq_suspend_device\0"
	"_dev_warn\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"__fortify_panic\0"
	"bpf_trace_run3\0"
	"ufshcd_dme_get_attr\0"
	"ufshcd_dme_set_attr\0"
	"__pm_runtime_resume\0"
	"scsi_block_requests\0"
	"__pm_stay_awake\0"
	"ktime_get\0"
	"__pm_relax\0"
	"ufshcd_hold\0"
	"_dev_err\0"
	"ufshcd_config_pwr_mode\0"
	"_dev_info\0"
	"ufshcd_release\0"
	"usleep_range_state\0"
	"io_schedule_timeout\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"sbitmap_weight\0"
	"cpu_latency_qos_update_request\0"
	"regulator_set_voltage\0"
	"clk_set_parent\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"_raw_spin_unlock_irqrestore\0"
	"scsi_unblock_requests\0"
	"__pm_runtime_idle\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"ktime_get_mono_fast_ns\0"
	"__const_udelay\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"of_find_compatible_node\0"
	"_dev_notice\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"pm_runtime_enable\0"
	"ufshcd_pltfrm_init\0"
	"__of_parse_phandle_with_args\0"
	"__pm_runtime_set_status\0"
	"of_match_device\0"
	"of_find_node_by_name\0"
	"cpu_latency_qos_add_request\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"alloc_workqueue\0"
	"wakeup_source_register\0"
	"hrtimer_init\0"
	"ufs_mtk_dbg_register\0"
	"devm_kmalloc\0"
	"of_get_property\0"
	"of_property_read_variable_u32_array\0"
	"devm_regulator_get_optional\0"
	"devm_clk_get\0"
	"regulator_get\0"
	"platform_get_irq\0"
	"devm_of_phy_get_by_index\0"
	"__devm_reset_control_get\0"
	"__arm_smccc_smc\0"
	"of_find_property\0"
	"strcmp\0"
	"__list_del_entry_valid_or_report\0"
	"regulator_enable\0"
	"phy_power_on\0"
	"phy_power_off\0"
	"regulator_disable\0"
	"__init_swait_queue_head\0"
	"__wake_up\0"
	"__cpuhp_setup_state\0"
	"irq_set_affinity\0"
	"clk_get_rate\0"
	"preempt_schedule_notrace\0"
	"ufshcd_delay_us\0"
	"disable_irq\0"
	"enable_irq\0"
	"reset_control_assert\0"
	"reset_control_deassert\0"
	"ufs_mtk_eh_unipro_set_lpm\0"
	"ufshcd_init_host_params\0"
	"ufshcd_negotiate_pwr_params\0"
	"_printk\0"
	"ufshcd_uic_change_pwr_mode\0"
	"ufshcd_dme_configure_adapt\0"
	"strncmp\0"
	"ufshcd_fixup_dev_quirks\0"
	"snprintf\0"
	"ufshcd_populate_vreg\0"
	"ufshcd_get_vreg\0"
	"devm_kfree\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"ufshcd_link_recovery\0"
	"ufshcd_hba_enable\0"
	"ufshcd_update_evt_hist\0"
	"ufshcd_uic_hibern8_exit\0"
	"ufshcd_make_hba_operational\0"
	"ufshcd_mcq_make_queues_operational\0"
	"ufshcd_mcq_config_mac\0"
	"devm_request_threaded_irq\0"
	"ufshcd_mcq_read_cqis\0"
	"ufshcd_mcq_write_cqis\0"
	"ufshcd_mcq_poll_cqe_lock\0"
	"__cpuhp_state_add_instance\0"
	"__cpuhp_remove_state\0"
	"mt_irq_dump_status\0"
	"ufshcd_dump_regs\0"
	"ufs_mtk_dbg_dump\0"
	"ufs_mtk_eh_err_cnt\0"
	"ioremap_prot\0"
	"queue_delayed_work_on\0"
	"ufshcd_hba_stop\0"
	"ufs_mtk_dbg_l2_dump\0"
	"ktime_get_real_ts64\0"
	"ufs_mtk_eh_abort\0"
	"blk_queue_flag_set\0"
	"complete\0"
	"__irq_apply_affinity_hint\0"
	"regulator_set_mode\0"
	"ufshcd_remove\0"
	"__cpuhp_state_remove_instance\0"
	"tracepoint_probe_unregister\0"
	"ufshcd_suspend_prepare\0"
	"ufshcd_resume_complete\0"
	"down_trylock\0"
	"ufshcd_system_suspend\0"
	"up\0"
	"ufshcd_system_resume\0"
	"hrtimer_start_range_ns\0"
	"ufshcd_runtime_suspend\0"
	"ufshcd_runtime_resume\0"
	"platform_driver_unregister\0"
	"pm_suspend_target_state\0"
	"system_wq\0"
	"nr_cpu_ids\0"
	"__cpu_online_mask\0"
	"arm64_use_ng_mappings\0"
	"cpu_bit_bitmap\0"
	"ufshcd_query_flag\0"
	"kfree\0"
	"down\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"strnlen\0"
	"sysfs_emit\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kstrtouint\0"
	"irq_to_desc\0"
	"kstrtoull\0"
	"bitmap_parse\0"
	"ufs_mtk_dbg_tp_unregister\0"
	"ufs_mtk_dbg_tp_register\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"mtk_btag_ufs_send_command\0"
	"mtk_btag_ufs_transfer_req_compl\0"
	"mtk_btag_ufs_init\0"
	"mtk_btag_ufs_exit\0"
	"scsi_execute_cmd\0"
	"scsi_print_sense_hdr\0"
	"scsi_dma_unmap\0"
	"print_hex_dump\0"
	"mod_timer\0"
	"_raw_spin_lock\0"
	"timer_delete\0"
	"_raw_spin_unlock\0"
	"async_schedule_node\0"
	"wait_for_completion_timeout\0"
	"__scsi_iterate_devices\0"
	"scsi_device_put\0"
	"ufshcd_read_desc_param\0"
	"scsi_device_get\0"
	"rpmb_mtk_dev_register\0"
	"scsi_autopm_get_device\0"
	"scsi_autopm_put_device\0"
	"kasan_flag_enabled\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ufs-mediatek-dbg,irq-dbg,blocktag,core");


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

KSYMTAB_FUNC(apu_device_power_suspend, "", "");
KSYMTAB_FUNC(apu_device_power_on, "", "");
KSYMTAB_FUNC(apu_device_power_off, "", "");
KSYMTAB_FUNC(apu_device_set_opp, "", "");
KSYMTAB_FUNC(apu_get_power_info, "", "");
KSYMTAB_FUNC(apusys_boost_value_to_opp, "", "");
KSYMTAB_FUNC(apusys_opp_to_freq, "", "");
KSYMTAB_FUNC(apusys_get_ceiling_opp, "", "");
KSYMTAB_FUNC(apu_get_power_on_status, "", "");
KSYMTAB_FUNC(apusys_get_opp, "", "");
KSYMTAB_FUNC(apu_power_reg_dump, "", "");
KSYMTAB_FUNC(apusys_power_check, "", "");
KSYMTAB_FUNC(apu_qos_set_vcore, "", "");
KSYMTAB_FUNC(apu_power_device_register, "", "");
KSYMTAB_FUNC(apu_power_device_unregister, "", "");
KSYMTAB_FUNC(apu_power_callback_device_register, "", "");
KSYMTAB_FUNC(apu_power_callback_device_unregister, "", "");
KSYMTAB_FUNC(apupw_get_tag, "_gpl", "");
KSYMTAB_DATA(vpu_power_table, "", "");
KSYMTAB_DATA(mdla_power_table, "", "");
KSYMTAB_FUNC(apusys_thermal_en_throttle_cb, "", "");
KSYMTAB_FUNC(apusys_thermal_dis_throttle_cb, "", "");
KSYMTAB_FUNC(apu_boot_host, "", "");
KSYMTAB_FUNC(apu_power_drv_init, "", "");
KSYMTAB_FUNC(apu_power_drv_exit, "", "");

SYMBOL_CRC(apu_device_power_suspend, 0x3ae7965f, "");
SYMBOL_CRC(apu_device_power_on, 0x033c7bb3, "");
SYMBOL_CRC(apu_device_power_off, 0x6ba2fc3d, "");
SYMBOL_CRC(apu_device_set_opp, 0xaa3217c8, "");
SYMBOL_CRC(apu_get_power_info, 0x5598186d, "");
SYMBOL_CRC(apusys_boost_value_to_opp, 0x88d2c20e, "");
SYMBOL_CRC(apusys_opp_to_freq, 0x28a76e14, "");
SYMBOL_CRC(apusys_get_ceiling_opp, 0x93aca07c, "");
SYMBOL_CRC(apu_get_power_on_status, 0x6b704d05, "");
SYMBOL_CRC(apusys_get_opp, 0x255c58d7, "");
SYMBOL_CRC(apu_power_reg_dump, 0x3f7d2c02, "");
SYMBOL_CRC(apusys_power_check, 0x239bc957, "");
SYMBOL_CRC(apu_qos_set_vcore, 0xefd576f6, "");
SYMBOL_CRC(apu_power_device_register, 0xe61a9633, "");
SYMBOL_CRC(apu_power_device_unregister, 0x98004a5d, "");
SYMBOL_CRC(apu_power_callback_device_register, 0x6cb39818, "");
SYMBOL_CRC(apu_power_callback_device_unregister, 0x4d9b7ec4, "");
SYMBOL_CRC(apupw_get_tag, 0x6193a516, "_gpl");
SYMBOL_CRC(vpu_power_table, 0x830a6d1e, "");
SYMBOL_CRC(mdla_power_table, 0x4e07ab72, "");
SYMBOL_CRC(apusys_thermal_en_throttle_cb, 0xb2b8aea3, "");
SYMBOL_CRC(apusys_thermal_dis_throttle_cb, 0x8ad1fcd6, "");
SYMBOL_CRC(apu_boot_host, 0x7009ba5a, "");
SYMBOL_CRC(apu_power_drv_init, 0xe7387c02, "");
SYMBOL_CRC(apu_power_drv_exit, 0x09d24f53, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd63cf393, "__clk_get_hw" },
	{ 0xc0b18217, "clk_hw_get_num_parents" },
	{ 0x4b121607, "clk_hw_get_parent" },
	{ 0x0d6e2a7f, "clk_hw_get_parent_by_index" },
	{ 0x6bd60ee2, "clk_hw_get_name" },
	{ 0x0dbf9c5a, "clk_hw_get_rate" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x252c7c6e, "dev_pm_opp_find_freq_floor" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0xb4084128, "devfreq_recommended_opp" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xf92549e4, "regulator_set_voltage_time" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7d59dd46, "pm_wq" },
	{ 0xaba63322, "of_iomap" },
	{ 0xedc03953, "iounmap" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x99fe66ff, "regulator_put" },
	{ 0x80f53944, "regulator_get_optional" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xc2749a62, "get_device" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x234c9de3, "put_device" },
	{ 0xe40c1bbf, "of_clk_get_from_provider" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x037a0cba, "kfree" },
	{ 0xa8caa845, "clk_bulk_put_all" },
	{ 0xd5dadbd7, "of_get_next_parent" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x46e3017e, "dev_pm_opp_of_add_table_indexed" },
	{ 0xc993b622, "dev_pm_opp_get_opp_table" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xfd7f6a01, "dev_pm_opp_disable" },
	{ 0x979b55bb, "nvmem_cell_get" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0xee4d8a2b, "dev_pm_opp_adjust_voltage" },
	{ 0x6b201699, "of_find_property" },
	{ 0x71fa3d40, "dev_pm_opp_get_freq_indexed" },
	{ 0xd6cac3d5, "devm_devfreq_add_device" },
	{ 0xf69b86d9, "dev_pm_opp_put_opp_table" },
	{ 0xa52cb1c2, "devm_devfreq_remove_device" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xe091c977, "list_sort" },
	{ 0xa0424613, "update_devfreq" },
	{ 0x2ae5231c, "devfreq_add_governor" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xd7f5c83d, "devfreq_remove_governor" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xf45608d2, "of_platform_populate" },
	{ 0x5bafbc7c, "of_platform_depopulate" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x92ffec59, "dev_pm_qos_update_request" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0x2353930d, "clk_get" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x3ed546fe, "of_translate_address" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xe32996a7, "debugfs_create_symlink" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0xe94986d6, "sched_clock" },
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
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x44d05b65, "devm_devfreq_register_notifier" },
	{ 0xad50fbe4, "devfreq_monitor_start" },
	{ 0xa0914291, "devfreq_monitor_suspend" },
	{ 0x2cde466c, "devm_devfreq_unregister_notifier" },
	{ 0xe0edb163, "devfreq_monitor_stop" },
	{ 0x91cbcd2a, "devfreq_update_interval" },
	{ 0x34dca902, "devfreq_monitor_resume" },
	{ 0x698829ee, "devfreq_get_devfreq_by_phandle" },
	{ 0x96848186, "scnprintf" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x944cab1a, "devfreq_suspend_device" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x8f27ba6d, "devfreq_resume_device" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x768006df, "bus_find_device" },
	{ 0x8a4ceb38, "device_match_name" },
	{ 0x318acf06, "platform_bus_type" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0x72440ead, "register_pt_low_battery_apu_cb" },
	{ 0xa8c7b8fc, "register_pt_over_current_apu_cb" },
	{ 0x390e9ff2, "register_pt_battery_percent_apu_cb" },
	{ 0x50d035c2, "vsscanf" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0c10d94a, "rpmsg_sendto" },
	{ 0xa39d99f7, "rpmsg_send" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x6e59048a, "__register_rpmsg_driver" },
	{ 0x69009501, "unregister_rpmsg_driver" },
	{ 0x9131a246, "rpmsg_create_ept" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x908e4af5, "rpmsg_destroy_ept" },
	{ 0xf772582a, "thermal_of_cooling_device_register" },
	{ 0x3643df51, "regulator_get_mode" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x22d5719b, "thermal_cooling_device_update" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x349cba85, "strchr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x556e4390,
	0xd63cf393,
	0xc0b18217,
	0x4b121607,
	0x0d6e2a7f,
	0x6bd60ee2,
	0x0dbf9c5a,
	0xe2d5255a,
	0xead5c8e5,
	0x656e4a6e,
	0xf5edea2e,
	0x45b60059,
	0x63c08029,
	0x76d9b876,
	0xc7a7e770,
	0xc569d8ce,
	0x2396c7f0,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x479f7d4b,
	0xeae3dfd6,
	0xd5977bfb,
	0xed55cabd,
	0xf93aae46,
	0x167c5967,
	0xa571f6b0,
	0x40863ba1,
	0xaf56600a,
	0x252c7c6e,
	0xc2a5a5eb,
	0x401167cc,
	0xf644e56a,
	0xb3bceb42,
	0x166667b7,
	0xb4084128,
	0xba8fbd64,
	0xb5b54b34,
	0x7e19152a,
	0x9a835040,
	0x3e54ac69,
	0xd9051672,
	0x2220455c,
	0x482d47c8,
	0xf92549e4,
	0x9e7d6bd0,
	0xa06ad99d,
	0x57d5e131,
	0x031dffa4,
	0x7a8ef1df,
	0x56470118,
	0xc5b6f236,
	0x7d59dd46,
	0xaba63322,
	0xedc03953,
	0xb088bcfc,
	0x99fe66ff,
	0x80f53944,
	0xf5a94b83,
	0xa823db6e,
	0xc2749a62,
	0x0be515ae,
	0x234c9de3,
	0xe40c1bbf,
	0xe17134b6,
	0x52c5c991,
	0x75ca79b5,
	0x1fec5304,
	0x037a0cba,
	0xa8caa845,
	0xd5dadbd7,
	0x0f05f001,
	0xefe8a82e,
	0x14fe5355,
	0x46e3017e,
	0xc993b622,
	0x796ead29,
	0x66bcb0f8,
	0xfd7f6a01,
	0x979b55bb,
	0x99f018c4,
	0x85540ebc,
	0xe136f93c,
	0xaf7cb74b,
	0x5a921311,
	0xee4d8a2b,
	0x6b201699,
	0x71fa3d40,
	0xd6cac3d5,
	0xf69b86d9,
	0xa52cb1c2,
	0x5a6368f5,
	0xb2fb935e,
	0xe091c977,
	0xa0424613,
	0x2ae5231c,
	0x12db679a,
	0x6fc35f2b,
	0xd7f5c83d,
	0x13269d10,
	0x4eb4c414,
	0x42ad47ad,
	0xd4e81a21,
	0xf45608d2,
	0x5bafbc7c,
	0x5c27c40f,
	0xffeedf6a,
	0x92ffec59,
	0xeab7088e,
	0x2353930d,
	0x3b1b6444,
	0x3ed546fe,
	0x5cf4d4de,
	0x4e870156,
	0xe32996a7,
	0xb7c7d237,
	0x7f02188f,
	0x2e1ca751,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x85df9b6c,
	0x8c8569cb,
	0x88db9f48,
	0x2be0c009,
	0xcec49a87,
	0x8b9c34da,
	0xc8f2ae9d,
	0x3da016df,
	0x173e2075,
	0xe94986d6,
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
	0x98cf60b3,
	0xa916b694,
	0xe3c00b45,
	0xf70e4a4d,
	0xac594e02,
	0x44d05b65,
	0xad50fbe4,
	0xa0914291,
	0x2cde466c,
	0xe0edb163,
	0x91cbcd2a,
	0x34dca902,
	0x698829ee,
	0x96848186,
	0xc8c7229e,
	0x944cab1a,
	0x05590c04,
	0x4e8b8def,
	0x8f27ba6d,
	0x0f314d3e,
	0x0288226a,
	0x768006df,
	0x8a4ceb38,
	0x318acf06,
	0x62835296,
	0x72440ead,
	0xa8c7b8fc,
	0x390e9ff2,
	0x50d035c2,
	0xa4f72277,
	0x92acb4e9,
	0x0c10d94a,
	0xa39d99f7,
	0xf02aa937,
	0x6e59048a,
	0x69009501,
	0x9131a246,
	0x476b165a,
	0xa6257a2f,
	0x608741b5,
	0x908e4af5,
	0xf772582a,
	0x3643df51,
	0x374f8976,
	0x03b28b1f,
	0xea23ff02,
	0x22d5719b,
	0x7518b5f0,
	0xb4028d67,
	0xa2fa95a0,
	0x330c0b0f,
	0xb318cbab,
	0x349cba85,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"clk_get_rate\0"
	"__clk_get_hw\0"
	"clk_hw_get_num_parents\0"
	"clk_hw_get_parent\0"
	"clk_hw_get_parent_by_index\0"
	"clk_hw_get_name\0"
	"clk_hw_get_rate\0"
	"strcmp\0"
	"clk_bulk_prepare\0"
	"snprintf\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"clk_bulk_unprepare\0"
	"clk_set_rate\0"
	"clk_bulk_enable\0"
	"__clk_get_name\0"
	"clk_set_parent\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"clk_bulk_disable\0"
	"__const_udelay\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__arm_smccc_smc\0"
	"print_hex_dump\0"
	"__mutex_init\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"dev_pm_opp_find_freq_floor\0"
	"dev_pm_opp_find_freq_ceil\0"
	"_dev_info\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"dev_pm_opp_get_opp_count\0"
	"devfreq_recommended_opp\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_chain_register\0"
	"regulator_set_voltage\0"
	"blocking_notifier_call_chain\0"
	"regulator_set_voltage_time\0"
	"__udelay\0"
	"regulator_get_voltage\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"regulator_is_enabled\0"
	"__warn_printk\0"
	"queue_work_on\0"
	"pm_wq\0"
	"of_iomap\0"
	"iounmap\0"
	"of_count_phandle_with_args\0"
	"regulator_put\0"
	"regulator_get_optional\0"
	"__init_rwsem\0"
	"of_find_device_by_node\0"
	"get_device\0"
	"device_link_add\0"
	"put_device\0"
	"of_clk_get_from_provider\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__fortify_panic\0"
	"__of_parse_phandle_with_args\0"
	"kfree\0"
	"clk_bulk_put_all\0"
	"of_get_next_parent\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"of_device_get_match_data\0"
	"dev_pm_opp_of_add_table_indexed\0"
	"dev_pm_opp_get_opp_table\0"
	"of_get_next_available_child\0"
	"of_property_read_u64\0"
	"dev_pm_opp_disable\0"
	"nvmem_cell_get\0"
	"nvmem_cell_read\0"
	"nvmem_cell_put\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_string\0"
	"strncmp\0"
	"dev_pm_opp_adjust_voltage\0"
	"of_find_property\0"
	"dev_pm_opp_get_freq_indexed\0"
	"devm_devfreq_add_device\0"
	"dev_pm_opp_put_opp_table\0"
	"devm_devfreq_remove_device\0"
	"devm_kfree\0"
	"param_ops_int\0"
	"list_sort\0"
	"update_devfreq\0"
	"devfreq_add_governor\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"devfreq_remove_governor\0"
	"__pm_runtime_idle\0"
	"__pm_runtime_resume\0"
	"queue_delayed_work_on\0"
	"pm_runtime_enable\0"
	"of_platform_populate\0"
	"of_platform_depopulate\0"
	"__pm_runtime_disable\0"
	"delayed_work_timer_fn\0"
	"dev_pm_qos_update_request\0"
	"of_prop_next_string\0"
	"clk_get\0"
	"of_get_property\0"
	"of_translate_address\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"debugfs_create_symlink\0"
	"debugfs_remove\0"
	"__msecs_to_jiffies\0"
	"clk_put\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"strsep\0"
	"kstrtoint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"cancel_delayed_work_sync\0"
	"single_open\0"
	"seq_printf\0"
	"seq_putc\0"
	"seq_write\0"
	"sched_clock\0"
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
	"strlen\0"
	"strnlen\0"
	"bpf_trace_run5\0"
	"preempt_schedule_notrace\0"
	"__cpu_online_mask\0"
	"devm_devfreq_register_notifier\0"
	"devfreq_monitor_start\0"
	"devfreq_monitor_suspend\0"
	"devm_devfreq_unregister_notifier\0"
	"devfreq_monitor_stop\0"
	"devfreq_update_interval\0"
	"devfreq_monitor_resume\0"
	"devfreq_get_devfreq_by_phandle\0"
	"scnprintf\0"
	"devm_kmalloc\0"
	"devfreq_suspend_device\0"
	"__pm_relax\0"
	"__pm_stay_awake\0"
	"devfreq_resume_device\0"
	"wakeup_source_register\0"
	"wakeup_source_unregister\0"
	"bus_find_device\0"
	"device_match_name\0"
	"platform_bus_type\0"
	"thermal_cooling_device_unregister\0"
	"register_pt_low_battery_apu_cb\0"
	"register_pt_over_current_apu_cb\0"
	"register_pt_battery_percent_apu_cb\0"
	"vsscanf\0"
	"_dev_notice\0"
	"param_ops_uint\0"
	"rpmsg_sendto\0"
	"rpmsg_send\0"
	"wait_for_completion_interruptible_timeout\0"
	"__register_rpmsg_driver\0"
	"unregister_rpmsg_driver\0"
	"rpmsg_create_ept\0"
	"sized_strscpy\0"
	"complete\0"
	"__init_swait_queue_head\0"
	"rpmsg_destroy_ept\0"
	"thermal_of_cooling_device_register\0"
	"regulator_get_mode\0"
	"platform_get_resource_byname\0"
	"regulator_get\0"
	"devm_clk_get\0"
	"thermal_cooling_device_update\0"
	"proc_mkdir\0"
	"proc_create\0"
	"proc_create_data\0"
	"remove_proc_entry\0"
	"of_find_node_opts_by_path\0"
	"strchr\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,mtk_apu_power_throttling");

MODULE_ALIAS("of:N*T*Cmtk68xx,apurpc");
MODULE_ALIAS("of:N*T*Cmtk68xx,apurpcC*");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_power");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_powerC*");
MODULE_ALIAS("of:N*T*Cmtk6873,apucore");
MODULE_ALIAS("of:N*T*Cmtk6873,apucoreC*");
MODULE_ALIAS("of:N*T*Cmtk6853,apucore");
MODULE_ALIAS("of:N*T*Cmtk6853,apucoreC*");
MODULE_ALIAS("of:N*T*Cmtk688x,apucore");
MODULE_ALIAS("of:N*T*Cmtk688x,apucoreC*");
MODULE_ALIAS("of:N*T*Cmtk6877,apucore");
MODULE_ALIAS("of:N*T*Cmtk6877,apucoreC*");
MODULE_ALIAS("of:N*T*Cmtk6873,apucon");
MODULE_ALIAS("of:N*T*Cmtk6873,apuconC*");
MODULE_ALIAS("of:N*T*Cmtk6853,apucon");
MODULE_ALIAS("of:N*T*Cmtk6853,apuconC*");
MODULE_ALIAS("of:N*T*Cmtk688x,apucon");
MODULE_ALIAS("of:N*T*Cmtk688x,apuconC*");
MODULE_ALIAS("of:N*T*Cmtk6877,apucon");
MODULE_ALIAS("of:N*T*Cmtk6877,apuconC*");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpu");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpuC*");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpu0");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpu0C*");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpu1");
MODULE_ALIAS("of:N*T*Cmtk68x3,apuvpu1C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu0");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu0C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu1");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu1C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu2");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu2C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu0");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu0C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu1");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu1C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu2");
MODULE_ALIAS("of:N*T*Cmtk688x,apuvpu2C*");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpu");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpuC*");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpu0");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpu0C*");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpu1");
MODULE_ALIAS("of:N*T*Cmtk6877,apuvpu1C*");
MODULE_ALIAS("of:N*T*Cmtk6873,apumdla");
MODULE_ALIAS("of:N*T*Cmtk6873,apumdlaC*");
MODULE_ALIAS("of:N*T*Cmtk6873,apumdla0");
MODULE_ALIAS("of:N*T*Cmtk6873,apumdla0C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdla");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdlaC*");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdla0");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdla0C*");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdla1");
MODULE_ALIAS("of:N*T*Cmtk688x,apumdla1C*");
MODULE_ALIAS("of:N*T*Cmtk6877,apumdla");
MODULE_ALIAS("of:N*T*Cmtk6877,apumdlaC*");
MODULE_ALIAS("of:N*T*Cmtk6877,apumdla0");
MODULE_ALIAS("of:N*T*Cmtk6877,apumdla0C*");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_cb");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_cbC*");
MODULE_ALIAS("of:N*T*Cmtk688x,apuiommu");
MODULE_ALIAS("of:N*T*Cmtk688x,apuiommuC*");
MODULE_ALIAS("of:N*T*Cmtk6877,apuiommu");
MODULE_ALIAS("of:N*T*Cmtk6877,apuiommuC*");
MODULE_ALIAS("of:N*T*Cmtk6893,vb");
MODULE_ALIAS("of:N*T*Cmtk6893,vbC*");
MODULE_ALIAS("of:N*T*Cmtk6877,vb");
MODULE_ALIAS("of:N*T*Cmtk6877,vbC*");
MODULE_ALIAS("of:N*T*Cmtk6853,vb");
MODULE_ALIAS("of:N*T*Cmtk6853,vbC*");

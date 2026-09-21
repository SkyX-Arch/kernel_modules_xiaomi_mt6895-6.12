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

KSYMTAB_FUNC(ssusb_offload_streaming, "_gpl", "");
KSYMTAB_FUNC(ssusb_offload_register, "_gpl", "");
KSYMTAB_FUNC(ssusb_offload_unregister, "_gpl", "");
KSYMTAB_FUNC(ssusb_power_register_notifier, "_gpl", "");
KSYMTAB_FUNC(ssusb_power_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(ssusb_get_drvdata, "", "");
KSYMTAB_FUNC(ssusb_phy_set_prop, "", "");
KSYMTAB_FUNC(ssusb_phy_get_prop, "", "");
KSYMTAB_DATA(__tracepoint_mtu3_gadget_ep_enable, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mtu3_gadget_ep_enable, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mtu3_gadget_ep_enable, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mtu3_gadget_ep_disable, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mtu3_gadget_ep_disable, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mtu3_gadget_ep_disable, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mtu3_req_complete, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mtu3_req_complete, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mtu3_req_complete, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mtu3_gadget_queue, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mtu3_gadget_queue, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mtu3_gadget_queue, "_gpl", "");

SYMBOL_CRC(ssusb_offload_streaming, 0x6c93143a, "_gpl");
SYMBOL_CRC(ssusb_offload_register, 0x36363bbd, "_gpl");
SYMBOL_CRC(ssusb_offload_unregister, 0xd4c3ff9c, "_gpl");
SYMBOL_CRC(ssusb_power_register_notifier, 0x8b651458, "_gpl");
SYMBOL_CRC(ssusb_power_unregister_notifier, 0xab7db974, "_gpl");
SYMBOL_CRC(ssusb_get_drvdata, 0xae1300a5, "");
SYMBOL_CRC(ssusb_phy_set_prop, 0x9a7a8ffb, "");
SYMBOL_CRC(ssusb_phy_get_prop, 0x7748e5e1, "");
SYMBOL_CRC(__tracepoint_mtu3_gadget_ep_enable, 0xd8c1c72c, "_gpl");
SYMBOL_CRC(__traceiter_mtu3_gadget_ep_enable, 0x8ea26ae9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mtu3_gadget_ep_enable, 0xf6d3b0f9, "_gpl");
SYMBOL_CRC(__tracepoint_mtu3_gadget_ep_disable, 0xb9df72cd, "_gpl");
SYMBOL_CRC(__traceiter_mtu3_gadget_ep_disable, 0xda48ef9b, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mtu3_gadget_ep_disable, 0x4f4846e1, "_gpl");
SYMBOL_CRC(__tracepoint_mtu3_req_complete, 0xb28bb192, "_gpl");
SYMBOL_CRC(__traceiter_mtu3_req_complete, 0x4dba6ddb, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mtu3_req_complete, 0x7165bfdb, "_gpl");
SYMBOL_CRC(__tracepoint_mtu3_gadget_queue, 0x7679998c, "_gpl");
SYMBOL_CRC(__traceiter_mtu3_gadget_queue, 0xb74653ee, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mtu3_gadget_queue, 0xb59797c5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x401167cc, "_dev_info" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x3574e894, "platform_get_irq_byname_optional" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x0d8a4ecf, "usb_get_maximum_speed" },
	{ 0xdba614e4, "device_property_read_string" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x4f3b14b9, "device_find_child_by_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x234c9de3, "put_device" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0xdad8004c, "device_wakeup_disable" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x39aa4888, "usb_role_string" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xf9a482f9, "msleep" },
	{ 0x394b5321, "pm_relax" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1690b503, "usb_role_switch_get_drvdata" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf4434165, "usb_get_role_switch_default_mode" },
	{ 0xa52bb5e9, "__dev_fwnode" },
	{ 0xa378d640, "usb_role_switch_register" },
	{ 0x019b0275, "devm_extcon_register_notifier" },
	{ 0x39cbf649, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fef0c54, "usb_gadget_set_state" },
	{ 0x8e4cd884, "phy_set_mode_ext" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55ddc106, "usb_gadget_unmap_request" },
	{ 0x35403164, "usb_gadget_giveback_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x377c1724, "usb_add_gadget_udc" },
	{ 0xfd5853bb, "usb_del_gadget_udc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x725a21a7, "of_remove_property" },
	{ 0x03a30f79, "usb_ep_set_maxpacket_limit" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xfa9a8905, "usb_gadget_map_request" },
	{ 0x37175dbc, "usb_ep_set_halt" },
	{ 0x64311477, "regmap_read" },
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0x0a105114, "gpiod_set_debounce" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x6871ad9c, "phy_power_on" },
	{ 0x69e67f21, "phy_power_off" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x9eb9f3ca, "gpiod_get_value_cansleep" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x8ad898b0, "pm_runtime_set_autosuspend_delay" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xb52ea45f, "dev_pm_set_dedicated_wake_irq_reverse" },
	{ 0x99bfae36, "pm_runtime_forbid" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0x66b972b0, "devm_clk_bulk_get_optional" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x8790a642, "devm_of_phy_get_by_index" },
	{ 0x6bca1903, "devm_platform_ioremap_resource_byname" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x96ffee86, "usb_get_dr_mode" },
	{ 0xb62a3ddf, "extcon_get_edev_by_phandle" },
	{ 0x2c762752, "dev_err_probe" },
	{ 0x5b732ff1, "device_node_to_regmap" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x301f88d4, "dev_pm_domain_attach_by_name" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0xfd074c74, "__pm_runtime_use_autosuspend" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xcb69cd57, "phy_init" },
	{ 0x91df1baa, "phy_exit" },
	{ 0xe0eec6c6, "of_find_node_with_property" },
	{ 0x35c7757d, "__device_reset" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe6e94f93, "__pm_runtime_suspend" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x0facfec0, "device_link_del" },
	{ 0x4c4377b6, "dev_pm_domain_detach" },
	{ 0x6ab61a33, "dev_pm_clear_wake_irq" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0xf45608d2, "of_platform_populate" },
	{ 0x5bafbc7c, "of_platform_depopulate" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xaceba966, "devm_iounmap" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8bdffccb, "dma_pool_create" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x00148653, "vsnprintf" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x1a146ec3, "usb_ep_type_string" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0xbedcc97f, "usb_debug_root" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xfdf04ae0,
	0x401167cc,
	0xb4ce05a5,
	0x77ae495d,
	0x3574e894,
	0xf7ca28dd,
	0x0d8a4ecf,
	0xdba614e4,
	0x2077fc84,
	0xf9583f23,
	0xe523ad75,
	0xc5b6f236,
	0x1ed4c5e6,
	0xa823db6e,
	0x4f3b14b9,
	0xe2d5255a,
	0x234c9de3,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0x64127b67,
	0x615911d7,
	0x75ca79b5,
	0x922f45a6,
	0xc8c7229e,
	0x6b201699,
	0xe37ad0cf,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0x5be9ce07,
	0xea6f49c8,
	0x34db050b,
	0xd35cce70,
	0x13269d10,
	0x4eb4c414,
	0xf70e4a4d,
	0x7a4b1be7,
	0xdad8004c,
	0x47884890,
	0x0f05f001,
	0xefe8a82e,
	0xac594e02,
	0x57d5e131,
	0x031dffa4,
	0x39aa4888,
	0xd5977bfb,
	0xed55cabd,
	0x49cd25ed,
	0x62b33777,
	0xa571f6b0,
	0x9166fc03,
	0x8c03d20c,
	0x2882d40e,
	0x3667c9f1,
	0xf9a482f9,
	0x394b5321,
	0x4dd0661c,
	0xb43f9365,
	0xc3055d20,
	0x3c3ff9fd,
	0x8c8569cb,
	0x1690b503,
	0x5a921311,
	0x656e4a6e,
	0x124bad4d,
	0x2d39b0a7,
	0x85df9b6c,
	0x3b6c41ea,
	0xf4434165,
	0xa52bb5e9,
	0xa378d640,
	0x019b0275,
	0x39cbf649,
	0x15ba50a6,
	0x1fef0c54,
	0x8e4cd884,
	0x7e19152a,
	0xb5b54b34,
	0xba8fbd64,
	0xc38c83b8,
	0x55ddc106,
	0x35403164,
	0xc6f46339,
	0x377c1724,
	0xfd5853bb,
	0x7f02188f,
	0x9a835040,
	0x725a21a7,
	0x03a30f79,
	0x47a915f1,
	0xfa9a8905,
	0x37175dbc,
	0x64311477,
	0x8869c950,
	0x0a105114,
	0x7ec9701a,
	0x482d47c8,
	0xf5a94b83,
	0xd9051672,
	0x3e54ac69,
	0x6871ad9c,
	0x69e67f21,
	0xf93aae46,
	0x576b05bf,
	0x9eb9f3ca,
	0x1fec5304,
	0xead5c8e5,
	0xc7a7e770,
	0x63c08029,
	0x479f7d4b,
	0xba0aee2e,
	0xce5bc4d0,
	0x92997ed8,
	0x12db679a,
	0x8ad898b0,
	0xd4e81a21,
	0xb52ea45f,
	0x99bfae36,
	0x9a807c66,
	0x66b972b0,
	0xb088bcfc,
	0x8790a642,
	0x6bca1903,
	0x7c7f271f,
	0x96ffee86,
	0xb62a3ddf,
	0x2c762752,
	0x5b732ff1,
	0x49dc0e6c,
	0x301f88d4,
	0x0be515ae,
	0x146a11fc,
	0xfd074c74,
	0x1744f3e7,
	0x3b1b6444,
	0xb318cbab,
	0xcb69cd57,
	0x91df1baa,
	0xe0eec6c6,
	0x35c7757d,
	0x6ebe366f,
	0xe6e94f93,
	0x1e6d26a8,
	0x5c27c40f,
	0x0facfec0,
	0x4c4377b6,
	0x6ab61a33,
	0x6fc35f2b,
	0xf4b6fbcb,
	0xf45608d2,
	0x5bafbc7c,
	0x374f8976,
	0xee73d233,
	0xaceba966,
	0x2f7754a8,
	0x8bdffccb,
	0xb5aa7165,
	0x678b96ec,
	0xe0da6e4a,
	0x57c959d2,
	0x29eba14a,
	0x00148653,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x1a146ec3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0xe80494d6,
	0x5cf4d4de,
	0x4e870156,
	0xb7c7d237,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x88db9f48,
	0x2be0c009,
	0x7a8ef1df,
	0xbedcc97f,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"power_supply_get_by_name\0"
	"_dev_info\0"
	"_dev_err\0"
	"usb_speed_string\0"
	"platform_get_irq_byname_optional\0"
	"platform_get_irq\0"
	"usb_get_maximum_speed\0"
	"device_property_read_string\0"
	"of_device_is_compatible\0"
	"devm_request_threaded_irq\0"
	"synchronize_irq\0"
	"queue_work_on\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"device_find_child_by_name\0"
	"strcmp\0"
	"put_device\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"bitmap_find_next_zero_area_off\0"
	"__bitmap_set\0"
	"__fortify_panic\0"
	"__bitmap_clear\0"
	"devm_kmalloc\0"
	"of_find_property\0"
	"power_supply_set_property\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__pm_runtime_idle\0"
	"__pm_runtime_resume\0"
	"preempt_schedule_notrace\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_disable\0"
	"system_power_efficient_wq\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_online_mask\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"usb_role_string\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"alloc_workqueue\0"
	"sysfs_create_group\0"
	"__mutex_init\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"usb_role_switch_unregister\0"
	"sysfs_remove_group\0"
	"msleep\0"
	"pm_relax\0"
	"pm_stay_awake\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"sprintf\0"
	"kstrtoint\0"
	"usb_role_switch_get_drvdata\0"
	"strncmp\0"
	"snprintf\0"
	"kstrtobool\0"
	"kstrdup\0"
	"strsep\0"
	"kstrtouint\0"
	"usb_get_role_switch_default_mode\0"
	"__dev_fwnode\0"
	"usb_role_switch_register\0"
	"devm_extcon_register_notifier\0"
	"extcon_get_state\0"
	"jiffies\0"
	"usb_gadget_set_state\0"
	"phy_set_mode_ext\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock\0"
	"_raw_spin_lock\0"
	"mod_timer\0"
	"usb_gadget_unmap_request\0"
	"usb_gadget_giveback_request\0"
	"init_timer_key\0"
	"usb_add_gadget_udc\0"
	"usb_del_gadget_udc\0"
	"__msecs_to_jiffies\0"
	"__list_del_entry_valid_or_report\0"
	"of_remove_property\0"
	"usb_ep_set_maxpacket_limit\0"
	"_dev_warn\0"
	"usb_gadget_map_request\0"
	"usb_ep_set_halt\0"
	"regmap_read\0"
	"devm_gpiod_get_optional\0"
	"gpiod_set_debounce\0"
	"gpiod_to_irq\0"
	"blocking_notifier_call_chain\0"
	"__init_rwsem\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"phy_power_on\0"
	"phy_power_off\0"
	"__arm_smccc_smc\0"
	"regmap_update_bits_base\0"
	"gpiod_get_value_cansleep\0"
	"__of_parse_phandle_with_args\0"
	"clk_bulk_prepare\0"
	"clk_bulk_enable\0"
	"clk_bulk_unprepare\0"
	"clk_bulk_disable\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"_printk\0"
	"__platform_driver_register\0"
	"pm_runtime_set_autosuspend_delay\0"
	"pm_runtime_enable\0"
	"dev_pm_set_dedicated_wake_irq_reverse\0"
	"pm_runtime_forbid\0"
	"devm_regulator_get\0"
	"devm_clk_bulk_get_optional\0"
	"of_count_phandle_with_args\0"
	"devm_of_phy_get_by_index\0"
	"devm_platform_ioremap_resource_byname\0"
	"of_get_next_child\0"
	"usb_get_dr_mode\0"
	"extcon_get_edev_by_phandle\0"
	"dev_err_probe\0"
	"device_node_to_regmap\0"
	"dev_get_regmap\0"
	"dev_pm_domain_attach_by_name\0"
	"device_link_add\0"
	"__pm_runtime_set_status\0"
	"__pm_runtime_use_autosuspend\0"
	"device_wakeup_enable\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"phy_init\0"
	"phy_exit\0"
	"of_find_node_with_property\0"
	"__device_reset\0"
	"ktime_get_mono_fast_ns\0"
	"__pm_runtime_suspend\0"
	"strstr\0"
	"__pm_runtime_disable\0"
	"device_link_del\0"
	"dev_pm_domain_detach\0"
	"dev_pm_clear_wake_irq\0"
	"platform_driver_unregister\0"
	"syscon_node_to_regmap\0"
	"of_platform_populate\0"
	"of_platform_depopulate\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"devm_iounmap\0"
	"dma_pool_free\0"
	"dma_pool_create\0"
	"dma_pool_destroy\0"
	"dma_pool_alloc\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"trace_event_buffer_reserve\0"
	"vsnprintf\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"usb_ep_type_string\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"bpf_trace_run1\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"debugfs_remove\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"regulator_is_enabled\0"
	"usb_debug_root\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mtu3");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mtu3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mtu3");
MODULE_ALIAS("of:N*T*Cmediatek,mtu3C*");

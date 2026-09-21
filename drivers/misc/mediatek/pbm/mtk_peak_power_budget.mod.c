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

KSYMTAB_FUNC(ppb_set_wifi_pwr_addr, "", "");
KSYMTAB_FUNC(kicker_ppb_request_power, "", "");
KSYMTAB_FUNC(get_ppb_mbrain_data, "", "");
KSYMTAB_FUNC(get_hpt_mbrain_data, "", "");
KSYMTAB_FUNC(register_ppb_cgppt_cb, "", "");
KSYMTAB_FUNC(register_ppb_mbrian_cb, "", "");
KSYMTAB_FUNC(unregister_ppb_mbrian_cb, "", "");
KSYMTAB_FUNC(register_hpt_mbrian_cb, "", "");
KSYMTAB_FUNC(unregister_hpt_mbrian_cb, "", "");

SYMBOL_CRC(ppb_set_wifi_pwr_addr, 0x5013040f, "");
SYMBOL_CRC(kicker_ppb_request_power, 0xe025340d, "");
SYMBOL_CRC(get_ppb_mbrain_data, 0xd03f9698, "");
SYMBOL_CRC(get_hpt_mbrain_data, 0x6b78c672, "");
SYMBOL_CRC(register_ppb_cgppt_cb, 0xde3fad19, "");
SYMBOL_CRC(register_ppb_mbrian_cb, 0x1e494880, "");
SYMBOL_CRC(unregister_ppb_mbrian_cb, 0x8f0e84c5, "");
SYMBOL_CRC(register_hpt_mbrian_cb, 0xdcf983d2, "");
SYMBOL_CRC(unregister_hpt_mbrian_cb, 0x331c5685, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2fae0e87, "gpueb_get_send_PIN_ID_by_name" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x0fbee3af, "get_gpueb_ipidev" },
	{ 0xe82761d1, "mtk_ipi_send_compl_to_gpueb" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x1e4766cf, "lbat_set_hpt_mode" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x99ae3229, "register_bp_thl_notify" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x2e6a3d66, "lbat_set_ppb_mode" },
	{ 0xc75c6ea7, "bat_oc_set_ppb_mode" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x0d0f3f5f, "get_mcupms_ipidev_number" },
	{ 0x73e08ef8, "get_mcupm_ipidev" },
	{ 0xdaf0d189, "gpufreq_set_mfgsys_config" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0xf3cdc3c6,
	0x66bcb0f8,
	0x656e4a6e,
	0xc38c83b8,
	0xb43f9365,
	0x56470118,
	0x2fae0e87,
	0x65bb94f6,
	0x0fbee3af,
	0xe82761d1,
	0x31b65f04,
	0x1ed4c5e6,
	0xa4f72277,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x75ca79b5,
	0x34db050b,
	0xf70e4a4d,
	0xd35cce70,
	0xc5b6f236,
	0xa079425d,
	0xe136f93c,
	0x12db679a,
	0x374f8976,
	0x9f0ef8fa,
	0x5e292cf6,
	0x62b33777,
	0x1e4766cf,
	0x725b192d,
	0x3b1b6444,
	0x99ae3229,
	0xc6f46339,
	0xa191ccd1,
	0x07183fe6,
	0x5a921311,
	0xd5977bfb,
	0x1cc7f053,
	0xed55cabd,
	0xbcab6ee6,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x8c8569cb,
	0x88db9f48,
	0x2be0c009,
	0x2e6a3d66,
	0xc75c6ea7,
	0xe2d5255a,
	0x6db70f53,
	0x0d0f3f5f,
	0x73e08ef8,
	0xdaf0d189,
	0xfdf04ae0,
	0xebdbd5bd,
	0xb6e871b8,
	0x82ee90dc,
	0x1fec5304,
	0x51fcca8a,
	0x3667c9f1,
	0x6fc35f2b,
	0x15ba50a6,
	0xac594e02,
	0x2d3385d3,
	0xce8498d7,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"of_find_compatible_node\0"
	"of_property_read_u64\0"
	"snprintf\0"
	"mod_timer\0"
	"ktime_get\0"
	"__warn_printk\0"
	"gpueb_get_send_PIN_ID_by_name\0"
	"mtk_ipi_register\0"
	"get_gpueb_ipidev\0"
	"mtk_ipi_send_compl_to_gpueb\0"
	"of_property_read_u32_index\0"
	"of_find_node_by_name\0"
	"_dev_notice\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__fortify_panic\0"
	"_raw_spin_lock_irqsave\0"
	"preempt_schedule_notrace\0"
	"_raw_spin_unlock_irqrestore\0"
	"queue_work_on\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"__platform_driver_register\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"of_get_named_gpio\0"
	"sysfs_create_group\0"
	"lbat_set_hpt_mode\0"
	"power_supply_reg_notifier\0"
	"of_get_property\0"
	"register_bp_thl_notify\0"
	"init_timer_key\0"
	"gpiod_get_raw_value\0"
	"gpio_to_desc\0"
	"strncmp\0"
	"mutex_lock\0"
	"scmi_tinysys_common_set\0"
	"mutex_unlock\0"
	"sscanf\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"kstrtoint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"lbat_set_ppb_mode\0"
	"bat_oc_set_ppb_mode\0"
	"strcmp\0"
	"mtk_ipi_send_compl\0"
	"get_mcupms_ipidev_number\0"
	"get_mcupm_ipidev\0"
	"gpufreq_set_mfgsys_config\0"
	"power_supply_get_by_name\0"
	"devm_power_supply_get_by_phandle\0"
	"power_supply_get_property\0"
	"timer_delete_sync\0"
	"__of_parse_phandle_with_args\0"
	"get_scmi_tinysys_info\0"
	"sysfs_remove_group\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__cpu_online_mask\0"
	"system_wq\0"
	"kernel_kobj\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpueb,mtk_tinysys_ipi,mtk_low_battery_throttling,mtk_bp_thl,tinysys-scmi,mtk_battery_oc_throttling,mcupm,mtk_gpufreq_wrapper");

MODULE_ALIAS("of:N*T*Cmediatek,peak_power_budget");
MODULE_ALIAS("of:N*T*Cmediatek,peak_power_budgetC*");

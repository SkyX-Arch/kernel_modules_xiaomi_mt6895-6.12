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

KSYMTAB_FUNC(register_pt_isolate_cb, "", "");

SYMBOL_CRC(register_pt_isolate_cb, 0x183e1569, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0x037a0cba, "kfree" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xaa643b64, "register_low_battery_notify" },
	{ 0x1c539951, "register_battery_oc_notify" },
	{ 0x99ae3229, "register_bp_thl_notify" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x401167cc, "_dev_info" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfefe2f2f, "freq_qos_remove_request" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0x656e4a6e,
	0x3b1b6444,
	0xd5977bfb,
	0xed55cabd,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0xa3783864,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0x1fec5304,
	0x12db679a,
	0xf8bd87ca,
	0x037a0cba,
	0xdb4e2667,
	0xaa643b64,
	0x1c539951,
	0x99ae3229,
	0xe922b94d,
	0xa4f72277,
	0x7e19152a,
	0x1af93d4f,
	0xf70e4a4d,
	0xf93aae46,
	0x401167cc,
	0xbcab6ee6,
	0xfefe2f2f,
	0xcd6f7bae,
	0x9a835040,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xde7ece30,
	0xac594e02,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"snprintf\0"
	"of_get_property\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"bpf_trace_run2\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"__of_parse_phandle_with_args\0"
	"__platform_driver_register\0"
	"cpufreq_cpu_get\0"
	"kfree\0"
	"freq_qos_add_request\0"
	"register_low_battery_notify\0"
	"register_battery_oc_notify\0"
	"register_bp_thl_notify\0"
	"device_create_file\0"
	"_dev_notice\0"
	"__list_add_valid_or_report\0"
	"freq_qos_update_request\0"
	"preempt_schedule_notrace\0"
	"__arm_smccc_smc\0"
	"_dev_info\0"
	"sscanf\0"
	"freq_qos_remove_request\0"
	"cpufreq_cpu_put\0"
	"__list_del_entry_valid_or_report\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_low_battery_throttling,mtk_battery_oc_throttling,mtk_bp_thl");

MODULE_ALIAS("of:N*T*Cmediatek,cpu-power-throttling");
MODULE_ALIAS("of:N*T*Cmediatek,cpu-power-throttlingC*");

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

KSYMTAB_DATA(__tracepoint_mtk_pm_qos_update_request, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mtk_pm_qos_update_request, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mtk_pm_qos_update_request, "_gpl", "");
KSYMTAB_FUNC(dvfsrc_get_required_opp_peak_bw, "", "");
KSYMTAB_FUNC(dvfsrc_get_required_opp_emi_bw, "", "");
KSYMTAB_FUNC(dvfsrc_get_required_opp_peak_bw_legacy, "", "");
KSYMTAB_FUNC(register_dvfsrc_debug_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_dvfsrc_debug_notifier, "_gpl", "");
KSYMTAB_FUNC(dvfsrc_set_power_model_ddr_request, "", "");
KSYMTAB_FUNC(mtk_dvfsrc_send_request, "", "");
KSYMTAB_FUNC(mtk_dvfsrc_query_info, "", "");

SYMBOL_CRC(__tracepoint_mtk_pm_qos_update_request, 0xf022bb1f, "_gpl");
SYMBOL_CRC(__traceiter_mtk_pm_qos_update_request, 0x90965b4c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mtk_pm_qos_update_request, 0x1434f17d, "_gpl");
SYMBOL_CRC(dvfsrc_get_required_opp_peak_bw, 0x5c3524de, "");
SYMBOL_CRC(dvfsrc_get_required_opp_emi_bw, 0xc670bf39, "");
SYMBOL_CRC(dvfsrc_get_required_opp_peak_bw_legacy, 0x950eb0fb, "");
SYMBOL_CRC(register_dvfsrc_debug_notifier, 0x1eaa20eb, "_gpl");
SYMBOL_CRC(unregister_dvfsrc_debug_notifier, 0x97d2932a, "_gpl");
SYMBOL_CRC(dvfsrc_set_power_model_ddr_request, 0xe9c332b5, "");
SYMBOL_CRC(mtk_dvfsrc_send_request, 0xdbdd71e6, "");
SYMBOL_CRC(mtk_dvfsrc_query_info, 0x2b955cab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x92997ed8, "_printk" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x9166fada, "strncpy" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x401167cc, "_dev_info" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa12bf5a7, "platform_get_irq_optional" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x1dce7694, "devm_of_platform_populate" },
	{ 0x27ef3d1e, "platform_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x92bc696d, "platform_device_register_full" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x31b65f04,
	0x92997ed8,
	0xd9051672,
	0x3e54ac69,
	0xb4ce05a5,
	0xf93aae46,
	0xeae3dfd6,
	0x47a915f1,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x9166fada,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x881d741f,
	0x1fec5304,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x482d47c8,
	0x401167cc,
	0x12db679a,
	0x14fe5355,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xa12bf5a7,
	0xf9583f23,
	0x1dce7694,
	0x27ef3d1e,
	0xc8c7229e,
	0xe136f93c,
	0x6b201699,
	0x92bc696d,
	0xb43f9365,
	0xc3055d20,
	0xba8fbd64,
	0xb5b54b34,
	0x34db050b,
	0xd35cce70,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"of_property_read_u32_index\0"
	"_printk\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"_dev_err\0"
	"__arm_smccc_smc\0"
	"__const_udelay\0"
	"_dev_warn\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strncpy\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run3\0"
	"__of_parse_phandle_with_args\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"blocking_notifier_call_chain\0"
	"_dev_info\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_irq_optional\0"
	"devm_request_threaded_irq\0"
	"devm_of_platform_populate\0"
	"platform_device_unregister\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"platform_device_register_full\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


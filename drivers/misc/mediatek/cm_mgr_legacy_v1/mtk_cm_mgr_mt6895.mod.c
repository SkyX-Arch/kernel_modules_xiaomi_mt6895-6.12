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

KSYMTAB_FUNC(cm_mgr_get_perfs_mt6895, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_perf_platform_set_status_mt6895, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_perf_set_status_mt6895, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_perf_set_force_status_mt6895, "_gpl", "");
KSYMTAB_FUNC(check_cm_mgr_status_mt6895, "_gpl", "");

SYMBOL_CRC(cm_mgr_get_perfs_mt6895, 0x30e64526, "_gpl");
SYMBOL_CRC(cm_mgr_perf_platform_set_status_mt6895, 0x6484a40e, "_gpl");
SYMBOL_CRC(cm_mgr_perf_set_status_mt6895, 0xc999229b, "_gpl");
SYMBOL_CRC(cm_mgr_perf_set_force_status_mt6895, 0xe87c9148, "_gpl");
SYMBOL_CRC(check_cm_mgr_status_mt6895, 0xf758c07e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x240f5e9a, "cm_mgr_get_num_perf" },
	{ 0x06668784, "get_cm_step_num" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe0c0f71c, "cm_mgr_get_perf_enable" },
	{ 0xdb9edfa7, "debounce_times_perf_down_local_set" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd83bf87a, "cm_mgr_get_dram_opp_base" },
	{ 0x35ef043f, "cm_mgr_set_dram_opp_base" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0xbed136a3, "cm_mgr_get_bw_path" },
	{ 0x4c71307f, "debounce_times_perf_down_local_get" },
	{ 0x58d81146, "debounce_times_perf_down_get" },
	{ 0x2074c378, "cm_mgr_get_disable_fb" },
	{ 0x3f5a1448, "cm_mgr_get_blank_status" },
	{ 0xa957182d, "cm_mgr_get_perf_force_enable" },
	{ 0x80d21b7c, "cm_mgr_set_perf_force_enable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x634eb2cc, "cm_mgr_update_dram_by_cpu_opp" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x2f765d7f, "debounce_times_perf_down_force_local_set" },
	{ 0x0afda797, "debounce_times_perf_down_force_local_get" },
	{ 0x3852e890, "debounce_times_perf_force_down_get" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd898679e, "cm_mgr_common_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xfb3bd632, "cm_mgr_set_num_perf" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x401167cc, "_dev_info" },
	{ 0x19b81f57, "cm_mgr_set_bw_path" },
	{ 0x5c3524de, "dvfsrc_get_required_opp_peak_bw" },
	{ 0x6b344e25, "cm_mgr_set_num_array" },
	{ 0x5db3cbd4, "cm_mgr_get_num_array" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x337411b2, "cm_mgr_to_sspm_command" },
	{ 0x3b452af4, "cm_mgr_check_dts_setting" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7e948ff0, "cm_mgr_register_hook" },
	{ 0x32c2b953, "cm_mgr_set_pdev" },
	{ 0x0f7a56e3, "dev_pm_genpd_set_performance_state" },
	{ 0x82de2cf6, "mtk_dramc_get_ddr_type" },
	{ 0x458ec8f9, "mtk_dramc_get_steps_freq" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xe35b87dc, "cm_mgr_unregister_hook" },
	{ 0x42203369, "cm_mgr_common_exit" },
	{ 0xb2978ccf, "icc_put" },
	{ 0x037a0cba, "kfree" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x240f5e9a,
	0x06668784,
	0xc38c83b8,
	0xe0c0f71c,
	0xdb9edfa7,
	0xb43f9365,
	0xd83bf87a,
	0x35ef043f,
	0x95bab132,
	0xbed136a3,
	0x4c71307f,
	0x58d81146,
	0x2074c378,
	0x3f5a1448,
	0xa957182d,
	0x80d21b7c,
	0x34db050b,
	0x634eb2cc,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0x2f765d7f,
	0x0afda797,
	0x3852e890,
	0xd35cce70,
	0x12db679a,
	0xd898679e,
	0x92997ed8,
	0xb088bcfc,
	0xfb3bd632,
	0x49eaeb64,
	0x401167cc,
	0x19b81f57,
	0x5c3524de,
	0x6b344e25,
	0x5db3cbd4,
	0xf3cdc3c6,
	0xaf7cb74b,
	0xe2d5255a,
	0x337411b2,
	0x3b452af4,
	0xc6f46339,
	0xffeedf6a,
	0x7e948ff0,
	0x32c2b953,
	0x0f7a56e3,
	0x82de2cf6,
	0x458ec8f9,
	0xc8c7229e,
	0x1ed4c5e6,
	0xa823db6e,
	0x3d0ffa5c,
	0x40863ba1,
	0x42ad47ad,
	0xe35b87dc,
	0x42203369,
	0xb2978ccf,
	0x037a0cba,
	0x6fc35f2b,
	0x15ba50a6,
	0xaf56600a,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"cm_mgr_get_num_perf\0"
	"get_cm_step_num\0"
	"mod_timer\0"
	"cm_mgr_get_perf_enable\0"
	"debounce_times_perf_down_local_set\0"
	"ktime_get\0"
	"cm_mgr_get_dram_opp_base\0"
	"cm_mgr_set_dram_opp_base\0"
	"icc_set_bw\0"
	"cm_mgr_get_bw_path\0"
	"debounce_times_perf_down_local_get\0"
	"debounce_times_perf_down_get\0"
	"cm_mgr_get_disable_fb\0"
	"cm_mgr_get_blank_status\0"
	"cm_mgr_get_perf_force_enable\0"
	"cm_mgr_set_perf_force_enable\0"
	"_raw_spin_lock_irqsave\0"
	"cm_mgr_update_dram_by_cpu_opp\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"debounce_times_perf_down_force_local_set\0"
	"debounce_times_perf_down_force_local_get\0"
	"debounce_times_perf_force_down_get\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"cm_mgr_common_init\0"
	"_printk\0"
	"of_count_phandle_with_args\0"
	"cm_mgr_set_num_perf\0"
	"of_icc_get\0"
	"_dev_info\0"
	"cm_mgr_set_bw_path\0"
	"dvfsrc_get_required_opp_peak_bw\0"
	"cm_mgr_set_num_array\0"
	"cm_mgr_get_num_array\0"
	"of_find_compatible_node\0"
	"of_property_read_string\0"
	"strcmp\0"
	"cm_mgr_to_sspm_command\0"
	"cm_mgr_check_dts_setting\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"cm_mgr_register_hook\0"
	"cm_mgr_set_pdev\0"
	"dev_pm_genpd_set_performance_state\0"
	"mtk_dramc_get_ddr_type\0"
	"mtk_dramc_get_steps_freq\0"
	"devm_kmalloc\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"ioremap_prot\0"
	"queue_delayed_work_on\0"
	"cm_mgr_unregister_hook\0"
	"cm_mgr_common_exit\0"
	"icc_put\0"
	"kfree\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"arm64_use_ng_mappings\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_cm_mgr_legacy_v1,mtk-dvfsrc,mtk_cm_ipi_legacy_v1,mtk_dramc");


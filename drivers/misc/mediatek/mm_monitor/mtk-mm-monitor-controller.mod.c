#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(mmmc_smi_mon_interval, "", "");
KSYMTAB_DATA(mmmc_smi_mon_dump_interval, "", "");
KSYMTAB_DATA(mmmc_smi_mon_comm0, "", "");
KSYMTAB_DATA(mmmc_smi_mon_comm1, "", "");
KSYMTAB_DATA(mmmc_fixed_r_ostdbl, "", "");
KSYMTAB_DATA(mmmc_fixed_w_ostdbl, "", "");
KSYMTAB_FUNC(mmmc_get_state, "", "");
KSYMTAB_FUNC(get_mux_axi_pair_by_comm_port, "", "");
KSYMTAB_FUNC(get_mux_axi_pair_by_larb, "", "");
KSYMTAB_FUNC(get_min_freq_from_axi_mon, "", "");
KSYMTAB_FUNC(mtk_mmmc_smmu_factor_register_notifier, "_gpl", "");
KSYMTAB_FUNC(get_ostdbl_smmu_factor, "", "");
KSYMTAB_FUNC(mtk_mmmc_threshold_us_register_notifier, "_gpl", "");
KSYMTAB_FUNC(get_axi_mon_threshold_us, "", "");
KSYMTAB_FUNC(mtk_mmmc_set_ostdbl, "", "");
KSYMTAB_FUNC(mtk_mmmc_set_ostdbl_by_larb, "", "");
KSYMTAB_FUNC(mtk_mmmc_enable_axi_limiter, "", "");
KSYMTAB_FUNC(mtk_mmmc_set_bw_limiter, "", "");
KSYMTAB_FUNC(mtk_set_mmmc_rg, "", "");
KSYMTAB_FUNC(mtk_init_monitor, "", "");
KSYMTAB_FUNC(mtk_dump_monitor, "", "");
KSYMTAB_FUNC(mtk_dump_bwr, "", "");

SYMBOL_CRC(mmmc_smi_mon_interval, 0x86239d51, "");
SYMBOL_CRC(mmmc_smi_mon_dump_interval, 0x1ca68e2c, "");
SYMBOL_CRC(mmmc_smi_mon_comm0, 0x6ad0d9c8, "");
SYMBOL_CRC(mmmc_smi_mon_comm1, 0x73cbe889, "");
SYMBOL_CRC(mmmc_fixed_r_ostdbl, 0x4c8dbf19, "");
SYMBOL_CRC(mmmc_fixed_w_ostdbl, 0x061afa56, "");
SYMBOL_CRC(mmmc_get_state, 0x543b2c3d, "");
SYMBOL_CRC(get_mux_axi_pair_by_comm_port, 0x43159e09, "");
SYMBOL_CRC(get_mux_axi_pair_by_larb, 0x89fb6c4f, "");
SYMBOL_CRC(get_min_freq_from_axi_mon, 0xb40b7068, "");
SYMBOL_CRC(mtk_mmmc_smmu_factor_register_notifier, 0x335fe0ad, "_gpl");
SYMBOL_CRC(get_ostdbl_smmu_factor, 0x6d26a66a, "");
SYMBOL_CRC(mtk_mmmc_threshold_us_register_notifier, 0xae2f8d0a, "_gpl");
SYMBOL_CRC(get_axi_mon_threshold_us, 0x71f2ae6a, "");
SYMBOL_CRC(mtk_mmmc_set_ostdbl, 0x16f5dcb2, "");
SYMBOL_CRC(mtk_mmmc_set_ostdbl_by_larb, 0xba2df52b, "");
SYMBOL_CRC(mtk_mmmc_enable_axi_limiter, 0xd7a333dc, "");
SYMBOL_CRC(mtk_mmmc_set_bw_limiter, 0x36381ea2, "");
SYMBOL_CRC(mtk_set_mmmc_rg, 0x1d255fdd, "");
SYMBOL_CRC(mtk_init_monitor, 0xa2eb7307, "");
SYMBOL_CRC(mtk_dump_monitor, 0xb3eed9cf, "");
SYMBOL_CRC(mtk_dump_bwr, 0x3954936f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92997ed8, "_printk" },
	{ 0xae9c26f1, "get_mmmc_subsys_max" },
	{ 0x7bdb4bd8, "param_set_int" },
	{ 0xc0b10b8e, "param_get_int" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4c265ac2, "get_freq_from_mux_id" },
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8ff4c3de, "get_mminfra_pd" },
	{ 0xc9f935df, "enable_mminfra_funnel" },
	{ 0xfc165940, "is_valid_offset_value" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xad50f482, "mminfra_fake_engine_bus_settings" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x4e6b48f6, "emi_moniter_settings" },
	{ 0x037a0cba, "kfree" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xf1d19835, "devm_krealloc" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x4e415422, "mtk_smi_pd_register_notifier" },
	{ 0xfc35a399, "get_power_domains" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x1f4ba756, "param_get_uint" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6b201699, "of_find_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x8c8569cb,
	0x92997ed8,
	0xae9c26f1,
	0x7bdb4bd8,
	0xc0b10b8e,
	0xbcab6ee6,
	0x4c265ac2,
	0x354cf7b5,
	0x656e4a6e,
	0x8ff4c3de,
	0xc9f935df,
	0xfc165940,
	0xea6f49c8,
	0xad50f482,
	0xba0aee2e,
	0xce5bc4d0,
	0xb39378cc,
	0x4e6b48f6,
	0x037a0cba,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xa823db6e,
	0xf1d19835,
	0x3b1b6444,
	0x4e415422,
	0xfc35a399,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x881d741f,
	0x1f4ba756,
	0xe94986d6,
	0xcaec9cda,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xf70e4a4d,
	0xf3cdc3c6,
	0x5a9cfed6,
	0xb3f7646e,
	0xf9a482f9,
	0xa079425d,
	0xc8c7229e,
	0xe136f93c,
	0x52c5c991,
	0x1fec5304,
	0x6b201699,
	0xb318cbab,
	0xcd6bda8d,
	0x40863ba1,
	0x3b6c41ea,
	0x12db679a,
	0x14fe5355,
	0xb2fb935e,
	0x75fb9062,
	0xac594e02,
	0x0f05f001,
	0xaf56600a,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"kstrtoint\0"
	"_printk\0"
	"get_mmmc_subsys_max\0"
	"param_set_int\0"
	"param_get_int\0"
	"sscanf\0"
	"get_freq_from_mux_id\0"
	"raw_notifier_chain_register\0"
	"snprintf\0"
	"get_mminfra_pd\0"
	"enable_mminfra_funnel\0"
	"is_valid_offset_value\0"
	"dma_set_coherent_mask\0"
	"mminfra_fake_engine_bus_settings\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"emi_moniter_settings\0"
	"kfree\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"of_find_device_by_node\0"
	"devm_krealloc\0"
	"of_get_property\0"
	"mtk_smi_pd_register_notifier\0"
	"get_power_domains\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run3\0"
	"param_get_uint\0"
	"sched_clock\0"
	"raw_notifier_call_chain\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"preempt_schedule_notrace\0"
	"of_find_compatible_node\0"
	"dma_alloc_attrs\0"
	"kthread_should_stop\0"
	"msleep\0"
	"of_property_count_elems_of_size\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"__kmalloc_noprof\0"
	"__of_parse_phandle_with_args\0"
	"of_find_property\0"
	"of_find_node_opts_by_path\0"
	"of_property_read_string_helper\0"
	"ioremap_prot\0"
	"kstrtouint\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"param_ops_int\0"
	"arch_timer_read_counter\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"arm64_use_ng_mappings\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mm-monitor-platform-mt6895,mtk-smi");


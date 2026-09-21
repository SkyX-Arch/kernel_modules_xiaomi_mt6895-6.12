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

KSYMTAB_FUNC(stop_dvfs_log, "_gpl", "");
KSYMTAB_FUNC(is_fdvfs_support, "_gpl", "");
KSYMTAB_FUNC(cpufreq_fdvfs_cci_switch, "_gpl", "");

SYMBOL_CRC(stop_dvfs_log, 0x77546caa, "_gpl");
SYMBOL_CRC(is_fdvfs_support, 0xd72e835b, "_gpl");
SYMBOL_CRC(cpufreq_fdvfs_cci_switch, 0x5ee7b813, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xc0ce7521, "__request_region" },
	{ 0xaba63322, "of_iomap" },
	{ 0xedc03953, "iounmap" },
	{ 0x6711919a, "__release_region" },
	{ 0xef7dddaf, "of_cpu_device_node_get" },
	{ 0x401167cc, "_dev_info" },
	{ 0x210f2f7b, "cpufreq_register_driver" },
	{ 0x5eb0184d, "register_die_notifier" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0x037a0cba, "kfree" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x526381f8, "em_dev_register_perf_domain" },
	{ 0x8f77e638, "get_cpu_device" },
	{ 0xf9b8b03c, "cpufreq_unregister_driver" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x9591bf2b, "iomem_resource" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xe27121cb, "panic_notifier_list" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0x75d2f713, "cpufreq_generic_attr" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0x14fe5355,
	0x1ed4c5e6,
	0xa823db6e,
	0x3d0ffa5c,
	0xc0ce7521,
	0xaba63322,
	0xedc03953,
	0x6711919a,
	0xef7dddaf,
	0x401167cc,
	0x210f2f7b,
	0x5eb0184d,
	0x83b96232,
	0x40863ba1,
	0x1fec5304,
	0x6b722180,
	0x0c1a5ee3,
	0xe136f93c,
	0x9f46ced8,
	0xc8c7229e,
	0x329da95b,
	0xc289e46d,
	0x037a0cba,
	0x52384e38,
	0xb43f9365,
	0xd273017c,
	0xe17134b6,
	0xc3055d20,
	0x526381f8,
	0x8f77e638,
	0xf9b8b03c,
	0x6fc35f2b,
	0x92acb4e9,
	0x9591bf2b,
	0xde7ece30,
	0xe27121cb,
	0xaf56600a,
	0xe4bc4b09,
	0x75d2f713,
	0x0f05f001,
	0xefe8a82e,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"__request_region\0"
	"of_iomap\0"
	"iounmap\0"
	"__release_region\0"
	"of_cpu_device_node_get\0"
	"_dev_info\0"
	"cpufreq_register_driver\0"
	"register_die_notifier\0"
	"atomic_notifier_chain_register\0"
	"ioremap_prot\0"
	"__of_parse_phandle_with_args\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"of_property_read_variable_u32_array\0"
	"__sw_hweight64\0"
	"devm_kmalloc\0"
	"devm_platform_ioremap_resource\0"
	"cpufreq_generic_frequency_table_verify\0"
	"kfree\0"
	"cpu_latency_qos_add_request\0"
	"ktime_get\0"
	"cpu_latency_qos_remove_request\0"
	"__kmalloc_cache_noprof\0"
	"usleep_range_state\0"
	"em_dev_register_perf_domain\0"
	"get_cpu_device\0"
	"cpufreq_unregister_driver\0"
	"platform_driver_unregister\0"
	"param_ops_uint\0"
	"iomem_resource\0"
	"__cpu_possible_mask\0"
	"panic_notifier_list\0"
	"arm64_use_ng_mappings\0"
	"cpu_topology\0"
	"cpufreq_generic_attr\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_DATA(smi_lock, "", "");
KSYMTAB_FUNC(mtk_smi_pd_register_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_pd_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_common_bw_set, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_common_ostdl_set, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_bw_set, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_port_dis_ultra, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_bw_thr, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_hrt_perm, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_check_comm_ref_cnt, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_check_larb_ref_cnt, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_init_power_off, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dump_last_pd, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_ultra_dis, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_sysram_set, "_gpl", "");
KSYMTAB_FUNC(smi_sysram_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_driver_register_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_driver_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_clamp_and_lock, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_disable, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_larb_ut_result, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_ctrl_type, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_get_if_in_use, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_put_if_in_use, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_ostdl_type, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_larb_value, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_comm_value, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_clear_larb_set_value, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_clear_comm_set_value, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dump_all_setting, "_gpl", "");

SYMBOL_CRC(smi_lock, 0xd36facd9, "");
SYMBOL_CRC(mtk_smi_pd_register_notifier, 0x4e415422, "_gpl");
SYMBOL_CRC(mtk_smi_pd_unregister_notifier, 0x0a106e14, "_gpl");
SYMBOL_CRC(mtk_smi_common_bw_set, 0x6cb988b8, "_gpl");
SYMBOL_CRC(mtk_smi_common_ostdl_set, 0x7d0f0af3, "_gpl");
SYMBOL_CRC(mtk_smi_larb_bw_set, 0x5be6773f, "_gpl");
SYMBOL_CRC(mtk_smi_larb_port_dis_ultra, 0x2f82bfe7, "_gpl");
SYMBOL_CRC(mtk_smi_larb_bw_thr, 0x6dc72c09, "_gpl");
SYMBOL_CRC(mtk_smi_set_hrt_perm, 0xcd96d90b, "_gpl");
SYMBOL_CRC(mtk_smi_check_comm_ref_cnt, 0x54e78467, "_gpl");
SYMBOL_CRC(mtk_smi_check_larb_ref_cnt, 0x69b88bd8, "_gpl");
SYMBOL_CRC(mtk_smi_init_power_off, 0xec0dac4b, "_gpl");
SYMBOL_CRC(mtk_smi_dump_last_pd, 0xdd9998f6, "_gpl");
SYMBOL_CRC(mtk_smi_larb_ultra_dis, 0x5984e3ec, "_gpl");
SYMBOL_CRC(mtk_smi_sysram_set, 0xc5da8bd5, "_gpl");
SYMBOL_CRC(smi_sysram_enable, 0x3ff02f53, "_gpl");
SYMBOL_CRC(mtk_smi_driver_register_notifier, 0x74ff086a, "_gpl");
SYMBOL_CRC(mtk_smi_driver_unregister_notifier, 0x76c3380f, "_gpl");
SYMBOL_CRC(mtk_smi_larb_clamp_and_lock, 0x33639dfb, "_gpl");
SYMBOL_CRC(mtk_smi_larb_enable, 0x53262a34, "_gpl");
SYMBOL_CRC(mtk_smi_larb_disable, 0x6b85895c, "_gpl");
SYMBOL_CRC(mtk_smi_larb_ut_result, 0x92f1ce03, "_gpl");
SYMBOL_CRC(mtk_smi_ctrl_type, 0x8b67d3c9, "_gpl");
SYMBOL_CRC(mtk_smi_get_if_in_use, 0x585e61e7, "_gpl");
SYMBOL_CRC(mtk_smi_put_if_in_use, 0x3dc52f97, "_gpl");
SYMBOL_CRC(mtk_smi_set_ostdl_type, 0x1313fa7f, "_gpl");
SYMBOL_CRC(mtk_smi_set_larb_value, 0x4895b49c, "_gpl");
SYMBOL_CRC(mtk_smi_set_comm_value, 0xad638e01, "_gpl");
SYMBOL_CRC(mtk_smi_clear_larb_set_value, 0x42b9ed65, "_gpl");
SYMBOL_CRC(mtk_smi_clear_comm_set_value, 0xb15b7fdc, "_gpl");
SYMBOL_CRC(mtk_smi_dump_all_setting, 0xb2ff2e21, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0x07629943, "raw_notifier_chain_unregister" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x0b47b8af, "clkchk_external_dump" },
	{ 0x401167cc, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3e19cd49, "__platform_register_drivers" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0x5a921311, "strncmp" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xaba63322, "of_iomap" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xbeefe2e7, "mtk_mminfra_on_off" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0x5df1d53f, "component_add" },
	{ 0xf6efd5a0, "component_del" },
	{ 0x314737eb, "platform_unregister_drivers" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x354cf7b5,
	0x07629943,
	0xa4f72277,
	0x92997ed8,
	0xf5edea2e,
	0x45b60059,
	0x2077fc84,
	0x34db050b,
	0xcaec9cda,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x13269d10,
	0xd35cce70,
	0xd5977bfb,
	0xed55cabd,
	0xb6e6d99d,
	0xb077e70a,
	0xb43f9365,
	0xb4ce05a5,
	0x0b47b8af,
	0x401167cc,
	0x7c9a7371,
	0x815588a6,
	0xc5b6f236,
	0x3e19cd49,
	0x14fe5355,
	0x6b201699,
	0xeab7088e,
	0x5a921311,
	0xea23ff02,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xa823db6e,
	0x0be515ae,
	0xd4e81a21,
	0xa571f6b0,
	0xba0aee2e,
	0xce5bc4d0,
	0xedc03953,
	0x40863ba1,
	0x656e4a6e,
	0xc8c7229e,
	0xcd6bda8d,
	0x1fec5304,
	0xe136f93c,
	0x49cd25ed,
	0xf9a482f9,
	0x4eb4c414,
	0xaba63322,
	0xc1cad332,
	0x5c27c40f,
	0xbeefe2e7,
	0x31b65f04,
	0x3b1b6444,
	0x09674aa9,
	0x5df1d53f,
	0xf6efd5a0,
	0x314737eb,
	0x92acb4e9,
	0xaf56600a,
	0xa65c6def,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"raw_notifier_chain_register\0"
	"raw_notifier_chain_unregister\0"
	"_dev_notice\0"
	"_printk\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"of_device_is_compatible\0"
	"_raw_spin_lock_irqsave\0"
	"raw_notifier_call_chain\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__pm_runtime_idle\0"
	"_raw_spin_unlock_irqrestore\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"ktime_get\0"
	"_dev_err\0"
	"clkchk_external_dump\0"
	"_dev_info\0"
	"clk_prepare\0"
	"clk_enable\0"
	"queue_work_on\0"
	"__platform_register_drivers\0"
	"of_device_get_match_data\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"strncmp\0"
	"devm_clk_get\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"pm_runtime_enable\0"
	"__mutex_init\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"iounmap\0"
	"ioremap_prot\0"
	"snprintf\0"
	"devm_kmalloc\0"
	"of_property_read_string_helper\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"alloc_workqueue\0"
	"msleep\0"
	"__pm_runtime_resume\0"
	"of_iomap\0"
	"of_address_to_resource\0"
	"__pm_runtime_disable\0"
	"mtk_mminfra_on_off\0"
	"of_property_read_u32_index\0"
	"of_get_property\0"
	"dev_pm_genpd_add_notifier\0"
	"component_add\0"
	"component_del\0"
	"platform_unregister_drivers\0"
	"param_ops_uint\0"
	"arm64_use_ng_mappings\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,clk-common,mtk-mminfra-util-dummy");


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

KSYMTAB_FUNC(mtk_mminfra_get, "_gpl", "");
KSYMTAB_FUNC(mtk_mminfra_put, "_gpl", "");
KSYMTAB_FUNC(mtk_mminfra_off_gipc, "_gpl", "");
KSYMTAB_FUNC(mtk_mmpc_resource_dump, "_gpl", "");

SYMBOL_CRC(mtk_mminfra_get, 0xeef63a52, "_gpl");
SYMBOL_CRC(mtk_mminfra_put, 0x2b9a772c, "_gpl");
SYMBOL_CRC(mtk_mminfra_off_gipc, 0x35812b3b, "_gpl");
SYMBOL_CRC(mtk_mmpc_resource_dump, 0x30f77d42, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbcab6ee6, "sscanf" },
	{ 0x92997ed8, "_printk" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0xedc03953, "iounmap" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe4247826, "pm_runtime_get_if_in_use" },
	{ 0x401167cc, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbeefe2e7, "mtk_mminfra_on_off" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x686fd714, "mtk_smi_dbg_register_notifier" },
	{ 0x4089cb21, "mtk_smi_dbg_register_pwr_ctrl_cb" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x6bd3152d, "cmdq_util_mminfra_cmd" },
	{ 0xf1470828, "cmdq_get_mminfra_cb" },
	{ 0x1964de55, "cmdq_get_mminfra_gce_cg_cb" },
	{ 0xc829819a, "pm_runtime_irq_safe" },
	{ 0xcf3fd141, "vcp_register_mminfra_cb_ex" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x418cddcd, "register_devapc_power_callback" },
	{ 0xf1b2f356, "register_devapc_exception_callback" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x5a921311, "strncmp" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x29c0975f, "mtk_smi_dbg_dump_for_mminfra" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0xbaf3c9e9, "cmdq_util_mmuen_devapc_disable" },
	{ 0x18135df6, "mtk_smi_dbg_cg_status" },
	{ 0x0dd32e2c, "cmdq_dump_usage" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4a3c8e94, "pdchk_debug_dump" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe808d22f, "mtk_clk_mminfra_hwv_power_ctrl_optional" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xbcab6ee6,
	0x92997ed8,
	0x1cc7f053,
	0xedc03953,
	0x3b6c41ea,
	0xe4247826,
	0x401167cc,
	0x656e4a6e,
	0xbeefe2e7,
	0x40863ba1,
	0x51fcca8a,
	0xe136f93c,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x4eb4c414,
	0x13269d10,
	0x12db679a,
	0x3d0ffa5c,
	0xa4f72277,
	0x9f0ef8fa,
	0xf3cdc3c6,
	0xa823db6e,
	0x686fd714,
	0x4089cb21,
	0xd4e81a21,
	0x31b65f04,
	0xf7ca28dd,
	0x6bd3152d,
	0xf1470828,
	0x1964de55,
	0xc829819a,
	0xcf3fd141,
	0x09674aa9,
	0x6b201699,
	0xeab7088e,
	0xea23ff02,
	0x418cddcd,
	0xf1b2f356,
	0xe17134b6,
	0x5a921311,
	0xf9583f23,
	0xf5edea2e,
	0xdb976d85,
	0x29c0975f,
	0x689f7bde,
	0xbaf3c9e9,
	0x18135df6,
	0x0dd32e2c,
	0xe94986d6,
	0xeae3dfd6,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x34db050b,
	0x4a3c8e94,
	0xd35cce70,
	0xe808d22f,
	0x6fc35f2b,
	0xaf56600a,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"sscanf\0"
	"_printk\0"
	"scmi_tinysys_common_set\0"
	"iounmap\0"
	"kstrtouint\0"
	"pm_runtime_get_if_in_use\0"
	"_dev_info\0"
	"snprintf\0"
	"mtk_mminfra_on_off\0"
	"ioremap_prot\0"
	"get_scmi_tinysys_info\0"
	"of_property_read_variable_u32_array\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"__platform_driver_register\0"
	"platform_get_resource\0"
	"_dev_notice\0"
	"devm_ioremap_resource\0"
	"of_find_compatible_node\0"
	"of_find_device_by_node\0"
	"mtk_smi_dbg_register_notifier\0"
	"mtk_smi_dbg_register_pwr_ctrl_cb\0"
	"pm_runtime_enable\0"
	"of_property_read_u32_index\0"
	"platform_get_irq\0"
	"cmdq_util_mminfra_cmd\0"
	"cmdq_get_mminfra_cb\0"
	"cmdq_get_mminfra_gce_cg_cb\0"
	"pm_runtime_irq_safe\0"
	"vcp_register_mminfra_cb_ex\0"
	"dev_pm_genpd_add_notifier\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"devm_clk_get\0"
	"register_devapc_power_callback\0"
	"register_devapc_exception_callback\0"
	"__kmalloc_cache_noprof\0"
	"strncmp\0"
	"devm_request_threaded_irq\0"
	"___ratelimit\0"
	"aee_kernel_warning_api_func\0"
	"mtk_smi_dbg_dump_for_mminfra\0"
	"mtk_smi_dbg_hang_detect\0"
	"cmdq_util_mmuen_devapc_disable\0"
	"mtk_smi_dbg_cg_status\0"
	"cmdq_dump_usage\0"
	"sched_clock\0"
	"__const_udelay\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"_raw_spin_lock_irqsave\0"
	"pdchk_debug_dump\0"
	"_raw_spin_unlock_irqrestore\0"
	"mtk_clk_mminfra_hwv_power_ctrl_optional\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi,mtk-mminfra-util-dummy,mtk-smi-dbg,mtk-cmdq-drv-ext,vcp_status,device-apc-common,aee_aed,clk-common");


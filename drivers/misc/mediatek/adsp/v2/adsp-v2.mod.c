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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x69a976ed, "adsp_core0_init" },
	{ 0x754e2e4c, "adsp_after_bootup" },
	{ 0xdf9ebbd6, "adsp_core1_init" },
	{ 0x5f0ee176, "get_adsp_semaphore" },
	{ 0xb3db4910, "release_adsp_semaphore" },
	{ 0x3e19cd49, "__platform_register_drivers" },
	{ 0xbf37e88f, "register_3way_semaphore_notifier" },
	{ 0x92c514e1, "adsp_system_bootup" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x92997ed8, "_printk" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x0b82a95c, "adsp_qos_probe" },
	{ 0x4add6357, "adsp_ipic_probe" },
	{ 0x8bc266ef, "adsp_mem_device_probe" },
	{ 0x8b34848b, "adsp_mbox_probe" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc5c3ff9f, "adsp_dbg_dump_init" },
	{ 0xb40913ec, "register_adspsys" },
	{ 0xd56acf04, "switch_adsp_power" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x362b2d79, "get_adsp_mbox_pin_send" },
	{ 0xfedab08c, "get_adsp_mbox_pin_recv" },
	{ 0x896ade09, "register_adsp_core" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b279ab4, "of_property_read_variable_u64_array" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x82a3dfea, "adsp_set_scene_bw" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0xe67b4b39, "adsp_set_slp_prot" },
	{ 0x3fbe65ce, "unregister_3way_semaphore_notifier" },
	{ 0x314737eb, "platform_unregister_drivers" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xe4e68da9, "adsp_set_clock_mux" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x69a976ed,
	0x754e2e4c,
	0xdf9ebbd6,
	0x5f0ee176,
	0xb3db4910,
	0x3e19cd49,
	0xbf37e88f,
	0x92c514e1,
	0x34675dcc,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x374f8976,
	0x92997ed8,
	0xee73d233,
	0x0b82a95c,
	0x4add6357,
	0x8bc266ef,
	0x8b34848b,
	0xd4e81a21,
	0xc5c3ff9f,
	0xb40913ec,
	0xd56acf04,
	0xc8c7229e,
	0xe136f93c,
	0x5c27c40f,
	0xf7ca28dd,
	0x40863ba1,
	0x66bcb0f8,
	0x362b2d79,
	0xfedab08c,
	0x896ade09,
	0x608741b5,
	0x6b279ab4,
	0x1fec5304,
	0x82a3dfea,
	0x09674aa9,
	0xe67b4b39,
	0x3fbe65ce,
	0x314737eb,
	0xaf56600a,
	0xe4e68da9,
	0xea23ff02,
	0x2396c7f0,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x4eb4c414,
	0x13269d10,
	0xb6e6d99d,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"adsp_core0_init\0"
	"adsp_after_bootup\0"
	"adsp_core1_init\0"
	"get_adsp_semaphore\0"
	"release_adsp_semaphore\0"
	"__platform_register_drivers\0"
	"register_3way_semaphore_notifier\0"
	"adsp_system_bootup\0"
	"of_match_node\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_resource_byname\0"
	"_printk\0"
	"devm_ioremap\0"
	"adsp_qos_probe\0"
	"adsp_ipic_probe\0"
	"adsp_mem_device_probe\0"
	"adsp_mbox_probe\0"
	"pm_runtime_enable\0"
	"adsp_dbg_dump_init\0"
	"register_adspsys\0"
	"switch_adsp_power\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"__pm_runtime_disable\0"
	"platform_get_irq\0"
	"ioremap_prot\0"
	"of_property_read_u64\0"
	"get_adsp_mbox_pin_send\0"
	"get_adsp_mbox_pin_recv\0"
	"register_adsp_core\0"
	"__init_swait_queue_head\0"
	"of_property_read_variable_u64_array\0"
	"__of_parse_phandle_with_args\0"
	"adsp_set_scene_bw\0"
	"dev_pm_genpd_add_notifier\0"
	"adsp_set_slp_prot\0"
	"unregister_3way_semaphore_notifier\0"
	"platform_unregister_drivers\0"
	"arm64_use_ng_mappings\0"
	"adsp_set_clock_mux\0"
	"devm_clk_get\0"
	"clk_set_parent\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"clk_disable\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "adsp,mtk-afe-external");


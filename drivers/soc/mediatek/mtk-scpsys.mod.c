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

KSYMTAB_FUNC(register_scpsys_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_scpsys_notifier, "_gpl", "");
KSYMTAB_FUNC(register_apu_callback, "_gpl", "");
KSYMTAB_FUNC(__mminfra_hwv_power_ctrl, "_gpl", "");
KSYMTAB_FUNC(set_scpsys_ops, "", "");
KSYMTAB_FUNC(init_scp, "_gpl", "");
KSYMTAB_FUNC(mtk_register_power_domains, "", "");

SYMBOL_CRC(register_scpsys_notifier, 0xf011b5ad, "_gpl");
SYMBOL_CRC(unregister_scpsys_notifier, 0xd54b91a4, "_gpl");
SYMBOL_CRC(register_apu_callback, 0x12ea8b75, "_gpl");
SYMBOL_CRC(__mminfra_hwv_power_ctrl, 0xc0142c36, "_gpl");
SYMBOL_CRC(set_scpsys_ops, 0x56b96f15, "");
SYMBOL_CRC(init_scp, 0x217428b4, "_gpl");
SYMBOL_CRC(mtk_register_power_domains, 0xb60546b7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x64311477, "regmap_read" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x92997ed8, "_printk" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xe7a3e359, "pm_genpd_init" },
	{ 0x0b47b8af, "clkchk_external_dump" },
	{ 0x83b34535, "of_genpd_add_provider_onecell" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b732ff1, "device_node_to_regmap" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa23fe416, "pm_genpd_add_subdomain" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0xeae3dfd6,
	0x6b883e5a,
	0x64311477,
	0xb4ce05a5,
	0x1ed4c5e6,
	0x92997ed8,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xee73d233,
	0x2ccea269,
	0xa4f72277,
	0xe7a3e359,
	0x0b47b8af,
	0x83b34535,
	0xe136f93c,
	0xc8c7229e,
	0xe2d5255a,
	0x5b732ff1,
	0xa1fd40f1,
	0x1fec5304,
	0xea23ff02,
	0x6b201699,
	0xeab7088e,
	0x5a921311,
	0x98cf60b3,
	0x34db050b,
	0xb43f9365,
	0x576b05bf,
	0xd35cce70,
	0xb6e6d99d,
	0xb077e70a,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x031dffa4,
	0x57d5e131,
	0x7c9a7371,
	0x815588a6,
	0xc3055d20,
	0xf93aae46,
	0x37befc70,
	0x7a8ef1df,
	0x12db679a,
	0x14fe5355,
	0xa23fe416,
	0x6fc35f2b,
	0x15ba50a6,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"__const_udelay\0"
	"regmap_write\0"
	"regmap_read\0"
	"_dev_err\0"
	"of_find_node_by_name\0"
	"_printk\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"devm_ioremap\0"
	"devm_regulator_get_optional\0"
	"_dev_notice\0"
	"pm_genpd_init\0"
	"clkchk_external_dump\0"
	"of_genpd_add_provider_onecell\0"
	"of_property_read_variable_u32_array\0"
	"devm_kmalloc\0"
	"strcmp\0"
	"device_node_to_regmap\0"
	"syscon_regmap_lookup_by_phandle\0"
	"__of_parse_phandle_with_args\0"
	"devm_clk_get\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"strncmp\0"
	"strlen\0"
	"_raw_spin_lock_irqsave\0"
	"ktime_get\0"
	"regmap_update_bits_base\0"
	"_raw_spin_unlock_irqrestore\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"regulator_disable\0"
	"regulator_enable\0"
	"clk_prepare\0"
	"clk_enable\0"
	"usleep_range_state\0"
	"__arm_smccc_smc\0"
	"jiffies_to_msecs\0"
	"regulator_is_enabled\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"pm_genpd_add_subdomain\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common");


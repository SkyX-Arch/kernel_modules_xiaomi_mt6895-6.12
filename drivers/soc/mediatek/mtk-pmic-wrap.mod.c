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

KSYMTAB_FUNC(pwrap_node_to_regmap, "_gpl", "");
KSYMTAB_FUNC(pmic_wrap_eint_status, "", "");
KSYMTAB_FUNC(pmic_wrap_eint_clr, "", "");

SYMBOL_CRC(pwrap_node_to_regmap, 0x9acd0995, "_gpl");
SYMBOL_CRC(pmic_wrap_eint_status, 0xf5a4f5c8, "");
SYMBOL_CRC(pmic_wrap_eint_clr, 0xb34912e5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa4f72277, "_dev_notice" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x01000e51, "schedule" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x96a71dd8, "__devm_regmap_init" },
	{ 0xf45608d2, "of_platform_populate" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1051d96a, "__devm_reset_control_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xa4f72277,
	0x4e8b8def,
	0xce5bc4d0,
	0xf5edea2e,
	0xdb976d85,
	0x05590c04,
	0x01000e51,
	0xa823db6e,
	0x6b722180,
	0x0c1a5ee3,
	0xe94986d6,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0xd7c2b302,
	0x34675dcc,
	0x374f8976,
	0x9f0ef8fa,
	0xea23ff02,
	0xf7ca28dd,
	0x96a71dd8,
	0xf45608d2,
	0x92997ed8,
	0xc8c7229e,
	0x1051d96a,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x24f39c39,
	0xf9583f23,
	0xb6e6d99d,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_notice\0"
	"__pm_stay_awake\0"
	"wake_up_process\0"
	"___ratelimit\0"
	"aee_kernel_warning_api_func\0"
	"__pm_relax\0"
	"schedule\0"
	"of_find_device_by_node\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"sched_clock\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"of_match_device\0"
	"of_match_node\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"devm_clk_get\0"
	"platform_get_irq\0"
	"__devm_regmap_init\0"
	"of_platform_populate\0"
	"_printk\0"
	"devm_kmalloc\0"
	"__devm_reset_control_get\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"reset_control_reset\0"
	"devm_request_threaded_irq\0"
	"clk_disable\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");

MODULE_ALIAS("of:N*T*Cmediatek,mt6323");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6351");
MODULE_ALIAS("of:N*T*Cmediatek,mt6351C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359-pmic");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359-pmicC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359pC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6380-regulator");
MODULE_ALIAS("of:N*T*Cmediatek,mt6380-regulatorC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6739-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6739-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6785-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6785-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6797-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6797-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8168-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8168-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-pwrapC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-pwrap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-pwrapC*");

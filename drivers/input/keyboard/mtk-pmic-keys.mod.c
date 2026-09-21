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

KSYMTAB_FUNC(last_key_set, "", "");
KSYMTAB_FUNC(last_key_get, "", "");
KSYMTAB_FUNC(ktf_mtk_pmic_kpd_test, "", "");

SYMBOL_CRC(last_key_set, 0x2af2c296, "");
SYMBOL_CRC(last_key_get, 0x15c70286, "");
SYMBOL_CRC(ktf_mtk_pmic_kpd_test, 0x04c75441, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a921311, "strncmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x401167cc, "_dev_info" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x9c9b99d4, "devm_input_allocate_device" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x6ab78205, "input_register_device" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x5d3df214, "input_set_capability" },
	{ 0x64311477, "regmap_read" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xcc898074, "input_event" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5a921311,
	0x92997ed8,
	0x401167cc,
	0x576b05bf,
	0x12db679a,
	0x6fc35f2b,
	0xce2840e7,
	0xd7c2b302,
	0x49dc0e6c,
	0x9c9b99d4,
	0xb4ce05a5,
	0x7c7f271f,
	0xf7ca28dd,
	0x0f314d3e,
	0xe922b94d,
	0x6ab78205,
	0xc8c7229e,
	0x796ead29,
	0xe136f93c,
	0x6b201699,
	0xf9583f23,
	0x5d3df214,
	0x64311477,
	0x4e8b8def,
	0x05590c04,
	0xcc898074,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0x96848186,
	0x8c8569cb,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"strncmp\0"
	"_printk\0"
	"_dev_info\0"
	"regmap_update_bits_base\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"irq_set_irq_wake\0"
	"of_match_device\0"
	"dev_get_regmap\0"
	"devm_input_allocate_device\0"
	"_dev_err\0"
	"of_get_next_child\0"
	"platform_get_irq\0"
	"wakeup_source_register\0"
	"device_create_file\0"
	"input_register_device\0"
	"devm_kmalloc\0"
	"of_get_next_available_child\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"devm_request_threaded_irq\0"
	"input_set_capability\0"
	"regmap_read\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"input_event\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"scnprintf\0"
	"kstrtoint\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-keysC*");

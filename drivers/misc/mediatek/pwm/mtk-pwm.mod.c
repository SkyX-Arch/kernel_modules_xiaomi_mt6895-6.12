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

KSYMTAB_FUNC(mt_pwm_disable, "", "");
KSYMTAB_FUNC(pwm_set_easy_config, "", "");
KSYMTAB_FUNC(pwm_set_spec_config, "", "");
KSYMTAB_FUNC(mt_pwm_dump_regs, "", "");
KSYMTAB_FUNC(mt_pwm_clk_sel_hal, "", "");

SYMBOL_CRC(mt_pwm_disable, 0xd602ce35, "");
SYMBOL_CRC(pwm_set_easy_config, 0x84f909fc, "");
SYMBOL_CRC(pwm_set_spec_config, 0xa54c8591, "");
SYMBOL_CRC(mt_pwm_dump_regs, 0x0c4339a9, "");
SYMBOL_CRC(mt_pwm_clk_sel_hal, 0xdb812b64, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xaba63322, "of_iomap" },
	{ 0x92997ed8, "_printk" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0xeae3dfd6,
	0xd5977bfb,
	0xed55cabd,
	0xd35cce70,
	0xaba63322,
	0x92997ed8,
	0xe922b94d,
	0x7c611278,
	0xf7ca28dd,
	0xa571f6b0,
	0xf9583f23,
	0x11d6167b,
	0x12db679a,
	0x6fc35f2b,
	0xa1fd40f1,
	0xb4ce05a5,
	0xea23ff02,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x576b05bf,
	0x6b201699,
	0xe136f93c,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"__const_udelay\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_raw_spin_unlock_irqrestore\0"
	"of_iomap\0"
	"_printk\0"
	"device_create_file\0"
	"irq_of_parse_and_map\0"
	"platform_get_irq\0"
	"__mutex_init\0"
	"devm_request_threaded_irq\0"
	"device_remove_file\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"syscon_regmap_lookup_by_phandle\0"
	"_dev_err\0"
	"devm_clk_get\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"regmap_update_bits_base\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


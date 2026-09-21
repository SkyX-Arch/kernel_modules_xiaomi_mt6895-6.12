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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x92997ed8, "_printk" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xa76fda5a, "devm_rc_allocate_device" },
	{ 0x218660b2, "devm_rc_register_device" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xa54c8591, "pwm_set_spec_config" },
	{ 0xd602ce35, "mt_pwm_disable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xc8c7229e,
	0xaf7cb74b,
	0x92997ed8,
	0x9a807c66,
	0x2220455c,
	0xa76fda5a,
	0x218660b2,
	0xb4ce05a5,
	0xe136f93c,
	0x7a8ef1df,
	0x57d5e131,
	0xa54c8591,
	0xd602ce35,
	0x031dffa4,
	0x5a9cfed6,
	0xc3055d20,
	0x78cf2345,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_kmalloc\0"
	"of_property_read_string\0"
	"_printk\0"
	"devm_regulator_get\0"
	"regulator_set_voltage\0"
	"devm_rc_allocate_device\0"
	"devm_rc_register_device\0"
	"_dev_err\0"
	"of_property_read_variable_u32_array\0"
	"regulator_is_enabled\0"
	"regulator_enable\0"
	"pwm_set_spec_config\0"
	"mt_pwm_disable\0"
	"regulator_disable\0"
	"dma_alloc_attrs\0"
	"usleep_range_state\0"
	"dma_free_attrs\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-pwm");


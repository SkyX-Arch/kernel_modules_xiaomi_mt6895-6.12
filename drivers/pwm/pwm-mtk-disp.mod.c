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
	{ 0x93c9f59d, "devm_pwmchip_alloc" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0x92997ed8, "_printk" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x401167cc, "_dev_info" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x03cea96e, "__devm_pwmchip_add" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xaba63322, "of_iomap" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x495231ea, "mul_u64_u64_div_u64" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x93c9f59d,
	0x14fe5355,
	0x329da95b,
	0x92997ed8,
	0xea23ff02,
	0x401167cc,
	0x2396c7f0,
	0x03cea96e,
	0xb4ce05a5,
	0xaba63322,
	0x1fec5304,
	0xe136f93c,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x556e4390,
	0x495231ea,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_pwmchip_alloc\0"
	"of_device_get_match_data\0"
	"devm_platform_ioremap_resource\0"
	"_printk\0"
	"devm_clk_get\0"
	"_dev_info\0"
	"clk_set_parent\0"
	"__devm_pwmchip_add\0"
	"_dev_err\0"
	"of_iomap\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"clk_get_rate\0"
	"mul_u64_u64_div_u64\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6595-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6595-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-pwm0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-pwm0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-pwm0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-pwm0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-pwm0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-disp-pwm0C*");

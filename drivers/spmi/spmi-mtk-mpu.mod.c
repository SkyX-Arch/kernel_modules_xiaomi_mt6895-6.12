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
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x401167cc, "_dev_info" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x185f3324, "ext_pmif_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x14fe5355,
	0x401167cc,
	0x374f8976,
	0x9f0ef8fa,
	0xc6f46339,
	0xc38c83b8,
	0xc8c7229e,
	0xe136f93c,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x7f02188f,
	0x6fc35f2b,
	0x185f3324,
	0x15ba50a6,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"_dev_info\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"init_timer_key\0"
	"mod_timer\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__msecs_to_jiffies\0"
	"platform_driver_unregister\0"
	"ext_pmif_base\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "spmi-mtk-pmif");

MODULE_ALIAS("of:N*T*Cmediatek,mt6886-spmi_pmif_mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-spmi_pmif_mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-spmi_pmif_mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-spmi_pmif_mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-spmi-pmif-mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-spmi-pmif-mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spmi_pmif_mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spmi_pmif_mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spmi_pmif_mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spmi_pmif_mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spmi-pmif-mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spmi-pmif-mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spmi-pmif-mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spmi-pmif-mpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-spmi-pmif-mpu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-spmi-pmif-mpuC*");

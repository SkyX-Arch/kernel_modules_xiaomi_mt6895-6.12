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
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x9e4ecc3d, "devm_reset_controller_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x64311477, "regmap_read" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xf4b6fbcb,
	0x3b1b6444,
	0xb4ce05a5,
	0x9e4ecc3d,
	0xc8c7229e,
	0xe136f93c,
	0xc3055d20,
	0x576b05bf,
	0x64311477,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"syscon_node_to_regmap\0"
	"of_get_property\0"
	"_dev_err\0"
	"devm_reset_controller_register\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"usleep_range_state\0"
	"regmap_update_bits_base\0"
	"regmap_read\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,syscon-reset");
MODULE_ALIAS("of:N*T*Cti,syscon-resetC*");

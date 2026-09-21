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
	{ 0x6bca1903, "devm_platform_ioremap_resource_byname" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3cb83e14, "mtk_typec_switch_register" },
	{ 0x660c6431, "mtk_typec_mux_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0x309bf00b, "mtk_dp_SWInterruptSet" },
	{ 0xd1174c77, "typec_switch_get_drvdata" },
	{ 0x84a1f0f6, "mtk_dp_aux_swap_enable" },
	{ 0x4842f5a0, "phy_get" },
	{ 0x8e4cd884, "phy_set_mode_ext" },
	{ 0x9df59c96, "phy_put" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xce456444, "typec_mux_get_drvdata" },
	{ 0x4f47eaa9, "mtk_dp_set_pin_assign" },
	{ 0x953c2f86, "mtk_typec_switch_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x6bca1903,
	0x401167cc,
	0xc6f46339,
	0xffeedf6a,
	0x3cb83e14,
	0x660c6431,
	0xc8c7229e,
	0xc40993fe,
	0x309bf00b,
	0xd1174c77,
	0x84a1f0f6,
	0x4842f5a0,
	0x8e4cd884,
	0x9df59c96,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xce456444,
	0x4f47eaa9,
	0x953c2f86,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_platform_ioremap_resource_byname\0"
	"_dev_info\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"mtk_typec_switch_register\0"
	"mtk_typec_mux_register\0"
	"devm_kmalloc\0"
	"device_property_read_u32_array\0"
	"mtk_dp_SWInterruptSet\0"
	"typec_switch_get_drvdata\0"
	"mtk_dp_aux_swap_enable\0"
	"phy_get\0"
	"phy_set_mode_ext\0"
	"phy_put\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"typec_mux_get_drvdata\0"
	"mtk_dp_set_pin_assign\0"
	"mtk_typec_switch_unregister\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mux_switch,mediatek-drm");


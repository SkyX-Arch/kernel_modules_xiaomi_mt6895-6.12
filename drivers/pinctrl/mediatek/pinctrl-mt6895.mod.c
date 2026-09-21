#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x9fba2a16, "mtk_paris_pinctrl_probe" },
	{ 0x5414c237, "mtk_pinconf_bias_set_combo" },
	{ 0x329c50b9, "mtk_pinconf_bias_get_combo" },
	{ 0xd83dd58f, "mtk_pinconf_adv_drive_set" },
	{ 0xb7662302, "mtk_pinconf_adv_drive_get" },
	{ 0x78300635, "mtk_paris_pinctrl_pm_ops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x9fba2a16,
	0x5414c237,
	0x329c50b9,
	0xd83dd58f,
	0xb7662302,
	0x78300635,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"mtk_paris_pinctrl_probe\0"
	"mtk_pinconf_bias_set_combo\0"
	"mtk_pinconf_bias_get_combo\0"
	"mtk_pinconf_adv_drive_set\0"
	"mtk_pinconf_adv_drive_get\0"
	"mtk_paris_pinctrl_pm_ops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-v2");


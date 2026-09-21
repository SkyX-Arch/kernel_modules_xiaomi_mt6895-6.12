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
	{ 0xec7964ca, "__spmi_driver_register" },
	{ 0x97cf0526, "__devm_regmap_init_spmi_ext" },
	{ 0x92997ed8, "_printk" },
	{ 0x87110a78, "devm_mfd_add_devices" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xec7964ca,
	0x97cf0526,
	0x92997ed8,
	0x87110a78,
	0x56e19f9a,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__spmi_driver_register\0"
	"__devm_regmap_init_spmi_ext\0"
	"_printk\0"
	"devm_mfd_add_devices\0"
	"driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6685");
MODULE_ALIAS("of:N*T*Cmediatek,mt6685C*");

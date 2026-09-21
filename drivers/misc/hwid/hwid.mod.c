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

KSYMTAB_FUNC(get_hw_sku, "", "");
KSYMTAB_FUNC(get_hw_country, "", "");
KSYMTAB_FUNC(get_hw_level, "", "");
KSYMTAB_FUNC(get_hw_version, "", "");

SYMBOL_CRC(get_hw_sku, 0x8a6b6b4f, "");
SYMBOL_CRC(get_hw_country, 0x8056b39d, "");
SYMBOL_CRC(get_hw_level, 0xb67bef25, "");
SYMBOL_CRC(get_hw_version, 0x3b02c493, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xbabc5cdd, "kobject_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x3e92c0ab, "param_ops_charp" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2d405891,
	0x92997ed8,
	0x62b33777,
	0xbabc5cdd,
	0x656e4a6e,
	0x3667c9f1,
	0x3e92c0ab,
	0x92acb4e9,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kobject_create_and_add\0"
	"_printk\0"
	"sysfs_create_group\0"
	"kobject_del\0"
	"snprintf\0"
	"sysfs_remove_group\0"
	"param_ops_charp\0"
	"param_ops_uint\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


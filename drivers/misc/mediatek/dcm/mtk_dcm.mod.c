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

KSYMTAB_FUNC(dcm_dump_state, "", "");
KSYMTAB_FUNC(mt_dcm_common_init, "", "");
KSYMTAB_FUNC(mt_dcm_array_register, "", "");
KSYMTAB_FUNC(is_dcm_initialized, "", "");
KSYMTAB_FUNC(mtk_dcm_get_chipid, "", "");

SYMBOL_CRC(dcm_dump_state, 0x025bfe31, "");
SYMBOL_CRC(mt_dcm_common_init, 0xb5052784, "");
SYMBOL_CRC(mt_dcm_array_register, 0x8d937c9f, "");
SYMBOL_CRC(is_dcm_initialized, 0xdb1c636e, "");
SYMBOL_CRC(mtk_dcm_get_chipid, 0xb66e9d63, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x2d405891,
	0x3b1b6444,
	0x42aac25f,
	0x656e4a6e,
	0xbcab6ee6,
	0xb318cbab,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kobject_create_and_add\0"
	"of_get_property\0"
	"sysfs_create_file_ns\0"
	"snprintf\0"
	"sscanf\0"
	"of_find_node_opts_by_path\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


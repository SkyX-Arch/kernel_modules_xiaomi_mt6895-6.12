#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mmdvfs_debug_ops_set, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_debug_force_vcore_notify, "_gpl", "");
KSYMTAB_FUNC(get_mmdvfs_mbrain_usr_dbg_ops, "_gpl", "");
KSYMTAB_FUNC(get_mmdvfs_mbrain_dbg_ops, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_debug_status_dump, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_stop_record, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_debug_release_step0, "_gpl", "");

SYMBOL_CRC(mmdvfs_debug_ops_set, 0x74b686eb, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_debug_force_vcore_notify, 0x45fe83f4, "_gpl");
SYMBOL_CRC(get_mmdvfs_mbrain_usr_dbg_ops, 0x5c1c35a8, "_gpl");
SYMBOL_CRC(get_mmdvfs_mbrain_dbg_ops, 0x63b33b19, "_gpl");
SYMBOL_CRC(mmdvfs_debug_status_dump, 0xff54165b, "_gpl");
SYMBOL_CRC(mmdvfs_stop_record, 0x36bb844e, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_debug_release_step0, 0xa2f47ba2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


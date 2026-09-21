#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mmdebug_is_init_done, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdebug_status_dump_register_notifier, "_gpl", "");

SYMBOL_CRC(mmdebug_is_init_done, 0x99e11c5a, "_gpl");
SYMBOL_CRC(mtk_mmdebug_status_dump_register_notifier, 0x4ccb7338, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"module_layout\0"
;

MODULE_INFO(depends, "");


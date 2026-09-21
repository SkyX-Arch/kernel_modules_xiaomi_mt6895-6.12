#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(tp_enable_doubleclick, "_gpl", "");
KSYMTAB_FUNC(is_tp_doubleclick_enable, "_gpl", "");

SYMBOL_CRC(tp_enable_doubleclick, 0x87e67293, "_gpl");
SYMBOL_CRC(is_tp_doubleclick_enable, 0x5fe4b7e4, "_gpl");

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


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

KSYMTAB_FUNC(mtk_mminfra_is_on, "_gpl", "");
KSYMTAB_FUNC(mtk_mminfra_power_debug, "_gpl", "");
KSYMTAB_FUNC(mtk_mminfra_all_power_debug, "_gpl", "");
KSYMTAB_FUNC(mtk_mminfra_on_off, "_gpl", "");

SYMBOL_CRC(mtk_mminfra_is_on, 0x728dbbf9, "_gpl");
SYMBOL_CRC(mtk_mminfra_power_debug, 0x3f791cad, "_gpl");
SYMBOL_CRC(mtk_mminfra_all_power_debug, 0x65e5adad, "_gpl");
SYMBOL_CRC(mtk_mminfra_on_off, 0xbeefe2e7, "_gpl");

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


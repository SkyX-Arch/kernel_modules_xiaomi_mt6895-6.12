#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_disp_notifier_register, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_notifier_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_notifier_call_chain, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_sub_notifier_register, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_sub_notifier_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_sub_notifier_call_chain, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_3rd_notifier_register, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_3rd_notifier_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_disp_3rd_notifier_call_chain, "_gpl", "");

SYMBOL_CRC(mtk_disp_notifier_register, 0x7a5d7a77, "_gpl");
SYMBOL_CRC(mtk_disp_notifier_unregister, 0x7e053d68, "_gpl");
SYMBOL_CRC(mtk_disp_notifier_call_chain, 0x4b7239d2, "_gpl");
SYMBOL_CRC(mtk_disp_sub_notifier_register, 0x99651810, "_gpl");
SYMBOL_CRC(mtk_disp_sub_notifier_unregister, 0x660fe3d7, "_gpl");
SYMBOL_CRC(mtk_disp_sub_notifier_call_chain, 0x00b8425f, "_gpl");
SYMBOL_CRC(mtk_disp_3rd_notifier_register, 0xc81da389, "_gpl");
SYMBOL_CRC(mtk_disp_3rd_notifier_unregister, 0x37d0b430, "_gpl");
SYMBOL_CRC(mtk_disp_3rd_notifier_call_chain, 0xe82fea0e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


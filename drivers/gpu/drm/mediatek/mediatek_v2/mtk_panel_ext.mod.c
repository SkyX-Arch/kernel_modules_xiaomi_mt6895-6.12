#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_panel_remove, "", "");
KSYMTAB_FUNC(mtk_panel_tch_handle_reg, "", "");
KSYMTAB_FUNC(mtk_panel_tch_handle_init, "", "");
KSYMTAB_FUNC(mtk_panel_tch_rst, "", "");
KSYMTAB_FUNC(mtk_panel_detach, "", "");
KSYMTAB_FUNC(mtk_panel_ext_create, "", "");
KSYMTAB_FUNC(find_panel_ctx, "", "");
KSYMTAB_FUNC(find_panel_ext, "", "");
KSYMTAB_FUNC(mtk_drm_get_lcm_version, "", "");

SYMBOL_CRC(mtk_panel_remove, 0xa7a742b3, "");
SYMBOL_CRC(mtk_panel_tch_handle_reg, 0xf855dd8b, "");
SYMBOL_CRC(mtk_panel_tch_handle_init, 0xd9edaf4e, "");
SYMBOL_CRC(mtk_panel_tch_rst, 0x3f651361, "");
SYMBOL_CRC(mtk_panel_detach, 0x6eca45c7, "");
SYMBOL_CRC(mtk_panel_ext_create, 0x1d9d740b, "");
SYMBOL_CRC(find_panel_ctx, 0xfb0035f3, "");
SYMBOL_CRC(find_panel_ext, 0x937e4941, "");
SYMBOL_CRC(mtk_drm_get_lcm_version, 0xe009d8dc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x7e19152a,
	0x9a835040,
	0xc8c7229e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"devm_kmalloc\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


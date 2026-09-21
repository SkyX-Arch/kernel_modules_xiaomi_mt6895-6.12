#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(cmdq_ctx, "", "");
KSYMTAB_DATA(cmdq_group_cb, "", "");
KSYMTAB_DATA(cmdq_debug_cb, "", "");
KSYMTAB_DATA(cmdq_clients, "", "");
KSYMTAB_DATA(mdp_funcs, "", "");
KSYMTAB_FUNC(cmdq_core_should_print_msg, "", "");
KSYMTAB_FUNC(mdp_get_group_isp, "", "");
KSYMTAB_FUNC(mdp_get_group_wpe, "", "");
KSYMTAB_FUNC(cmdqCoreRegisterCB, "", "");
KSYMTAB_FUNC(cmdqCoreRegisterDebugRegDumpCB, "", "");
KSYMTAB_FUNC(cmdq_core_save_first_dump, "", "");
KSYMTAB_FUNC(cmdq_core_query_first_err_mod, "", "");
KSYMTAB_FUNC(mdp_set_resource_callback, "", "");

SYMBOL_CRC(cmdq_ctx, 0xdc252376, "");
SYMBOL_CRC(cmdq_group_cb, 0x4ed75782, "");
SYMBOL_CRC(cmdq_debug_cb, 0x2c9e1211, "");
SYMBOL_CRC(cmdq_clients, 0x8775f324, "");
SYMBOL_CRC(mdp_funcs, 0x642fd2b0, "");
SYMBOL_CRC(cmdq_core_should_print_msg, 0x96065e86, "");
SYMBOL_CRC(mdp_get_group_isp, 0xaa00f149, "");
SYMBOL_CRC(mdp_get_group_wpe, 0x4cdee15a, "");
SYMBOL_CRC(cmdqCoreRegisterCB, 0x8ee95e88, "");
SYMBOL_CRC(cmdqCoreRegisterDebugRegDumpCB, 0x22dee9a4, "");
SYMBOL_CRC(cmdq_core_save_first_dump, 0xa54f61c8, "");
SYMBOL_CRC(cmdq_core_query_first_err_mod, 0x06efb52c, "");
SYMBOL_CRC(mdp_set_resource_callback, 0x2811d5f8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xb15e0dca, "cmdq_util_error_save_lst" },
	{ 0x86ce8797, "cmdq_util_get_first_err_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xb15e0dca,
	0x86ce8797,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"cmdq_util_error_save_lst\0"
	"cmdq_util_get_first_err_mod\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-cmdq-drv-ext");


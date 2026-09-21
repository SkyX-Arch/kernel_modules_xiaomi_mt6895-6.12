#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(slbc_trace, "_gpl", "");
KSYMTAB_DATA(slbc_trace_level_str, "_gpl", "");
KSYMTAB_DATA(slbc_trace_level_mark, "_gpl", "");
KSYMTAB_DATA(slbc_trace_type_str, "_gpl", "");
KSYMTAB_FUNC(slbc_trace_rec_write, "_gpl", "");
KSYMTAB_FUNC(slbc_trace_dump, "_gpl", "");
KSYMTAB_FUNC(slbc_trace_init, "_gpl", "");
KSYMTAB_FUNC(slbc_trace_exit, "_gpl", "");

SYMBOL_CRC(slbc_trace, 0x07fa341c, "_gpl");
SYMBOL_CRC(slbc_trace_level_str, 0xdd698c73, "_gpl");
SYMBOL_CRC(slbc_trace_level_mark, 0x70b1bb8c, "_gpl");
SYMBOL_CRC(slbc_trace_type_str, 0xdc5c4e02, "_gpl");
SYMBOL_CRC(slbc_trace_rec_write, 0x0d517335, "_gpl");
SYMBOL_CRC(slbc_trace_dump, 0xcd43c816, "_gpl");
SYMBOL_CRC(slbc_trace_init, 0xf9f2e615, "_gpl");
SYMBOL_CRC(slbc_trace_exit, 0x8d8ca9f9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x00148653, "vsnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d924f20, "memremap" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x00148653,
	0x92997ed8,
	0xc8f2ae9d,
	0xb43f9365,
	0x9166fada,
	0x4d924f20,
	0xe136f93c,
	0xa65c6def,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vsnprintf\0"
	"_printk\0"
	"seq_printf\0"
	"ktime_get\0"
	"strncpy\0"
	"memremap\0"
	"of_property_read_variable_u32_array\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


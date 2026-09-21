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

KSYMTAB_DATA(sbe_notify_webview_policy_fp, "_gpl", "");
KSYMTAB_DATA(sbe_notify_hwui_frame_hint_fp, "_gpl", "");
KSYMTAB_DATA(sbe_notify_rescue_fp, "_gpl", "");
KSYMTAB_DATA(sbe_consistency_policy_fp, "_gpl", "");
KSYMTAB_DATA(sbe_notify_smart_launch_algorithm_fp, "_gpl", "");
KSYMTAB_DATA(sbe_set_sbb_fp, "_gpl", "");

SYMBOL_CRC(sbe_notify_webview_policy_fp, 0x8b8a5ce1, "_gpl");
SYMBOL_CRC(sbe_notify_hwui_frame_hint_fp, 0x46deee95, "_gpl");
SYMBOL_CRC(sbe_notify_rescue_fp, 0x27b8c461, "_gpl");
SYMBOL_CRC(sbe_consistency_policy_fp, 0x4cce8fdc, "_gpl");
SYMBOL_CRC(sbe_notify_smart_launch_algorithm_fp, 0x97a268b5, "_gpl");
SYMBOL_CRC(sbe_set_sbb_fp, 0x4ea7b559, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x2be0c009,
	0x9a85eebb,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


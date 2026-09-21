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

KSYMTAB_FUNC(mt_get_uartlog_status, "_gpl", "");
KSYMTAB_FUNC(update_uartlog_status, "_gpl", "");
KSYMTAB_FUNC(set_detect_count, "_gpl", "");
KSYMTAB_FUNC(get_detect_count, "_gpl", "");
KSYMTAB_FUNC(set_logtoomuch_enable, "_gpl", "");
KSYMTAB_FUNC(set_logtoomuch_disable, "_gpl", "");
KSYMTAB_FUNC(get_logtoomuch_status, "_gpl", "");
KSYMTAB_FUNC(mt_printk_ctrl_early_init, "_gpl", "");
KSYMTAB_FUNC(mt_printk_ctrl_early_exit, "_gpl", "");

SYMBOL_CRC(mt_get_uartlog_status, 0x9bb136b7, "_gpl");
SYMBOL_CRC(update_uartlog_status, 0x5f2612a8, "_gpl");
SYMBOL_CRC(set_detect_count, 0xf796ca8a, "_gpl");
SYMBOL_CRC(get_detect_count, 0xa5230607, "_gpl");
SYMBOL_CRC(set_logtoomuch_enable, 0x4ebf24c3, "_gpl");
SYMBOL_CRC(set_logtoomuch_disable, 0xec69f164, "_gpl");
SYMBOL_CRC(get_logtoomuch_status, 0xedcd5f58, "_gpl");
SYMBOL_CRC(mt_printk_ctrl_early_init, 0x0d0cb08d, "_gpl");
SYMBOL_CRC(mt_printk_ctrl_early_exit, 0xbd97e29d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x6f14e9db, "console_list_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x14d7477f, "console_list_unlock" },
	{ 0xb4028d67, "proc_create" },
	{ 0x44033864, "proc_remove" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xb5093dd3, "console_list" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x6f14e9db,
	0x5a921311,
	0x14d7477f,
	0xb4028d67,
	0x44033864,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x5c3c7387,
	0xb2fb935e,
	0xb5093dd3,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"console_list_lock\0"
	"strncmp\0"
	"console_list_unlock\0"
	"proc_create\0"
	"proc_remove\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"kstrtoull\0"
	"param_ops_int\0"
	"console_list\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_DATA(powerhal_adpf_create_session_hint_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_get_hint_session_preferred_rate_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_update_work_duration_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_report_actual_work_duration_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_pause_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_resume_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_close_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_sent_hint_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_set_threads_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_adpf_get_cpu_headroom_fp, "_gpl", "");
KSYMTAB_DATA(powerhal_dsu_sport_mode_fp, "_gpl", "");

SYMBOL_CRC(powerhal_adpf_create_session_hint_fp, 0x5807438a, "_gpl");
SYMBOL_CRC(powerhal_adpf_get_hint_session_preferred_rate_fp, 0xb1515988, "_gpl");
SYMBOL_CRC(powerhal_adpf_update_work_duration_fp, 0x34ee6a2f, "_gpl");
SYMBOL_CRC(powerhal_adpf_report_actual_work_duration_fp, 0x8800706c, "_gpl");
SYMBOL_CRC(powerhal_adpf_pause_fp, 0x8dc0ef24, "_gpl");
SYMBOL_CRC(powerhal_adpf_resume_fp, 0xc0d1cb03, "_gpl");
SYMBOL_CRC(powerhal_adpf_close_fp, 0xb33fa2f6, "_gpl");
SYMBOL_CRC(powerhal_adpf_sent_hint_fp, 0xfd4fc39a, "_gpl");
SYMBOL_CRC(powerhal_adpf_set_threads_fp, 0xa070e3c4, "_gpl");
SYMBOL_CRC(powerhal_adpf_get_cpu_headroom_fp, 0xca8346e0, "_gpl");
SYMBOL_CRC(powerhal_dsu_sport_mode_fp, 0x493844a0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x037a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
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
	0x037a0cba,
	0x92997ed8,
	0x2be0c009,
	0x88db9f48,
	0x52c5c991,
	0x9a85eebb,
	0x0f05f001,
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
	"kfree\0"
	"_printk\0"
	"__arch_copy_from_user\0"
	"__check_object_size\0"
	"__kmalloc_noprof\0"
	"__arch_copy_to_user\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


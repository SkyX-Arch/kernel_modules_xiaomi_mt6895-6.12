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

KSYMTAB_FUNC(pd_dbg_info, "", "");

SYMBOL_CRC(pd_dbg_info, 0x48fb7437, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0x00148653, "vsnprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x92997ed8, "_printk" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x656e4a6e,
	0x00148653,
	0x56470118,
	0xd5977bfb,
	0xed55cabd,
	0x037a0cba,
	0x9a835040,
	0xe94986d6,
	0x52c5c991,
	0x7e19152a,
	0x42ad47ad,
	0xffeedf6a,
	0x92997ed8,
	0x86a50ae0,
	0x598dfa08,
	0x92acb4e9,
	0x0f05f001,
	0x2d3385d3,
	0x15ba50a6,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"snprintf\0"
	"vsnprintf\0"
	"__warn_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"__list_del_entry_valid_or_report\0"
	"sched_clock\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"queue_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"_printk\0"
	"mod_delayed_work_on\0"
	"flush_delayed_work\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"system_wq\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(mt_irq_dump_status, "", "");

SYMBOL_CRC(mt_irq_dump_status, 0x14de1090, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xff2cba95, "__get_task_comm" },
	{ 0x91bff97e, "kthread_data" },
	{ 0x7642efac, "stack_trace_save_tsk" },
	{ 0x16ad39d4, "irq_to_desc" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x037a0cba,
	0xe17134b6,
	0x656e4a6e,
	0xf93aae46,
	0xff2cba95,
	0x91bff97e,
	0x7642efac,
	0x16ad39d4,
	0x1fef36c1,
	0x0f05f001,
	0xefe8a82e,
	0xee46e386,
	0x280f9f14,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"snprintf\0"
	"__arm_smccc_smc\0"
	"__get_task_comm\0"
	"kthread_data\0"
	"stack_trace_save_tsk\0"
	"irq_to_desc\0"
	"__irq_resolve_mapping\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


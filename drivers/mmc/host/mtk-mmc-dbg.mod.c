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

KSYMTAB_FUNC(msdc_dump_ldo_sts, "", "");
KSYMTAB_FUNC(__msdc_dump_info, "", "");
KSYMTAB_FUNC(msdc_dump_info, "", "");
KSYMTAB_FUNC(mmc_dbg_register, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_dbg_get_aee_buffer, "_gpl", "");

SYMBOL_CRC(msdc_dump_ldo_sts, 0x810fffb4, "");
SYMBOL_CRC(__msdc_dump_info, 0x3c91cdf7, "");
SYMBOL_CRC(msdc_dump_info, 0x0ae3545d, "");
SYMBOL_CRC(mmc_dbg_register, 0xed9640ab, "_gpl");
SYMBOL_CRC(mmc_mtk_dbg_get_aee_buffer, 0x6b2689cd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x92997ed8, "_printk" },
	{ 0x401167cc, "_dev_info" },
	{ 0x5d37f189, "gpio_dump_regs_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb4028d67, "proc_create" },
	{ 0xb4f43232, "proc_set_user" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x17a9a281, "mmc_mtk_biolog_init" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x037a0cba, "kfree" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x656e4a6e,
	0x7a8ef1df,
	0xa06ad99d,
	0xc8f2ae9d,
	0x92997ed8,
	0x401167cc,
	0x5d37f189,
	0xeae3dfd6,
	0xb4028d67,
	0xb4f43232,
	0xd5977bfb,
	0xed55cabd,
	0x17a9a281,
	0x10a09bd4,
	0x805e2dd2,
	0x96848186,
	0xc6a4a872,
	0x556e4390,
	0x75ca79b5,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x88db9f48,
	0x2be0c009,
	0x5c3c7387,
	0x34db050b,
	0xd35cce70,
	0x441d0de9,
	0xe2d5255a,
	0xe94986d6,
	0x7aba1ef6,
	0xf9606a4e,
	0x037a0cba,
	0x0f05f001,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"snprintf\0"
	"regulator_is_enabled\0"
	"regulator_get_voltage\0"
	"seq_printf\0"
	"_printk\0"
	"_dev_info\0"
	"gpio_dump_regs_range\0"
	"__const_udelay\0"
	"proc_create\0"
	"proc_set_user\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mmc_mtk_biolog_init\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"scnprintf\0"
	"__clk_is_enabled\0"
	"clk_get_rate\0"
	"__fortify_panic\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtoull\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_large_noprof\0"
	"strcmp\0"
	"sched_clock\0"
	"tracepoint_probe_unregister\0"
	"mrdump_set_extra_dump\0"
	"kfree\0"
	"mem_alloc_profiling_key\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-common-v2_debug,blocktag,mrdump");


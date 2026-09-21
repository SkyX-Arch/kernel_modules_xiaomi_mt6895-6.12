#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(register_devapc_exception_callback, "", "");
KSYMTAB_FUNC(register_devapc_vio_callback, "", "");
KSYMTAB_FUNC(register_devapc_power_callback, "", "");
KSYMTAB_FUNC(devapc_suspend_noirq, "", "");
KSYMTAB_FUNC(devapc_resume_noirq, "", "");
KSYMTAB_FUNC(mtk_devapc_probe, "_gpl", "");
KSYMTAB_FUNC(mtk_devapc_remove, "_gpl", "");

SYMBOL_CRC(register_devapc_exception_callback, 0xf1b2f356, "");
SYMBOL_CRC(register_devapc_vio_callback, 0x94c0bce2, "");
SYMBOL_CRC(register_devapc_power_callback, 0x418cddcd, "");
SYMBOL_CRC(devapc_suspend_noirq, 0xd27145f1, "");
SYMBOL_CRC(devapc_resume_noirq, 0xf2b7be48, "");
SYMBOL_CRC(mtk_devapc_probe, 0x4d92c28c, "_gpl");
SYMBOL_CRC(mtk_devapc_remove, 0x2631805a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5a921311, "strncmp" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xb4028d67, "proc_create" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9166fada, "strncpy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x96848186,
	0x9c81ceff,
	0x85df9b6c,
	0x5a921311,
	0xf93aae46,
	0xaba63322,
	0x7c611278,
	0xea23ff02,
	0xb4028d67,
	0x7e19152a,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x88db9f48,
	0x2be0c009,
	0x3854774b,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xf9583f23,
	0x34db050b,
	0x96b29254,
	0xf5edea2e,
	0x45b60059,
	0x56470118,
	0x9166fada,
	0xd35cce70,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x037a0cba,
	0x52c5c991,
	0xb6e6d99d,
	0x0f05f001,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"strsep\0"
	"strncmp\0"
	"__arm_smccc_smc\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"devm_clk_get\0"
	"proc_create\0"
	"__list_add_valid_or_report\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtoll\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"devm_request_threaded_irq\0"
	"_raw_spin_lock_irqsave\0"
	"strncasecmp\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"__warn_printk\0"
	"strncpy\0"
	"_raw_spin_unlock_irqrestore\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"clk_disable\0"
	"mem_alloc_profiling_key\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");


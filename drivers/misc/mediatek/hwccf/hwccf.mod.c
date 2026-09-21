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

KSYMTAB_FUNC(hwccf_voter_ctrl, "", "");
KSYMTAB_FUNC(hwccf_multi_voter_ctrl, "", "");
KSYMTAB_FUNC(raw_hwccf_voter_ctrl, "", "");
KSYMTAB_FUNC(hwccf_freeze, "", "");
KSYMTAB_FUNC(hwccf_unfreeze, "", "");
KSYMTAB_FUNC(hwccf_irq_voter_ctrl, "", "");
KSYMTAB_FUNC(hwccf_irq_multi_voter_ctrl, "", "");
KSYMTAB_FUNC(hwccf_is_enabled, "", "");
KSYMTAB_FUNC(raw_hwccf_is_enabled, "", "");

SYMBOL_CRC(hwccf_voter_ctrl, 0xa857cbf9, "");
SYMBOL_CRC(hwccf_multi_voter_ctrl, 0xdaeba484, "");
SYMBOL_CRC(raw_hwccf_voter_ctrl, 0x7fc0305a, "");
SYMBOL_CRC(hwccf_freeze, 0xdbe096f6, "");
SYMBOL_CRC(hwccf_unfreeze, 0xc34815eb, "");
SYMBOL_CRC(hwccf_irq_voter_ctrl, 0x812bf6f7, "");
SYMBOL_CRC(hwccf_irq_multi_voter_ctrl, 0xaf25db88, "");
SYMBOL_CRC(hwccf_is_enabled, 0x22977ee9, "");
SYMBOL_CRC(raw_hwccf_is_enabled, 0x4afe2383, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x64311477, "regmap_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x34675dcc, "of_match_node" },
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0x2986ced4, "register_mtk_clk_external_api_cb" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x3da016df, "seq_putc" },
	{ 0x349cba85, "strchr" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0x34db050b,
	0xb43f9365,
	0x64311477,
	0xeae3dfd6,
	0x6b722180,
	0x0c1a5ee3,
	0xd35cce70,
	0x12db679a,
	0x34675dcc,
	0xf4b6fbcb,
	0x2986ced4,
	0x40863ba1,
	0x6fc35f2b,
	0xaf56600a,
	0x6b883e5a,
	0x576b05bf,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x85df9b6c,
	0xe2d5255a,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0xc8f2ae9d,
	0x5c3c7387,
	0xf93aae46,
	0x3da016df,
	0x349cba85,
	0x88db9f48,
	0x2be0c009,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"_raw_spin_lock_irqsave\0"
	"ktime_get\0"
	"regmap_read\0"
	"__const_udelay\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"of_match_node\0"
	"syscon_node_to_regmap\0"
	"register_mtk_clk_external_api_cb\0"
	"ioremap_prot\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"regmap_write\0"
	"regmap_update_bits_base\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"strsep\0"
	"strcmp\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"seq_printf\0"
	"kstrtoull\0"
	"__arm_smccc_smc\0"
	"seq_putc\0"
	"strchr\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,clk-common");


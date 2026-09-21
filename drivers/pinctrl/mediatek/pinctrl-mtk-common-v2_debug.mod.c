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

KSYMTAB_FUNC(gpio_dump_regs_range, "_gpl", "");
KSYMTAB_FUNC(gpio_dump_regs, "_gpl", "");

SYMBOL_CRC(gpio_dump_regs_range, 0x5d37f189, "_gpl");
SYMBOL_CRC(gpio_dump_regs, 0x7ec58d17, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x686f0092, "mtk_hw_get_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x100b3e08, "mtk_pctrl_show_one_pin" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x5a921311, "strncmp" },
	{ 0x0f44df38, "gpiochip_get_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xb4f43232, "proc_set_user" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xa9eea16f, "mtk_is_virt_gpio" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x09bf9f5c, "mt63xx_hw_set_value" },
	{ 0xb5c3e6c8, "mtk_hw_set_value" },
	{ 0xf1d0618f, "remove_proc_subtree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x686f0092,
	0xeae3dfd6,
	0x100b3e08,
	0x07183fe6,
	0x5a921311,
	0x0f44df38,
	0xe2d5255a,
	0x75ca79b5,
	0xa191ccd1,
	0x7518b5f0,
	0xa2fa95a0,
	0xb4f43232,
	0x69cfdbb0,
	0xe7ce721f,
	0x3cdb28e3,
	0x8b9c34da,
	0xc8f2ae9d,
	0xa9eea16f,
	0x3da016df,
	0x173e2075,
	0xbcab6ee6,
	0x88db9f48,
	0x2be0c009,
	0x09bf9f5c,
	0xb5c3e6c8,
	0xf1d0618f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mtk_hw_get_value\0"
	"__const_udelay\0"
	"mtk_pctrl_show_one_pin\0"
	"gpio_to_desc\0"
	"strncmp\0"
	"gpiochip_get_data\0"
	"strcmp\0"
	"__fortify_panic\0"
	"gpiod_get_raw_value\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"proc_set_user\0"
	"seq_read\0"
	"seq_lseek\0"
	"seq_release\0"
	"single_open\0"
	"seq_printf\0"
	"mtk_is_virt_gpio\0"
	"seq_putc\0"
	"seq_write\0"
	"sscanf\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"mt63xx_hw_set_value\0"
	"mtk_hw_set_value\0"
	"remove_proc_subtree\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-v2");


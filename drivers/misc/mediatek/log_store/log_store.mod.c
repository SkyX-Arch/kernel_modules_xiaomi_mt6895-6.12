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

KSYMTAB_FUNC(get_pmic_interface, "_gpl", "");
KSYMTAB_FUNC(set_pmic_boot_phase, "_gpl", "");
KSYMTAB_FUNC(get_pmic_boot_phase, "_gpl", "");
KSYMTAB_FUNC(store_log_to_emmc_enable, "_gpl", "");
KSYMTAB_FUNC(set_boot_phase, "_gpl", "");
KSYMTAB_FUNC(get_last_boot_phase, "_gpl", "");
KSYMTAB_FUNC(log_store_bootup, "_gpl", "");
KSYMTAB_FUNC(logstore_reset, "_gpl", "");
KSYMTAB_FUNC(log_store_late_init, "_gpl", "");
KSYMTAB_FUNC(store_printk_buff, "_gpl", "");
KSYMTAB_FUNC(disable_early_log, "_gpl", "");
KSYMTAB_FUNC(dt_get_log_store, "_gpl", "");
KSYMTAB_FUNC(get_sram_header, "_gpl", "");
KSYMTAB_FUNC(log_store_sram_init, "_gpl", "");

SYMBOL_CRC(get_pmic_interface, 0xadd16c67, "_gpl");
SYMBOL_CRC(set_pmic_boot_phase, 0x64e95c36, "_gpl");
SYMBOL_CRC(get_pmic_boot_phase, 0x38163f33, "_gpl");
SYMBOL_CRC(store_log_to_emmc_enable, 0xa76d8264, "_gpl");
SYMBOL_CRC(set_boot_phase, 0xd3e58840, "_gpl");
SYMBOL_CRC(get_last_boot_phase, 0x2ccf0172, "_gpl");
SYMBOL_CRC(log_store_bootup, 0xfb66cc10, "_gpl");
SYMBOL_CRC(logstore_reset, 0x4e3799f3, "_gpl");
SYMBOL_CRC(log_store_late_init, 0x819b532b, "_gpl");
SYMBOL_CRC(store_printk_buff, 0x06b807a3, "_gpl");
SYMBOL_CRC(disable_early_log, 0x8121c65b, "_gpl");
SYMBOL_CRC(dt_get_log_store, 0x4de81e15, "_gpl");
SYMBOL_CRC(get_sram_header, 0x1735e424, "_gpl");
SYMBOL_CRC(log_store_sram_init, 0x858f952b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x92997ed8, "_printk" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x254b636d, "register_reboot_notifier" },
	{ 0xb4028d67, "proc_create" },
	{ 0x2dbfad07, "aee_log_buf_addr_get" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x7ee25d67, "vmap" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
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
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x44033864, "proc_remove" },
	{ 0x0967fe10, "unregister_pm_notifier" },
	{ 0x00114764, "unregister_reboot_notifier" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1ed4c5e6,
	0x92997ed8,
	0xa823db6e,
	0x49dc0e6c,
	0x64311477,
	0x6b883e5a,
	0xe2d5255a,
	0x75966ec2,
	0x254b636d,
	0xb4028d67,
	0x2dbfad07,
	0x3b1b6444,
	0x40863ba1,
	0x7ee25d67,
	0x037a0cba,
	0x52c5c991,
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
	0xe136f93c,
	0xb318cbab,
	0x44033864,
	0x0967fe10,
	0x00114764,
	0x9688de8b,
	0xe4bbc1dd,
	0xaf56600a,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"of_find_node_by_name\0"
	"_printk\0"
	"of_find_device_by_node\0"
	"dev_get_regmap\0"
	"regmap_read\0"
	"regmap_write\0"
	"strcmp\0"
	"register_pm_notifier\0"
	"register_reboot_notifier\0"
	"proc_create\0"
	"aee_log_buf_addr_get\0"
	"of_get_property\0"
	"ioremap_prot\0"
	"vmap\0"
	"kfree\0"
	"__kmalloc_noprof\0"
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
	"of_property_read_variable_u32_array\0"
	"of_find_node_opts_by_path\0"
	"proc_remove\0"
	"unregister_pm_notifier\0"
	"unregister_reboot_notifier\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mrdump");


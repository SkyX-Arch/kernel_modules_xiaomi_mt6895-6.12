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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x96848186, "scnprintf" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0x16d6506b, "ssc_enable" },
	{ 0xe3beccf9, "ssc_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x42aac25f,
	0x96848186,
	0xf93aae46,
	0xbcab6ee6,
	0xe2d5255a,
	0x3b6c41ea,
	0x92495308,
	0x16d6506b,
	0xe3beccf9,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"sysfs_create_file_ns\0"
	"scnprintf\0"
	"__arm_smccc_smc\0"
	"sscanf\0"
	"strcmp\0"
	"kstrtouint\0"
	"sysfs_remove_file_ns\0"
	"ssc_enable\0"
	"ssc_kobj\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-ssc");


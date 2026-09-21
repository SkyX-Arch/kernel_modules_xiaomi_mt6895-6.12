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

KSYMTAB_FUNC(init_md_section_level, "", "");
KSYMTAB_FUNC(get_md1_power, "", "");

SYMBOL_CRC(init_md_section_level, 0x05668b68, "");
SYMBOL_CRC(get_md1_power, 0xd3af17a6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xf5edea2e,
	0x656e4a6e,
	0x75ca79b5,
	0x12db679a,
	0x14fe5355,
	0xa4f72277,
	0xe136f93c,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x8c8569cb,
	0x88db9f48,
	0x2be0c009,
	0x6fc35f2b,
	0xdcb764ad,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"___ratelimit\0"
	"snprintf\0"
	"__fortify_panic\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"_dev_notice\0"
	"of_property_read_variable_u32_array\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"kstrtoint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"platform_driver_unregister\0"
	"memset\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-mdpmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-mdpm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-mdpmC*");

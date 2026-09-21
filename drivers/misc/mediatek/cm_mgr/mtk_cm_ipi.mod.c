#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(cm_get_ipi_enable, "", "");
KSYMTAB_FUNC(cm_set_ipi_enable, "", "");
KSYMTAB_FUNC(cm_mgr_to_sspm_command, "", "");
KSYMTAB_FUNC(cm_ipi_init, "", "");

SYMBOL_CRC(cm_get_ipi_enable, 0x6476afe4, "");
SYMBOL_CRC(cm_set_ipi_enable, 0x68919880, "");
SYMBOL_CRC(cm_mgr_to_sspm_command, 0x26509176, "");
SYMBOL_CRC(cm_ipi_init, 0xf69c8d34, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x69601fbf, "scmi_tinysys_common_get" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x1cc7f053,
	0x69601fbf,
	0x51fcca8a,
	0xe136f93c,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scmi_tinysys_common_set\0"
	"scmi_tinysys_common_get\0"
	"get_scmi_tinysys_info\0"
	"of_property_read_variable_u32_array\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi");


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

KSYMTAB_FUNC(cpufreq_set_cci_mode, "_gpl", "");
KSYMTAB_FUNC(set_dsu_ctrl_debug, "_gpl", "");

SYMBOL_CRC(cpufreq_set_cci_mode, 0x68465f38, "_gpl");
SYMBOL_CRC(set_dsu_ctrl_debug, 0x0fd0ae58, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x1d4a1606, "set_eas_dsu_ctrl" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x1d4a1606,
	0x1ed4c5e6,
	0xa823db6e,
	0x3d0ffa5c,
	0x40863ba1,
	0xaf56600a,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"set_eas_dsu_ctrl\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cpufreq_sugov_ext");


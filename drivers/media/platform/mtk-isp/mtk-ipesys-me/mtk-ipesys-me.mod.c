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

KSYMTAB_FUNC(ipesys_me_set_initial_value, "", "");
KSYMTAB_FUNC(ipesys_me_uninit, "", "");
KSYMTAB_FUNC(ipesys_me_debug_dump, "", "");
KSYMTAB_FUNC(ipesys_me_debug_dump_local, "", "");

SYMBOL_CRC(ipesys_me_set_initial_value, 0x18300d20, "");
SYMBOL_CRC(ipesys_me_uninit, 0x08de8451, "");
SYMBOL_CRC(ipesys_me_debug_dump, 0xc8bbf600, "");
SYMBOL_CRC(ipesys_me_debug_dump_local, 0x9424977d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x401167cc, "_dev_info" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaba63322, "of_iomap" },
	{ 0x6793cb57, "devm_clk_bulk_get" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x401167cc,
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0xaba63322,
	0x6793cb57,
	0xb088bcfc,
	0xa823db6e,
	0x0be515ae,
	0xd4e81a21,
	0xc8c7229e,
	0x1fec5304,
	0x5a6368f5,
	0x5c27c40f,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"_dev_info\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"of_iomap\0"
	"devm_clk_bulk_get\0"
	"of_count_phandle_with_args\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"pm_runtime_enable\0"
	"devm_kmalloc\0"
	"__of_parse_phandle_with_args\0"
	"devm_kfree\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,ipesys-me");
MODULE_ALIAS("of:N*T*Cmediatek,ipesys-meC*");

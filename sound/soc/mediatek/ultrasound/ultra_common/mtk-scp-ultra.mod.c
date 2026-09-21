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

KSYMTAB_FUNC(set_scp_ultra_base, "_gpl", "");
KSYMTAB_FUNC(get_scp_ultra_base, "_gpl", "");
KSYMTAB_FUNC(mtk_scp_ultra_allocate_mem, "_gpl", "");
KSYMTAB_FUNC(is_ultra_reserved_dram_addr_valid, "", "");

SYMBOL_CRC(set_scp_ultra_base, 0xae326d77, "_gpl");
SYMBOL_CRC(get_scp_ultra_base, 0x910340f0, "_gpl");
SYMBOL_CRC(mtk_scp_ultra_allocate_mem, 0x84cab83e, "_gpl");
SYMBOL_CRC(is_ultra_reserved_dram_addr_valid, 0x5603a22f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x401167cc, "_dev_info" },
	{ 0x0a61d3a0, "register_afe_allocate_mem_notifier" },
	{ 0x700ad2f0, "unregister_afe_allocate_mem_notifier" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xb4ce05a5,
	0x401167cc,
	0x0a61d3a0,
	0x700ad2f0,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"_dev_err\0"
	"_dev_info\0"
	"register_afe_allocate_mem_notifier\0"
	"unregister_afe_allocate_mem_notifier\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-afe-external");


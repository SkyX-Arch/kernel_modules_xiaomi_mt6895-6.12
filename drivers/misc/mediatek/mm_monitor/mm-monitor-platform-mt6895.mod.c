#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(get_freq_from_mux_id, "", "");
KSYMTAB_FUNC(get_mmmc_subsys_max, "", "");
KSYMTAB_FUNC(get_mminfra_pd, "", "");
KSYMTAB_FUNC(is_valid_offset_value, "", "");
KSYMTAB_FUNC(enable_mminfra_funnel, "", "");
KSYMTAB_FUNC(mminfra_fake_engine_bus_settings, "", "");
KSYMTAB_FUNC(emi_moniter_settings, "", "");
KSYMTAB_FUNC(get_power_domains, "", "");

SYMBOL_CRC(get_freq_from_mux_id, 0x4c265ac2, "");
SYMBOL_CRC(get_mmmc_subsys_max, 0xae9c26f1, "");
SYMBOL_CRC(get_mminfra_pd, 0x8ff4c3de, "");
SYMBOL_CRC(is_valid_offset_value, 0xfc165940, "");
SYMBOL_CRC(enable_mminfra_funnel, 0xc9f935df, "");
SYMBOL_CRC(mminfra_fake_engine_bus_settings, 0xad50f482, "");
SYMBOL_CRC(emi_moniter_settings, 0x4e6b48f6, "");
SYMBOL_CRC(get_power_domains, 0xfc35a399, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


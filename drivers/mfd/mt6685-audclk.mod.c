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

KSYMTAB_FUNC(mt6685_set_dcxo_mode, "", "");
KSYMTAB_FUNC(mt6685_set_dcxo, "", "");

SYMBOL_CRC(mt6685_set_dcxo_mode, 0xa6601e35, "");
SYMBOL_CRC(mt6685_set_dcxo, 0xdb0ef5d8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x576b05bf,
	0xc3055d20,
	0x12db679a,
	0x401167cc,
	0x49dc0e6c,
	0x14fe5355,
	0xa571f6b0,
	0xc8c7229e,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regmap_update_bits_base\0"
	"usleep_range_state\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"dev_get_regmap\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"devm_kmalloc\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


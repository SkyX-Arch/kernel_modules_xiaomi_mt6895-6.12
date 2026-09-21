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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x65778543, "devm_iio_device_alloc" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xcae128be, "__devm_iio_device_register" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x401167cc, "_dev_info" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x64311477, "regmap_read" },
	{ 0xac0fc2d2, "devm_regulator_get_exclusive" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x5095f2eb, "power_supply_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x65778543,
	0x49dc0e6c,
	0xa571f6b0,
	0x14fe5355,
	0xa4f72277,
	0xcae128be,
	0xb9c425de,
	0x401167cc,
	0x796ead29,
	0xc8c7229e,
	0x64311477,
	0xac0fc2d2,
	0xb4ce05a5,
	0xe136f93c,
	0xd5977bfb,
	0xed55cabd,
	0x6b883e5a,
	0xeae3dfd6,
	0x33a52b38,
	0xfdf04ae0,
	0xb6e871b8,
	0x5095f2eb,
	0xb43f9365,
	0x576b05bf,
	0xc3055d20,
	0x57d5e131,
	0x031dffa4,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_iio_device_alloc\0"
	"dev_get_regmap\0"
	"__mutex_init\0"
	"of_device_get_match_data\0"
	"_dev_notice\0"
	"__devm_iio_device_register\0"
	"register_syscore_ops\0"
	"_dev_info\0"
	"of_get_next_available_child\0"
	"devm_kmalloc\0"
	"regmap_read\0"
	"devm_regulator_get_exclusive\0"
	"_dev_err\0"
	"of_property_read_variable_u32_array\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"regmap_write\0"
	"__const_udelay\0"
	"regmap_bulk_read\0"
	"power_supply_get_by_name\0"
	"power_supply_get_property\0"
	"power_supply_put\0"
	"ktime_get\0"
	"regmap_update_bits_base\0"
	"usleep_range_state\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6363-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-5-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-5-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-6-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-6-auxadcC*");

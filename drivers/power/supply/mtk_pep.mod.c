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
	{ 0xf9a482f9, "msleep" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xac304f53, "chg_alg_device_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0x1f94a2b1, "charger_dev_get_vbus" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x1e735dc5, "charger_dev_get_charging_current" },
	{ 0xc0ca7489, "mtk_chg_enable_vbus_ovp" },
	{ 0xcd54e95e, "charger_dev_enable" },
	{ 0xd811a62a, "charger_dev_set_mivr" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x0845105d, "charger_dev_send_ta_current_pattern" },
	{ 0x2d780a08, "charger_dev_is_chip_enabled" },
	{ 0x2d8b0f60, "charger_dev_enable_chip" },
	{ 0x37eac5cb, "charger_dev_reset_ta" },
	{ 0x56ecb677, "charger_dev_set_constant_voltage" },
	{ 0xcda1e8e9, "charger_dev_set_charging_current" },
	{ 0xa9cdf825, "charger_dev_set_input_current" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xf9a482f9,
	0xd5977bfb,
	0x4e8b8def,
	0x05590c04,
	0xed55cabd,
	0x12db679a,
	0x0f314d3e,
	0xa571f6b0,
	0xebdbd5bd,
	0xac304f53,
	0xc8c7229e,
	0x6b201699,
	0xe136f93c,
	0x6fc35f2b,
	0xe6de52c9,
	0x959e7e2d,
	0x1f94a2b1,
	0xb6e871b8,
	0x1e735dc5,
	0xc0ca7489,
	0xcd54e95e,
	0xd811a62a,
	0xfdf04ae0,
	0x3b9fa9d3,
	0x0845105d,
	0x2d780a08,
	0x2d8b0f60,
	0x37eac5cb,
	0x56ecb677,
	0xcda1e8e9,
	0xa9cdf825,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"msleep\0"
	"mutex_lock\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"mutex_unlock\0"
	"__platform_driver_register\0"
	"wakeup_source_register\0"
	"__mutex_init\0"
	"devm_power_supply_get_by_phandle\0"
	"chg_alg_device_register\0"
	"devm_kmalloc\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"param_ops_bool\0"
	"get_charger_by_name\0"
	"charger_dev_get_vbus\0"
	"power_supply_get_property\0"
	"charger_dev_get_charging_current\0"
	"mtk_chg_enable_vbus_ovp\0"
	"charger_dev_enable\0"
	"charger_dev_set_mivr\0"
	"power_supply_get_by_name\0"
	"power_supply_get_drvdata\0"
	"charger_dev_send_ta_current_pattern\0"
	"charger_dev_is_chip_enabled\0"
	"charger_dev_enable_chip\0"
	"charger_dev_reset_ta\0"
	"charger_dev_set_constant_voltage\0"
	"charger_dev_set_charging_current\0"
	"charger_dev_set_input_current\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_charger_algorithm_class,charger_class,mtk_charger_framework");

MODULE_ALIAS("of:N*T*Cmediatek,charger,pe");
MODULE_ALIAS("of:N*T*Cmediatek,charger,peC*");

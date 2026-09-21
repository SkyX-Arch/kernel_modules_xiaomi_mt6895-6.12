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
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xac304f53, "chg_alg_device_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0xcb191d1f, "get_adapter_by_name" },
	{ 0x10563961, "adapter_dev_exit_mode" },
	{ 0x5bd2fb78, "adapter_dev_set_cap" },
	{ 0xd811a62a, "charger_dev_set_mivr" },
	{ 0x2d780a08, "charger_dev_is_chip_enabled" },
	{ 0xc0ca7489, "mtk_chg_enable_vbus_ovp" },
	{ 0x3f03127d, "charger_dev_enable_termination" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x12f940e0, "chr_get_debug_level" },
	{ 0x7fb1c24a, "adapter_dev_get_cap" },
	{ 0xa9cdf825, "charger_dev_set_input_current" },
	{ 0xcda1e8e9, "charger_dev_set_charging_current" },
	{ 0x6665398c, "charger_dev_get_input_current" },
	{ 0x43f6f35a, "charger_dev_enable_powerpath" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0xcd54e95e, "charger_dev_enable" },
	{ 0x84beeb51, "adapter_dev_get_output" },
	{ 0x1cae472a, "adapter_dev_get_status" },
	{ 0x1f94a2b1, "charger_dev_get_vbus" },
	{ 0x0d681a38, "charger_dev_get_ibus" },
	{ 0x0307f8ab, "charger_dev_dump_registers" },
	{ 0x01aa7534, "charger_dev_reset_eoc_state" },
	{ 0x37eac5cb, "charger_dev_reset_ta" },
	{ 0x83174712, "charger_dev_enable_cable_drop_comp" },
	{ 0x79b787fd, "charger_dev_enable_6pin_battery_charging" },
	{ 0x56ecb677, "charger_dev_set_constant_voltage" },
	{ 0x2ad2e434, "charger_dev_get_mivr_state" },
	{ 0xdad1c208, "charger_dev_get_mivr" },
	{ 0x2d8b0f60, "charger_dev_enable_chip" },
	{ 0x479a2fb1, "charger_dev_is_enabled" },
	{ 0x1e735dc5, "charger_dev_get_charging_current" },
	{ 0x08630f94, "charger_dev_get_min_charging_current" },
	{ 0xbcab5d0f, "charger_dev_set_eoc_current" },
	{ 0x99779727, "charger_dev_get_min_input_current" },
	{ 0xd255bf92, "charger_dev_safety_check" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
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
	0xa571f6b0,
	0x0f314d3e,
	0xebdbd5bd,
	0xac304f53,
	0xc8c7229e,
	0xe136f93c,
	0x6fc35f2b,
	0xe6de52c9,
	0x959e7e2d,
	0xcb191d1f,
	0x10563961,
	0x5bd2fb78,
	0xd811a62a,
	0x2d780a08,
	0xc0ca7489,
	0x3f03127d,
	0xfdf04ae0,
	0xb6e871b8,
	0x3b9fa9d3,
	0x12f940e0,
	0x7fb1c24a,
	0xa9cdf825,
	0xcda1e8e9,
	0x6665398c,
	0x43f6f35a,
	0xe37ad0cf,
	0xcd54e95e,
	0x84beeb51,
	0x1cae472a,
	0x1f94a2b1,
	0x0d681a38,
	0x0307f8ab,
	0x01aa7534,
	0x37eac5cb,
	0x83174712,
	0x79b787fd,
	0x56ecb677,
	0x2ad2e434,
	0xdad1c208,
	0x2d8b0f60,
	0x479a2fb1,
	0x1e735dc5,
	0x08630f94,
	0xbcab5d0f,
	0x99779727,
	0xd255bf92,
	0xf0fdf6cb,
	0xdcb764ad,
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
	"__mutex_init\0"
	"wakeup_source_register\0"
	"devm_power_supply_get_by_phandle\0"
	"chg_alg_device_register\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"param_ops_bool\0"
	"get_charger_by_name\0"
	"get_adapter_by_name\0"
	"adapter_dev_exit_mode\0"
	"adapter_dev_set_cap\0"
	"charger_dev_set_mivr\0"
	"charger_dev_is_chip_enabled\0"
	"mtk_chg_enable_vbus_ovp\0"
	"charger_dev_enable_termination\0"
	"power_supply_get_by_name\0"
	"power_supply_get_property\0"
	"power_supply_get_drvdata\0"
	"chr_get_debug_level\0"
	"adapter_dev_get_cap\0"
	"charger_dev_set_input_current\0"
	"charger_dev_set_charging_current\0"
	"charger_dev_get_input_current\0"
	"charger_dev_enable_powerpath\0"
	"power_supply_set_property\0"
	"charger_dev_enable\0"
	"adapter_dev_get_output\0"
	"adapter_dev_get_status\0"
	"charger_dev_get_vbus\0"
	"charger_dev_get_ibus\0"
	"charger_dev_dump_registers\0"
	"charger_dev_reset_eoc_state\0"
	"charger_dev_reset_ta\0"
	"charger_dev_enable_cable_drop_comp\0"
	"charger_dev_enable_6pin_battery_charging\0"
	"charger_dev_set_constant_voltage\0"
	"charger_dev_get_mivr_state\0"
	"charger_dev_get_mivr\0"
	"charger_dev_enable_chip\0"
	"charger_dev_is_enabled\0"
	"charger_dev_get_charging_current\0"
	"charger_dev_get_min_charging_current\0"
	"charger_dev_set_eoc_current\0"
	"charger_dev_get_min_input_current\0"
	"charger_dev_safety_check\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_charger_algorithm_class,charger_class,adapter_class,mtk_charger_framework");

MODULE_ALIAS("of:N*T*Cmediatek,charger,pe45");
MODULE_ALIAS("of:N*T*Cmediatek,charger,pe45C*");

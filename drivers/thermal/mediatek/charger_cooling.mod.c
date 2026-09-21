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
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf772582a, "thermal_of_cooling_device_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xe37ad0cf,
	0x0f1165a4,
	0x12db679a,
	0x14fe5355,
	0xfdf04ae0,
	0x62b33777,
	0x401167cc,
	0xf772582a,
	0xc8c7229e,
	0x98cf60b3,
	0x9166fada,
	0xf3cdc3c6,
	0xe136f93c,
	0x656e4a6e,
	0x62835296,
	0x6fc35f2b,
	0xce8498d7,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"power_supply_set_property\0"
	"power_supply_changed\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"power_supply_get_by_name\0"
	"sysfs_create_group\0"
	"_dev_info\0"
	"thermal_of_cooling_device_register\0"
	"devm_kmalloc\0"
	"strlen\0"
	"strncpy\0"
	"of_find_compatible_node\0"
	"of_property_read_variable_u32_array\0"
	"snprintf\0"
	"thermal_cooling_device_unregister\0"
	"platform_driver_unregister\0"
	"kernel_kobj\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6360-charger-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6360-charger-coolerC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-charger-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-charger-coolerC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-charger-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-charger-coolerC*");

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
	{ 0xd7c2b302, "of_match_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x12f940e0, "chr_get_debug_level" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x1aaaeb07, "find_votable" },
	{ 0xd6fc9495, "gpiod_direction_output_raw" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x8ea8c3d4, "usb_get_property" },
	{ 0x7fb1c24a, "adapter_dev_get_cap" },
	{ 0x5bd2fb78, "adapter_dev_set_cap" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xcd54e95e, "charger_dev_enable" },
	{ 0x4a6f91ee, "charger_dev_cp_set_mode" },
	{ 0x44603dc2, "charger_dev_cp_enable_adc" },
	{ 0x43f6f35a, "charger_dev_enable_powerpath" },
	{ 0xa9cdf825, "charger_dev_set_input_current" },
	{ 0x2529e2bc, "usb_set_property" },
	{ 0x64748600, "gpiod_set_raw_value" },
	{ 0x1f94a2b1, "charger_dev_get_vbus" },
	{ 0x0d681a38, "charger_dev_get_ibus" },
	{ 0x4f9119bc, "charger_dev_cp_get_vbatt" },
	{ 0x479a2fb1, "charger_dev_is_enabled" },
	{ 0xc781e053, "charger_dev_is_bypass_enabled" },
	{ 0x2a30d068, "charger_dev_cp_get_bypass_support" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xaa048264, "bms_get_property" },
	{ 0x3c167b65, "get_client_vote" },
	{ 0x56c795e2, "get_effective_result" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6e4ae71c, "adapter_dev_set_cap_xm" },
	{ 0xe90dde51, "charger_dev_cp_device_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x61457f66, "charger_dev_is_powerpath_enabled" },
	{ 0x3f03127d, "charger_dev_enable_termination" },
	{ 0xd811a62a, "charger_dev_set_mivr" },
	{ 0xb31e0c2b, "vote" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9551266c, "power_supply_unreg_notifier" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xd7c2b302,
	0x92997ed8,
	0xc6f46339,
	0xffeedf6a,
	0x725b192d,
	0x62b33777,
	0xe17134b6,
	0x12f940e0,
	0x5e292cf6,
	0xe136f93c,
	0x6b201699,
	0x959e7e2d,
	0xfdf04ae0,
	0x3b9fa9d3,
	0x1aaaeb07,
	0xd6fc9495,
	0x07183fe6,
	0x8ea8c3d4,
	0x7fb1c24a,
	0x5bd2fb78,
	0x42ad47ad,
	0x7f02188f,
	0xcec49a87,
	0xcd54e95e,
	0x4a6f91ee,
	0x44603dc2,
	0x43f6f35a,
	0xa9cdf825,
	0x2529e2bc,
	0x64748600,
	0x1f94a2b1,
	0x0d681a38,
	0x4f9119bc,
	0x479a2fb1,
	0xc781e053,
	0x2a30d068,
	0xb6e871b8,
	0xaa048264,
	0x3c167b65,
	0x56c795e2,
	0x65929cae,
	0xc4f0da12,
	0x6e4ae71c,
	0xe90dde51,
	0xf9a482f9,
	0x61457f66,
	0x3f03127d,
	0xd811a62a,
	0xb31e0c2b,
	0x34db050b,
	0xe2d5255a,
	0xc5b6f236,
	0xd35cce70,
	0x656e4a6e,
	0xbcab6ee6,
	0x9551266c,
	0x9e87b2ff,
	0x03c12dfe,
	0x6fc35f2b,
	0xb2fb935e,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"of_match_device\0"
	"_printk\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"power_supply_reg_notifier\0"
	"sysfs_create_group\0"
	"__kmalloc_cache_noprof\0"
	"chr_get_debug_level\0"
	"of_get_named_gpio\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"get_charger_by_name\0"
	"power_supply_get_by_name\0"
	"power_supply_get_drvdata\0"
	"find_votable\0"
	"gpiod_direction_output_raw\0"
	"gpio_to_desc\0"
	"usb_get_property\0"
	"adapter_dev_get_cap\0"
	"adapter_dev_set_cap\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"cancel_delayed_work_sync\0"
	"charger_dev_enable\0"
	"charger_dev_cp_set_mode\0"
	"charger_dev_cp_enable_adc\0"
	"charger_dev_enable_powerpath\0"
	"charger_dev_set_input_current\0"
	"usb_set_property\0"
	"gpiod_set_raw_value\0"
	"charger_dev_get_vbus\0"
	"charger_dev_get_ibus\0"
	"charger_dev_cp_get_vbatt\0"
	"charger_dev_is_enabled\0"
	"charger_dev_is_bypass_enabled\0"
	"charger_dev_cp_get_bypass_support\0"
	"power_supply_get_property\0"
	"bms_get_property\0"
	"get_client_vote\0"
	"get_effective_result\0"
	"ns_to_timespec64\0"
	"ktime_get_with_offset\0"
	"adapter_dev_set_cap_xm\0"
	"charger_dev_cp_device_init\0"
	"msleep\0"
	"charger_dev_is_powerpath_enabled\0"
	"charger_dev_enable_termination\0"
	"charger_dev_set_mivr\0"
	"vote\0"
	"_raw_spin_lock_irqsave\0"
	"strcmp\0"
	"queue_work_on\0"
	"_raw_spin_unlock_irqrestore\0"
	"snprintf\0"
	"sscanf\0"
	"power_supply_unreg_notifier\0"
	"cancel_delayed_work\0"
	"cancel_work_sync\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_charger_framework,charger_class,xmc_voter,adapter_class,bq28z610");

MODULE_ALIAS("of:N*T*Cpd_cp_manager");
MODULE_ALIAS("of:N*T*Cpd_cp_managerC*");
MODULE_ALIAS("platform:pd_cp_manager");

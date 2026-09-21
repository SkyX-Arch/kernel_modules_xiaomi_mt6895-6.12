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

KSYMTAB_FUNC(chr_get_debug_level, "", "");
KSYMTAB_FUNC(mtk_chg_enable_vbus_ovp, "", "");
KSYMTAB_FUNC(usb_get_property, "", "");
KSYMTAB_FUNC(usb_set_property, "", "");

SYMBOL_CRC(chr_get_debug_level, 0x12f940e0, "");
SYMBOL_CRC(mtk_chg_enable_vbus_ovp, 0xc0ca7489, "");
SYMBOL_CRC(usb_get_property, 0x8ea8c3d4, "");
SYMBOL_CRC(usb_set_property, 0x2529e2bc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3b1b6444, "of_get_property" },
	{ 0x92997ed8, "_printk" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xe2964344, "__wake_up" },
	{ 0xadc6bfc7, "srcu_notifier_call_chain" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x0f1165a4, "power_supply_changed" },
	{ 0x5095f2eb, "power_supply_put" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0xc322f0d9, "chg_alg_notifier_call" },
	{ 0xc54855de, "kobject_uevent_env" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0x43f6f35a, "charger_dev_enable_powerpath" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x852ccf53, "srcu_init_notifier_head" },
	{ 0xcf3048dd, "power_supply_register" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xcb191d1f, "get_adapter_by_name" },
	{ 0x99be4ac7, "register_adapter_device_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2d26a116, "alarm_init" },
	{ 0x942ac300, "alarm_try_to_cancel" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x75fa6cda, "alarm_start" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xf1d0618f, "remove_proc_subtree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1b48c7ed, "chg_alg_set_prop" },
	{ 0x5743a373, "chg_alg_is_algo_ready" },
	{ 0xd3551f67, "adapter_dev_get_property" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x61457f66, "charger_dev_is_powerpath_enabled" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcd54e95e, "charger_dev_enable" },
	{ 0xd7db9ff2, "charger_dev_do_event" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf870c22c, "charger_dev_is_safety_timer_enabled" },
	{ 0x45a0a705, "charger_dev_enable_safety_timer" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0xb3374f88, "get_chg_alg_by_name" },
	{ 0x6d961d93, "charger_dev_get_adc" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x79b787fd, "charger_dev_enable_6pin_battery_charging" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d621def, "charger_dev_get_constant_voltage" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x8c186ed0, "charger_dev_set_boot_volt_times" },
	{ 0x056da251, "charger_cs_init_setting" },
	{ 0x56ecb677, "charger_dev_set_constant_voltage" },
	{ 0xcda1e8e9, "charger_dev_set_charging_current" },
	{ 0x66c473de, "chg_alg_init_algo" },
	{ 0xc92a1fe3, "register_chg_alg_notifier" },
	{ 0xee6cb31d, "register_charger_device_notifier" },
	{ 0x853989b3, "chg_alg_plugout_reset" },
	{ 0xa9cdf825, "charger_dev_set_input_current" },
	{ 0xd811a62a, "charger_dev_set_mivr" },
	{ 0x168cf3be, "charger_dev_plug_out" },
	{ 0x85951fc6, "charger_dev_plug_in" },
	{ 0x479a2fb1, "charger_dev_is_enabled" },
	{ 0x1ed147fa, "charger_dev_get_temperature" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeaab25e8, "chg_alg_stop_algo" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x349cba85, "strchr" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x595d6bd4, "charger_dev_get_vbat" },
	{ 0x57d52472, "charger_cs_get_ibat" },
	{ 0x1f94a2b1, "charger_dev_get_vbus" },
	{ 0x4ba1d35d, "charger_dev_get_ibat" },
	{ 0x0d681a38, "charger_dev_get_ibus" },
	{ 0x1e735dc5, "charger_dev_get_charging_current" },
	{ 0x6665398c, "charger_dev_get_input_current" },
	{ 0xd2201a4a, "charger_dev_get_zcv" },
	{ 0x64311477, "regmap_read" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xe6ed634e, "charger_dev_is_charging_done" },
	{ 0xceedd9f3, "cs_dev_is_charging_done" },
	{ 0x2a51eadf, "cs_dev_do_event" },
	{ 0xa9f868b2, "charger_cs_status_control" },
	{ 0x273e64e6, "charger_cs_enable_lowpower" },
	{ 0x0307f8ab, "charger_dev_dump_registers" },
	{ 0x7de7d386, "cs_dev_check_cs_temp" },
	{ 0x35f9aafe, "chg_alg_get_prop" },
	{ 0x96a8276a, "chg_alg_set_current_limit" },
	{ 0x9f0fef1e, "chg_alg_state_to_str" },
	{ 0xb9476403, "chg_alg_start_algo" },
	{ 0xf1ba7eeb, "chg_alg_is_algo_running" },
	{ 0xc9adc5da, "charger_dev_kick_wdt" },
	{ 0x502dc1e9, "charger_dev_run_aicl" },
	{ 0x08630f94, "charger_dev_get_min_charging_current" },
	{ 0x99779727, "charger_dev_get_min_input_current" },
	{ 0xb50b1419, "create_votable" },
	{ 0xbcab5d0f, "charger_dev_set_eoc_current" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3b1b6444,
	0x92997ed8,
	0xfdf04ae0,
	0x3b9fa9d3,
	0x34db050b,
	0x4e8b8def,
	0xe2964344,
	0xadc6bfc7,
	0x9ec6ca96,
	0x356461c8,
	0x1e6d26a8,
	0xd5977bfb,
	0xed55cabd,
	0x0f1165a4,
	0x5095f2eb,
	0xb318cbab,
	0x75ca79b5,
	0xd35cce70,
	0x98cf60b3,
	0x9166fada,
	0xc322f0d9,
	0xc54855de,
	0x959e7e2d,
	0x43f6f35a,
	0x12db679a,
	0xa571f6b0,
	0x5c6a5e82,
	0x0f314d3e,
	0xd9a5ea54,
	0x75966ec2,
	0x852ccf53,
	0xcf3048dd,
	0xebdbd5bd,
	0xcb191d1f,
	0x99be4ac7,
	0xe2d5255a,
	0xba0aee2e,
	0xce5bc4d0,
	0xc8c7229e,
	0xaf7cb74b,
	0x5e292cf6,
	0x1fec5304,
	0x6b201699,
	0xe136f93c,
	0x2d26a116,
	0x942ac300,
	0x65929cae,
	0x75fa6cda,
	0xc4f0da12,
	0x05590c04,
	0xe922b94d,
	0x7518b5f0,
	0xa2fa95a0,
	0xf1d0618f,
	0x656e4a6e,
	0x8c8569cb,
	0x3b6c41ea,
	0x1b48c7ed,
	0x5743a373,
	0xd3551f67,
	0xf5edea2e,
	0x5c3c7387,
	0x3854774b,
	0x61457f66,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0xbcab6ee6,
	0xcd54e95e,
	0xd7db9ff2,
	0x88db9f48,
	0x2be0c009,
	0xf870c22c,
	0x45a0a705,
	0xe37ad0cf,
	0xb3374f88,
	0x6d961d93,
	0xb6e871b8,
	0x79b787fd,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xf9a482f9,
	0x7d621def,
	0xa9320d27,
	0x8c186ed0,
	0x056da251,
	0x56ecb677,
	0xcda1e8e9,
	0x66c473de,
	0xc92a1fe3,
	0xee6cb31d,
	0x853989b3,
	0xa9cdf825,
	0xd811a62a,
	0x168cf3be,
	0x85951fc6,
	0x479a2fb1,
	0x1ed147fa,
	0xf184d189,
	0xb43f9365,
	0xeaab25e8,
	0x6fc35f2b,
	0x349cba85,
	0xfe5d4bb2,
	0x595d6bd4,
	0x57d52472,
	0x1f94a2b1,
	0x4ba1d35d,
	0x0d681a38,
	0x1e735dc5,
	0x6665398c,
	0xd2201a4a,
	0x64311477,
	0xa823db6e,
	0x576b05bf,
	0xe6ed634e,
	0xceedd9f3,
	0x2a51eadf,
	0xa9f868b2,
	0x273e64e6,
	0x0307f8ab,
	0x7de7d386,
	0x35f9aafe,
	0x96a8276a,
	0x9f0fef1e,
	0xb9476403,
	0xf1ba7eeb,
	0xc9adc5da,
	0x502dc1e9,
	0x08630f94,
	0x99779727,
	0xb50b1419,
	0xbcab5d0f,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"of_get_property\0"
	"_printk\0"
	"power_supply_get_by_name\0"
	"power_supply_get_drvdata\0"
	"_raw_spin_lock_irqsave\0"
	"__pm_stay_awake\0"
	"__wake_up\0"
	"srcu_notifier_call_chain\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"strstr\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"power_supply_changed\0"
	"power_supply_put\0"
	"of_find_node_opts_by_path\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_irqrestore\0"
	"strlen\0"
	"strncpy\0"
	"chg_alg_notifier_call\0"
	"kobject_uevent_env\0"
	"get_charger_by_name\0"
	"charger_dev_enable_powerpath\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"devm_kasprintf\0"
	"wakeup_source_register\0"
	"__init_waitqueue_head\0"
	"register_pm_notifier\0"
	"srcu_init_notifier_head\0"
	"power_supply_register\0"
	"devm_power_supply_get_by_phandle\0"
	"get_adapter_by_name\0"
	"register_adapter_device_notifier\0"
	"strcmp\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"devm_kmalloc\0"
	"of_property_read_string\0"
	"of_get_named_gpio\0"
	"__of_parse_phandle_with_args\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"alarm_init\0"
	"alarm_try_to_cancel\0"
	"ns_to_timespec64\0"
	"alarm_start\0"
	"ktime_get_with_offset\0"
	"__pm_relax\0"
	"device_create_file\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"remove_proc_subtree\0"
	"snprintf\0"
	"kstrtoint\0"
	"kstrtouint\0"
	"chg_alg_set_prop\0"
	"chg_alg_is_algo_ready\0"
	"adapter_dev_get_property\0"
	"___ratelimit\0"
	"kstrtoull\0"
	"kstrtoll\0"
	"charger_dev_is_powerpath_enabled\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"sscanf\0"
	"charger_dev_enable\0"
	"charger_dev_do_event\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"charger_dev_is_safety_timer_enabled\0"
	"charger_dev_enable_safety_timer\0"
	"power_supply_set_property\0"
	"get_chg_alg_by_name\0"
	"charger_dev_get_adc\0"
	"power_supply_get_property\0"
	"charger_dev_enable_6pin_battery_charging\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"msleep\0"
	"charger_dev_get_constant_voltage\0"
	"ktime_get_seconds\0"
	"charger_dev_set_boot_volt_times\0"
	"charger_cs_init_setting\0"
	"charger_dev_set_constant_voltage\0"
	"charger_dev_set_charging_current\0"
	"chg_alg_init_algo\0"
	"register_chg_alg_notifier\0"
	"register_charger_device_notifier\0"
	"chg_alg_plugout_reset\0"
	"charger_dev_set_input_current\0"
	"charger_dev_set_mivr\0"
	"charger_dev_plug_out\0"
	"charger_dev_plug_in\0"
	"charger_dev_is_enabled\0"
	"charger_dev_get_temperature\0"
	"kernel_power_off\0"
	"ktime_get\0"
	"chg_alg_stop_algo\0"
	"platform_driver_unregister\0"
	"strchr\0"
	"sys_tz\0"
	"charger_dev_get_vbat\0"
	"charger_cs_get_ibat\0"
	"charger_dev_get_vbus\0"
	"charger_dev_get_ibat\0"
	"charger_dev_get_ibus\0"
	"charger_dev_get_charging_current\0"
	"charger_dev_get_input_current\0"
	"charger_dev_get_zcv\0"
	"regmap_read\0"
	"of_find_device_by_node\0"
	"regmap_update_bits_base\0"
	"charger_dev_is_charging_done\0"
	"cs_dev_is_charging_done\0"
	"cs_dev_do_event\0"
	"charger_cs_status_control\0"
	"charger_cs_enable_lowpower\0"
	"charger_dev_dump_registers\0"
	"cs_dev_check_cs_temp\0"
	"chg_alg_get_prop\0"
	"chg_alg_set_current_limit\0"
	"chg_alg_state_to_str\0"
	"chg_alg_start_algo\0"
	"chg_alg_is_algo_running\0"
	"charger_dev_kick_wdt\0"
	"charger_dev_run_aicl\0"
	"charger_dev_get_min_charging_current\0"
	"charger_dev_get_min_input_current\0"
	"create_votable\0"
	"charger_dev_set_eoc_current\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_charger_algorithm_class,charger_class,adapter_class,xmc_voter");

MODULE_ALIAS("of:N*T*Cmediatek,xagapro_charger");
MODULE_ALIAS("of:N*T*Cmediatek,xagapro_chargerC*");
MODULE_ALIAS("of:N*T*Cmediatek,charger");
MODULE_ALIAS("of:N*T*Cmediatek,chargerC*");

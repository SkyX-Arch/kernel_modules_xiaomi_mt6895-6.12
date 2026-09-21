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

KSYMTAB_FUNC(charger_dev_enable, "", "");
KSYMTAB_FUNC(charger_dev_is_enabled, "", "");
KSYMTAB_FUNC(charger_dev_is_bypass_enabled, "", "");
KSYMTAB_FUNC(charger_dev_cp_get_bypass_support, "", "");
KSYMTAB_FUNC(charger_dev_cp_reset_check, "", "");
KSYMTAB_FUNC(charger_dev_cp_init_check, "", "");
KSYMTAB_FUNC(charger_dev_cp_set_mode, "", "");
KSYMTAB_FUNC(charger_dev_cp_device_init, "", "");
KSYMTAB_FUNC(charger_dev_cp_get_vbatt, "", "");
KSYMTAB_FUNC(charger_dev_cp_get_ibatt, "", "");
KSYMTAB_FUNC(charger_dev_cp_enable_adc, "", "");
KSYMTAB_FUNC(charger_dev_qc3_dpdm_pulse, "", "");
KSYMTAB_FUNC(charger_dev_select_qc_mode, "", "");
KSYMTAB_FUNC(charger_dev_plug_in, "", "");
KSYMTAB_FUNC(charger_dev_plug_out, "", "");
KSYMTAB_FUNC(charger_dev_do_event, "", "");
KSYMTAB_FUNC(cs_dev_do_event, "", "");
KSYMTAB_FUNC(charger_dev_enable_6pin_battery_charging, "", "");
KSYMTAB_FUNC(charger_dev_set_charging_current, "", "");
KSYMTAB_FUNC(charger_dev_get_charging_current, "", "");
KSYMTAB_FUNC(charger_dev_get_min_charging_current, "", "");
KSYMTAB_FUNC(charger_dev_enable_chip, "", "");
KSYMTAB_FUNC(charger_dev_is_chip_enabled, "", "");
KSYMTAB_FUNC(charger_dev_enable_direct_charging, "", "");
KSYMTAB_FUNC(charger_dev_kick_direct_charging_wdt, "", "");
KSYMTAB_FUNC(charger_dev_get_vbus, "", "");
KSYMTAB_FUNC(charger_dev_get_vbat, "", "");
KSYMTAB_FUNC(charger_dev_get_ibus, "", "");
KSYMTAB_FUNC(charger_dev_get_ibat, "", "");
KSYMTAB_FUNC(charger_cs_get_ibat, "", "");
KSYMTAB_FUNC(charger_cs_init_setting, "", "");
KSYMTAB_FUNC(charger_cs_status_control, "", "");
KSYMTAB_FUNC(charger_cs_enable_lowpower, "", "");
KSYMTAB_FUNC(charger_dev_get_temperature, "", "");
KSYMTAB_FUNC(charger_dev_set_input_current, "", "");
KSYMTAB_FUNC(charger_dev_get_input_current, "", "");
KSYMTAB_FUNC(charger_dev_get_min_input_current, "", "");
KSYMTAB_FUNC(charger_dev_set_boot_volt_times, "", "");
KSYMTAB_FUNC(charger_dev_set_eoc_current, "", "");
KSYMTAB_FUNC(charger_dev_get_eoc_current, "", "");
KSYMTAB_FUNC(charger_dev_kick_wdt, "", "");
KSYMTAB_FUNC(charger_dev_set_constant_voltage, "", "");
KSYMTAB_FUNC(charger_dev_get_constant_voltage, "", "");
KSYMTAB_FUNC(cs_dev_check_cs_temp, "", "");
KSYMTAB_FUNC(charger_dev_dump_init_setting, "", "");
KSYMTAB_FUNC(charger_dev_dump_registers, "", "");
KSYMTAB_FUNC(charger_dev_is_charging_done, "", "");
KSYMTAB_FUNC(cs_dev_is_charging_done, "", "");
KSYMTAB_FUNC(cs_dev_set_cs_regVal, "", "");
KSYMTAB_FUNC(charger_dev_enable_vbus_ovp, "", "");
KSYMTAB_FUNC(charger_dev_set_mivr, "", "");
KSYMTAB_FUNC(charger_dev_get_mivr, "", "");
KSYMTAB_FUNC(charger_dev_enable_powerpath, "", "");
KSYMTAB_FUNC(charger_dev_is_powerpath_enabled, "", "");
KSYMTAB_FUNC(charger_dev_enable_safety_timer, "", "");
KSYMTAB_FUNC(charger_dev_enable_hz, "", "");
KSYMTAB_FUNC(charger_dev_set_vac_ovp, "", "");
KSYMTAB_FUNC(charger_dev_get_adc, "", "");
KSYMTAB_FUNC(charger_dev_get_adc_accuracy, "", "");
KSYMTAB_FUNC(charger_dev_is_safety_timer_enabled, "", "");
KSYMTAB_FUNC(charger_dev_enable_termination, "", "");
KSYMTAB_FUNC(charger_dev_get_mivr_state, "", "");
KSYMTAB_FUNC(charger_dev_send_ta_current_pattern, "", "");
KSYMTAB_FUNC(charger_dev_send_ta20_current_pattern, "", "");
KSYMTAB_FUNC(charger_dev_reset_ta, "", "");
KSYMTAB_FUNC(charger_dev_set_pe20_efficiency_table, "", "");
KSYMTAB_FUNC(charger_dev_enable_cable_drop_comp, "", "");
KSYMTAB_FUNC(charger_dev_set_direct_charging_ibusoc, "", "");
KSYMTAB_FUNC(charger_dev_set_direct_charging_vbusov, "", "");
KSYMTAB_FUNC(charger_dev_set_ibusocp, "", "");
KSYMTAB_FUNC(charger_dev_set_vbusovp, "", "");
KSYMTAB_FUNC(charger_dev_set_ibatocp, "", "");
KSYMTAB_FUNC(charger_dev_set_vbatovp, "", "");
KSYMTAB_FUNC(charger_dev_set_vbatovp_alarm, "", "");
KSYMTAB_FUNC(charger_dev_reset_vbatovp_alarm, "", "");
KSYMTAB_FUNC(charger_dev_set_vbusovp_alarm, "", "");
KSYMTAB_FUNC(charger_dev_reset_vbusovp_alarm, "", "");
KSYMTAB_FUNC(charger_dev_is_vbuslowerr, "", "");
KSYMTAB_FUNC(charger_dev_init_chip, "", "");
KSYMTAB_FUNC(charger_dev_enable_auto_trans, "", "");
KSYMTAB_FUNC(charger_dev_set_auto_trans, "", "");
KSYMTAB_FUNC(charger_dev_set_operation_mode, "", "");
KSYMTAB_FUNC(charger_dev_enable_chg_type_det, "", "");
KSYMTAB_FUNC(charger_dev_enable_otg, "", "");
KSYMTAB_FUNC(charger_dev_enable_discharge, "", "");
KSYMTAB_FUNC(charger_dev_set_boost_current_limit, "", "");
KSYMTAB_FUNC(charger_dev_get_zcv, "", "");
KSYMTAB_FUNC(charger_dev_run_aicl, "", "");
KSYMTAB_FUNC(charger_dev_reset_eoc_state, "", "");
KSYMTAB_FUNC(charger_dev_safety_check, "", "");
KSYMTAB_FUNC(charger_dev_notify, "", "");
KSYMTAB_FUNC(charger_dev_enable_usbid, "", "");
KSYMTAB_FUNC(charger_dev_set_usbid_rup, "", "");
KSYMTAB_FUNC(charger_dev_set_usbid_src_ton, "", "");
KSYMTAB_FUNC(charger_dev_set_usbid_period, "", "");
KSYMTAB_FUNC(charger_dev_get_usbid_stat, "", "");
KSYMTAB_FUNC(charger_dev_enable_usbid_floating, "", "");
KSYMTAB_FUNC(charger_dev_enable_force_typec_otp, "", "");
KSYMTAB_FUNC(charger_dev_get_ctd_dischg_status, "", "");
KSYMTAB_FUNC(charger_dev_enable_hidden_mode, "", "");
KSYMTAB_FUNC(charger_dev_enable_ship_mode, "", "");
KSYMTAB_FUNC(charger_dev_set_boost_voltage_limit, "", "");
KSYMTAB_FUNC(charger_dev_set_property, "", "");
KSYMTAB_FUNC(charger_dev_get_property, "", "");
KSYMTAB_FUNC(register_charger_device_notifier, "", "");
KSYMTAB_FUNC(unregister_charger_device_notifier, "", "");
KSYMTAB_FUNC(charger_device_register, "", "");
KSYMTAB_FUNC(charger_device_unregister, "", "");
KSYMTAB_FUNC(get_charger_by_name, "", "");

SYMBOL_CRC(charger_dev_enable, 0xcd54e95e, "");
SYMBOL_CRC(charger_dev_is_enabled, 0x479a2fb1, "");
SYMBOL_CRC(charger_dev_is_bypass_enabled, 0xc781e053, "");
SYMBOL_CRC(charger_dev_cp_get_bypass_support, 0x2a30d068, "");
SYMBOL_CRC(charger_dev_cp_reset_check, 0x759f00aa, "");
SYMBOL_CRC(charger_dev_cp_init_check, 0x405f43d9, "");
SYMBOL_CRC(charger_dev_cp_set_mode, 0x4a6f91ee, "");
SYMBOL_CRC(charger_dev_cp_device_init, 0xe90dde51, "");
SYMBOL_CRC(charger_dev_cp_get_vbatt, 0x4f9119bc, "");
SYMBOL_CRC(charger_dev_cp_get_ibatt, 0xdbe7de80, "");
SYMBOL_CRC(charger_dev_cp_enable_adc, 0x44603dc2, "");
SYMBOL_CRC(charger_dev_qc3_dpdm_pulse, 0x033b7e55, "");
SYMBOL_CRC(charger_dev_select_qc_mode, 0x9d6a0d69, "");
SYMBOL_CRC(charger_dev_plug_in, 0x85951fc6, "");
SYMBOL_CRC(charger_dev_plug_out, 0x168cf3be, "");
SYMBOL_CRC(charger_dev_do_event, 0xd7db9ff2, "");
SYMBOL_CRC(cs_dev_do_event, 0x2a51eadf, "");
SYMBOL_CRC(charger_dev_enable_6pin_battery_charging, 0x79b787fd, "");
SYMBOL_CRC(charger_dev_set_charging_current, 0xcda1e8e9, "");
SYMBOL_CRC(charger_dev_get_charging_current, 0x1e735dc5, "");
SYMBOL_CRC(charger_dev_get_min_charging_current, 0x08630f94, "");
SYMBOL_CRC(charger_dev_enable_chip, 0x2d8b0f60, "");
SYMBOL_CRC(charger_dev_is_chip_enabled, 0x2d780a08, "");
SYMBOL_CRC(charger_dev_enable_direct_charging, 0x5a14f9e9, "");
SYMBOL_CRC(charger_dev_kick_direct_charging_wdt, 0xae1f3353, "");
SYMBOL_CRC(charger_dev_get_vbus, 0x1f94a2b1, "");
SYMBOL_CRC(charger_dev_get_vbat, 0x595d6bd4, "");
SYMBOL_CRC(charger_dev_get_ibus, 0x0d681a38, "");
SYMBOL_CRC(charger_dev_get_ibat, 0x4ba1d35d, "");
SYMBOL_CRC(charger_cs_get_ibat, 0x57d52472, "");
SYMBOL_CRC(charger_cs_init_setting, 0x056da251, "");
SYMBOL_CRC(charger_cs_status_control, 0xa9f868b2, "");
SYMBOL_CRC(charger_cs_enable_lowpower, 0x273e64e6, "");
SYMBOL_CRC(charger_dev_get_temperature, 0x1ed147fa, "");
SYMBOL_CRC(charger_dev_set_input_current, 0xa9cdf825, "");
SYMBOL_CRC(charger_dev_get_input_current, 0x6665398c, "");
SYMBOL_CRC(charger_dev_get_min_input_current, 0x99779727, "");
SYMBOL_CRC(charger_dev_set_boot_volt_times, 0x8c186ed0, "");
SYMBOL_CRC(charger_dev_set_eoc_current, 0xbcab5d0f, "");
SYMBOL_CRC(charger_dev_get_eoc_current, 0x5d2f65a2, "");
SYMBOL_CRC(charger_dev_kick_wdt, 0xc9adc5da, "");
SYMBOL_CRC(charger_dev_set_constant_voltage, 0x56ecb677, "");
SYMBOL_CRC(charger_dev_get_constant_voltage, 0x7d621def, "");
SYMBOL_CRC(cs_dev_check_cs_temp, 0x7de7d386, "");
SYMBOL_CRC(charger_dev_dump_init_setting, 0x742f186d, "");
SYMBOL_CRC(charger_dev_dump_registers, 0x0307f8ab, "");
SYMBOL_CRC(charger_dev_is_charging_done, 0xe6ed634e, "");
SYMBOL_CRC(cs_dev_is_charging_done, 0xceedd9f3, "");
SYMBOL_CRC(cs_dev_set_cs_regVal, 0xd6e80528, "");
SYMBOL_CRC(charger_dev_enable_vbus_ovp, 0xbfbd662b, "");
SYMBOL_CRC(charger_dev_set_mivr, 0xd811a62a, "");
SYMBOL_CRC(charger_dev_get_mivr, 0xdad1c208, "");
SYMBOL_CRC(charger_dev_enable_powerpath, 0x43f6f35a, "");
SYMBOL_CRC(charger_dev_is_powerpath_enabled, 0x61457f66, "");
SYMBOL_CRC(charger_dev_enable_safety_timer, 0x45a0a705, "");
SYMBOL_CRC(charger_dev_enable_hz, 0xeb2dbed2, "");
SYMBOL_CRC(charger_dev_set_vac_ovp, 0xc8125ed3, "");
SYMBOL_CRC(charger_dev_get_adc, 0x6d961d93, "");
SYMBOL_CRC(charger_dev_get_adc_accuracy, 0x74fb89ae, "");
SYMBOL_CRC(charger_dev_is_safety_timer_enabled, 0xf870c22c, "");
SYMBOL_CRC(charger_dev_enable_termination, 0x3f03127d, "");
SYMBOL_CRC(charger_dev_get_mivr_state, 0x2ad2e434, "");
SYMBOL_CRC(charger_dev_send_ta_current_pattern, 0x0845105d, "");
SYMBOL_CRC(charger_dev_send_ta20_current_pattern, 0xbc3e0569, "");
SYMBOL_CRC(charger_dev_reset_ta, 0x37eac5cb, "");
SYMBOL_CRC(charger_dev_set_pe20_efficiency_table, 0xf14a07ad, "");
SYMBOL_CRC(charger_dev_enable_cable_drop_comp, 0x83174712, "");
SYMBOL_CRC(charger_dev_set_direct_charging_ibusoc, 0x27111ecf, "");
SYMBOL_CRC(charger_dev_set_direct_charging_vbusov, 0x30bacf8d, "");
SYMBOL_CRC(charger_dev_set_ibusocp, 0x5b39ec60, "");
SYMBOL_CRC(charger_dev_set_vbusovp, 0xc3fc670d, "");
SYMBOL_CRC(charger_dev_set_ibatocp, 0x66a7b07e, "");
SYMBOL_CRC(charger_dev_set_vbatovp, 0xfe623b13, "");
SYMBOL_CRC(charger_dev_set_vbatovp_alarm, 0xa309764f, "");
SYMBOL_CRC(charger_dev_reset_vbatovp_alarm, 0x7f443ff5, "");
SYMBOL_CRC(charger_dev_set_vbusovp_alarm, 0x161ad73a, "");
SYMBOL_CRC(charger_dev_reset_vbusovp_alarm, 0x42da63eb, "");
SYMBOL_CRC(charger_dev_is_vbuslowerr, 0x463e04b5, "");
SYMBOL_CRC(charger_dev_init_chip, 0x06740252, "");
SYMBOL_CRC(charger_dev_enable_auto_trans, 0xf75ba322, "");
SYMBOL_CRC(charger_dev_set_auto_trans, 0xc13818c7, "");
SYMBOL_CRC(charger_dev_set_operation_mode, 0x36732488, "");
SYMBOL_CRC(charger_dev_enable_chg_type_det, 0x676d4e16, "");
SYMBOL_CRC(charger_dev_enable_otg, 0xa6824a32, "");
SYMBOL_CRC(charger_dev_enable_discharge, 0x0a47cda6, "");
SYMBOL_CRC(charger_dev_set_boost_current_limit, 0xaedb2c22, "");
SYMBOL_CRC(charger_dev_get_zcv, 0xd2201a4a, "");
SYMBOL_CRC(charger_dev_run_aicl, 0x502dc1e9, "");
SYMBOL_CRC(charger_dev_reset_eoc_state, 0x01aa7534, "");
SYMBOL_CRC(charger_dev_safety_check, 0xd255bf92, "");
SYMBOL_CRC(charger_dev_notify, 0xe33bece3, "");
SYMBOL_CRC(charger_dev_enable_usbid, 0x751ac686, "");
SYMBOL_CRC(charger_dev_set_usbid_rup, 0x09aaf220, "");
SYMBOL_CRC(charger_dev_set_usbid_src_ton, 0x9d7d9955, "");
SYMBOL_CRC(charger_dev_set_usbid_period, 0x74415368, "");
SYMBOL_CRC(charger_dev_get_usbid_stat, 0x53bf358f, "");
SYMBOL_CRC(charger_dev_enable_usbid_floating, 0x6be37e1f, "");
SYMBOL_CRC(charger_dev_enable_force_typec_otp, 0x41b55332, "");
SYMBOL_CRC(charger_dev_get_ctd_dischg_status, 0x42631823, "");
SYMBOL_CRC(charger_dev_enable_hidden_mode, 0x09d23182, "");
SYMBOL_CRC(charger_dev_enable_ship_mode, 0x8fed5edd, "");
SYMBOL_CRC(charger_dev_set_boost_voltage_limit, 0x94976027, "");
SYMBOL_CRC(charger_dev_set_property, 0xb68a4907, "");
SYMBOL_CRC(charger_dev_get_property, 0x720a2e51, "");
SYMBOL_CRC(register_charger_device_notifier, 0xee6cb31d, "");
SYMBOL_CRC(unregister_charger_device_notifier, 0x0ce624fc, "");
SYMBOL_CRC(charger_device_register, 0xbc0850ff, "");
SYMBOL_CRC(charger_device_unregister, 0x9d466c1a, "");
SYMBOL_CRC(get_charger_by_name, 0x959e7e2d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xadc6bfc7, "srcu_notifier_call_chain" },
	{ 0x5038c782, "srcu_notifier_chain_register" },
	{ 0xa1a0fdd2, "srcu_notifier_chain_unregister" },
	{ 0x852ccf53, "srcu_init_notifier_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x4d8597ff, "device_register" },
	{ 0x037a0cba, "kfree" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0xf9874213, "class_find_device" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xadc6bfc7,
	0x5038c782,
	0xa1a0fdd2,
	0x852ccf53,
	0xa571f6b0,
	0xba860d3c,
	0x4d8597ff,
	0x037a0cba,
	0xd5977bfb,
	0xed55cabd,
	0xcc1420a0,
	0xf9874213,
	0xe17134b6,
	0xe2d5255a,
	0x6fe9dcd4,
	0x92997ed8,
	0x656e4a6e,
	0xef27af6b,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"srcu_notifier_call_chain\0"
	"srcu_notifier_chain_register\0"
	"srcu_notifier_chain_unregister\0"
	"srcu_init_notifier_head\0"
	"__mutex_init\0"
	"dev_set_name\0"
	"device_register\0"
	"kfree\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"device_unregister\0"
	"class_find_device\0"
	"__kmalloc_cache_noprof\0"
	"strcmp\0"
	"class_create\0"
	"_printk\0"
	"snprintf\0"
	"class_destroy\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "78C3B5864A9AA080CF4AA37");

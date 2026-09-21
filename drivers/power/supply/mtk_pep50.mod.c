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
	{ 0x401167cc, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2d26a116, "alarm_init" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xac304f53, "chg_alg_device_register" },
	{ 0x5774fe01, "chg_alg_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xe038ea74, "alarm_start_relative" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x394b5321, "pm_relax" },
	{ 0x429d3502, "alarm_cancel" },
	{ 0xf9a482f9, "msleep" },
	{ 0xadc6bfc7, "srcu_notifier_call_chain" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xdd541345, "chg_alg_notify_evt_tostring" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x84beeb51, "adapter_dev_get_output" },
	{ 0x1cae472a, "adapter_dev_get_status" },
	{ 0x5bd2fb78, "adapter_dev_set_cap" },
	{ 0xd1794907, "adapter_dev_is_cc" },
	{ 0x38150166, "adapter_dev_set_wdt" },
	{ 0xa306b2d0, "adapter_dev_enable_wdt" },
	{ 0x7a24cf71, "adapter_dev_sync_volt" },
	{ 0xf60b0c4f, "adapter_dev_authentication" },
	{ 0x67a2589b, "adapter_dev_send_hardreset" },
	{ 0xcb191d1f, "get_adapter_by_name" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xc0ca7489, "mtk_chg_enable_vbus_ovp" },
	{ 0xcd54e95e, "charger_dev_enable" },
	{ 0xeb2dbed2, "charger_dev_enable_hz" },
	{ 0xc3fc670d, "charger_dev_set_vbusovp" },
	{ 0x5b39ec60, "charger_dev_set_ibusocp" },
	{ 0xfe623b13, "charger_dev_set_vbatovp" },
	{ 0x66a7b07e, "charger_dev_set_ibatocp" },
	{ 0xa309764f, "charger_dev_set_vbatovp_alarm" },
	{ 0x7f443ff5, "charger_dev_reset_vbatovp_alarm" },
	{ 0x161ad73a, "charger_dev_set_vbusovp_alarm" },
	{ 0x42da63eb, "charger_dev_reset_vbusovp_alarm" },
	{ 0x6d961d93, "charger_dev_get_adc" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x3b9fa9d3, "power_supply_get_drvdata" },
	{ 0xcda1e8e9, "charger_dev_set_charging_current" },
	{ 0xa9cdf825, "charger_dev_set_input_current" },
	{ 0x1e735dc5, "charger_dev_get_charging_current" },
	{ 0x6665398c, "charger_dev_get_input_current" },
	{ 0x463e04b5, "charger_dev_is_vbuslowerr" },
	{ 0x74fb89ae, "charger_dev_get_adc_accuracy" },
	{ 0x06740252, "charger_dev_init_chip" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0x92997ed8,
	0xa571f6b0,
	0xd9a5ea54,
	0x2d26a116,
	0xba0aee2e,
	0xce5bc4d0,
	0xac304f53,
	0x5774fe01,
	0xc8c7229e,
	0xcd6bda8d,
	0x6b201699,
	0xe136f93c,
	0xe2964344,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x4dd0661c,
	0xd5977bfb,
	0xe038ea74,
	0xed55cabd,
	0x394b5321,
	0x429d3502,
	0xf9a482f9,
	0xadc6bfc7,
	0x65929cae,
	0xc4f0da12,
	0x7a4b1be7,
	0x1744f3e7,
	0xdd541345,
	0xb39378cc,
	0x6fc35f2b,
	0xb2fb935e,
	0xe6de52c9,
	0x84beeb51,
	0x1cae472a,
	0x5bd2fb78,
	0xd1794907,
	0x38150166,
	0xa306b2d0,
	0x7a24cf71,
	0xf60b0c4f,
	0x67a2589b,
	0xcb191d1f,
	0x959e7e2d,
	0xebdbd5bd,
	0xc0ca7489,
	0xcd54e95e,
	0xeb2dbed2,
	0xc3fc670d,
	0x5b39ec60,
	0xfe623b13,
	0x66a7b07e,
	0xa309764f,
	0x7f443ff5,
	0x161ad73a,
	0x42da63eb,
	0x6d961d93,
	0xb6e871b8,
	0xfdf04ae0,
	0x3b9fa9d3,
	0xcda1e8e9,
	0xa9cdf825,
	0x1e735dc5,
	0x6665398c,
	0x463e04b5,
	0x74fb89ae,
	0x06740252,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"_printk\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"alarm_init\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"chg_alg_device_register\0"
	"chg_alg_device_unregister\0"
	"devm_kmalloc\0"
	"of_property_read_string_helper\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"__wake_up\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"pm_stay_awake\0"
	"mutex_lock\0"
	"alarm_start_relative\0"
	"mutex_unlock\0"
	"pm_relax\0"
	"alarm_cancel\0"
	"msleep\0"
	"srcu_notifier_call_chain\0"
	"ns_to_timespec64\0"
	"ktime_get_with_offset\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"chg_alg_notify_evt_tostring\0"
	"kthread_stop\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"param_ops_bool\0"
	"adapter_dev_get_output\0"
	"adapter_dev_get_status\0"
	"adapter_dev_set_cap\0"
	"adapter_dev_is_cc\0"
	"adapter_dev_set_wdt\0"
	"adapter_dev_enable_wdt\0"
	"adapter_dev_sync_volt\0"
	"adapter_dev_authentication\0"
	"adapter_dev_send_hardreset\0"
	"get_adapter_by_name\0"
	"get_charger_by_name\0"
	"devm_power_supply_get_by_phandle\0"
	"mtk_chg_enable_vbus_ovp\0"
	"charger_dev_enable\0"
	"charger_dev_enable_hz\0"
	"charger_dev_set_vbusovp\0"
	"charger_dev_set_ibusocp\0"
	"charger_dev_set_vbatovp\0"
	"charger_dev_set_ibatocp\0"
	"charger_dev_set_vbatovp_alarm\0"
	"charger_dev_reset_vbatovp_alarm\0"
	"charger_dev_set_vbusovp_alarm\0"
	"charger_dev_reset_vbusovp_alarm\0"
	"charger_dev_get_adc\0"
	"power_supply_get_property\0"
	"power_supply_get_by_name\0"
	"power_supply_get_drvdata\0"
	"charger_dev_set_charging_current\0"
	"charger_dev_set_input_current\0"
	"charger_dev_get_charging_current\0"
	"charger_dev_get_input_current\0"
	"charger_dev_is_vbuslowerr\0"
	"charger_dev_get_adc_accuracy\0"
	"charger_dev_init_chip\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_charger_algorithm_class,adapter_class,charger_class,mtk_charger_framework");

MODULE_ALIAS("of:N*T*Cmediatek,charger,pe5");
MODULE_ALIAS("of:N*T*Cmediatek,charger,pe5C*");

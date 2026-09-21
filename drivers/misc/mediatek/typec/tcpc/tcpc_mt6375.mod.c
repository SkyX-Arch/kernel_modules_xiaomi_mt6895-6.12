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
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1983e96d, "devm_iio_channel_get_all" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xf7627274, "tcpc_device_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xdba614e4, "device_property_read_string" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x1b85ab8d, "tcpci_lock_typec" },
	{ 0xe74702f5, "tcpci_is_plugged_in" },
	{ 0xcde0d0de, "tcpci_unlock_typec" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0xd918cc6c, "tcpc_typec_handle_wd" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0x00bb8ef4, "tcpci_notify_vbus_short_cc_status" },
	{ 0xb992fb1f, "tcpc_device_register" },
	{ 0xf804f4a9, "tcpc_get_dev_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x48fb7437, "pd_dbg_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb8163483, "tcpci_alert_wakeup" },
	{ 0x966dae61, "tcpc_typec_handle_fod" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x9360f532, "tcpc_typec_handle_ctd" },
	{ 0x6a330a28, "tcpc_typec_handle_otp" },
	{ 0x6a1e5707, "tcpci_notify_cc_hi" },
	{ 0xb3ca8045, "tcpci_notify_wd0_state" },
	{ 0xebe75980, "tcpc_typec_is_act_as_sink_role" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xdad8004c, "device_wakeup_disable" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x75043fe7, "tcpci_alert" },
	{ 0x394b5321, "pm_relax" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xc73d1755, "tcpm_shutdown" },
	{ 0x1bc4e328, "tcpm_suspend" },
	{ 0xff5ecec8, "tcpm_resume" },
	{ 0x50069062, "tcpm_check_suspend_pending" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0x49dc0e6c,
	0xb4ce05a5,
	0xc6f46339,
	0xffeedf6a,
	0x1983e96d,
	0xa4f72277,
	0xf7627274,
	0xc8c7229e,
	0xdba614e4,
	0xc40993fe,
	0xfe84e5f9,
	0x8c0215f2,
	0x1b85ab8d,
	0xe74702f5,
	0xcde0d0de,
	0x42ad47ad,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x33a52b38,
	0x4dd57aba,
	0xd918cc6c,
	0xf9a482f9,
	0xd45c86ea,
	0x00bb8ef4,
	0xb992fb1f,
	0xf804f4a9,
	0xeae3dfd6,
	0xd9f704be,
	0x48fb7437,
	0xc3055d20,
	0xb8163483,
	0x966dae61,
	0x86a50ae0,
	0x9360f532,
	0x6a330a28,
	0x6a1e5707,
	0xb3ca8045,
	0xebe75980,
	0xe94986d6,
	0x9e400c59,
	0xf9583f23,
	0x7a4b1be7,
	0x1744f3e7,
	0xdad8004c,
	0x4dd0661c,
	0x75043fe7,
	0x394b5321,
	0x3ce4ca6f,
	0xcec49a87,
	0xc73d1755,
	0x1bc4e328,
	0xff5ecec8,
	0x50069062,
	0x6fc35f2b,
	0x2d3385d3,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"dev_get_regmap\0"
	"_dev_err\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_iio_channel_get_all\0"
	"_dev_notice\0"
	"tcpc_device_unregister\0"
	"devm_kmalloc\0"
	"device_property_read_string\0"
	"device_property_read_u32_array\0"
	"device_property_present\0"
	"pm_system_wakeup\0"
	"tcpci_lock_typec\0"
	"tcpci_is_plugged_in\0"
	"tcpci_unlock_typec\0"
	"queue_delayed_work_on\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"regmap_bulk_read\0"
	"regmap_bulk_write\0"
	"tcpc_typec_handle_wd\0"
	"msleep\0"
	"iio_read_channel_processed\0"
	"tcpci_notify_vbus_short_cc_status\0"
	"tcpc_device_register\0"
	"tcpc_get_dev_data\0"
	"__const_udelay\0"
	"tcpc_dev_get_by_name\0"
	"pd_dbg_info\0"
	"usleep_range_state\0"
	"tcpci_alert_wakeup\0"
	"tcpc_typec_handle_fod\0"
	"mod_delayed_work_on\0"
	"tcpc_typec_handle_ctd\0"
	"tcpc_typec_handle_otp\0"
	"tcpci_notify_cc_hi\0"
	"tcpci_notify_wd0_state\0"
	"tcpc_typec_is_act_as_sink_role\0"
	"sched_clock\0"
	"platform_get_irq_byname\0"
	"devm_request_threaded_irq\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"device_wakeup_disable\0"
	"pm_stay_awake\0"
	"tcpci_alert\0"
	"pm_relax\0"
	"disable_irq\0"
	"cancel_delayed_work_sync\0"
	"tcpm_shutdown\0"
	"tcpm_suspend\0"
	"tcpm_resume\0"
	"tcpm_check_suspend_pending\0"
	"platform_driver_unregister\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class,pd_dbg_info");

MODULE_ALIAS("of:N*T*Cmediatek,mt6375-tcpc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-tcpcC*");

MODULE_INFO(srcversion, "518C5C24B3F094798E889D0");

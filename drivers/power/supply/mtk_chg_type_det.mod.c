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
	{ 0xa4f72277, "_dev_notice" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x959e7e2d, "get_charger_by_name" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x0a47cda6, "charger_dev_enable_discharge" },
	{ 0x9dfe9f99, "tcpm_inquire_typec_attach_state" },
	{ 0x74892c30, "tcpm_inquire_usb_comm" },
	{ 0x9988873b, "tcpm_get_remote_power_cap" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0x214a5c13, "unregister_tcp_dev_notifier" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xa4f72277,
	0xd9a5ea54,
	0xa571f6b0,
	0x656e4a6e,
	0xaf7cb74b,
	0xfdf04ae0,
	0x959e7e2d,
	0xebdbd5bd,
	0xd9f704be,
	0x6f21f22a,
	0xba0aee2e,
	0xce5bc4d0,
	0x401167cc,
	0xc8c7229e,
	0xe136f93c,
	0x0a47cda6,
	0x9dfe9f99,
	0x74892c30,
	0x9988873b,
	0xd5977bfb,
	0xe2964344,
	0xed55cabd,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xe37ad0cf,
	0x214a5c13,
	0xb39378cc,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_notice\0"
	"__init_waitqueue_head\0"
	"__mutex_init\0"
	"snprintf\0"
	"of_property_read_string\0"
	"power_supply_get_by_name\0"
	"get_charger_by_name\0"
	"devm_power_supply_get_by_phandle\0"
	"tcpc_dev_get_by_name\0"
	"register_tcp_dev_notifier\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"_dev_info\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"charger_dev_enable_discharge\0"
	"tcpm_inquire_typec_attach_state\0"
	"tcpm_inquire_usb_comm\0"
	"tcpm_get_remote_power_cap\0"
	"mutex_lock\0"
	"__wake_up\0"
	"mutex_unlock\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"power_supply_set_property\0"
	"unregister_tcp_dev_notifier\0"
	"kthread_stop\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "charger_class,tcpc_class");

MODULE_ALIAS("of:N*T*Cmediatek,mtk_ctd");
MODULE_ALIAS("of:N*T*Cmediatek,mtk_ctdC*");

MODULE_INFO(srcversion, "BA1DBC9CDD4B9FB8B895D23");

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
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x98796929, "adapter_device_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xadc6bfc7, "srcu_notifier_call_chain" },
	{ 0x118cef2f, "tcpm_reset_pd_charging_policy" },
	{ 0x6b201699, "of_find_property" },
	{ 0x24989f09, "tcpm_inquire_typec_remote_rp_curr" },
	{ 0x80f0b1db, "tcpm_inquire_dpm_flags" },
	{ 0x89cd464e, "tcpm_dpm_pd_get_status" },
	{ 0x09cae2ef, "tcpm_set_apdo_charging_policy" },
	{ 0x62747b96, "tcpm_dpm_pd_request" },
	{ 0x74fefda5, "tcpm_dpm_pd_get_source_cap_ext" },
	{ 0x12735c4c, "tcpm_inquire_pd_source_apdo" },
	{ 0x9988873b, "tcpm_get_remote_power_cap" },
	{ 0x83a1b867, "tcpm_dpm_pd_get_pps_status" },
	{ 0x9dfe9f99, "tcpm_inquire_typec_attach_state" },
	{ 0xb0987ef8, "tcpm_inquire_pd_pe_ready" },
	{ 0xe9bce28b, "tcpm_dpm_pd_hard_reset" },
	{ 0x214a5c13, "unregister_tcp_dev_notifier" },
	{ 0x0550b8e0, "adapter_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xa571f6b0,
	0xa4f72277,
	0x656e4a6e,
	0xd9f704be,
	0x6f21f22a,
	0xaf7cb74b,
	0x98796929,
	0x401167cc,
	0xc8c7229e,
	0xe136f93c,
	0xd5977bfb,
	0xed55cabd,
	0xadc6bfc7,
	0x118cef2f,
	0x6b201699,
	0x24989f09,
	0x80f0b1db,
	0x89cd464e,
	0x09cae2ef,
	0x62747b96,
	0x74fefda5,
	0x12735c4c,
	0x9988873b,
	0x83a1b867,
	0x9dfe9f99,
	0xb0987ef8,
	0xe9bce28b,
	0x214a5c13,
	0x0550b8e0,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"__mutex_init\0"
	"_dev_notice\0"
	"snprintf\0"
	"tcpc_dev_get_by_name\0"
	"register_tcp_dev_notifier\0"
	"of_property_read_string\0"
	"adapter_device_register\0"
	"_dev_info\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"srcu_notifier_call_chain\0"
	"tcpm_reset_pd_charging_policy\0"
	"of_find_property\0"
	"tcpm_inquire_typec_remote_rp_curr\0"
	"tcpm_inquire_dpm_flags\0"
	"tcpm_dpm_pd_get_status\0"
	"tcpm_set_apdo_charging_policy\0"
	"tcpm_dpm_pd_request\0"
	"tcpm_dpm_pd_get_source_cap_ext\0"
	"tcpm_inquire_pd_source_apdo\0"
	"tcpm_get_remote_power_cap\0"
	"tcpm_dpm_pd_get_pps_status\0"
	"tcpm_inquire_typec_attach_state\0"
	"tcpm_inquire_pd_pe_ready\0"
	"tcpm_dpm_pd_hard_reset\0"
	"unregister_tcp_dev_notifier\0"
	"adapter_device_unregister\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class,adapter_class");

MODULE_ALIAS("of:N*T*Cmediatek,pd_adapter");
MODULE_ALIAS("of:N*T*Cmediatek,pd_adapterC*");

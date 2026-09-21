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
	{ 0xa4f72277, "_dev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x384f7713, "tcpm_inquire_typec_role_def" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x689159f9, "typec_register_port" },
	{ 0x40aa6f5f, "typec_get_drvdata" },
	{ 0xcbad2e82, "tcpm_typec_change_role_postpone" },
	{ 0xdbf8e8d6, "tcpm_inquire_pd_data_role" },
	{ 0xf6488755, "tcpm_dpm_pd_data_swap" },
	{ 0xb030a2fc, "tcpm_inquire_pd_power_role" },
	{ 0xd4430ef8, "tcpm_dpm_pd_power_swap" },
	{ 0xe4f398c7, "tcpm_typec_role_swap" },
	{ 0x294f052e, "tcpm_inquire_pd_vconn_role" },
	{ 0x7bd09a9c, "tcpm_dpm_pd_vconn_swap" },
	{ 0xebe75980, "tcpc_typec_is_act_as_sink_role" },
	{ 0x2a7a1d98, "tcpm_typec_change_role" },
	{ 0x5a266f48, "fwnode_typec_mux_get" },
	{ 0xa52bb5e9, "__dev_fwnode" },
	{ 0x0478c36f, "typec_set_data_role" },
	{ 0x46e06686, "typec_set_pwr_role" },
	{ 0xc4efcccb, "typec_set_pwr_opmode" },
	{ 0x1eb23c12, "typec_set_vconn_role" },
	{ 0x91666862, "typec_set_orientation" },
	{ 0x962bd86e, "typec_unregister_partner" },
	{ 0xec289cdf, "typec_register_partner" },
	{ 0x1830679f, "typec_partner_set_pd_revision" },
	{ 0xb7c0ac6c, "typec_partner_set_svdm_version" },
	{ 0x8a168b14, "tcpm_inquire_pd_partner_inform" },
	{ 0xbfce7cf0, "typec_partner_set_identity" },
	{ 0x6b3d9465, "typec_mux_set" },
	{ 0xf24808a6, "typec_unregister_port" },
	{ 0xfc8df340, "typec_mux_put" },
	{ 0x214a5c13, "unregister_tcp_dev_notifier" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0xa4f72277,
	0x656e4a6e,
	0xd9f704be,
	0x384f7713,
	0x6f21f22a,
	0xc8c7229e,
	0xe136f93c,
	0x689159f9,
	0x40aa6f5f,
	0xcbad2e82,
	0xdbf8e8d6,
	0xf6488755,
	0xb030a2fc,
	0xd4430ef8,
	0xe4f398c7,
	0x294f052e,
	0x7bd09a9c,
	0xebe75980,
	0x2a7a1d98,
	0x5a266f48,
	0xa52bb5e9,
	0x0478c36f,
	0x46e06686,
	0xc4efcccb,
	0x1eb23c12,
	0x91666862,
	0x962bd86e,
	0xec289cdf,
	0x1830679f,
	0xb7c0ac6c,
	0x8a168b14,
	0xbfce7cf0,
	0x6b3d9465,
	0xf24808a6,
	0xfc8df340,
	0x214a5c13,
	0x6fc35f2b,
	0xe6de52c9,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"_dev_notice\0"
	"snprintf\0"
	"tcpc_dev_get_by_name\0"
	"tcpm_inquire_typec_role_def\0"
	"register_tcp_dev_notifier\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"typec_register_port\0"
	"typec_get_drvdata\0"
	"tcpm_typec_change_role_postpone\0"
	"tcpm_inquire_pd_data_role\0"
	"tcpm_dpm_pd_data_swap\0"
	"tcpm_inquire_pd_power_role\0"
	"tcpm_dpm_pd_power_swap\0"
	"tcpm_typec_role_swap\0"
	"tcpm_inquire_pd_vconn_role\0"
	"tcpm_dpm_pd_vconn_swap\0"
	"tcpc_typec_is_act_as_sink_role\0"
	"tcpm_typec_change_role\0"
	"fwnode_typec_mux_get\0"
	"__dev_fwnode\0"
	"typec_set_data_role\0"
	"typec_set_pwr_role\0"
	"typec_set_pwr_opmode\0"
	"typec_set_vconn_role\0"
	"typec_set_orientation\0"
	"typec_unregister_partner\0"
	"typec_register_partner\0"
	"typec_partner_set_pd_revision\0"
	"typec_partner_set_svdm_version\0"
	"tcpm_inquire_pd_partner_inform\0"
	"typec_partner_set_identity\0"
	"typec_mux_set\0"
	"typec_unregister_port\0"
	"typec_mux_put\0"
	"unregister_tcp_dev_notifier\0"
	"platform_driver_unregister\0"
	"param_ops_bool\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class");

MODULE_ALIAS("of:N*T*Cmediatek,rt-pd-manager");
MODULE_ALIAS("of:N*T*Cmediatek,rt-pd-managerC*");

MODULE_INFO(srcversion, "1B85C3985565628F83F89EA");

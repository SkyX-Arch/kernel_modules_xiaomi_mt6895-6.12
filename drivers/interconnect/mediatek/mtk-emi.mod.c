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
	{ 0x3b16b169, "icc_sync_state" },
	{ 0x34675dcc, "of_match_node" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xb3e0c2cb, "of_icc_xlate_onecell" },
	{ 0x7ec2a0a8, "icc_provider_init" },
	{ 0x95af4590, "icc_node_create" },
	{ 0x9b683b61, "icc_node_add" },
	{ 0xcf866f2f, "icc_link_create" },
	{ 0x41572040, "icc_provider_register" },
	{ 0xbc826d79, "icc_nodes_remove" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xdbdd71e6, "mtk_dvfsrc_send_request" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x90965b4c, "__traceiter_mtk_pm_qos_update_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x99fd1651, "icc_provider_deregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf022bb1f, "__tracepoint_mtk_pm_qos_update_request" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x3b16b169,
	0x34675dcc,
	0xb4ce05a5,
	0xb3e0c2cb,
	0x7ec2a0a8,
	0x95af4590,
	0x9b683b61,
	0xcf866f2f,
	0x41572040,
	0xbc826d79,
	0xc8c7229e,
	0xdbdd71e6,
	0xe2d5255a,
	0x90965b4c,
	0xf70e4a4d,
	0x99fd1651,
	0x6fc35f2b,
	0xf022bb1f,
	0xac594e02,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"icc_sync_state\0"
	"of_match_node\0"
	"_dev_err\0"
	"of_icc_xlate_onecell\0"
	"icc_provider_init\0"
	"icc_node_create\0"
	"icc_node_add\0"
	"icc_link_create\0"
	"icc_provider_register\0"
	"icc_nodes_remove\0"
	"devm_kmalloc\0"
	"mtk_dvfsrc_send_request\0"
	"strcmp\0"
	"__traceiter_mtk_pm_qos_update_request\0"
	"preempt_schedule_notrace\0"
	"icc_provider_deregister\0"
	"platform_driver_unregister\0"
	"__tracepoint_mtk_pm_qos_update_request\0"
	"__cpu_online_mask\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-dvfsrc");

MODULE_ALIAS("of:N*T*Cmediatek,mt6873-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6878-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8678-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8678-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-dvfsrcC*");

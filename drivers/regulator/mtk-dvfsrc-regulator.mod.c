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
	{ 0x6474823c, "regulator_list_voltage_table" },
	{ 0x4b6272ca, "rdev_get_id" },
	{ 0xdbdd71e6, "mtk_dvfsrc_send_request" },
	{ 0x88ff4faa, "rdev_get_dev" },
	{ 0x90965b4c, "__traceiter_mtk_pm_qos_update_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2b955cab, "mtk_dvfsrc_query_info" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x34675dcc, "of_match_node" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xd6863b92, "devm_regulator_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf022bb1f, "__tracepoint_mtk_pm_qos_update_request" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6474823c,
	0x4b6272ca,
	0xdbdd71e6,
	0x88ff4faa,
	0x90965b4c,
	0xf70e4a4d,
	0x2b955cab,
	0x12db679a,
	0x34675dcc,
	0xb4ce05a5,
	0xd6863b92,
	0x6fc35f2b,
	0xf022bb1f,
	0xac594e02,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regulator_list_voltage_table\0"
	"rdev_get_id\0"
	"mtk_dvfsrc_send_request\0"
	"rdev_get_dev\0"
	"__traceiter_mtk_pm_qos_update_request\0"
	"preempt_schedule_notrace\0"
	"mtk_dvfsrc_query_info\0"
	"__platform_driver_register\0"
	"of_match_node\0"
	"_dev_err\0"
	"devm_regulator_register\0"
	"platform_driver_unregister\0"
	"__tracepoint_mtk_pm_qos_update_request\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-dvfsrc");

MODULE_ALIAS("of:N*T*Cmediatek,mt8183-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-dvfsrcC*");
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
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-dvfsrcC*");
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
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-dvfsrcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-dvfsrc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-dvfsrcC*");
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

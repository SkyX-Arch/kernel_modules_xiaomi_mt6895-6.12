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
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xd6cac3d5, "devm_devfreq_add_device" },
	{ 0xa6ddf883, "dev_pm_opp_remove_all_dynamic" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x34a1fb3a, "dev_pm_opp_add_dynamic" },
	{ 0xb4084128, "devfreq_recommended_opp" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x71fa3d40, "dev_pm_opp_get_freq_indexed" },
	{ 0xdbdd71e6, "mtk_dvfsrc_send_request" },
	{ 0x2b955cab, "mtk_dvfsrc_query_info" },
	{ 0x225c1c05, "devfreq_remove_device" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xb4ce05a5,
	0xd6cac3d5,
	0xa6ddf883,
	0xc8c7229e,
	0xf93aae46,
	0x34a1fb3a,
	0xb4084128,
	0xb3bceb42,
	0x71fa3d40,
	0xdbdd71e6,
	0x2b955cab,
	0x225c1c05,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_err\0"
	"devm_devfreq_add_device\0"
	"dev_pm_opp_remove_all_dynamic\0"
	"devm_kmalloc\0"
	"__arm_smccc_smc\0"
	"dev_pm_opp_add_dynamic\0"
	"devfreq_recommended_opp\0"
	"dev_pm_opp_put\0"
	"dev_pm_opp_get_freq_indexed\0"
	"mtk_dvfsrc_send_request\0"
	"mtk_dvfsrc_query_info\0"
	"devfreq_remove_device\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-dvfsrc");


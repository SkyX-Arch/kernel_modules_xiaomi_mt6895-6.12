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

KSYMTAB_FUNC(vmm_isp_ctrl_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_vmm_ctrl_dbg_use, "_gpl", "");

SYMBOL_CRC(vmm_isp_ctrl_notify, 0xac52a4dd, "_gpl");
SYMBOL_CRC(mtk_vmm_ctrl_dbg_use, 0x83656b73, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0xd3756b8e, "mtk_mmdvfs_genpd_notify" },
	{ 0x87db6ab0, "mtk_mmdvfs_camera_notify" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x92997ed8,
	0xd3756b8e,
	0x87db6ab0,
	0x12db679a,
	0xa571f6b0,
	0xaf7cb74b,
	0x374f8976,
	0xea23ff02,
	0xd4e81a21,
	0x09674aa9,
	0xe136f93c,
	0x40863ba1,
	0x6fc35f2b,
	0xaf56600a,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"_printk\0"
	"mtk_mmdvfs_genpd_notify\0"
	"mtk_mmdvfs_camera_notify\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"of_property_read_string\0"
	"platform_get_resource_byname\0"
	"devm_clk_get\0"
	"pm_runtime_enable\0"
	"dev_pm_genpd_add_notifier\0"
	"of_property_read_variable_u32_array\0"
	"ioremap_prot\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mmdvfs-v3");


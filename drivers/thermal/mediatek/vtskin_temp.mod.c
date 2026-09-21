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
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xf79a0cc2, "devm_thermal_of_zone_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x7f4bfbd7, "plat_vtskin_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xb4ce05a5,
	0x14fe5355,
	0xa571f6b0,
	0xf79a0cc2,
	0x656e4a6e,
	0xa4f72277,
	0xc8c7229e,
	0xd5977bfb,
	0xed55cabd,
	0x5a921311,
	0xb43f9365,
	0x6fc35f2b,
	0x7f4bfbd7,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_err\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"devm_thermal_of_zone_register\0"
	"snprintf\0"
	"_dev_notice\0"
	"devm_kmalloc\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"strncmp\0"
	"ktime_get\0"
	"platform_driver_unregister\0"
	"plat_vtskin_info\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "thermal_interface");

MODULE_ALIAS("of:N*T*Cmediatek,mt6983-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-virtual-tskinC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-virtual-tskinC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-virtual-tskinC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-virtual-tskinC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-virtual-tskinC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-virtual-tskin");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-virtual-tskinC*");

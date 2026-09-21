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
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x92997ed8, "_printk" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x14fe5355,
	0xb4ce05a5,
	0x13269d10,
	0xd4e81a21,
	0x4eb4c414,
	0x92997ed8,
	0xe136f93c,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"_dev_err\0"
	"__pm_runtime_idle\0"
	"pm_runtime_enable\0"
	"__pm_runtime_resume\0"
	"_printk\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


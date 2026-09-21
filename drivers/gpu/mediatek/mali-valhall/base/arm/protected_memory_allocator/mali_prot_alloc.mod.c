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
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x401167cc, "_dev_info" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xaceba966, "devm_iounmap" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xb4ce05a5,
	0x374f8976,
	0x401167cc,
	0xee73d233,
	0xaceba966,
	0x5a6368f5,
	0xe136f93c,
	0xc8c7229e,
	0xba8fbd64,
	0x9166fada,
	0x92997ed8,
	0xb5b54b34,
	0x56470118,
	0x47a915f1,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_err\0"
	"platform_get_resource_byname\0"
	"_dev_info\0"
	"devm_ioremap\0"
	"devm_iounmap\0"
	"devm_kfree\0"
	"of_property_read_variable_u32_array\0"
	"devm_kmalloc\0"
	"_raw_spin_lock\0"
	"strncpy\0"
	"_printk\0"
	"_raw_spin_unlock\0"
	"__warn_printk\0"
	"_dev_warn\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carm,protected-memory-allocator");
MODULE_ALIAS("of:N*T*Carm,protected-memory-allocatorC*");

MODULE_INFO(srcversion, "86E022776DFE0ABD4C19E27");

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
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf93aae46,
	0xeae3dfd6,
	0x2396c7f0,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0x14fe5355,
	0x374f8976,
	0xee73d233,
	0xea23ff02,
	0x401167cc,
	0xa571f6b0,
	0xc8c7229e,
	0x6fc35f2b,
	0x62b33777,
	0x3667c9f1,
	0x656e4a6e,
	0x3b6c41ea,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__arm_smccc_smc\0"
	"__const_udelay\0"
	"clk_set_parent\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"devm_clk_get\0"
	"_dev_info\0"
	"__mutex_init\0"
	"devm_kmalloc\0"
	"platform_driver_unregister\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"snprintf\0"
	"kstrtouint\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


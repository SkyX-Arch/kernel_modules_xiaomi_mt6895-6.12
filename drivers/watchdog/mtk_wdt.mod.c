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
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xbae18150, "watchdog_init_timeout" },
	{ 0x71e369f8, "watchdog_set_restart_priority" },
	{ 0xa6b99c0d, "devm_watchdog_register_device" },
	{ 0x401167cc, "_dev_info" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e4ecc3d, "devm_reset_controller_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x329da95b,
	0xf7ca28dd,
	0xbae18150,
	0x71e369f8,
	0xa6b99c0d,
	0x401167cc,
	0x14fe5355,
	0xc8c7229e,
	0xf9583f23,
	0x92997ed8,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0x9e4ecc3d,
	0xb4ce05a5,
	0x34db050b,
	0xd35cce70,
	0x6fc35f2b,
	0x92acb4e9,
	0xe6de52c9,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"devm_platform_ioremap_resource\0"
	"platform_get_irq\0"
	"watchdog_init_timeout\0"
	"watchdog_set_restart_priority\0"
	"devm_watchdog_register_device\0"
	"_dev_info\0"
	"of_device_get_match_data\0"
	"devm_kmalloc\0"
	"devm_request_threaded_irq\0"
	"_printk\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"devm_reset_controller_register\0"
	"_dev_err\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"platform_driver_unregister\0"
	"param_ops_uint\0"
	"param_ops_bool\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt2712-wdt");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-wdtC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-wdt");
MODULE_ALIAS("of:N*T*Cmediatek,mt6589-wdtC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-wdt");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-wdtC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-wdt");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-wdtC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-wdt");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-wdtC*");

MODULE_INFO(srcversion, "35E7CF98C28EB0B77FA585B");

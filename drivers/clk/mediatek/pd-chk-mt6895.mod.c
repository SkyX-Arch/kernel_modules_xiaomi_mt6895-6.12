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
	{ 0x4a834a42, "pdchk_common_init" },
	{ 0xa4723383, "print_subsys_reg_mt6895" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x4af041d8, "pdchk_dev_pm_ops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x4a834a42,
	0xa4723383,
	0x92997ed8,
	0x34db050b,
	0xd35cce70,
	0x6fc35f2b,
	0x4af041d8,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"pdchk_common_init\0"
	"print_subsys_reg_mt6895\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"platform_driver_unregister\0"
	"pdchk_dev_pm_ops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common,clkchk-mt6895");


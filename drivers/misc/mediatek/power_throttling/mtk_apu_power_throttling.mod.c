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

KSYMTAB_FUNC(register_pt_low_battery_apu_cb, "", "");
KSYMTAB_FUNC(register_pt_over_current_apu_cb, "", "");
KSYMTAB_FUNC(register_pt_battery_percent_apu_cb, "", "");

SYMBOL_CRC(register_pt_low_battery_apu_cb, 0x72440ead, "");
SYMBOL_CRC(register_pt_over_current_apu_cb, 0xa8c7b8fc, "");
SYMBOL_CRC(register_pt_battery_percent_apu_cb, 0x390e9ff2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaa643b64, "register_low_battery_notify" },
	{ 0x1c539951, "register_battery_oc_notify" },
	{ 0x99ae3229, "register_bp_thl_notify" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x037a0cba, "kfree" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xaa643b64,
	0x1c539951,
	0x99ae3229,
	0x656e4a6e,
	0x92997ed8,
	0x52c5c991,
	0x12db679a,
	0x037a0cba,
	0xe136f93c,
	0x6fc35f2b,
	0x0f05f001,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"register_low_battery_notify\0"
	"register_battery_oc_notify\0"
	"register_bp_thl_notify\0"
	"snprintf\0"
	"_printk\0"
	"__kmalloc_noprof\0"
	"__platform_driver_register\0"
	"kfree\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_low_battery_throttling,mtk_battery_oc_throttling,mtk_bp_thl");

MODULE_ALIAS("of:N*T*Cmediatek,apu-power-throttling");
MODULE_ALIAS("of:N*T*Cmediatek,apu-power-throttlingC*");

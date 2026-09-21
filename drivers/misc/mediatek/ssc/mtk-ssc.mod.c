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

KSYMTAB_DATA(ssc_kobj, "_gpl", "");
KSYMTAB_DATA(ssc_enable, "_gpl", "");
KSYMTAB_FUNC(ssc_vlogic_bound_register_notifier, "_gpl", "");
KSYMTAB_FUNC(ssc_vlogic_bound_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(ssc_enable_vlogic_bound, "_gpl", "");
KSYMTAB_FUNC(ssc_disable_vlogic_bound, "_gpl", "");

SYMBOL_CRC(ssc_kobj, 0xe3beccf9, "_gpl");
SYMBOL_CRC(ssc_enable, 0x16d6506b, "_gpl");
SYMBOL_CRC(ssc_vlogic_bound_register_notifier, 0x983d35db, "_gpl");
SYMBOL_CRC(ssc_vlogic_bound_unregister_notifier, 0xd3750725, "_gpl");
SYMBOL_CRC(ssc_enable_vlogic_bound, 0xd5b8886a, "_gpl");
SYMBOL_CRC(ssc_disable_vlogic_bound, 0xca462369, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x1271fac9, "scmi_tinysys_register_event_notifier" },
	{ 0x4056037d, "scmi_tinysys_event_notify" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x96848186, "scnprintf" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xbabc5cdd, "kobject_del" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x92997ed8,
	0x12db679a,
	0x34db050b,
	0xf3cdc3c6,
	0x51fcca8a,
	0x1271fac9,
	0x4056037d,
	0x1cc7f053,
	0x2d405891,
	0x03b28b1f,
	0xe136f93c,
	0xd35cce70,
	0x96848186,
	0x2220455c,
	0xbabc5cdd,
	0xce8498d7,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"_printk\0"
	"__platform_driver_register\0"
	"_raw_spin_lock_irqsave\0"
	"of_find_compatible_node\0"
	"get_scmi_tinysys_info\0"
	"scmi_tinysys_register_event_notifier\0"
	"scmi_tinysys_event_notify\0"
	"scmi_tinysys_common_set\0"
	"kobject_create_and_add\0"
	"regulator_get\0"
	"of_property_read_variable_u32_array\0"
	"_raw_spin_unlock_irqrestore\0"
	"scnprintf\0"
	"regulator_set_voltage\0"
	"kobject_del\0"
	"kernel_kobj\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi");


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

KSYMTAB_FUNC(get_scmi_tinysys_info, "", "");
KSYMTAB_FUNC(scmi_tinysys_common_set, "", "");
KSYMTAB_FUNC(scmi_tinysys_common_get, "", "");
KSYMTAB_FUNC(scmi_tinysys_slbc_ctrl, "", "");
KSYMTAB_FUNC(scmi_tinysys_event_notify, "", "");
KSYMTAB_FUNC(scmi_tinysys_register_event_notifier, "", "");

SYMBOL_CRC(get_scmi_tinysys_info, 0x51fcca8a, "");
SYMBOL_CRC(scmi_tinysys_common_set, 0x1cc7f053, "");
SYMBOL_CRC(scmi_tinysys_common_get, 0x69601fbf, "");
SYMBOL_CRC(scmi_tinysys_slbc_ctrl, 0x9a2f308f, "");
SYMBOL_CRC(scmi_tinysys_event_notify, 0x4056037d, "");
SYMBOL_CRC(scmi_tinysys_register_event_notifier, 0x1271fac9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3b8c127d, "scmi_driver_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xba8445cc, "scmi_driver_unregister" },
	{ 0xeb55d970, "scmi_protocol_register" },
	{ 0x651de3b3, "scmi_protocol_unregister" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x96848186,
	0xbcab6ee6,
	0x3b8c127d,
	0xe922b94d,
	0xc8c7229e,
	0xba8445cc,
	0xeb55d970,
	0x651de3b3,
	0xb4ce05a5,
	0x5a6368f5,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scnprintf\0"
	"sscanf\0"
	"scmi_driver_register\0"
	"device_create_file\0"
	"devm_kmalloc\0"
	"scmi_driver_unregister\0"
	"scmi_protocol_register\0"
	"scmi_protocol_unregister\0"
	"_dev_err\0"
	"devm_kfree\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(adapter_dev_get_property, "", "");
KSYMTAB_FUNC(adapter_dev_get_status, "", "");
KSYMTAB_FUNC(adapter_dev_get_output, "", "");
KSYMTAB_FUNC(adapter_dev_set_cap, "", "");
KSYMTAB_FUNC(adapter_dev_set_cap_xm, "", "");
KSYMTAB_FUNC(adapter_dev_get_cap, "", "");
KSYMTAB_FUNC(adapter_dev_authentication, "", "");
KSYMTAB_FUNC(adapter_dev_is_cc, "", "");
KSYMTAB_FUNC(adapter_dev_set_wdt, "", "");
KSYMTAB_FUNC(adapter_dev_enable_wdt, "", "");
KSYMTAB_FUNC(adapter_dev_sync_volt, "", "");
KSYMTAB_FUNC(adapter_dev_send_hardreset, "", "");
KSYMTAB_FUNC(adapter_dev_exit_mode, "", "");
KSYMTAB_FUNC(register_adapter_device_notifier, "", "");
KSYMTAB_FUNC(unregister_adapter_device_notifier, "", "");
KSYMTAB_FUNC(adapter_device_register, "", "");
KSYMTAB_FUNC(adapter_device_unregister, "", "");
KSYMTAB_FUNC(get_adapter_by_name, "", "");

SYMBOL_CRC(adapter_dev_get_property, 0xd3551f67, "");
SYMBOL_CRC(adapter_dev_get_status, 0x1cae472a, "");
SYMBOL_CRC(adapter_dev_get_output, 0x84beeb51, "");
SYMBOL_CRC(adapter_dev_set_cap, 0x5bd2fb78, "");
SYMBOL_CRC(adapter_dev_set_cap_xm, 0x6e4ae71c, "");
SYMBOL_CRC(adapter_dev_get_cap, 0x7fb1c24a, "");
SYMBOL_CRC(adapter_dev_authentication, 0xf60b0c4f, "");
SYMBOL_CRC(adapter_dev_is_cc, 0xd1794907, "");
SYMBOL_CRC(adapter_dev_set_wdt, 0x38150166, "");
SYMBOL_CRC(adapter_dev_enable_wdt, 0xa306b2d0, "");
SYMBOL_CRC(adapter_dev_sync_volt, 0x7a24cf71, "");
SYMBOL_CRC(adapter_dev_send_hardreset, 0x67a2589b, "");
SYMBOL_CRC(adapter_dev_exit_mode, 0x10563961, "");
SYMBOL_CRC(register_adapter_device_notifier, 0x99be4ac7, "");
SYMBOL_CRC(unregister_adapter_device_notifier, 0x314e8808, "");
SYMBOL_CRC(adapter_device_register, 0x98796929, "");
SYMBOL_CRC(adapter_device_unregister, 0x0550b8e0, "");
SYMBOL_CRC(get_adapter_by_name, 0xcb191d1f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5038c782, "srcu_notifier_chain_register" },
	{ 0xa1a0fdd2, "srcu_notifier_chain_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x852ccf53, "srcu_init_notifier_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x4d8597ff, "device_register" },
	{ 0x037a0cba, "kfree" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0xf9874213, "class_find_device" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5038c782,
	0xa1a0fdd2,
	0x92997ed8,
	0x852ccf53,
	0xa571f6b0,
	0xba860d3c,
	0x4d8597ff,
	0x037a0cba,
	0xd5977bfb,
	0xed55cabd,
	0xcc1420a0,
	0xf9874213,
	0xe17134b6,
	0xe2d5255a,
	0x6fe9dcd4,
	0x656e4a6e,
	0xef27af6b,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"srcu_notifier_chain_register\0"
	"srcu_notifier_chain_unregister\0"
	"_printk\0"
	"srcu_init_notifier_head\0"
	"__mutex_init\0"
	"dev_set_name\0"
	"device_register\0"
	"kfree\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"device_unregister\0"
	"class_find_device\0"
	"__kmalloc_cache_noprof\0"
	"strcmp\0"
	"class_create\0"
	"snprintf\0"
	"class_destroy\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(vow_ipi_send, "_gpl", "");

SYMBOL_CRC(vow_ipi_send, 0xf6a1db9b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2a8dae7b, "scp_register_feature" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xaae67432, "scp_deregister_feature" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x25758a2c, "misc_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x9cb5d1d2, "scp_A_register_notify" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x999e8297, "vfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcc348dcc, "scp_get_reserve_mem_phys" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x7aa804ca, "scp_get_reserve_mem_size" },
	{ 0x3f9fdc27, "devm_nvmem_device_get" },
	{ 0x96a91aed, "nvmem_device_read" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2aeafb62, "is_scp_ready" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x4e8b8def,
	0x05590c04,
	0xe2964344,
	0x34db050b,
	0xd35cce70,
	0x75ca79b5,
	0x2a8dae7b,
	0xba8fbd64,
	0xb5b54b34,
	0x656e4a6e,
	0x3b6c41ea,
	0xaae67432,
	0x12db679a,
	0x25758a2c,
	0xe922b94d,
	0x9cb5d1d2,
	0x0f314d3e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x37befc70,
	0xd5977bfb,
	0xed55cabd,
	0xbede130a,
	0x88db9f48,
	0x9a85eebb,
	0xf9a482f9,
	0x999e8297,
	0x1b2fa1a9,
	0x2be0c009,
	0x8d21adca,
	0x8ddd8aad,
	0xcc348dcc,
	0xf3cdc3c6,
	0xaf7cb74b,
	0x5a921311,
	0x7aa804ca,
	0x3f9fdc27,
	0x96a91aed,
	0xe136f93c,
	0x0288226a,
	0x75fb9062,
	0x0f05f001,
	0x2aeafb62,
	0x65bb94f6,
	0x4a353d20,
	0xcd709e2e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x5a9f1d63,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__fortify_panic\0"
	"scp_register_feature\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"snprintf\0"
	"kstrtouint\0"
	"scp_deregister_feature\0"
	"__platform_driver_register\0"
	"misc_register\0"
	"device_create_file\0"
	"scp_A_register_notify\0"
	"wakeup_source_register\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"jiffies_to_msecs\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"pm_wakeup_ws_event\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"msleep\0"
	"vfree\0"
	"vmalloc_noprof\0"
	"__arch_copy_from_user\0"
	"scp_get_reserve_mem_virt\0"
	"schedule_timeout\0"
	"scp_get_reserve_mem_phys\0"
	"of_find_compatible_node\0"
	"of_property_read_string\0"
	"strncmp\0"
	"scp_get_reserve_mem_size\0"
	"devm_nvmem_device_get\0"
	"nvmem_device_read\0"
	"of_property_read_variable_u32_array\0"
	"wakeup_source_unregister\0"
	"arch_timer_read_counter\0"
	"mem_alloc_profiling_key\0"
	"is_scp_ready\0"
	"mtk_ipi_register\0"
	"mtk_ipi_send\0"
	"scp_ipidev\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"memmove\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scp,mtk_tinysys_ipi");


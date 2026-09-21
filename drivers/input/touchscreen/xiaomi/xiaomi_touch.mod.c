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

KSYMTAB_FUNC(get_xiaomi_touch_class, "_gpl", "");
KSYMTAB_FUNC(get_xiaomi_touch_dev, "_gpl", "");
KSYMTAB_FUNC(xiaomitouch_register_modedata, "_gpl", "");
KSYMTAB_FUNC(update_palm_sensor_value, "_gpl", "");
KSYMTAB_FUNC(update_prox_sensor_value, "_gpl", "");
KSYMTAB_FUNC(copy_touch_rawdata, "_gpl", "");
KSYMTAB_FUNC(update_touch_rawdata, "_gpl", "");
KSYMTAB_FUNC(thp_send_cmd_to_hal, "_gpl", "");
KSYMTAB_FUNC(update_clicktouch_raw, "_gpl", "");
KSYMTAB_FUNC(xiaomi_touch_set_suspend_state, "_gpl", "");
KSYMTAB_FUNC(update_fod_press_status, "_gpl", "");
KSYMTAB_FUNC(notify_gesture_single_tap, "_gpl", "");
KSYMTAB_FUNC(last_touch_events_collect, "_gpl", "");

SYMBOL_CRC(get_xiaomi_touch_class, 0x5612aa3a, "_gpl");
SYMBOL_CRC(get_xiaomi_touch_dev, 0x3684d9b8, "_gpl");
SYMBOL_CRC(xiaomitouch_register_modedata, 0xb2af64a2, "_gpl");
SYMBOL_CRC(update_palm_sensor_value, 0x49118811, "_gpl");
SYMBOL_CRC(update_prox_sensor_value, 0xe6a87d0f, "_gpl");
SYMBOL_CRC(copy_touch_rawdata, 0x81703a08, "_gpl");
SYMBOL_CRC(update_touch_rawdata, 0x02df3075, "_gpl");
SYMBOL_CRC(thp_send_cmd_to_hal, 0x01dd6b93, "_gpl");
SYMBOL_CRC(update_clicktouch_raw, 0xec6be240, "_gpl");
SYMBOL_CRC(xiaomi_touch_set_suspend_state, 0x88aaf668, "_gpl");
SYMBOL_CRC(update_fod_press_status, 0x17c892ac, "_gpl");
SYMBOL_CRC(notify_gesture_single_tap, 0x76221702, "_gpl");
SYMBOL_CRC(last_touch_events_collect, 0x9e978bfa, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7e73bce6, "sysfs_notify" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x25758a2c, "misc_register" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x4c18e09a, "proc_create_seq_private" },
	{ 0x037a0cba, "kfree" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0xc3246938, "misc_deregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x7e73bce6,
	0x56470118,
	0x9ec6ca96,
	0x2be0c009,
	0x75ca79b5,
	0x9a85eebb,
	0xc63b0ac3,
	0xba8fbd64,
	0xb5b54b34,
	0x356461c8,
	0xc8f2ae9d,
	0x12db679a,
	0x25758a2c,
	0x6fe9dcd4,
	0x9b1faacb,
	0x62b33777,
	0x4c18e09a,
	0x037a0cba,
	0x169f5b1f,
	0xef27af6b,
	0xc3246938,
	0xc8c7229e,
	0x441d0de9,
	0xe17134b6,
	0xaf7cb74b,
	0x656e4a6e,
	0xbcab6ee6,
	0x3667c9f1,
	0x330c0b0f,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xe4bbc1dd,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"sysfs_notify\0"
	"__warn_printk\0"
	"ktime_get_real_ts64\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"__arch_copy_to_user\0"
	"remap_pfn_range\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"rtc_time64_to_tm\0"
	"seq_printf\0"
	"__platform_driver_register\0"
	"misc_register\0"
	"class_create\0"
	"device_create\0"
	"sysfs_create_group\0"
	"proc_create_seq_private\0"
	"kfree\0"
	"device_destroy\0"
	"class_destroy\0"
	"misc_deregister\0"
	"devm_kmalloc\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"of_property_read_string\0"
	"snprintf\0"
	"sscanf\0"
	"sysfs_remove_group\0"
	"remove_proc_entry\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


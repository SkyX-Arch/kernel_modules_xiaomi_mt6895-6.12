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

KSYMTAB_FUNC(flashlight_verify_type_index, "", "");
KSYMTAB_FUNC(flashlight_verify_ct_index, "", "");
KSYMTAB_FUNC(flashlight_verify_part_index, "", "");
KSYMTAB_FUNC(flashlight_verify_index, "", "");
KSYMTAB_FUNC(flashlight_get_type_id, "", "");
KSYMTAB_FUNC(flashlight_get_ct_id, "", "");
KSYMTAB_FUNC(flashlight_get_part_id, "", "");
KSYMTAB_FUNC(flashlight_get_type_index, "", "");
KSYMTAB_FUNC(flashlight_get_ct_index, "", "");
KSYMTAB_FUNC(flashlight_get_part_index, "", "");
KSYMTAB_FUNC(flashlight_dev_register, "", "");
KSYMTAB_FUNC(flashlight_dev_unregister, "", "");
KSYMTAB_FUNC(flashlight_dev_register_by_device_id, "", "");
KSYMTAB_FUNC(flashlight_dev_unregister_by_device_id, "", "");
KSYMTAB_FUNC(strobe_VDIrq, "", "");
KSYMTAB_FUNC(flashlight_kicker_pbm, "", "");
KSYMTAB_FUNC(flashlight_kicker_pbm_by_device_id, "", "");
KSYMTAB_FUNC(flashlight_pt_is_low, "", "");

SYMBOL_CRC(flashlight_verify_type_index, 0x27f5bfbf, "");
SYMBOL_CRC(flashlight_verify_ct_index, 0x5ee5f00b, "");
SYMBOL_CRC(flashlight_verify_part_index, 0x6b1c7f81, "");
SYMBOL_CRC(flashlight_verify_index, 0x60ce473e, "");
SYMBOL_CRC(flashlight_get_type_id, 0x7767643d, "");
SYMBOL_CRC(flashlight_get_ct_id, 0xcd9f9e04, "");
SYMBOL_CRC(flashlight_get_part_id, 0xa042c080, "");
SYMBOL_CRC(flashlight_get_type_index, 0x3447805a, "");
SYMBOL_CRC(flashlight_get_ct_index, 0x42c82de6, "");
SYMBOL_CRC(flashlight_get_part_index, 0x78ae4064, "");
SYMBOL_CRC(flashlight_dev_register, 0x4f06fc7f, "");
SYMBOL_CRC(flashlight_dev_unregister, 0x9382de14, "");
SYMBOL_CRC(flashlight_dev_register_by_device_id, 0xe8fd8896, "");
SYMBOL_CRC(flashlight_dev_unregister_by_device_id, 0x39fd4992, "");
SYMBOL_CRC(strobe_VDIrq, 0x271f2a06, "");
SYMBOL_CRC(flashlight_kicker_pbm, 0x8287fd03, "");
SYMBOL_CRC(flashlight_kicker_pbm_by_device_id, 0x67bc1a30, "");
SYMBOL_CRC(flashlight_pt_is_low, 0xe39abd31, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0x01a718fc, "kicker_pbm_by_flash" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe025340d, "kicker_ppb_request_power" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaa643b64, "register_low_battery_notify" },
	{ 0x99ae3229, "register_bp_thl_notify" },
	{ 0x1c539951, "register_battery_oc_notify" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf772582a, "thermal_of_cooling_device_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x96848186, "scnprintf" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa916b694, "strnlen" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5a921311,
	0xd5977bfb,
	0xed55cabd,
	0x037a0cba,
	0x01a718fc,
	0xf5edea2e,
	0xe025340d,
	0xe17134b6,
	0x7e19152a,
	0x9a835040,
	0x12db679a,
	0xaa643b64,
	0x99ae3229,
	0x1c539951,
	0x656e4a6e,
	0xf772582a,
	0xe3ec2f2b,
	0x8b808b7f,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0xe922b94d,
	0x11d6167b,
	0x169f5b1f,
	0xef27af6b,
	0x28ba7b6c,
	0x6091b333,
	0xc8c7229e,
	0x75ca79b5,
	0x2be0c009,
	0x9a85eebb,
	0x96848186,
	0x85df9b6c,
	0x8c8569cb,
	0x3b6c41ea,
	0xa916b694,
	0xe136f93c,
	0x62835296,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"strncmp\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"kicker_pbm_by_flash\0"
	"___ratelimit\0"
	"kicker_ppb_request_power\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"__platform_driver_register\0"
	"register_low_battery_notify\0"
	"register_bp_thl_notify\0"
	"register_battery_oc_notify\0"
	"snprintf\0"
	"thermal_of_cooling_device_register\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"device_create_file\0"
	"device_remove_file\0"
	"device_destroy\0"
	"class_destroy\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"devm_kmalloc\0"
	"__fortify_panic\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"scnprintf\0"
	"strsep\0"
	"kstrtoint\0"
	"kstrtouint\0"
	"strnlen\0"
	"of_property_read_variable_u32_array\0"
	"thermal_cooling_device_unregister\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_pbm,mtk_peak_power_budget,mtk_low_battery_throttling,mtk_bp_thl,mtk_battery_oc_throttling");

MODULE_ALIAS("of:N*T*Cmediatek,flashlight_core");
MODULE_ALIAS("of:N*T*Cmediatek,flashlight_coreC*");

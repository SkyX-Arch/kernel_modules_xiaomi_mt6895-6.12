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
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0x99375a29, "mi_disp_register_client" },
	{ 0x92997ed8, "_printk" },
	{ 0x7e73bce6, "sysfs_notify" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9b1faacb, "device_create" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xdd8caec8, "kernfs_find_and_get_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x0b742fd7, "simple_strtol" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xb03bd4d0, "mi_disp_unregister_client" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xfefe2f2f, "freq_qos_remove_request" },
	{ 0x037a0cba, "kfree" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1af93d4f,
	0x99375a29,
	0x92997ed8,
	0x7e73bce6,
	0xf8bd87ca,
	0xdb4e2667,
	0xd5977bfb,
	0xed55cabd,
	0xe17134b6,
	0x52c5c991,
	0x7e19152a,
	0x1ed4c5e6,
	0xaf7cb74b,
	0x9b1faacb,
	0x62b33777,
	0xdd8caec8,
	0x656e4a6e,
	0x0b742fd7,
	0xbcab6ee6,
	0xe783e261,
	0xb03bd4d0,
	0x3667c9f1,
	0x169f5b1f,
	0xfefe2f2f,
	0x037a0cba,
	0x9a835040,
	0xde7ece30,
	0x280f9f14,
	0x0f05f001,
	0xefe8a82e,
	0xce8498d7,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"freq_qos_update_request\0"
	"mi_disp_register_client\0"
	"_printk\0"
	"sysfs_notify\0"
	"cpufreq_cpu_get\0"
	"freq_qos_add_request\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"of_find_node_by_name\0"
	"of_property_read_string\0"
	"device_create\0"
	"sysfs_create_group\0"
	"kernfs_find_and_get_ns\0"
	"snprintf\0"
	"simple_strtol\0"
	"sscanf\0"
	"sysfs_emit\0"
	"mi_disp_unregister_client\0"
	"sysfs_remove_group\0"
	"device_destroy\0"
	"freq_qos_remove_request\0"
	"kfree\0"
	"__list_del_entry_valid_or_report\0"
	"__cpu_possible_mask\0"
	"__per_cpu_offset\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"kernel_kobj\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm");


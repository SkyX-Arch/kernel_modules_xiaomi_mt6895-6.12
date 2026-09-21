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

KSYMTAB_FUNC(extdev_io_device_register, "_gpl", "");
KSYMTAB_FUNC(extdev_io_device_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_extdev_io_device_register, "_gpl", "");
KSYMTAB_FUNC(devm_extdev_io_device_general_create, "_gpl", "");

SYMBOL_CRC(extdev_io_device_register, 0xbf98ebc5, "_gpl");
SYMBOL_CRC(extdev_io_device_unregister, 0x3e73904b, "_gpl");
SYMBOL_CRC(devm_extdev_io_device_register, 0x301f3023, "_gpl");
SYMBOL_CRC(devm_extdev_io_device_general_create, 0x0d3e56c4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5b70d97f, "devm_kmemdup" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x037a0cba, "kfree" },
	{ 0x7a198fd3, "device_create_with_groups" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0x79c89c68, "__devres_alloc_node" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x01d830d1, "devres_add" },
	{ 0xb33a3387, "device_get_named_child_node" },
	{ 0x401167cc, "_dev_info" },
	{ 0xcdbf39eb, "fwnode_property_read_string" },
	{ 0x96848186, "scnprintf" },
	{ 0x0cfb2db5, "of_platform_device_create" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x760194bf, "__devm_add_action" },
	{ 0x8bf3a845, "of_platform_device_destroy" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x28a45eb5, "of_fwnode_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5b70d97f,
	0xa571f6b0,
	0x037a0cba,
	0x7a198fd3,
	0xcc1420a0,
	0x79c89c68,
	0xe93e49c3,
	0x01d830d1,
	0xb33a3387,
	0x401167cc,
	0xcdbf39eb,
	0x96848186,
	0x0cfb2db5,
	0x5c6a5e82,
	0xc8c7229e,
	0xe17134b6,
	0x52c5c991,
	0x760194bf,
	0x8bf3a845,
	0x6fe9dcd4,
	0xd5977bfb,
	0x656e4a6e,
	0xed55cabd,
	0x33a52b38,
	0x98cf60b3,
	0x75ca79b5,
	0x85df9b6c,
	0x5c3c7387,
	0x6a6e05bf,
	0x4dd57aba,
	0xef27af6b,
	0x0f05f001,
	0xefe8a82e,
	0x28a45eb5,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"devm_kmemdup\0"
	"__mutex_init\0"
	"kfree\0"
	"device_create_with_groups\0"
	"device_unregister\0"
	"__devres_alloc_node\0"
	"devres_free\0"
	"devres_add\0"
	"device_get_named_child_node\0"
	"_dev_info\0"
	"fwnode_property_read_string\0"
	"scnprintf\0"
	"of_platform_device_create\0"
	"devm_kasprintf\0"
	"devm_kmalloc\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__devm_add_action\0"
	"of_platform_device_destroy\0"
	"class_create\0"
	"mutex_lock\0"
	"snprintf\0"
	"mutex_unlock\0"
	"regmap_bulk_read\0"
	"strlen\0"
	"__fortify_panic\0"
	"strsep\0"
	"kstrtoull\0"
	"kstrtou8\0"
	"regmap_bulk_write\0"
	"class_destroy\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"of_fwnode_ops\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


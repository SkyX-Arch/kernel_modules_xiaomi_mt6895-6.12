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

KSYMTAB_FUNC(get_gz_log_buffer, "", "");

SYMBOL_CRC(get_gz_log_buffer, 0xa2c0ea20, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x5f012538, "gz_trusty_std_call32" },
	{ 0xacb58177, "get_smcnr_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf8d836b7, "gz_trusty_call_notifier_register" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x0f9a2a8f, "gz_trusty_call_notifier_unregister" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x037a0cba, "kfree" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xb90a7bc4, "gz_trusty_fast_call32" },
	{ 0x92997ed8, "_printk" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x4d924f20, "memremap" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x6b201699, "of_find_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe2964344, "__wake_up" },
	{ 0x498fdaa1, "gz_trusty_version_str_get" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x44033864, "proc_remove" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe27121cb, "panic_notifier_list" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0xa571f6b0,
	0x5f012538,
	0xacb58177,
	0xd9a5ea54,
	0xf8d836b7,
	0x83b96232,
	0xa2fa95a0,
	0x0f9a2a8f,
	0x9e9fdd9d,
	0x037a0cba,
	0xe94986d6,
	0xb90a7bc4,
	0x92997ed8,
	0xe136f93c,
	0x4d924f20,
	0xf3cdc3c6,
	0x5cf50b74,
	0x6b201699,
	0xb318cbab,
	0xe17134b6,
	0x52c5c991,
	0xe2964344,
	0x498fdaa1,
	0x6ac61a02,
	0x88db9f48,
	0x9a85eebb,
	0x44033864,
	0xc866487b,
	0x6fc35f2b,
	0xe27121cb,
	0x9688de8b,
	0xe4bbc1dd,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"__mutex_init\0"
	"gz_trusty_std_call32\0"
	"get_smcnr_dev\0"
	"__init_waitqueue_head\0"
	"gz_trusty_call_notifier_register\0"
	"atomic_notifier_chain_register\0"
	"proc_create_data\0"
	"gz_trusty_call_notifier_unregister\0"
	"memunmap\0"
	"kfree\0"
	"sched_clock\0"
	"gz_trusty_fast_call32\0"
	"_printk\0"
	"of_property_read_variable_u32_array\0"
	"memremap\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"of_find_property\0"
	"of_find_node_opts_by_path\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__wake_up\0"
	"gz_trusty_version_str_get\0"
	"nonseekable_open\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"proc_remove\0"
	"atomic_notifier_chain_unregister\0"
	"platform_driver_unregister\0"
	"panic_notifier_list\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_trusty_mod");


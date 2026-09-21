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
	{ 0x92997ed8, "_printk" },
	{ 0x5f012538, "gz_trusty_std_call32" },
	{ 0xacb58177, "get_smcnr_dev" },
	{ 0xed4fa68a, "gz_trusty_adjust_task_attr" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6d2c9b84, "gz_tipc_set_default_cpumask" },
	{ 0x96848186, "scnprintf" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb90a7bc4, "gz_trusty_fast_call32" },
	{ 0x401167cc, "_dev_info" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x6e8b0474, "_map_user_pages" },
	{ 0xfbdd82be, "KREE_RegisterSharedmem" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf115faa, "__folio_put" },
	{ 0x3d21099d, "__page_pinner_put_page" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x0229f72d, "strncpy_from_user" },
	{ 0x552d4efc, "KREE_CreateSession" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x5878d629, "KREE_CloseSession" },
	{ 0xf45addc2, "KREE_TeeServiceCallPlus" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x81d613a1, "dmabuf_to_secure_handle" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x25758a2c, "misc_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x7a8e1e50, "ffa_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb14f55d5, "tz_system_dev" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xacfe4142, "page_pinner_inited" },
	{ 0xec19e146, "KREE_TeeServiceCall" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xd9a6d5ea, "KREE_UnregisterSharedmem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x3d5d5254, "KREE_ION_AllocChunkmem" },
	{ 0x0175c8da, "KREE_ION_ZallocChunkmem" },
	{ 0x5df7236c, "KREE_ION_ReferenceChunkmem" },
	{ 0x14085470, "KREE_ION_QueryChunkmem_TEST" },
	{ 0x8dceb484, "KREE_ION_UnreferenceChunkmem" },
	{ 0x9a19c31a, "KREE_AppendSecureMultichunkmem" },
	{ 0x44781e48, "KREE_ReleaseSecureMultichunkmem" },
	{ 0x6ce41c25, "ssmr_offline" },
	{ 0xb8313cbf, "ssmr_online" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x3eb103cd, "sg_alloc_table_from_pages_segment" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x66431d1b, "__register_chrdev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5f012538,
	0xacb58177,
	0xed4fa68a,
	0xbcab6ee6,
	0x6d2c9b84,
	0x96848186,
	0xba0aee2e,
	0xce5bc4d0,
	0x75ca79b5,
	0xb90a7bc4,
	0x401167cc,
	0x037a0cba,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x31f2a14c,
	0x6e8b0474,
	0xfbdd82be,
	0x7aa1756e,
	0xdf115faa,
	0x3d21099d,
	0x88db9f48,
	0x9a85eebb,
	0x0229f72d,
	0x552d4efc,
	0xd5977bfb,
	0x847188e8,
	0xed55cabd,
	0x5878d629,
	0xf45addc2,
	0xaaae9064,
	0x81d613a1,
	0x2b3df576,
	0xa571f6b0,
	0x2be0c009,
	0x25758a2c,
	0xe922b94d,
	0x11d6167b,
	0xc3246938,
	0x12db679a,
	0x7a8e1e50,
	0x6fc35f2b,
	0xb14f55d5,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xacfe4142,
	0xec19e146,
	0xe2d5255a,
	0xb43f9365,
	0xccf69887,
	0xd9a6d5ea,
	0x4302d0eb,
	0xe4bbc1dd,
	0x3d5d5254,
	0x0175c8da,
	0x5df7236c,
	0x14085470,
	0x8dceb484,
	0x9a19c31a,
	0x44781e48,
	0x6ce41c25,
	0xb8313cbf,
	0xfbe215e4,
	0x3eb103cd,
	0xba8fbd64,
	0xb5b54b34,
	0x6fe9dcd4,
	0x9b1faacb,
	0x66431d1b,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"gz_trusty_std_call32\0"
	"get_smcnr_dev\0"
	"gz_trusty_adjust_task_attr\0"
	"sscanf\0"
	"gz_tipc_set_default_cpumask\0"
	"scnprintf\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__fortify_panic\0"
	"gz_trusty_fast_call32\0"
	"_dev_info\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__kvmalloc_node_noprof\0"
	"_map_user_pages\0"
	"KREE_RegisterSharedmem\0"
	"kvfree\0"
	"__folio_put\0"
	"__page_pinner_put_page\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"strncpy_from_user\0"
	"KREE_CreateSession\0"
	"mutex_lock\0"
	"krealloc_noprof\0"
	"mutex_unlock\0"
	"KREE_CloseSession\0"
	"KREE_TeeServiceCallPlus\0"
	"dma_buf_get\0"
	"dmabuf_to_secure_handle\0"
	"dma_buf_put\0"
	"__mutex_init\0"
	"__arch_copy_from_user\0"
	"misc_register\0"
	"device_create_file\0"
	"device_remove_file\0"
	"misc_deregister\0"
	"__platform_driver_register\0"
	"ffa_driver_register\0"
	"platform_driver_unregister\0"
	"tz_system_dev\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"page_pinner_inited\0"
	"KREE_TeeServiceCall\0"
	"strcmp\0"
	"ktime_get\0"
	"get_free_pages_noprof\0"
	"KREE_UnregisterSharedmem\0"
	"free_pages\0"
	"kimage_voffset\0"
	"KREE_ION_AllocChunkmem\0"
	"KREE_ION_ZallocChunkmem\0"
	"KREE_ION_ReferenceChunkmem\0"
	"KREE_ION_QueryChunkmem_TEST\0"
	"KREE_ION_UnreferenceChunkmem\0"
	"KREE_AppendSecureMultichunkmem\0"
	"KREE_ReleaseSecureMultichunkmem\0"
	"ssmr_offline\0"
	"ssmr_online\0"
	"sg_next\0"
	"sg_alloc_table_from_pages_segment\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"class_create\0"
	"device_create\0"
	"__register_chrdev\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_trusty_mod,gz_ipc_mod,gz_tz_system,mtk_sec_heap,ffa_v11,tmem_ffa");

MODULE_ALIAS("of:N*T*Cmediatek,trusty-mtee-v1");
MODULE_ALIAS("of:N*T*Cmediatek,trusty-mtee-v1C*");

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

KSYMTAB_DATA(tz_system_dev, "", "");
KSYMTAB_FUNC(KREE_SessionToTID, "", "");
KSYMTAB_FUNC(KREE_CreateSession, "", "");
KSYMTAB_FUNC(KREE_CloseSession, "", "");
KSYMTAB_FUNC(KREE_TeeServiceCallPlus, "", "");
KSYMTAB_FUNC(KREE_TeeServiceCall, "", "");
KSYMTAB_FUNC(KREE_GetSystemCnt, "", "");
KSYMTAB_FUNC(KREE_GetSystemCntFrq, "", "");
KSYMTAB_FUNC(_map_user_pages, "", "");
KSYMTAB_FUNC(KREE_RegisterSharedmem, "", "");
KSYMTAB_FUNC(KREE_UnregisterSharedmem, "", "");
KSYMTAB_FUNC(KREE_AllocSecuremem, "", "");
KSYMTAB_FUNC(KREE_ZallocSecuremem, "", "");
KSYMTAB_FUNC(KREE_AllocSecurememWithTag, "", "");
KSYMTAB_FUNC(KREE_ZallocSecurememWithTag, "", "");
KSYMTAB_FUNC(KREE_ReferenceSecuremem, "", "");
KSYMTAB_FUNC(KREE_UnreferenceSecuremem, "", "");
KSYMTAB_FUNC(KREE_AppendSecureMultichunkmem, "", "");
KSYMTAB_FUNC(KREE_ReleaseSecureMultichunkmem, "", "");
KSYMTAB_FUNC(KREE_ReferenceSecureMultichunkmem, "", "");
KSYMTAB_FUNC(KREE_ION_AllocChunkmem, "", "");
KSYMTAB_FUNC(KREE_ION_ZallocChunkmem, "", "");
KSYMTAB_FUNC(KREE_ION_ReferenceChunkmem, "", "");
KSYMTAB_FUNC(KREE_ION_UnreferenceChunkmem, "", "");
KSYMTAB_FUNC(KREE_ION_QueryChunkmem_TEST, "", "");
KSYMTAB_FUNC(KREE_QueryChunkmem_TEST, "", "");
KSYMTAB_FUNC(KREE_ConfigSecureMultiChunkMemInfo, "", "");

SYMBOL_CRC(tz_system_dev, 0xb14f55d5, "");
SYMBOL_CRC(KREE_SessionToTID, 0x79393b5e, "");
SYMBOL_CRC(KREE_CreateSession, 0x552d4efc, "");
SYMBOL_CRC(KREE_CloseSession, 0x5878d629, "");
SYMBOL_CRC(KREE_TeeServiceCallPlus, 0xf45addc2, "");
SYMBOL_CRC(KREE_TeeServiceCall, 0xec19e146, "");
SYMBOL_CRC(KREE_GetSystemCnt, 0xf676ecc1, "");
SYMBOL_CRC(KREE_GetSystemCntFrq, 0xcb01e245, "");
SYMBOL_CRC(_map_user_pages, 0x6e8b0474, "");
SYMBOL_CRC(KREE_RegisterSharedmem, 0xfbdd82be, "");
SYMBOL_CRC(KREE_UnregisterSharedmem, 0xd9a6d5ea, "");
SYMBOL_CRC(KREE_AllocSecuremem, 0x991643ee, "");
SYMBOL_CRC(KREE_ZallocSecuremem, 0x83a1b948, "");
SYMBOL_CRC(KREE_AllocSecurememWithTag, 0x1c007570, "");
SYMBOL_CRC(KREE_ZallocSecurememWithTag, 0x6c132e7e, "");
SYMBOL_CRC(KREE_ReferenceSecuremem, 0xded08df4, "");
SYMBOL_CRC(KREE_UnreferenceSecuremem, 0x1e3d6e2c, "");
SYMBOL_CRC(KREE_AppendSecureMultichunkmem, 0x9a19c31a, "");
SYMBOL_CRC(KREE_ReleaseSecureMultichunkmem, 0x44781e48, "");
SYMBOL_CRC(KREE_ReferenceSecureMultichunkmem, 0x435d935a, "");
SYMBOL_CRC(KREE_ION_AllocChunkmem, 0x3d5d5254, "");
SYMBOL_CRC(KREE_ION_ZallocChunkmem, 0x0175c8da, "");
SYMBOL_CRC(KREE_ION_ReferenceChunkmem, 0x5df7236c, "");
SYMBOL_CRC(KREE_ION_UnreferenceChunkmem, 0x8dceb484, "");
SYMBOL_CRC(KREE_ION_QueryChunkmem_TEST, 0x14085470, "");
SYMBOL_CRC(KREE_QueryChunkmem_TEST, 0x06f77776, "");
SYMBOL_CRC(KREE_ConfigSecureMultiChunkMemInfo, 0xbdb6a34b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0x21d401c4, "gz_port_lookup_tid" },
	{ 0x3d9419d3, "TEEC_InitializeContext" },
	{ 0x6521b9ba, "TEEC_FinalizeContext" },
	{ 0x34e15b63, "TEEC_OpenSession" },
	{ 0xa0f3af62, "TEEC_CloseSession" },
	{ 0x7af760e1, "TEEC_InvokeCommand" },
	{ 0x037a0cba, "kfree" },
	{ 0x5f012538, "gz_trusty_std_call32" },
	{ 0x2f144c88, "gz_tipc_k_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b85dfa4, "gz_tipc_k_read" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x5a862714, "gz_trusty_enqueue_nop" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5d1025f8, "gz_tipc_k_disconnect" },
	{ 0xb973eb22, "gz_tipc_k_connect" },
	{ 0xa916b694, "strnlen" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x3355da1c, "down_read" },
	{ 0xfd588b8e, "find_vma_intersection" },
	{ 0xdf07ec4b, "get_user_pages_remote" },
	{ 0x3940f93f, "follow_pfnmap_start" },
	{ 0x8915ff09, "follow_pfnmap_end" },
	{ 0x6b50e951, "up_read" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdf115faa, "__folio_put" },
	{ 0x3d21099d, "__page_pinner_put_page" },
	{ 0xacfe4142, "page_pinner_inited" },
	{ 0x2c2067df, "mutex_lock_interruptible" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0x203392c6,
	0xed55cabd,
	0x92997ed8,
	0x819bebd4,
	0x21d401c4,
	0x3d9419d3,
	0x6521b9ba,
	0x34e15b63,
	0xa0f3af62,
	0x7af760e1,
	0x037a0cba,
	0x5f012538,
	0x2f144c88,
	0xf9a482f9,
	0x9b85dfa4,
	0x1b2fa1a9,
	0x5a862714,
	0xe17134b6,
	0x75ca79b5,
	0x5d1025f8,
	0xb973eb22,
	0xa916b694,
	0x4e8b8def,
	0x05590c04,
	0x0f314d3e,
	0xa571f6b0,
	0x12db679a,
	0x6fc35f2b,
	0xe4bc4b09,
	0xde7ece30,
	0x0f05f001,
	0xefe8a82e,
	0x3355da1c,
	0xfd588b8e,
	0xdf07ec4b,
	0x3940f93f,
	0x8915ff09,
	0x6b50e951,
	0x52c5c991,
	0xdf115faa,
	0x3d21099d,
	0xacfe4142,
	0x2c2067df,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_trylock\0"
	"mutex_unlock\0"
	"_printk\0"
	"mutex_is_locked\0"
	"gz_port_lookup_tid\0"
	"TEEC_InitializeContext\0"
	"TEEC_FinalizeContext\0"
	"TEEC_OpenSession\0"
	"TEEC_CloseSession\0"
	"TEEC_InvokeCommand\0"
	"kfree\0"
	"gz_trusty_std_call32\0"
	"gz_tipc_k_write\0"
	"msleep\0"
	"gz_tipc_k_read\0"
	"vmalloc_noprof\0"
	"gz_trusty_enqueue_nop\0"
	"__kmalloc_cache_noprof\0"
	"__fortify_panic\0"
	"gz_tipc_k_disconnect\0"
	"gz_tipc_k_connect\0"
	"strnlen\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"wakeup_source_register\0"
	"__mutex_init\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"cpu_topology\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"down_read\0"
	"find_vma_intersection\0"
	"get_user_pages_remote\0"
	"follow_pfnmap_start\0"
	"follow_pfnmap_end\0"
	"up_read\0"
	"__kmalloc_noprof\0"
	"__folio_put\0"
	"__page_pinner_put_page\0"
	"page_pinner_inited\0"
	"mutex_lock_interruptible\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_ipc_mod,isee,gz_trusty_mod");

MODULE_ALIAS("of:N*T*Cmediatek,trusty-tz");
MODULE_ALIAS("of:N*T*Cmediatek,trusty-tzC*");

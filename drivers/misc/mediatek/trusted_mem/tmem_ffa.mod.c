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

KSYMTAB_FUNC(trusted_mem_api_alloc, "", "");
KSYMTAB_FUNC(trusted_mem_api_alloc_zero, "", "");
KSYMTAB_FUNC(trusted_mem_api_unref, "", "");
KSYMTAB_FUNC(trusted_mem_api_get_region_info, "", "");
KSYMTAB_FUNC(trusted_mem_api_query_pa, "", "");
KSYMTAB_FUNC(trusted_mem_ffa_query_pa, "", "");
KSYMTAB_FUNC(trusted_mem_api_get_page_replace, "", "");
KSYMTAB_FUNC(trusted_mem_is_ffa_enabled, "", "");
KSYMTAB_FUNC(trusted_mem_is_page_v2_enabled, "", "");
KSYMTAB_FUNC(trusted_mem_page_based_alloc, "", "");
KSYMTAB_FUNC(trusted_mem_page_based_free, "", "");
KSYMTAB_FUNC(trusted_mem_enable_high_freq, "", "");
KSYMTAB_FUNC(trusted_mem_disable_high_freq, "", "");
KSYMTAB_FUNC(ssmr_offline, "", "");
KSYMTAB_FUNC(ssmr_online, "", "");
KSYMTAB_FUNC(is_pkvm_enabled, "", "");
KSYMTAB_FUNC(get_ssmr_dev, "", "");
KSYMTAB_FUNC(get_pre_alloc_page_num, "", "");

SYMBOL_CRC(trusted_mem_api_alloc, 0xcdde7754, "");
SYMBOL_CRC(trusted_mem_api_alloc_zero, 0x7c09b0e3, "");
SYMBOL_CRC(trusted_mem_api_unref, 0x64fa87b6, "");
SYMBOL_CRC(trusted_mem_api_get_region_info, 0xbfa5fe46, "");
SYMBOL_CRC(trusted_mem_api_query_pa, 0x9d856127, "");
SYMBOL_CRC(trusted_mem_ffa_query_pa, 0x2f0213b6, "");
SYMBOL_CRC(trusted_mem_api_get_page_replace, 0x48ea315b, "");
SYMBOL_CRC(trusted_mem_is_ffa_enabled, 0x41b7fbbb, "");
SYMBOL_CRC(trusted_mem_is_page_v2_enabled, 0x03d3b7a5, "");
SYMBOL_CRC(trusted_mem_page_based_alloc, 0xf7dcd095, "");
SYMBOL_CRC(trusted_mem_page_based_free, 0x20d3a271, "");
SYMBOL_CRC(trusted_mem_enable_high_freq, 0xd389fafb, "");
SYMBOL_CRC(trusted_mem_disable_high_freq, 0x331d7047, "");
SYMBOL_CRC(ssmr_offline, 0x6ce41c25, "");
SYMBOL_CRC(ssmr_online, 0xb8313cbf, "");
SYMBOL_CRC(is_pkvm_enabled, 0x6161e8ef, "");
SYMBOL_CRC(get_ssmr_dev, 0x8e2e1f55, "");
SYMBOL_CRC(get_pre_alloc_page_num, 0x32fc2762, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x552d4efc, "KREE_CreateSession" },
	{ 0xec19e146, "KREE_TeeServiceCall" },
	{ 0x5878d629, "KREE_CloseSession" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x5a921311, "strncmp" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x1b7957aa, "of_reserved_mem_device_init_by_idx" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x267bd682, "cma_alloc" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0xff5d9deb, "cma_release" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x70c2b594, "__free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0xa0469683, "__alloc_pages_noprof" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x816a41ca, "cpufreq_update_limits" },
	{ 0x3d9419d3, "TEEC_InitializeContext" },
	{ 0x3f063ac0, "TEEC_RegisterSharedMemory" },
	{ 0x34e15b63, "TEEC_OpenSession" },
	{ 0x4b6af186, "TEEC_ReleaseSharedMemory" },
	{ 0x6521b9ba, "TEEC_FinalizeContext" },
	{ 0xa0f3af62, "TEEC_CloseSession" },
	{ 0x7af760e1, "TEEC_InvokeCommand" },
	{ 0x4cddd29e, "dma_map_sgtable" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0x0175c8da, "KREE_ION_ZallocChunkmem" },
	{ 0x3d5d5254, "KREE_ION_AllocChunkmem" },
	{ 0x8dceb484, "KREE_ION_UnreferenceChunkmem" },
	{ 0x9a19c31a, "KREE_AppendSecureMultichunkmem" },
	{ 0x44781e48, "KREE_ReleaseSecureMultichunkmem" },
	{ 0xbdb6a34b, "KREE_ConfigSecureMultiChunkMemInfo" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0xd0d3f0a4, "gen_pool_avail" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x2464da17, "gen_pool_size" },
	{ 0x7a8e1e50, "ffa_driver_register" },
	{ 0x768006df, "bus_find_device" },
	{ 0x9f9d0e40, "get_tee_ffa_dev" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x060ba97c, "gen_pool_free_owner" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x65c7c3e3, "ffa_bus_type" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x037a0cba,
	0xe17134b6,
	0x0f05f001,
	0xefe8a82e,
	0xe94986d6,
	0x552d4efc,
	0xec19e146,
	0x5878d629,
	0xd5977bfb,
	0xed55cabd,
	0xc6f46339,
	0xffeedf6a,
	0xa571f6b0,
	0x656e4a6e,
	0x49cd25ed,
	0xcec49a87,
	0x42ad47ad,
	0x7f02188f,
	0x12db679a,
	0x5a921311,
	0xe136f93c,
	0x6fc35f2b,
	0x5cf50b74,
	0x1b7957aa,
	0x1fec5304,
	0x1ed4c5e6,
	0x5a9cfed6,
	0xf9a482f9,
	0x267bd682,
	0x78cf2345,
	0xff5d9deb,
	0x66bcb0f8,
	0xf3cdc3c6,
	0x9688de8b,
	0x70c2b594,
	0x34db050b,
	0xb3f985a8,
	0xfbe215e4,
	0xf93aae46,
	0x9a835040,
	0xd35cce70,
	0x7e19152a,
	0xfa501412,
	0xa0469683,
	0xa6f6226c,
	0xf8bd87ca,
	0x28ed2847,
	0x20d81059,
	0xcd6f7bae,
	0x816a41ca,
	0x3d9419d3,
	0x3f063ac0,
	0x34e15b63,
	0x4b6af186,
	0x6521b9ba,
	0xa0f3af62,
	0x7af760e1,
	0x4cddd29e,
	0xc8c85086,
	0xc6970ad9,
	0x0175c8da,
	0x3d5d5254,
	0x8dceb484,
	0x9a19c31a,
	0x44781e48,
	0xbdb6a34b,
	0xada31e57,
	0xd0d3f0a4,
	0xced0f4d4,
	0x6c224cda,
	0x2464da17,
	0x7a8e1e50,
	0x768006df,
	0x9f9d0e40,
	0x9ec6ca96,
	0x060ba97c,
	0xbefa51a3,
	0x67064f1d,
	0x65c7c3e3,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"sched_clock\0"
	"KREE_CreateSession\0"
	"KREE_TeeServiceCall\0"
	"KREE_CloseSession\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"__mutex_init\0"
	"snprintf\0"
	"alloc_workqueue\0"
	"cancel_delayed_work_sync\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"__platform_driver_register\0"
	"strncmp\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"of_reserved_mem_lookup\0"
	"of_reserved_mem_device_init_by_idx\0"
	"__of_parse_phandle_with_args\0"
	"of_find_node_by_name\0"
	"dma_alloc_attrs\0"
	"msleep\0"
	"cma_alloc\0"
	"dma_free_attrs\0"
	"cma_release\0"
	"of_property_read_u64\0"
	"of_find_compatible_node\0"
	"memstart_addr\0"
	"__free_pages\0"
	"_raw_spin_lock_irqsave\0"
	"sg_alloc_table\0"
	"sg_next\0"
	"__arm_smccc_smc\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_add_valid_or_report\0"
	"__dma_sync_sg_for_cpu\0"
	"__alloc_pages_noprof\0"
	"kasan_flag_enabled\0"
	"cpufreq_cpu_get\0"
	"down_write\0"
	"up_write\0"
	"cpufreq_cpu_put\0"
	"cpufreq_update_limits\0"
	"TEEC_InitializeContext\0"
	"TEEC_RegisterSharedMemory\0"
	"TEEC_OpenSession\0"
	"TEEC_ReleaseSharedMemory\0"
	"TEEC_FinalizeContext\0"
	"TEEC_CloseSession\0"
	"TEEC_InvokeCommand\0"
	"dma_map_sgtable\0"
	"sg_free_table\0"
	"dma_unmap_sg_attrs\0"
	"KREE_ION_ZallocChunkmem\0"
	"KREE_ION_AllocChunkmem\0"
	"KREE_ION_UnreferenceChunkmem\0"
	"KREE_AppendSecureMultichunkmem\0"
	"KREE_ReleaseSecureMultichunkmem\0"
	"KREE_ConfigSecureMultiChunkMemInfo\0"
	"gen_pool_dma_alloc_align\0"
	"gen_pool_avail\0"
	"gen_pool_create\0"
	"gen_pool_destroy\0"
	"gen_pool_size\0"
	"ffa_driver_register\0"
	"bus_find_device\0"
	"get_tee_ffa_dev\0"
	"ktime_get_real_ts64\0"
	"gen_pool_free_owner\0"
	"gen_pool_add_owner\0"
	"of_property_read_variable_u8_array\0"
	"ffa_bus_type\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_tz_system,isee,ffa_v11,mcDrvModule");


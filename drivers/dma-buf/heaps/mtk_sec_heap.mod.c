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

KSYMTAB_FUNC(is_mtk_sec_heap_dmabuf, "_gpl", "");
KSYMTAB_FUNC(is_support_secure_handle, "_gpl", "");
KSYMTAB_FUNC(dmabuf_to_secure_handle, "_gpl", "");

SYMBOL_CRC(is_mtk_sec_heap_dmabuf, 0x9cd4e66a, "_gpl");
SYMBOL_CRC(is_support_secure_handle, 0x1e509b70, "_gpl");
SYMBOL_CRC(dmabuf_to_secure_handle, 0x81d613a1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc8c85086, "sg_free_table" },
	{ 0x037a0cba, "kfree" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xed3a3cb3, "dma_heap_get_name" },
	{ 0x92997ed8, "_printk" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbfa5fe46, "trusted_mem_api_get_region_info" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xff2cba95, "__get_task_comm" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x0d89e2f7, "dma_buf_export" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x4cddd29e, "dma_map_sgtable" },
	{ 0x03d3b7a5, "trusted_mem_is_page_v2_enabled" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x9817d2f4, "mtk_dma_heap_config_parse" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xb6a4c52f, "mtk_dmabuf_page_pool_create" },
	{ 0x08125ecf, "mtk_dmabuf_page_pool_destroy" },
	{ 0xd4db3998, "dma_heap_add" },
	{ 0x4f0837c1, "dma_heap_get_dev" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa0469683, "__alloc_pages_noprof" },
	{ 0x401167cc, "_dev_info" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe3207269, "hang_dump_proc" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x121d1336, "dmabuf_rbtree_dump_by_domain" },
	{ 0x6161e8ef, "is_pkvm_enabled" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xf7dcd095, "trusted_mem_page_based_alloc" },
	{ 0x64fa87b6, "trusted_mem_api_unref" },
	{ 0x20d3a271, "trusted_mem_page_based_free" },
	{ 0xe091c977, "list_sort" },
	{ 0xd389fafb, "trusted_mem_enable_high_freq" },
	{ 0x331d7047, "trusted_mem_disable_high_freq" },
	{ 0x70c2b594, "__free_pages" },
	{ 0xea8d2d98, "mtk_dmabuf_page_pool_alloc" },
	{ 0xcdde7754, "trusted_mem_api_alloc" },
	{ 0x11e1d9dd, "mtk_dmabuf_page_pool_free" },
	{ 0x32fc2762, "get_pre_alloc_page_num" },
	{ 0x56470118, "__warn_printk" },
	{ 0x755cb545, "ww_mutex_trylock" },
	{ 0x191c4b97, "ww_mutex_unlock" },
	{ 0x41b7fbbb, "trusted_mem_is_ffa_enabled" },
	{ 0x2f0213b6, "trusted_mem_ffa_query_pa" },
	{ 0x9d856127, "trusted_mem_api_query_pa" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc8c85086,
	0x037a0cba,
	0x1e6d26a8,
	0xed3a3cb3,
	0x92997ed8,
	0xfbe215e4,
	0xd5977bfb,
	0xed55cabd,
	0xbfa5fe46,
	0xb3f985a8,
	0xa571f6b0,
	0xff2cba95,
	0xe94986d6,
	0x0d89e2f7,
	0xc8f2ae9d,
	0x96848186,
	0xd3cc3c5d,
	0xc6970ad9,
	0x9a835040,
	0xe17134b6,
	0x52c5c991,
	0x9eacf8a5,
	0xba8fbd64,
	0xb5b54b34,
	0x7e19152a,
	0x4cddd29e,
	0x03d3b7a5,
	0x12db679a,
	0x6fc35f2b,
	0xf3cdc3c6,
	0x9817d2f4,
	0xa823db6e,
	0x1fec5304,
	0xb6a4c52f,
	0x08125ecf,
	0xd4db3998,
	0x4f0837c1,
	0x5be9ce07,
	0xea6f49c8,
	0xc8c7229e,
	0xa0469683,
	0x401167cc,
	0x9688de8b,
	0xe3207269,
	0x0f05f001,
	0xefe8a82e,
	0x121d1336,
	0x6161e8ef,
	0xf93aae46,
	0xf7dcd095,
	0x64fa87b6,
	0x20d3a271,
	0xe091c977,
	0xd389fafb,
	0x331d7047,
	0x70c2b594,
	0xea8d2d98,
	0xcdde7754,
	0x11e1d9dd,
	0x32fc2762,
	0x56470118,
	0x755cb545,
	0x191c4b97,
	0x41b7fbbb,
	0x2f0213b6,
	0x9d856127,
	0xa6f6226c,
	0x944375db,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"sg_free_table\0"
	"kfree\0"
	"strstr\0"
	"dma_heap_get_name\0"
	"_printk\0"
	"sg_next\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"trusted_mem_api_get_region_info\0"
	"sg_alloc_table\0"
	"__mutex_init\0"
	"__get_task_comm\0"
	"sched_clock\0"
	"dma_buf_export\0"
	"seq_printf\0"
	"scnprintf\0"
	"iommu_get_domain_for_dev\0"
	"dma_unmap_sg_attrs\0"
	"__list_del_entry_valid_or_report\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"kstrndup\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__list_add_valid_or_report\0"
	"dma_map_sgtable\0"
	"trusted_mem_is_page_v2_enabled\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"of_find_compatible_node\0"
	"mtk_dma_heap_config_parse\0"
	"of_find_device_by_node\0"
	"__of_parse_phandle_with_args\0"
	"mtk_dmabuf_page_pool_create\0"
	"mtk_dmabuf_page_pool_destroy\0"
	"dma_heap_add\0"
	"dma_heap_get_dev\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"devm_kmalloc\0"
	"__alloc_pages_noprof\0"
	"_dev_info\0"
	"memstart_addr\0"
	"hang_dump_proc\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"dmabuf_rbtree_dump_by_domain\0"
	"is_pkvm_enabled\0"
	"__arm_smccc_smc\0"
	"trusted_mem_page_based_alloc\0"
	"trusted_mem_api_unref\0"
	"trusted_mem_page_based_free\0"
	"list_sort\0"
	"trusted_mem_enable_high_freq\0"
	"trusted_mem_disable_high_freq\0"
	"__free_pages\0"
	"mtk_dmabuf_page_pool_alloc\0"
	"trusted_mem_api_alloc\0"
	"mtk_dmabuf_page_pool_free\0"
	"get_pre_alloc_page_num\0"
	"__warn_printk\0"
	"ww_mutex_trylock\0"
	"ww_mutex_unlock\0"
	"trusted_mem_is_ffa_enabled\0"
	"trusted_mem_ffa_query_pa\0"
	"trusted_mem_api_query_pa\0"
	"kasan_flag_enabled\0"
	"_totalram_pages\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tmem_ffa,system_heap");


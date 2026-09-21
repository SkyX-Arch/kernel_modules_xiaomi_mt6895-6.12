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

KSYMTAB_FUNC(dma_heap_pool_prefill, "_gpl", "");
KSYMTAB_FUNC(heap_monitor_init, "_gpl", "");
KSYMTAB_FUNC(heap_monitor_exit, "_gpl", "");
KSYMTAB_FUNC(heap_monitor_proc_write, "_gpl", "");
KSYMTAB_FUNC(heap_monitor_proc_open, "_gpl", "");
KSYMTAB_FUNC(dmabuf_log_refill, "_gpl", "");
KSYMTAB_FUNC(dmabuf_log_recycle, "_gpl", "");
KSYMTAB_FUNC(mtk_register_refill_order_callback, "_gpl", "");
KSYMTAB_FUNC(dmabuf_trace_level, "_gpl", "");
KSYMTAB_FUNC(dmabuf_trace_mark_write, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_add, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_fetch, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_alloc, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_free, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_total, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_size, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_create, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_destroy, "_gpl", "");
KSYMTAB_FUNC(mtk_dmabuf_page_pool_get_size, "_gpl", "");
KSYMTAB_DATA(dma_heap_normal_total, "", "");
KSYMTAB_DATA(dmabuf_rbtree_dump_by_domain, "_gpl", "");
KSYMTAB_DATA(dma_buf_file_fops, "_gpl", "");
KSYMTAB_FUNC(mtk_dma_heap_config_parse, "_gpl", "");
KSYMTAB_FUNC(mtk_refill_heap_names, "_gpl", "");
KSYMTAB_FUNC(mtk_dma_buf_set_name, "_gpl", "");
KSYMTAB_FUNC(is_mtk_mm_heap_dmabuf, "_gpl", "");
KSYMTAB_FUNC(is_system_heap_dmabuf, "_gpl", "");
KSYMTAB_FUNC(is_uncached_dmabuf, "_gpl", "");
KSYMTAB_FUNC(is_coherent_heap_dmabuf, "_gpl", "");
KSYMTAB_DATA(hang_dump_proc, "_gpl", "");
KSYMTAB_FUNC(mtk_dmaheap_register_slc_callback, "_gpl", "");
KSYMTAB_FUNC(mtk_dmaheap_unregister_slc_callback, "_gpl", "");
KSYMTAB_FUNC(dma_buf_set_gid, "_gpl", "");
KSYMTAB_FUNC(dma_buf_get_gid, "_gpl", "");
KSYMTAB_FUNC(dma_buf_attach_ssid, "_gpl", "");

SYMBOL_CRC(dma_heap_pool_prefill, 0x477b81c9, "_gpl");
SYMBOL_CRC(heap_monitor_init, 0x12a67d04, "_gpl");
SYMBOL_CRC(heap_monitor_exit, 0x2cb1952e, "_gpl");
SYMBOL_CRC(heap_monitor_proc_write, 0xa00539f1, "_gpl");
SYMBOL_CRC(heap_monitor_proc_open, 0x718dc101, "_gpl");
SYMBOL_CRC(dmabuf_log_refill, 0x54250db0, "_gpl");
SYMBOL_CRC(dmabuf_log_recycle, 0x96979953, "_gpl");
SYMBOL_CRC(mtk_register_refill_order_callback, 0x4abdefc2, "_gpl");
SYMBOL_CRC(dmabuf_trace_level, 0xe6cc652b, "_gpl");
SYMBOL_CRC(dmabuf_trace_mark_write, 0x31d385b4, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_add, 0x60ebd2d9, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_fetch, 0x684fc1ef, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_alloc, 0xea8d2d98, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_free, 0x11e1d9dd, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_total, 0xedcd429d, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_size, 0x5af2a617, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_create, 0xb6a4c52f, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_destroy, 0x08125ecf, "_gpl");
SYMBOL_CRC(mtk_dmabuf_page_pool_get_size, 0xf32e91a4, "_gpl");
SYMBOL_CRC(dma_heap_normal_total, 0x34bdc674, "");
SYMBOL_CRC(dmabuf_rbtree_dump_by_domain, 0x121d1336, "_gpl");
SYMBOL_CRC(dma_buf_file_fops, 0x5c6980e3, "_gpl");
SYMBOL_CRC(mtk_dma_heap_config_parse, 0x9817d2f4, "_gpl");
SYMBOL_CRC(mtk_refill_heap_names, 0xf175f705, "_gpl");
SYMBOL_CRC(mtk_dma_buf_set_name, 0x0904e8ad, "_gpl");
SYMBOL_CRC(is_mtk_mm_heap_dmabuf, 0xe088de5b, "_gpl");
SYMBOL_CRC(is_system_heap_dmabuf, 0x341914a8, "_gpl");
SYMBOL_CRC(is_uncached_dmabuf, 0xca2835bb, "_gpl");
SYMBOL_CRC(is_coherent_heap_dmabuf, 0x6028a171, "_gpl");
SYMBOL_CRC(hang_dump_proc, 0xe3207269, "_gpl");
SYMBOL_CRC(mtk_dmaheap_register_slc_callback, 0xb10ff7e1, "_gpl");
SYMBOL_CRC(mtk_dmaheap_unregister_slc_callback, 0x2b0b4518, "_gpl");
SYMBOL_CRC(dma_buf_set_gid, 0x8ee95444, "_gpl");
SYMBOL_CRC(dma_buf_get_gid, 0x9d5dbbcf, "_gpl");
SYMBOL_CRC(dma_buf_attach_ssid, 0x38075705, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x92d36a79, "sched_set_normal" },
	{ 0x2e6bbe14, "shrinker_alloc" },
	{ 0x0e9852fe, "shrinker_register" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0x5a921311, "strncmp" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xed3a3cb3, "dma_heap_get_name" },
	{ 0x067e2f47, "dma_heap_put" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xf39b6569, "dma_heap_get_drvdata" },
	{ 0x999e8297, "vfree" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8b9c34da, "single_open" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x00148653, "vsnprintf" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x69230943, "contig_page_data" },
	{ 0xba0676e2, "vm_zone_stat" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x727e99ae, "mod_node_page_state" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0xa0469683, "__alloc_pages_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x70c2b594, "__free_pages" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0x4cddd29e, "dma_map_sgtable" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0x755cb545, "ww_mutex_trylock" },
	{ 0x191c4b97, "ww_mutex_unlock" },
	{ 0x0562dc30, "__sg_page_iter_start" },
	{ 0x7ef4bddc, "__sg_page_iter_next" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0x7ee25d67, "vmap" },
	{ 0x94961283, "vunmap" },
	{ 0x3c115359, "__swiotlb_find_pool" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xd4db3998, "dma_heap_add" },
	{ 0x4f0837c1, "dma_heap_get_dev" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xff2cba95, "__get_task_comm" },
	{ 0x0d89e2f7, "dma_buf_export" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0xe2964344,
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0x92997ed8,
	0x92d36a79,
	0x2e6bbe14,
	0x0e9852fe,
	0x7e19152a,
	0xd35cce70,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x9a835040,
	0x7e688f68,
	0x5a921311,
	0xeff75c0b,
	0xed3a3cb3,
	0x067e2f47,
	0xb3f7646e,
	0xe94986d6,
	0xe49fbbe6,
	0x69020168,
	0xba8fbd64,
	0xb5b54b34,
	0xe0da6e4a,
	0x57c959d2,
	0x1b2fa1a9,
	0xf39b6569,
	0x999e8297,
	0xbcab6ee6,
	0x8b9c34da,
	0x785a93b4,
	0x29eba14a,
	0x00148653,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x75ca79b5,
	0x88db9f48,
	0x2be0c009,
	0x98cf60b3,
	0xc8f2ae9d,
	0x40c7247c,
	0xf70e4a4d,
	0x0f05f001,
	0x69230943,
	0xba0676e2,
	0xac594e02,
	0x727e99ae,
	0xd5977bfb,
	0xed55cabd,
	0x037a0cba,
	0xa0469683,
	0xe17134b6,
	0x52c5c991,
	0x70c2b594,
	0x203392c6,
	0xf5edea2e,
	0xefe8a82e,
	0x14fe5355,
	0xaf7cb74b,
	0x9eacf8a5,
	0xfff4bd7c,
	0x6b201699,
	0xe136f93c,
	0xb3f985a8,
	0xfbe215e4,
	0xc8c85086,
	0xd3cc3c5d,
	0x56470118,
	0xdd2ef3e5,
	0x4cddd29e,
	0xfa501412,
	0xc6970ad9,
	0x755cb545,
	0x191c4b97,
	0x0562dc30,
	0x7ef4bddc,
	0xc63b0ac3,
	0x7ee25d67,
	0x94961283,
	0x3c115359,
	0x12db679a,
	0xf3cdc3c6,
	0xd4db3998,
	0x4f0837c1,
	0xfb384d37,
	0x5be9ce07,
	0xea6f49c8,
	0xc8c7229e,
	0xa571f6b0,
	0xff2cba95,
	0x0d89e2f7,
	0x6fc35f2b,
	0xa6f6226c,
	0x9688de8b,
	0xaf56600a,
	0x944375db,
	0xf0fdf6cb,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"__wake_up\0"
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"_printk\0"
	"sched_set_normal\0"
	"shrinker_alloc\0"
	"shrinker_register\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__list_del_entry_valid_or_report\0"
	"sched_setscheduler\0"
	"strncmp\0"
	"dma_heap_find\0"
	"dma_heap_get_name\0"
	"dma_heap_put\0"
	"kthread_should_stop\0"
	"sched_clock\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_buffer_free\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"vmalloc_noprof\0"
	"dma_heap_get_drvdata\0"
	"vfree\0"
	"sscanf\0"
	"single_open\0"
	"si_mem_available\0"
	"trace_event_buffer_reserve\0"
	"vsnprintf\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"strlen\0"
	"seq_printf\0"
	"si_meminfo\0"
	"preempt_schedule_notrace\0"
	"mem_alloc_profiling_key\0"
	"contig_page_data\0"
	"vm_zone_stat\0"
	"__cpu_online_mask\0"
	"mod_node_page_state\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"__alloc_pages_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__free_pages\0"
	"mutex_trylock\0"
	"___ratelimit\0"
	"kmalloc_caches\0"
	"of_device_get_match_data\0"
	"of_property_read_string\0"
	"kstrndup\0"
	"dma_buf_attach\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"sg_alloc_table\0"
	"sg_next\0"
	"sg_free_table\0"
	"iommu_get_domain_for_dev\0"
	"__warn_printk\0"
	"__dma_sync_sg_for_device\0"
	"dma_map_sgtable\0"
	"__dma_sync_sg_for_cpu\0"
	"dma_unmap_sg_attrs\0"
	"ww_mutex_trylock\0"
	"ww_mutex_unlock\0"
	"__sg_page_iter_start\0"
	"__sg_page_iter_next\0"
	"remap_pfn_range\0"
	"vmap\0"
	"vunmap\0"
	"__swiotlb_find_pool\0"
	"__platform_driver_register\0"
	"of_find_compatible_node\0"
	"dma_heap_add\0"
	"dma_heap_get_dev\0"
	"kasprintf\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"devm_kmalloc\0"
	"__mutex_init\0"
	"__get_task_comm\0"
	"dma_buf_export\0"
	"platform_driver_unregister\0"
	"kasan_flag_enabled\0"
	"memstart_addr\0"
	"arm64_use_ng_mappings\0"
	"_totalram_pages\0"
	"__stack_chk_fail\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


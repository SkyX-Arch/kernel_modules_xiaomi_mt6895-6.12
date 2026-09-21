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
	{ 0xe2964344, "__wake_up" },
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xf9a482f9, "msleep" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0xba95b4d5, "dev_kfree_skb_any_reason" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xdf115faa, "__folio_put" },
	{ 0x3d21099d, "__page_pinner_put_page" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xe8165471, "__netdev_alloc_skb" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x56470118, "__warn_printk" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x91a488ac, "__netdev_alloc_frag_align" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xacfe4142, "page_pinner_inited" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa0e7e691, "ccci_get_per_md_data" },
	{ 0x809ca784, "ccci_md_force_assert" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x17b4c17b, "ccci_hif_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x037a0cba, "kfree" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0xaba63322, "of_iomap" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5ccfc658, "ccmni_set_cur_speed" },
	{ 0x8ffdfa58, "slbc_disable_dcc" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x019f121b, "__dma_sync_single_for_cpu" },
	{ 0x7594d536, "skb_put" },
	{ 0xc155ec1a, "skb_add_rx_frag_netmem" },
	{ 0x400398ef, "kfree_skb_partial" },
	{ 0x1966c223, "ccci_util_mem_dump" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x991f0960, "ccmni_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0xb4028d67, "proc_create" },
	{ 0x6bbc67ef, "ccci_set_dpmaif_debug_cb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x349cba85, "strchr" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xcab9bc76, "get_md_resv_mem_info" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0x13275205, "get_smem_start_addr" },
	{ 0x3e1bb677, "ccci_get_md_view_phy_addr_by_user_id" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xdc364ce8, "register_ccif_irq_cb" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x1e247e2f, "ccif_mask_setting" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0x5c3524de, "dvfsrc_get_required_opp_peak_bw" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x4d768812, "ccmni_set_init_rps" },
	{ 0x51786ad8, "__irq_apply_affinity_hint" },
	{ 0xe357c0cc, "set_ccmni_rps" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe2964344,
	0xba637490,
	0x92997ed8,
	0x102fe6de,
	0xf9a482f9,
	0xea82d349,
	0xeae3dfd6,
	0xff732842,
	0xba95b4d5,
	0x75ca79b5,
	0xdf115faa,
	0x3d21099d,
	0xe94986d6,
	0xe8165471,
	0xc31db0ce,
	0x56470118,
	0xba72f076,
	0x7cc1c7f4,
	0xc0b7c197,
	0x91a488ac,
	0xe17134b6,
	0x52c5c991,
	0x5a9cfed6,
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xb3f7646e,
	0xe136f93c,
	0xacfe4142,
	0xa6f6226c,
	0x0f05f001,
	0xefe8a82e,
	0x96848186,
	0x8c0215f2,
	0x34db050b,
	0x9ec6ca96,
	0x356461c8,
	0xd35cce70,
	0xa0e7e691,
	0x809ca784,
	0x12db679a,
	0x0f314d3e,
	0x17b4c17b,
	0xc6f46339,
	0x037a0cba,
	0xa1fd40f1,
	0xaba63322,
	0xf3cdc3c6,
	0x5ccfc658,
	0x8ffdfa58,
	0x7c611278,
	0x019f121b,
	0x7594d536,
	0xc155ec1a,
	0x400398ef,
	0x1966c223,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x3e3bad0a,
	0xc8c7229e,
	0xea23ff02,
	0x14de1090,
	0xc38c83b8,
	0x2364c85a,
	0xce2840e7,
	0x92d5838e,
	0x3ce4ca6f,
	0x37befc70,
	0xbede130a,
	0x64311477,
	0x6b883e5a,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x24f00fda,
	0xfcec0987,
	0xdc0e4855,
	0xb39378cc,
	0xf93aae46,
	0x991f0960,
	0x15ba50a6,
	0xfe5d4bb2,
	0xdd115996,
	0xb4028d67,
	0x6bbc67ef,
	0x656e4a6e,
	0x1b2fa1a9,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x349cba85,
	0x1e6d26a8,
	0x3b6c41ea,
	0x9688de8b,
	0xe4bbc1dd,
	0xcab9bc76,
	0xba8fbd64,
	0xb5b54b34,
	0x5cf50b74,
	0x40863ba1,
	0x18b48e28,
	0xaf56600a,
	0x9e87b2ff,
	0x598dfa08,
	0x13275205,
	0x3e1bb677,
	0xffeedf6a,
	0x49cd25ed,
	0xdc364ce8,
	0xf77555cd,
	0x1e247e2f,
	0x42ad47ad,
	0x1af93d4f,
	0x5c3524de,
	0x95bab132,
	0xf8bd87ca,
	0xdb4e2667,
	0x49eaeb64,
	0xde7ece30,
	0x4d768812,
	0x51786ad8,
	0xe357c0cc,
	0xa65c6def,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__wake_up\0"
	"ccci_dump_write\0"
	"_printk\0"
	"hrtimer_cancel\0"
	"msleep\0"
	"hrtimer_init\0"
	"__const_udelay\0"
	"dma_unmap_page_attrs\0"
	"dev_kfree_skb_any_reason\0"
	"__fortify_panic\0"
	"__folio_put\0"
	"__page_pinner_put_page\0"
	"sched_clock\0"
	"__netdev_alloc_skb\0"
	"is_vmalloc_addr\0"
	"__warn_printk\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"hrtimer_start_range_ns\0"
	"__netdev_alloc_frag_align\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"dma_alloc_attrs\0"
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"kthread_should_stop\0"
	"of_property_read_variable_u32_array\0"
	"page_pinner_inited\0"
	"kasan_flag_enabled\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"scnprintf\0"
	"pm_system_wakeup\0"
	"_raw_spin_lock_irqsave\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"_raw_spin_unlock_irqrestore\0"
	"ccci_get_per_md_data\0"
	"ccci_md_force_assert\0"
	"__platform_driver_register\0"
	"wakeup_source_register\0"
	"ccci_hif_register\0"
	"init_timer_key\0"
	"kfree\0"
	"syscon_regmap_lookup_by_phandle\0"
	"of_iomap\0"
	"of_find_compatible_node\0"
	"ccmni_set_cur_speed\0"
	"slbc_disable_dcc\0"
	"irq_of_parse_and_map\0"
	"__dma_sync_single_for_cpu\0"
	"skb_put\0"
	"skb_add_rx_frag_netmem\0"
	"kfree_skb_partial\0"
	"ccci_util_mem_dump\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__tasklet_hi_schedule\0"
	"devm_kmalloc\0"
	"devm_clk_get\0"
	"mt_irq_dump_status\0"
	"mod_timer\0"
	"tasklet_init\0"
	"irq_set_irq_wake\0"
	"request_threaded_irq\0"
	"disable_irq\0"
	"jiffies_to_msecs\0"
	"pm_wakeup_ws_event\0"
	"regmap_read\0"
	"regmap_write\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"set_cpus_allowed_ptr\0"
	"enable_irq\0"
	"timer_delete\0"
	"kthread_stop\0"
	"__arm_smccc_smc\0"
	"ccmni_ops\0"
	"jiffies\0"
	"sys_tz\0"
	"mrdump_mini_add_extra_file\0"
	"proc_create\0"
	"ccci_set_dpmaif_debug_cb\0"
	"snprintf\0"
	"vmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"strchr\0"
	"strstr\0"
	"kstrtouint\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"get_md_resv_mem_info\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"of_reserved_mem_lookup\0"
	"ioremap_prot\0"
	"__memset_io\0"
	"arm64_use_ng_mappings\0"
	"cancel_delayed_work\0"
	"flush_delayed_work\0"
	"get_smem_start_addr\0"
	"ccci_get_md_view_phy_addr_by_user_id\0"
	"delayed_work_timer_fn\0"
	"alloc_workqueue\0"
	"register_ccif_irq_cb\0"
	"__memcpy_toio\0"
	"ccif_mask_setting\0"
	"queue_delayed_work_on\0"
	"freq_qos_update_request\0"
	"dvfsrc_get_required_opp_peak_bw\0"
	"icc_set_bw\0"
	"cpufreq_cpu_get\0"
	"freq_qos_add_request\0"
	"of_icc_get\0"
	"__cpu_possible_mask\0"
	"ccmni_set_init_rps\0"
	"__irq_apply_affinity_hint\0"
	"set_ccmni_rps\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib,ccci_md_all,ccmni,mtk_slbc,irq-dbg,mrdump,ccci_ccif,mtk-dvfsrc");


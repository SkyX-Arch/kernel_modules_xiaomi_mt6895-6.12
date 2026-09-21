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
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8bdc5822, "ccci_port_dump_status" },
	{ 0x9d81d651, "ccci_dump_skb_pool_usage" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xa0e7e691, "ccci_get_per_md_data" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x1966c223, "ccci_util_mem_dump" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x037a0cba, "kfree" },
	{ 0xaba63322, "of_iomap" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x17b4c17b, "ccci_hif_register" },
	{ 0x5ccfc658, "ccmni_set_cur_speed" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x3b31bb5b, "ccci_fsm_get_md_state" },
	{ 0x74095342, "ccci_md_dump_log_history" },
	{ 0x8bdffccb, "dma_pool_create" },
	{ 0x3bee7bd2, "skb_pull" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x56470118, "__warn_printk" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x095bcefe, "skb_push" },
	{ 0x228a686e, "ccci_free_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x937c158a, "ccci_alloc_skb" },
	{ 0x7594d536, "skb_put" },
	{ 0x36e7ce2d, "ccci_skb_enqueue" },
	{ 0x2dfad08c, "ccci_md_add_log_history" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb92dd0be, "ccci_skb_queue_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc678f1c6, "ccci_skb_dequeue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0x710d2d97, "ccci_md_get_smem_by_user_id" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x991f0960, "ccmni_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xba637490,
	0x92997ed8,
	0x64311477,
	0x6b883e5a,
	0x34db050b,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xd35cce70,
	0x8bdc5822,
	0x9d81d651,
	0xc38c83b8,
	0xfcec0987,
	0x3ce4ca6f,
	0x27bbf221,
	0xa0e7e691,
	0xf3cdc3c6,
	0xe136f93c,
	0x1966c223,
	0xa1fd40f1,
	0x7c611278,
	0x037a0cba,
	0xaba63322,
	0xea23ff02,
	0x2364c85a,
	0x49cd25ed,
	0xc6f46339,
	0xb9c425de,
	0x17b4c17b,
	0x5ccfc658,
	0x441d0de9,
	0xe17134b6,
	0x3e3bad0a,
	0x3b31bb5b,
	0x74095342,
	0x8bdffccb,
	0x3bee7bd2,
	0xc31db0ce,
	0x56470118,
	0xba72f076,
	0x7cc1c7f4,
	0xba8fbd64,
	0xb5b54b34,
	0x095bcefe,
	0x228a686e,
	0xe2964344,
	0xff732842,
	0x678b96ec,
	0x7e19152a,
	0x937c158a,
	0x7594d536,
	0x36e7ce2d,
	0x2dfad08c,
	0x2f7754a8,
	0x92d5838e,
	0xe94986d6,
	0x42ad47ad,
	0xffeedf6a,
	0xb92dd0be,
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xb3f7646e,
	0xc678f1c6,
	0x2f2c95c4,
	0x598dfa08,
	0x710d2d97,
	0xeae3dfd6,
	0xc5b6f236,
	0x12db679a,
	0x991f0960,
	0x15ba50a6,
	0x0f05f001,
	0xefe8a82e,
	0xa6f6226c,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ccci_dump_write\0"
	"_printk\0"
	"regmap_read\0"
	"regmap_write\0"
	"_raw_spin_lock_irqsave\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"ccci_port_dump_status\0"
	"ccci_dump_skb_pool_usage\0"
	"mod_timer\0"
	"enable_irq\0"
	"disable_irq\0"
	"disable_irq_nosync\0"
	"ccci_get_per_md_data\0"
	"of_find_compatible_node\0"
	"of_property_read_variable_u32_array\0"
	"ccci_util_mem_dump\0"
	"syscon_regmap_lookup_by_phandle\0"
	"irq_of_parse_and_map\0"
	"kfree\0"
	"of_iomap\0"
	"devm_clk_get\0"
	"tasklet_init\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"register_syscore_ops\0"
	"ccci_hif_register\0"
	"ccmni_set_cur_speed\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__tasklet_hi_schedule\0"
	"ccci_fsm_get_md_state\0"
	"ccci_md_dump_log_history\0"
	"dma_pool_create\0"
	"skb_pull\0"
	"is_vmalloc_addr\0"
	"__warn_printk\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"skb_push\0"
	"ccci_free_skb\0"
	"__wake_up\0"
	"dma_unmap_page_attrs\0"
	"dma_pool_alloc\0"
	"__list_add_valid_or_report\0"
	"ccci_alloc_skb\0"
	"skb_put\0"
	"ccci_skb_enqueue\0"
	"ccci_md_add_log_history\0"
	"dma_pool_free\0"
	"request_threaded_irq\0"
	"sched_clock\0"
	"queue_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"ccci_skb_queue_init\0"
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"kthread_should_stop\0"
	"ccci_skb_dequeue\0"
	"flush_work\0"
	"flush_delayed_work\0"
	"ccci_md_get_smem_by_user_id\0"
	"__const_udelay\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"ccmni_ops\0"
	"jiffies\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"kasan_flag_enabled\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib,ccci_md_all,ccmni");


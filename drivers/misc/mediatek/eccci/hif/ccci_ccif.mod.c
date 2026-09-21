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

KSYMTAB_FUNC(ccci_ccif_send_notify, "", "");
KSYMTAB_FUNC(register_ccif_irq_cb, "", "");
KSYMTAB_FUNC(ccif_mask_setting, "", "");

SYMBOL_CRC(ccci_ccif_send_notify, 0x958fd6e3, "");
SYMBOL_CRC(register_ccif_irq_cb, 0xdc364ce8, "");
SYMBOL_CRC(ccif_mask_setting, 0x1e247e2f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x710d2d97, "ccci_md_get_smem_by_user_id" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x037a0cba, "kfree" },
	{ 0x17b4c17b, "ccci_hif_register" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x937c158a, "ccci_alloc_skb" },
	{ 0x7594d536, "skb_put" },
	{ 0x3a4efb3c, "ccci_port_recv_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x228a686e, "ccci_free_skb" },
	{ 0x809ca784, "ccci_md_force_assert" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x1966c223, "ccci_util_mem_dump" },
	{ 0x74095342, "ccci_md_dump_log_history" },
	{ 0x98264bb3, "ccci_port_queue_status_notify" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8bdc5822, "ccci_port_dump_status" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa0e7e691, "ccci_get_per_md_data" },
	{ 0x2dfad08c, "ccci_md_add_log_history" },
	{ 0x3b31bb5b, "ccci_fsm_get_md_state" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d39d790, "md_fsm_exp_info" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaa217d98, "ccci_port_get_dev_name" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xf1fa39ed, "ccci_hif" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x96848186, "scnprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0xba637490,
	0x92997ed8,
	0x6b883e5a,
	0x710d2d97,
	0xc6f46339,
	0x037a0cba,
	0x17b4c17b,
	0x6b722180,
	0x0c1a5ee3,
	0xd35cce70,
	0xc905402b,
	0xfa4d3c24,
	0x441d0de9,
	0xe17134b6,
	0x937c158a,
	0x7594d536,
	0x3a4efb3c,
	0xeae3dfd6,
	0x228a686e,
	0x809ca784,
	0x14de1090,
	0x1966c223,
	0x74095342,
	0x98264bb3,
	0xe94986d6,
	0xc5b6f236,
	0x8bdc5822,
	0x656e4a6e,
	0xc38c83b8,
	0xa0e7e691,
	0x2dfad08c,
	0x3b31bb5b,
	0xce2840e7,
	0x92d5838e,
	0x5d39d790,
	0x18b48e28,
	0x49cd25ed,
	0xaa217d98,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x2f2c95c4,
	0xdc0e4855,
	0xfcec0987,
	0xe2d5255a,
	0xb6e6d99d,
	0x27bbf221,
	0xf3cdc3c6,
	0xa1fd40f1,
	0xaba63322,
	0x7c611278,
	0xe136f93c,
	0xea23ff02,
	0x12db679a,
	0xf93aae46,
	0xf1fa39ed,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0x15ba50a6,
	0x96848186,
	0xdcb764ad,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"ccci_dump_write\0"
	"_printk\0"
	"regmap_write\0"
	"ccci_md_get_smem_by_user_id\0"
	"init_timer_key\0"
	"kfree\0"
	"ccci_hif_register\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"ccci_alloc_skb\0"
	"skb_put\0"
	"ccci_port_recv_skb\0"
	"__const_udelay\0"
	"ccci_free_skb\0"
	"ccci_md_force_assert\0"
	"mt_irq_dump_status\0"
	"ccci_util_mem_dump\0"
	"ccci_md_dump_log_history\0"
	"ccci_port_queue_status_notify\0"
	"sched_clock\0"
	"queue_work_on\0"
	"ccci_port_dump_status\0"
	"snprintf\0"
	"mod_timer\0"
	"ccci_get_per_md_data\0"
	"ccci_md_add_log_history\0"
	"ccci_fsm_get_md_state\0"
	"irq_set_irq_wake\0"
	"request_threaded_irq\0"
	"md_fsm_exp_info\0"
	"__memset_io\0"
	"alloc_workqueue\0"
	"ccci_port_get_dev_name\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"flush_work\0"
	"timer_delete\0"
	"enable_irq\0"
	"strcmp\0"
	"clk_disable\0"
	"disable_irq_nosync\0"
	"of_find_compatible_node\0"
	"syscon_regmap_lookup_by_phandle\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"of_property_read_variable_u32_array\0"
	"devm_clk_get\0"
	"__platform_driver_register\0"
	"__arm_smccc_smc\0"
	"ccci_hif\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"jiffies\0"
	"scnprintf\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib,ccci_md_all,irq-dbg");


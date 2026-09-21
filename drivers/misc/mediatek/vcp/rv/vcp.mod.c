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

KSYMTAB_DATA(driver_init_done, "_gpl", "");
KSYMTAB_DATA(vcp_mboxdev, "", "");
KSYMTAB_FUNC(vcp_wdt_reset, "", "");
KSYMTAB_FUNC(wait_vcp_ready_to_reboot, "_gpl", "");
KSYMTAB_DATA(feature_table, "", "");
KSYMTAB_FUNC(vcp_awake_lock, "_gpl", "");
KSYMTAB_FUNC(vcp_awake_unlock, "_gpl", "");
KSYMTAB_FUNC(vcp_clr_spm_reg, "_gpl", "");

SYMBOL_CRC(driver_init_done, 0x9ad5a53f, "_gpl");
SYMBOL_CRC(vcp_mboxdev, 0x616a0e87, "");
SYMBOL_CRC(vcp_wdt_reset, 0xe3be3656, "");
SYMBOL_CRC(wait_vcp_ready_to_reboot, 0x8bfbb23a, "_gpl");
SYMBOL_CRC(feature_table, 0x7d265576, "");
SYMBOL_CRC(vcp_awake_lock, 0x09ef1141, "_gpl");
SYMBOL_CRC(vcp_awake_unlock, 0x48329784, "_gpl");
SYMBOL_CRC(vcp_clr_spm_reg, 0xcde52a57, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0xe808d22f, "mtk_clk_mminfra_hwv_power_ctrl_optional" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x367365db, "mt_get_fmeter_freq" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x5a0cc31b, "vcp_set_fp" },
	{ 0x418cddcd, "register_devapc_power_callback" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x401167cc, "_dev_info" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0x656cde9e, "mtk_mbox_probe" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92e3b6d1, "mtk_ipi_device_register" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6b201699, "of_find_property" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x037a0cba, "kfree" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x1d222ced, "irq_get_irqchip_state" },
	{ 0x25758a2c, "misc_register" },
	{ 0x7181c4e7, "device_create_bin_file" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x97680f44, "aed_common_exception_api" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa6257a2f, "complete" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0x92997ed8,
	0xe808d22f,
	0xd5977bfb,
	0xd9051672,
	0xed55cabd,
	0x3e54ac69,
	0x05590c04,
	0x203392c6,
	0xeae3dfd6,
	0x367365db,
	0x689f7bde,
	0x6db70f53,
	0x9166fc03,
	0x2396c7f0,
	0xc569d8ce,
	0x24d273d1,
	0xf93aae46,
	0x482d47c8,
	0x4e8b8def,
	0xc38c83b8,
	0x49cd25ed,
	0x40863ba1,
	0x0f314d3e,
	0x14de1090,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xd35cce70,
	0xc5b6f236,
	0xe2d5255a,
	0xc3055d20,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x4eb4c414,
	0xfcec0987,
	0x3ce4ca6f,
	0x350f6ce5,
	0xdc0e4855,
	0x13269d10,
	0xb6e6d99d,
	0x3b6c41ea,
	0xc6f46339,
	0x12db679a,
	0x65bb94f6,
	0x75966ec2,
	0x5a0cc31b,
	0x418cddcd,
	0x6fc35f2b,
	0xd4e81a21,
	0x401167cc,
	0x374f8976,
	0x9f0ef8fa,
	0xaf7cb74b,
	0x9e400c59,
	0x656cde9e,
	0xf3cdc3c6,
	0x7c611278,
	0x92e3b6d1,
	0xa823db6e,
	0x0be515ae,
	0xea23ff02,
	0xe136f93c,
	0x92d5838e,
	0xce2840e7,
	0xbee3ddd5,
	0x31b65f04,
	0xa079425d,
	0x5cf50b74,
	0xdd115996,
	0x5be9ce07,
	0xea6f49c8,
	0xc8c7229e,
	0xeff75c0b,
	0xe49fbbe6,
	0x0904e8ad,
	0x18500fa9,
	0xfff4bd7c,
	0x69020168,
	0xe70e1ef3,
	0xecbe3c62,
	0x1fec5304,
	0x6b201699,
	0xcd6bda8d,
	0x037a0cba,
	0x5c27c40f,
	0x1d222ced,
	0x25758a2c,
	0x7181c4e7,
	0xc1514a3b,
	0xc3246938,
	0x8c03d20c,
	0x15ba50a6,
	0xaf56600a,
	0x0f05f001,
	0x97680f44,
	0xa571f6b0,
	0x1b2fa1a9,
	0x999e8297,
	0xe17134b6,
	0x656e4a6e,
	0x75ca79b5,
	0xa6257a2f,
	0xefe8a82e,
	0x27bbf221,
	0x9d2ab8ac,
	0xd9a5ea54,
	0x4a353d20,
	0xe94986d6,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xbcab6ee6,
	0x88db9f48,
	0x2be0c009,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"_printk\0"
	"mtk_clk_mminfra_hwv_power_ctrl_optional\0"
	"mutex_lock\0"
	"blocking_notifier_chain_register\0"
	"mutex_unlock\0"
	"blocking_notifier_chain_unregister\0"
	"__pm_relax\0"
	"mutex_trylock\0"
	"__const_udelay\0"
	"mt_get_fmeter_freq\0"
	"mtk_smi_dbg_hang_detect\0"
	"mtk_ipi_send_compl\0"
	"__flush_workqueue\0"
	"clk_set_parent\0"
	"__clk_get_name\0"
	"add_timer\0"
	"__arm_smccc_smc\0"
	"blocking_notifier_call_chain\0"
	"__pm_stay_awake\0"
	"mod_timer\0"
	"alloc_workqueue\0"
	"ioremap_prot\0"
	"wakeup_source_register\0"
	"mt_irq_dump_status\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"queue_work_on\0"
	"strcmp\0"
	"usleep_range_state\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"__pm_runtime_resume\0"
	"enable_irq\0"
	"disable_irq\0"
	"tasklet_unlock_wait\0"
	"timer_delete\0"
	"__pm_runtime_idle\0"
	"clk_disable\0"
	"kstrtouint\0"
	"init_timer_key\0"
	"__platform_driver_register\0"
	"mtk_ipi_register\0"
	"register_pm_notifier\0"
	"vcp_set_fp\0"
	"register_devapc_power_callback\0"
	"platform_driver_unregister\0"
	"pm_runtime_enable\0"
	"_dev_info\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"of_property_read_string\0"
	"platform_get_irq_byname\0"
	"mtk_mbox_probe\0"
	"of_find_compatible_node\0"
	"irq_of_parse_and_map\0"
	"mtk_ipi_device_register\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"devm_clk_get\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"irq_set_irq_wake\0"
	"vzalloc_noprof\0"
	"of_property_read_u32_index\0"
	"of_property_count_elems_of_size\0"
	"of_reserved_mem_lookup\0"
	"mrdump_mini_add_extra_file\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"devm_kmalloc\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"mtk_dma_buf_set_name\0"
	"dma_buf_vmap_unlocked\0"
	"dma_buf_attach\0"
	"dma_heap_buffer_free\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"__of_parse_phandle_with_args\0"
	"of_find_property\0"
	"of_property_read_string_helper\0"
	"kfree\0"
	"__pm_runtime_disable\0"
	"irq_get_irqchip_state\0"
	"misc_register\0"
	"device_create_bin_file\0"
	"free_irq\0"
	"misc_deregister\0"
	"destroy_workqueue\0"
	"jiffies\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"aed_common_exception_api\0"
	"__mutex_init\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"__kmalloc_cache_noprof\0"
	"snprintf\0"
	"__fortify_panic\0"
	"complete\0"
	"kmalloc_caches\0"
	"disable_irq_nosync\0"
	"__tasklet_schedule\0"
	"__init_waitqueue_head\0"
	"mtk_ipi_send\0"
	"sched_clock\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"sscanf\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common,mtk-smi-dbg,mtk_tinysys_ipi,irq-dbg,vcp_status,device-apc-common,mtk-mbox,mrdump,system_heap,aee_aed");


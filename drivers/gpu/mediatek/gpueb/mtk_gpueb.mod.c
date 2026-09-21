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

KSYMTAB_FUNC(gpueb_get_gpr_base, "", "");
KSYMTAB_FUNC(gpueb_get_gpr_addr, "", "");
KSYMTAB_FUNC(gpueb_get_cfgreg_base, "", "");
KSYMTAB_FUNC(get_mfg0_pwr_con, "", "");
KSYMTAB_FUNC(mfg0_pwr_sta, "", "");
KSYMTAB_FUNC(is_gpueb_wfi, "", "");
KSYMTAB_FUNC(gpueb_get_send_PIN_ID_by_name, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_recv_PIN_ID_by_name, "_gpl", "");
KSYMTAB_FUNC(get_gpueb_ipidev, "_gpl", "");
KSYMTAB_FUNC(get_gpueb_slot_size, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_mbox1_irq, "_gpl", "");
KSYMTAB_FUNC(gpueb_clr_mbox1_irq, "_gpl", "");
KSYMTAB_FUNC(mtk_ipi_send_compl_to_gpueb, "", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_phys, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_virt, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_size, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_phys_by_name, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_virt_by_name, "_gpl", "");
KSYMTAB_FUNC(gpueb_get_reserve_mem_size_by_name, "_gpl", "");
KSYMTAB_FUNC(gpueb_dump_status, "", "");
KSYMTAB_FUNC(gpueb_trigger_wdt, "", "");
KSYMTAB_FUNC(gpueb_timesync_update, "", "");
KSYMTAB_DATA(g_ghpm_support, "", "");
KSYMTAB_DATA(g_ghpm_ready, "", "");
KSYMTAB_DATA(g_ghpm_profile, "", "");
KSYMTAB_FUNC(ghpm_ctrl, "", "");
KSYMTAB_FUNC(wait_gpueb, "", "");
KSYMTAB_FUNC(gpueb_ctrl, "", "");
KSYMTAB_FUNC(dump_ghpm_info, "", "");
KSYMTAB_FUNC(ghpm_profile, "", "");
KSYMTAB_FUNC(ghpm_register_ghpm_fp, "", "");

SYMBOL_CRC(gpueb_get_gpr_base, 0x73fab30b, "");
SYMBOL_CRC(gpueb_get_gpr_addr, 0x8e2e086a, "");
SYMBOL_CRC(gpueb_get_cfgreg_base, 0xf83a12f4, "");
SYMBOL_CRC(get_mfg0_pwr_con, 0xb2908db8, "");
SYMBOL_CRC(mfg0_pwr_sta, 0xdc035859, "");
SYMBOL_CRC(is_gpueb_wfi, 0xd5dba3b3, "");
SYMBOL_CRC(gpueb_get_send_PIN_ID_by_name, 0x2fae0e87, "_gpl");
SYMBOL_CRC(gpueb_get_recv_PIN_ID_by_name, 0xa3c8b3eb, "_gpl");
SYMBOL_CRC(get_gpueb_ipidev, 0x0fbee3af, "_gpl");
SYMBOL_CRC(get_gpueb_slot_size, 0x7eb9fa5e, "_gpl");
SYMBOL_CRC(gpueb_get_mbox1_irq, 0x22a34dcd, "_gpl");
SYMBOL_CRC(gpueb_clr_mbox1_irq, 0xffaac8ca, "_gpl");
SYMBOL_CRC(mtk_ipi_send_compl_to_gpueb, 0xe82761d1, "");
SYMBOL_CRC(gpueb_get_reserve_mem_phys, 0x3a79b591, "_gpl");
SYMBOL_CRC(gpueb_get_reserve_mem_virt, 0xaf1e7cbc, "_gpl");
SYMBOL_CRC(gpueb_get_reserve_mem_size, 0xbdece69c, "_gpl");
SYMBOL_CRC(gpueb_get_reserve_mem_phys_by_name, 0xc198ee9a, "_gpl");
SYMBOL_CRC(gpueb_get_reserve_mem_virt_by_name, 0x030a5b06, "_gpl");
SYMBOL_CRC(gpueb_get_reserve_mem_size_by_name, 0x8654170c, "_gpl");
SYMBOL_CRC(gpueb_dump_status, 0x14501464, "");
SYMBOL_CRC(gpueb_trigger_wdt, 0x948f7216, "");
SYMBOL_CRC(gpueb_timesync_update, 0x92be75f3, "");
SYMBOL_CRC(g_ghpm_support, 0xb4d94b72, "");
SYMBOL_CRC(g_ghpm_ready, 0x5ce8b943, "");
SYMBOL_CRC(g_ghpm_profile, 0x69958ceb, "");
SYMBOL_CRC(ghpm_ctrl, 0x9c0ab546, "");
SYMBOL_CRC(wait_gpueb, 0x9d74018f, "");
SYMBOL_CRC(gpueb_ctrl, 0x48b39160, "");
SYMBOL_CRC(dump_ghpm_info, 0x83729009, "");
SYMBOL_CRC(ghpm_profile, 0xbfc29da5, "");
SYMBOL_CRC(ghpm_register_ghpm_fp, 0xe8315c14, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xbef74f76, "of_find_matching_node_and_match" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x25758a2c, "misc_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x3eb78627, "ipi_monitor_dump" },
	{ 0x656cde9e, "mtk_mbox_probe" },
	{ 0x0843a757, "mtk_smem_init" },
	{ 0x92e3b6d1, "mtk_ipi_device_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x6b201699, "of_find_property" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x8be40ba0, "mtk_mbox_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0x92997ed8,
	0x374f8976,
	0xee73d233,
	0x49cd25ed,
	0xbef74f76,
	0xe136f93c,
	0x25758a2c,
	0xe922b94d,
	0x6fc35f2b,
	0x3eb78627,
	0x656cde9e,
	0x0843a757,
	0x92e3b6d1,
	0xe2d5255a,
	0x6db70f53,
	0x6b201699,
	0xbee3ddd5,
	0x31b65f04,
	0xa079425d,
	0xcd6bda8d,
	0xc905402b,
	0xfa4d3c24,
	0x0f05f001,
	0xd5977bfb,
	0xed55cabd,
	0x6ac61a02,
	0xa571f6b0,
	0x3c3ff9fd,
	0x3b6c41ea,
	0x9a85eebb,
	0x65bb94f6,
	0x66bcb0f8,
	0x40863ba1,
	0xaf56600a,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xbcab6ee6,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0xeae3dfd6,
	0x656e4a6e,
	0xf93aae46,
	0xc8f2ae9d,
	0x3da016df,
	0x173e2075,
	0x222e7ce2,
	0x34db050b,
	0x62bb09bf,
	0x862258db,
	0xe94986d6,
	0xea82d349,
	0x102fe6de,
	0x8be40ba0,
	0xd35cce70,
	0x135bb7ec,
	0xc0b7c197,
	0xc5b6f236,
	0x6f9e763b,
	0x75fb9062,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"_printk\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"alloc_workqueue\0"
	"of_find_matching_node_and_match\0"
	"of_property_read_variable_u32_array\0"
	"misc_register\0"
	"device_create_file\0"
	"platform_driver_unregister\0"
	"ipi_monitor_dump\0"
	"mtk_mbox_probe\0"
	"mtk_smem_init\0"
	"mtk_ipi_device_register\0"
	"strcmp\0"
	"mtk_ipi_send_compl\0"
	"of_find_property\0"
	"vzalloc_noprof\0"
	"of_property_read_u32_index\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_string_helper\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"mem_alloc_profiling_key\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"nonseekable_open\0"
	"__mutex_init\0"
	"sprintf\0"
	"kstrtouint\0"
	"__arch_copy_to_user\0"
	"mtk_ipi_register\0"
	"of_property_read_u64\0"
	"ioremap_prot\0"
	"arm64_use_ng_mappings\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"sscanf\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"__const_udelay\0"
	"snprintf\0"
	"__arm_smccc_smc\0"
	"seq_printf\0"
	"seq_putc\0"
	"seq_write\0"
	"sysfs_streq\0"
	"_raw_spin_lock_irqsave\0"
	"clocks_calc_mult_shift\0"
	"timecounter_init\0"
	"sched_clock\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"mtk_mbox_write\0"
	"_raw_spin_unlock_irqrestore\0"
	"hrtimer_forward\0"
	"hrtimer_start_range_ns\0"
	"queue_work_on\0"
	"timecounter_read\0"
	"arch_timer_read_counter\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_tinysys_ipi,mtk-mbox");

MODULE_ALIAS("of:N*T*Cmediatek,gpueb");
MODULE_ALIAS("of:N*T*Cmediatek,gpuebC*");

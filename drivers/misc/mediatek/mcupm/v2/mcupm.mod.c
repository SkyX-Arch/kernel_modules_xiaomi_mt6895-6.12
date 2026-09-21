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

KSYMTAB_FUNC(mcupm_reserve_mem_get_phys, "_gpl", "");
KSYMTAB_FUNC(mcupm_reserve_mem_get_virt, "_gpl", "");
KSYMTAB_FUNC(mcupm_reserve_mem_get_size, "_gpl", "");
KSYMTAB_FUNC(mcupm_mbox_read, "_gpl", "");
KSYMTAB_FUNC(mcupm_mbox_write, "_gpl", "");
KSYMTAB_FUNC(get_mcupm_ipidev, "_gpl", "");
KSYMTAB_FUNC(get_mcupms_ipidev_number, "_gpl", "");

SYMBOL_CRC(mcupm_reserve_mem_get_phys, 0x2823696b, "_gpl");
SYMBOL_CRC(mcupm_reserve_mem_get_virt, 0xbd44a046, "_gpl");
SYMBOL_CRC(mcupm_reserve_mem_get_size, 0xafb63a66, "_gpl");
SYMBOL_CRC(mcupm_mbox_read, 0x31694685, "_gpl");
SYMBOL_CRC(mcupm_mbox_write, 0x6142a565, "_gpl");
SYMBOL_CRC(get_mcupm_ipidev, 0x73e08ef8, "_gpl");
SYMBOL_CRC(get_mcupms_ipidev_number, 0x0d0f3f5f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xab28f7ae, "mtk_mbox_read" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x24f0d91a, "mtk_mbox_check_send_irq" },
	{ 0x8be40ba0, "mtk_mbox_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x656cde9e, "mtk_mbox_probe" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x0843a757, "mtk_smem_init" },
	{ 0x92e3b6d1, "mtk_ipi_device_register" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x037a0cba, "kfree" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25758a2c, "misc_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xab28f7ae,
	0x34db050b,
	0x24f0d91a,
	0x8be40ba0,
	0xd35cce70,
	0x12db679a,
	0x6b201699,
	0xf3cdc3c6,
	0x5cf50b74,
	0x40863ba1,
	0x656cde9e,
	0x374f8976,
	0xee73d233,
	0x656e4a6e,
	0x9f0ef8fa,
	0x0843a757,
	0x92e3b6d1,
	0x65bb94f6,
	0xe136f93c,
	0xaf56600a,
	0x6db70f53,
	0x6b722180,
	0x0c1a5ee3,
	0x4302d0eb,
	0x3b6c41ea,
	0xc905402b,
	0xfa4d3c24,
	0xe2964344,
	0xd5977bfb,
	0x5d112304,
	0x037a0cba,
	0xed55cabd,
	0xe922b94d,
	0xd9a5ea54,
	0x25758a2c,
	0xc6f46339,
	0x52c5c991,
	0x88db9f48,
	0x9a85eebb,
	0x24d273d1,
	0x6ac61a02,
	0x0f05f001,
	0x15ba50a6,
	0x49cd25ed,
	0x62bb09bf,
	0x862258db,
	0xe94986d6,
	0xea82d349,
	0x102fe6de,
	0x135bb7ec,
	0xc0b7c197,
	0xc5b6f236,
	0x6f9e763b,
	0x75fb9062,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mtk_mbox_read\0"
	"_raw_spin_lock_irqsave\0"
	"mtk_mbox_check_send_irq\0"
	"mtk_mbox_write\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"of_find_property\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"ioremap_prot\0"
	"mtk_mbox_probe\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"snprintf\0"
	"devm_ioremap_resource\0"
	"mtk_smem_init\0"
	"mtk_ipi_device_register\0"
	"mtk_ipi_register\0"
	"of_property_read_variable_u32_array\0"
	"arm64_use_ng_mappings\0"
	"mtk_ipi_send_compl\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"free_pages\0"
	"kstrtouint\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__wake_up\0"
	"mutex_lock\0"
	"__memcpy_fromio\0"
	"kfree\0"
	"mutex_unlock\0"
	"device_create_file\0"
	"__init_waitqueue_head\0"
	"misc_register\0"
	"init_timer_key\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"add_timer\0"
	"nonseekable_open\0"
	"mem_alloc_profiling_key\0"
	"jiffies\0"
	"alloc_workqueue\0"
	"clocks_calc_mult_shift\0"
	"timecounter_init\0"
	"sched_clock\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_forward\0"
	"hrtimer_start_range_ns\0"
	"queue_work_on\0"
	"timecounter_read\0"
	"arch_timer_read_counter\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mbox,mtk_tinysys_ipi");


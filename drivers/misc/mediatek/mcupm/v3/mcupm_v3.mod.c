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
KSYMTAB_FUNC(get_mcupm_ipidev, "_gpl", "");
KSYMTAB_FUNC(get_mcupms_ipidev_number, "_gpl", "");

SYMBOL_CRC(mcupm_reserve_mem_get_phys, 0x2823696b, "_gpl");
SYMBOL_CRC(mcupm_reserve_mem_get_virt, 0xbd44a046, "_gpl");
SYMBOL_CRC(mcupm_reserve_mem_get_size, 0xafb63a66, "_gpl");
SYMBOL_CRC(get_mcupm_ipidev, 0x73e08ef8, "_gpl");
SYMBOL_CRC(get_mcupms_ipidev_number, 0x0d0f3f5f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x8be40ba0, "mtk_mbox_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x25758a2c, "misc_register" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x758ef887, "mtk_ipi_unregister" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x0cfb2db5, "of_platform_device_create" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x92e3b6d1, "mtk_ipi_device_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xaba63322, "of_iomap" },
	{ 0xf476a89f, "platform_irq_count" },
	{ 0x0843a757, "mtk_smem_init" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0x49cd25ed,
	0x62bb09bf,
	0x862258db,
	0xe94986d6,
	0xea82d349,
	0x102fe6de,
	0x135bb7ec,
	0xc0b7c197,
	0xc5b6f236,
	0x34db050b,
	0x6f9e763b,
	0x8be40ba0,
	0xd35cce70,
	0x75fb9062,
	0xe922b94d,
	0x6db70f53,
	0x656e4a6e,
	0x3b6c41ea,
	0x6ac61a02,
	0x25758a2c,
	0x65bb94f6,
	0x758ef887,
	0x7c7f271f,
	0x0cfb2db5,
	0x365e7911,
	0x92e3b6d1,
	0xe2d5255a,
	0x3b1b6444,
	0x52c5c991,
	0xe136f93c,
	0xc1cad332,
	0xaba63322,
	0xf476a89f,
	0x0843a757,
	0x31b65f04,
	0xa079425d,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"alloc_workqueue\0"
	"clocks_calc_mult_shift\0"
	"timecounter_init\0"
	"sched_clock\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_forward\0"
	"hrtimer_start_range_ns\0"
	"queue_work_on\0"
	"_raw_spin_lock_irqsave\0"
	"timecounter_read\0"
	"mtk_mbox_write\0"
	"_raw_spin_unlock_irqrestore\0"
	"arch_timer_read_counter\0"
	"device_create_file\0"
	"mtk_ipi_send_compl\0"
	"snprintf\0"
	"kstrtouint\0"
	"nonseekable_open\0"
	"misc_register\0"
	"mtk_ipi_register\0"
	"mtk_ipi_unregister\0"
	"of_get_next_child\0"
	"of_platform_device_create\0"
	"kstrdup_const\0"
	"mtk_ipi_device_register\0"
	"strcmp\0"
	"of_get_property\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"of_address_to_resource\0"
	"of_iomap\0"
	"platform_irq_count\0"
	"mtk_smem_init\0"
	"of_property_read_u32_index\0"
	"of_property_count_elems_of_size\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mbox,mtk_tinysys_ipi");


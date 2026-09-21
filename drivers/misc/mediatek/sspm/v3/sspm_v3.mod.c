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

KSYMTAB_FUNC(sspm_reserve_mem_get_phys, "_gpl", "");
KSYMTAB_FUNC(sspm_reserve_mem_get_virt, "_gpl", "");
KSYMTAB_FUNC(sspm_reserve_mem_get_size, "_gpl", "");
KSYMTAB_FUNC(sspm_sbuf_get, "_gpl", "");

SYMBOL_CRC(sspm_reserve_mem_get_phys, 0xb6ea4eb1, "_gpl");
SYMBOL_CRC(sspm_reserve_mem_get_virt, 0x238d879c, "_gpl");
SYMBOL_CRC(sspm_reserve_mem_get_size, 0x317f1dbc, "_gpl");
SYMBOL_CRC(sspm_sbuf_get, 0x720bd81e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25758a2c, "misc_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x7181c4e7, "device_create_bin_file" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x037a0cba, "kfree" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe2964344,
	0xd9a5ea54,
	0x25758a2c,
	0xe922b94d,
	0x7181c4e7,
	0x6ac61a02,
	0xc5b6f236,
	0x12db679a,
	0x92997ed8,
	0x51fcca8a,
	0x374f8976,
	0x9f0ef8fa,
	0x9e400c59,
	0xe136f93c,
	0x49cd25ed,
	0x1cc7f053,
	0x656e4a6e,
	0xd5977bfb,
	0x5d112304,
	0x037a0cba,
	0xed55cabd,
	0xc6f46339,
	0x52c5c991,
	0x88db9f48,
	0x9a85eebb,
	0x24d273d1,
	0x3b6c41ea,
	0x0f05f001,
	0x15ba50a6,
	0x62bb09bf,
	0x862258db,
	0xe94986d6,
	0xea82d349,
	0x102fe6de,
	0x135bb7ec,
	0xc0b7c197,
	0x34db050b,
	0x6f9e763b,
	0xc905402b,
	0xfa4d3c24,
	0xd35cce70,
	0x75fb9062,
	0x31b65f04,
	0x40863ba1,
	0xf3cdc3c6,
	0x5cf50b74,
	0xa079425d,
	0xaf56600a,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__wake_up\0"
	"__init_waitqueue_head\0"
	"misc_register\0"
	"device_create_file\0"
	"device_create_bin_file\0"
	"nonseekable_open\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"_printk\0"
	"get_scmi_tinysys_info\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"platform_get_irq_byname\0"
	"of_property_read_variable_u32_array\0"
	"alloc_workqueue\0"
	"scmi_tinysys_common_set\0"
	"snprintf\0"
	"mutex_lock\0"
	"__memcpy_fromio\0"
	"kfree\0"
	"mutex_unlock\0"
	"init_timer_key\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"add_timer\0"
	"kstrtouint\0"
	"mem_alloc_profiling_key\0"
	"jiffies\0"
	"clocks_calc_mult_shift\0"
	"timecounter_init\0"
	"sched_clock\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_forward\0"
	"hrtimer_start_range_ns\0"
	"_raw_spin_lock_irqsave\0"
	"timecounter_read\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"arch_timer_read_counter\0"
	"of_property_read_u32_index\0"
	"ioremap_prot\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"of_property_count_elems_of_size\0"
	"arm64_use_ng_mappings\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi");


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
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0x401167cc, "_dev_info" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xaba63322, "of_iomap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x96848186, "scnprintf" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xb96749e1, "of_irq_parse_one" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x51786ad8, "__irq_apply_affinity_hint" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc9dddfcd, "aee_sram_printk" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0xa2aed337, "aee_get_mode" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x60c7c60d, "driver_remove_file" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x318acf06, "platform_bus_type" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0x6a19ccfc,
	0x401167cc,
	0x14fe5355,
	0xaba63322,
	0xb4ce05a5,
	0xa079425d,
	0x31b65f04,
	0x96848186,
	0xf5edea2e,
	0x45b60059,
	0x037a0cba,
	0xe17134b6,
	0xb96749e1,
	0xc8c7229e,
	0x7c611278,
	0xa4f72277,
	0xe136f93c,
	0x75ca79b5,
	0x51786ad8,
	0xf9583f23,
	0xeae3dfd6,
	0x27bbf221,
	0xc9dddfcd,
	0xe94986d6,
	0x6b722180,
	0x0c1a5ee3,
	0xc5b6f236,
	0xba8fbd64,
	0xc905402b,
	0xfa4d3c24,
	0xb5b54b34,
	0x7726dda9,
	0xa2aed337,
	0x2f2c95c4,
	0x60c7c60d,
	0x6fc35f2b,
	0x318acf06,
	0x0f05f001,
	0xefe8a82e,
	0x017de3d5,
	0x62ad2053,
	0x2d3385d3,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"driver_create_file\0"
	"_dev_info\0"
	"of_device_get_match_data\0"
	"of_iomap\0"
	"_dev_err\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_u32_index\0"
	"scnprintf\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"of_irq_parse_one\0"
	"devm_kmalloc\0"
	"irq_of_parse_and_map\0"
	"_dev_notice\0"
	"of_property_read_variable_u32_array\0"
	"__fortify_panic\0"
	"__irq_apply_affinity_hint\0"
	"devm_request_threaded_irq\0"
	"__const_udelay\0"
	"disable_irq_nosync\0"
	"aee_sram_printk\0"
	"sched_clock\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"queue_work_on\0"
	"_raw_spin_lock\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock\0"
	"irq_get_irq_data\0"
	"aee_get_mode\0"
	"flush_work\0"
	"driver_remove_file\0"
	"platform_driver_unregister\0"
	"platform_bus_type\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"nr_cpu_ids\0"
	"cpu_bit_bitmap\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,mrdump");


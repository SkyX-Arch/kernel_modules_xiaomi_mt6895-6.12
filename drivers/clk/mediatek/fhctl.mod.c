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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xbc3d2513, "register_fh_set_rate" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xaba63322, "of_iomap" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0x73e08ef8, "get_mcupm_ipidev" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0xe82761d1, "mtk_ipi_send_compl_to_gpueb" },
	{ 0x2fae0e87, "gpueb_get_send_PIN_ID_by_name" },
	{ 0x0fbee3af, "get_gpueb_ipidev" },
	{ 0x037a0cba, "kfree" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xbc3d2513,
	0xe2d5255a,
	0x34675dcc,
	0x7c7f271f,
	0xaba63322,
	0xaf7cb74b,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x34db050b,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xeae3dfd6,
	0xf5edea2e,
	0xdb976d85,
	0xd35cce70,
	0xb43f9365,
	0x6db70f53,
	0x73e08ef8,
	0x65bb94f6,
	0xe82761d1,
	0x2fae0e87,
	0x0fbee3af,
	0x037a0cba,
	0x5cf4d4de,
	0x4e870156,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x3da016df,
	0x173e2075,
	0x1e6d26a8,
	0xbcab6ee6,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"register_fh_set_rate\0"
	"strcmp\0"
	"of_match_node\0"
	"of_get_next_child\0"
	"of_iomap\0"
	"of_property_read_string\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"_raw_spin_lock_irqsave\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__const_udelay\0"
	"___ratelimit\0"
	"aee_kernel_warning_api_func\0"
	"_raw_spin_unlock_irqrestore\0"
	"ktime_get\0"
	"mtk_ipi_send_compl\0"
	"get_mcupm_ipidev\0"
	"mtk_ipi_register\0"
	"mtk_ipi_send_compl_to_gpueb\0"
	"gpueb_get_send_PIN_ID_by_name\0"
	"get_gpueb_ipidev\0"
	"kfree\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_putc\0"
	"seq_write\0"
	"strstr\0"
	"sscanf\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common,aee_aed,mtk_tinysys_ipi,mcupm,mtk_gpueb");


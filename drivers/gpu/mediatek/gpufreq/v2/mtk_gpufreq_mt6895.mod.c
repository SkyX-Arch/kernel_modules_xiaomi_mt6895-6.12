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
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x3f7ee0f2, "gpufreq_register_gpuppm_fp" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x00148653, "vsnprintf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xbb52fad7, "gpufreq_register_gpufreq_fp" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xaba63322, "of_iomap" },
	{ 0x214dd646, "aee_rr_rec_gpu_dvfs_vgpu" },
	{ 0xdb39008d, "aee_rr_rec_gpu_dvfs_power_count" },
	{ 0x871376ec, "aee_rr_rec_gpu_dvfs_oppidx" },
	{ 0x80f53944, "regulator_get_optional" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x3f7ee0f2,
	0x41ed3709,
	0x00148653,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x7a8ef1df,
	0xa06ad99d,
	0x12db679a,
	0xbb52fad7,
	0xf3cdc3c6,
	0xe136f93c,
	0x374f8976,
	0xee73d233,
	0xaba63322,
	0x214dd646,
	0xdb39008d,
	0x871376ec,
	0x80f53944,
	0xe17134b6,
	0x037a0cba,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"gpufreq_register_gpuppm_fp\0"
	"get_random_bytes\0"
	"vsnprintf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"regulator_is_enabled\0"
	"regulator_get_voltage\0"
	"__platform_driver_register\0"
	"gpufreq_register_gpufreq_fp\0"
	"of_find_compatible_node\0"
	"of_property_read_variable_u32_array\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"of_iomap\0"
	"aee_rr_rec_gpu_dvfs_vgpu\0"
	"aee_rr_rec_gpu_dvfs_power_count\0"
	"aee_rr_rec_gpu_dvfs_oppidx\0"
	"regulator_get_optional\0"
	"__kmalloc_cache_noprof\0"
	"kfree\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpufreq_wrapper,mrdump");

MODULE_ALIAS("of:N*T*Cmediatek,gpufreq");
MODULE_ALIAS("of:N*T*Cmediatek,gpufreqC*");

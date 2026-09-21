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
	{ 0x92bc696d, "platform_device_register_full" },
	{ 0x0f55c84a, "fmeter_set_ops" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0x92bc696d,
	0x0f55c84a,
	0xf3cdc3c6,
	0xaba63322,
	0x441d0de9,
	0xe17134b6,
	0x34db050b,
	0xeae3dfd6,
	0xd35cce70,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"platform_device_register_full\0"
	"fmeter_set_ops\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"_raw_spin_lock_irqsave\0"
	"__const_udelay\0"
	"_raw_spin_unlock_irqrestore\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "clk-common");


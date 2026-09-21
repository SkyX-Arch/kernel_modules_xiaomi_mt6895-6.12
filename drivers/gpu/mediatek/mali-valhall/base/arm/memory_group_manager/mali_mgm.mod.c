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
	{ 0x037a0cba, "kfree" },
	{ 0x401167cc, "_dev_info" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa0469683, "__alloc_pages_noprof" },
	{ 0x70c2b594, "__free_pages" },
	{ 0x19c8cbf0, "vmf_insert_pfn_prot" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x96848186, "scnprintf" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x037a0cba,
	0x401167cc,
	0xe17134b6,
	0xb4ce05a5,
	0xa0469683,
	0x70c2b594,
	0x19c8cbf0,
	0x5cf4d4de,
	0x96848186,
	0x4e870156,
	0x665e62b5,
	0x391b5530,
	0x0c6a7f0d,
	0xbf748e79,
	0x0140f701,
	0xb7c7d237,
	0x47a915f1,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"kfree\0"
	"_dev_info\0"
	"__kmalloc_cache_noprof\0"
	"_dev_err\0"
	"__alloc_pages_noprof\0"
	"__free_pages\0"
	"vmf_insert_pfn_prot\0"
	"debugfs_create_dir\0"
	"scnprintf\0"
	"debugfs_create_file\0"
	"generic_file_llseek\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"debugfs_remove\0"
	"_dev_warn\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carm,physical-memory-group-manager");
MODULE_ALIAS("of:N*T*Carm,physical-memory-group-managerC*");

MODULE_INFO(srcversion, "E1090A7703F11849D8208A7");

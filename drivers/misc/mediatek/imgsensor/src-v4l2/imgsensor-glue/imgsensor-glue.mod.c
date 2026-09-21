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

KSYMTAB_FUNC(add_external_subdrv_entry, "", "");
KSYMTAB_FUNC(query_external_subdrv_entry, "", "");

SYMBOL_CRC(add_external_subdrv_entry, 0xf9c189ba, "");
SYMBOL_CRC(query_external_subdrv_entry, 0x3df40974, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x037a0cba, "kfree" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xe2d5255a,
	0xe17134b6,
	0x7e19152a,
	0x037a0cba,
	0x9a835040,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"strcmp\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"kfree\0"
	"__list_del_entry_valid_or_report\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


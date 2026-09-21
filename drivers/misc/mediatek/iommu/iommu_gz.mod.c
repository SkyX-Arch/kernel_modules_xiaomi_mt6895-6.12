#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfbdd82be, "KREE_RegisterSharedmem" },
	{ 0x92997ed8, "_printk" },
	{ 0xd9a6d5ea, "KREE_UnregisterSharedmem" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x552d4efc, "KREE_CreateSession" },
	{ 0x5878d629, "KREE_CloseSession" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xec19e146, "KREE_TeeServiceCall" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xfbdd82be,
	0x92997ed8,
	0xd9a6d5ea,
	0xccf69887,
	0x4302d0eb,
	0x552d4efc,
	0x5878d629,
	0xd5977bfb,
	0xed55cabd,
	0xec19e146,
	0x0f05f001,
	0x9688de8b,
	0xe4bbc1dd,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"KREE_RegisterSharedmem\0"
	"_printk\0"
	"KREE_UnregisterSharedmem\0"
	"get_free_pages_noprof\0"
	"free_pages\0"
	"KREE_CreateSession\0"
	"KREE_CloseSession\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"KREE_TeeServiceCall\0"
	"mem_alloc_profiling_key\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_tz_system");


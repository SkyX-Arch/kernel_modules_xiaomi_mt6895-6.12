#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(set_rps_map, "", "");

SYMBOL_CRC(set_rps_map, 0x5e509e16, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x037a0cba, "kfree" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x8761c87b, "rps_needed" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x037a0cba,
	0xd5977bfb,
	0x2c834418,
	0x2f4880df,
	0xed55cabd,
	0x44c10a52,
	0x52c5c991,
	0x9f46ced8,
	0xac594e02,
	0x8761c87b,
	0x0f05f001,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kfree\0"
	"mutex_lock\0"
	"static_key_slow_inc\0"
	"static_key_slow_dec\0"
	"mutex_unlock\0"
	"kvfree_call_rcu\0"
	"__kmalloc_noprof\0"
	"__sw_hweight64\0"
	"__cpu_online_mask\0"
	"rps_needed\0"
	"mem_alloc_profiling_key\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


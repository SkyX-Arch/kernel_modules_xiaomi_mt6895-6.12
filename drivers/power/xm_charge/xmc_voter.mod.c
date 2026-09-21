#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(lock_votable, "", "");
KSYMTAB_FUNC(unlock_votable, "", "");
KSYMTAB_FUNC(is_override_vote_enabled_locked, "", "");
KSYMTAB_FUNC(is_override_vote_enabled, "", "");
KSYMTAB_FUNC(is_client_vote_enabled_locked, "", "");
KSYMTAB_FUNC(is_client_vote_enabled, "", "");
KSYMTAB_FUNC(get_client_vote_locked, "", "");
KSYMTAB_FUNC(get_client_vote, "", "");
KSYMTAB_FUNC(get_effective_result_locked, "", "");
KSYMTAB_FUNC(get_effective_result, "", "");
KSYMTAB_FUNC(get_effective_client_locked, "", "");
KSYMTAB_FUNC(get_effective_client, "", "");
KSYMTAB_FUNC(vote, "", "");
KSYMTAB_FUNC(vote_override, "", "");
KSYMTAB_FUNC(rerun_election, "", "");
KSYMTAB_FUNC(find_votable, "", "");
KSYMTAB_FUNC(create_votable, "", "");
KSYMTAB_FUNC(destroy_votable, "", "");

SYMBOL_CRC(lock_votable, 0xa12082b7, "");
SYMBOL_CRC(unlock_votable, 0x59e8f9f1, "");
SYMBOL_CRC(is_override_vote_enabled_locked, 0xeac969eb, "");
SYMBOL_CRC(is_override_vote_enabled, 0xbd865adc, "");
SYMBOL_CRC(is_client_vote_enabled_locked, 0xe464664a, "");
SYMBOL_CRC(is_client_vote_enabled, 0x60de62bf, "");
SYMBOL_CRC(get_client_vote_locked, 0x97b07a12, "");
SYMBOL_CRC(get_client_vote, 0x3c167b65, "");
SYMBOL_CRC(get_effective_result_locked, 0x96c6ac45, "");
SYMBOL_CRC(get_effective_result, 0x56c795e2, "");
SYMBOL_CRC(get_effective_client_locked, 0x8903d182, "");
SYMBOL_CRC(get_effective_client, 0x80d76f34, "");
SYMBOL_CRC(vote, 0xb31e0c2b, "");
SYMBOL_CRC(vote_override, 0x5e78f9df, "");
SYMBOL_CRC(rerun_election, 0xbce9a5c8, "");
SYMBOL_CRC(find_votable, 0x1aaaeb07, "");
SYMBOL_CRC(create_votable, 0xb50b1419, "");
SYMBOL_CRC(destroy_votable, 0x13fd8d41, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x037a0cba, "kfree" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x6510de94, "debugfs_create_u32" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xddb759be, "debugfs_attr_read" },
	{ 0x1b0df581, "debugfs_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x92997ed8,
	0x34db050b,
	0xe2d5255a,
	0x5cf4d4de,
	0x2d39b0a7,
	0x037a0cba,
	0xa571f6b0,
	0x4e870156,
	0x6510de94,
	0xb7c7d237,
	0xd35cce70,
	0xe17134b6,
	0x7e19152a,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0xddb759be,
	0x1b0df581,
	0xbf748e79,
	0x0140f701,
	0x9a835040,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"strcmp\0"
	"debugfs_create_dir\0"
	"kstrdup\0"
	"kfree\0"
	"__mutex_init\0"
	"debugfs_create_file\0"
	"debugfs_create_u32\0"
	"debugfs_remove\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"debugfs_attr_read\0"
	"debugfs_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"__list_del_entry_valid_or_report\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


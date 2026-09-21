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

KSYMTAB_FUNC(mmprofile_start, "", "");
KSYMTAB_FUNC(mmprofile_enable, "", "");
KSYMTAB_FUNC(mmprofile_register_event, "", "");
KSYMTAB_FUNC(mmprofile_find_event, "", "");
KSYMTAB_FUNC(mmprofile_enable_ftrace_event, "", "");
KSYMTAB_FUNC(mmprofile_enable_event, "", "");
KSYMTAB_FUNC(mmprofile_enable_ftrace_event_recursive, "", "");
KSYMTAB_FUNC(mmprofile_enable_event_recursive, "", "");
KSYMTAB_FUNC(mmprofile_query_enable, "", "");
KSYMTAB_FUNC(mmprofile_log_ex, "", "");
KSYMTAB_FUNC(mmprofile_log, "", "");
KSYMTAB_FUNC(mmprofile_log_meta, "", "");
KSYMTAB_FUNC(mmprofile_log_meta_structure, "", "");
KSYMTAB_FUNC(mmprofile_log_meta_string_ex, "", "");
KSYMTAB_FUNC(mmprofile_log_meta_string, "", "");
KSYMTAB_FUNC(mmprofile_log_meta_bitmap, "", "");
KSYMTAB_FUNC(mmprofile_log_meta_yuv_bitmap, "", "");

SYMBOL_CRC(mmprofile_start, 0xda38583a, "");
SYMBOL_CRC(mmprofile_enable, 0x899ea9dc, "");
SYMBOL_CRC(mmprofile_register_event, 0x7ffb1903, "");
SYMBOL_CRC(mmprofile_find_event, 0x53e12bda, "");
SYMBOL_CRC(mmprofile_enable_ftrace_event, 0x63f47b21, "");
SYMBOL_CRC(mmprofile_enable_event, 0x06e73584, "");
SYMBOL_CRC(mmprofile_enable_ftrace_event_recursive, 0x0c6ce102, "");
SYMBOL_CRC(mmprofile_enable_event_recursive, 0x560a0e63, "");
SYMBOL_CRC(mmprofile_query_enable, 0x34887b93, "");
SYMBOL_CRC(mmprofile_log_ex, 0xd77d7c9c, "");
SYMBOL_CRC(mmprofile_log, 0xb05a858b, "");
SYMBOL_CRC(mmprofile_log_meta, 0x44480f47, "");
SYMBOL_CRC(mmprofile_log_meta_structure, 0x9edb8136, "");
SYMBOL_CRC(mmprofile_log_meta_string_ex, 0xdbb42d01, "");
SYMBOL_CRC(mmprofile_log_meta_string, 0xb18752cc, "");
SYMBOL_CRC(mmprofile_log_meta_bitmap, 0xd0c189d4, "");
SYMBOL_CRC(mmprofile_log_meta_yuv_bitmap, 0xaa7dc2bb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x203392c6, "mutex_trylock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5a921311, "strncmp" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x25758a2c, "misc_register" },
	{ 0x037a0cba, "kfree" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x113858c3, "simple_write_to_buffer" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x44033864, "proc_remove" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x6ecc607e, "mem_section" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x203392c6,
	0xed55cabd,
	0x6da467cb,
	0x656e4a6e,
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0x92997ed8,
	0xd5977bfb,
	0x1b2fa1a9,
	0x999e8297,
	0x75ca79b5,
	0x5a921311,
	0xe17134b6,
	0x98cf60b3,
	0xa916b694,
	0x9166fada,
	0x7e19152a,
	0x3744cf36,
	0x43b0c9c3,
	0xe94986d6,
	0x88db9f48,
	0x2be0c009,
	0x5c3c7387,
	0x9a85eebb,
	0xc63b0ac3,
	0xbee3ddd5,
	0x5cf4d4de,
	0x4e870156,
	0x7518b5f0,
	0xb4028d67,
	0x25758a2c,
	0x037a0cba,
	0x665e62b5,
	0x9c81ceff,
	0x113858c3,
	0xb7c7d237,
	0x44033864,
	0x9688de8b,
	0x0f05f001,
	0xefe8a82e,
	0x6ecc607e,
	0xa65c6def,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_trylock\0"
	"mutex_unlock\0"
	"pfn_is_map_memory\0"
	"snprintf\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"_printk\0"
	"mutex_lock\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"__fortify_panic\0"
	"strncmp\0"
	"__kmalloc_cache_noprof\0"
	"strlen\0"
	"strnlen\0"
	"strncpy\0"
	"__list_add_valid_or_report\0"
	"vmalloc_to_pfn\0"
	"preempt_schedule\0"
	"sched_clock\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtoull\0"
	"__arch_copy_to_user\0"
	"remap_pfn_range\0"
	"vzalloc_noprof\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"proc_mkdir\0"
	"proc_create\0"
	"misc_register\0"
	"kfree\0"
	"generic_file_llseek\0"
	"simple_read_from_buffer\0"
	"simple_write_to_buffer\0"
	"debugfs_remove\0"
	"proc_remove\0"
	"memstart_addr\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"mem_section\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");


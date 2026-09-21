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

KSYMTAB_FUNC(of_mtk_icc_xlate_onecell, "_gpl", "");
KSYMTAB_FUNC(of_mtk_icc_get, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_set_tag, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_set_bw_not_update, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_set_bw, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_get, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_put, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_node_create, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_node_destroy, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_link_create, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_link_destroy, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_node_add, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_node_del, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_provider_add, "_gpl", "");
KSYMTAB_FUNC(mtk_icc_provider_del, "_gpl", "");

SYMBOL_CRC(of_mtk_icc_xlate_onecell, 0x69388b6e, "_gpl");
SYMBOL_CRC(of_mtk_icc_get, 0x1f0a95af, "_gpl");
SYMBOL_CRC(mtk_icc_set_tag, 0x42520d7f, "_gpl");
SYMBOL_CRC(mtk_icc_set_bw_not_update, 0x4f8f6399, "_gpl");
SYMBOL_CRC(mtk_icc_set_bw, 0x6d25698b, "_gpl");
SYMBOL_CRC(mtk_icc_get, 0xc3900a57, "_gpl");
SYMBOL_CRC(mtk_icc_put, 0x28f5177b, "_gpl");
SYMBOL_CRC(mtk_icc_node_create, 0xd3b1cf61, "_gpl");
SYMBOL_CRC(mtk_icc_node_destroy, 0xd6e12eba, "_gpl");
SYMBOL_CRC(mtk_icc_link_create, 0x434fd13c, "_gpl");
SYMBOL_CRC(mtk_icc_link_destroy, 0xeaf3488f, "_gpl");
SYMBOL_CRC(mtk_icc_node_add, 0x87439f1d, "_gpl");
SYMBOL_CRC(mtk_icc_node_del, 0x7324bcff, "_gpl");
SYMBOL_CRC(mtk_icc_provider_add, 0xe7a53457, "_gpl");
SYMBOL_CRC(mtk_icc_provider_del, 0xef97eb74, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b201699, "of_find_property" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x322c9d3b, "rt_mutex_lock" },
	{ 0x9a4f004e, "rt_mutex_unlock" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x037a0cba, "kfree" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x841a578a, "idr_remove" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x31d7c7bc, "idr_find" },
	{ 0xb62587b5, "idr_alloc" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xd1edde11, "__rt_mutex_init" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0x6b201699,
	0x502a8c68,
	0xb4ce05a5,
	0x322c9d3b,
	0x9a4f004e,
	0x365e7911,
	0xfb384d37,
	0x037a0cba,
	0xf474fdcb,
	0x841a578a,
	0x847188e8,
	0x29eba14a,
	0x56470118,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe3c00b45,
	0xa3783864,
	0x1fec5304,
	0x7e19152a,
	0xe17134b6,
	0x52c5c991,
	0xf70e4a4d,
	0x31d7c7bc,
	0xb62587b5,
	0x9a835040,
	0x5cf4d4de,
	0x4e870156,
	0xd1edde11,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0xb7c7d237,
	0x92acb4e9,
	0xefe8a82e,
	0xac594e02,
	0x0f05f001,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"of_find_property\0"
	"of_property_match_string\0"
	"_dev_err\0"
	"rt_mutex_lock\0"
	"rt_mutex_unlock\0"
	"kstrdup_const\0"
	"kasprintf\0"
	"kfree\0"
	"kfree_const\0"
	"idr_remove\0"
	"krealloc_noprof\0"
	"trace_event_buffer_reserve\0"
	"__warn_printk\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run5\0"
	"bpf_trace_run2\0"
	"__of_parse_phandle_with_args\0"
	"__list_add_valid_or_report\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"preempt_schedule_notrace\0"
	"idr_find\0"
	"idr_alloc\0"
	"__list_del_entry_valid_or_report\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"__rt_mutex_init\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"debugfs_remove\0"
	"param_ops_uint\0"
	"kmalloc_caches\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


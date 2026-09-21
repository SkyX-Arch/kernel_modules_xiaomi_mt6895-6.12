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

KSYMTAB_FUNC(get_cpu_loading, "", "");
KSYMTAB_FUNC(get_perf_index, "", "");
KSYMTAB_DATA(magt2fpsgo_notify_dep_list_fp, "", "");
KSYMTAB_DATA(magt2fpsgo_notify_target_fps_fp, "", "");
KSYMTAB_DATA(magt2fpsgo_get_all_fps_control_pid_info, "", "");
KSYMTAB_DATA(magt2fpsgo_get_fpsgo_frame_info, "", "");
KSYMTAB_DATA(magt2fpsgo_notify_thread_status_fp, "", "");
KSYMTAB_DATA(magt2pelt_notify_pelt_hint_boost_fp, "", "");

SYMBOL_CRC(get_cpu_loading, 0x17520ed2, "");
SYMBOL_CRC(get_perf_index, 0x9d7cb508, "");
SYMBOL_CRC(magt2fpsgo_notify_dep_list_fp, 0xc9c0fb94, "");
SYMBOL_CRC(magt2fpsgo_notify_target_fps_fp, 0x1d25fb52, "");
SYMBOL_CRC(magt2fpsgo_get_all_fps_control_pid_info, 0xaf308ccc, "");
SYMBOL_CRC(magt2fpsgo_get_fpsgo_frame_info, 0xee958205, "");
SYMBOL_CRC(magt2fpsgo_notify_thread_status_fp, 0xa27f0bcb, "");
SYMBOL_CRC(magt2pelt_notify_pelt_hint_boost_fp, 0x3a59ad86, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x63991289, "find_get_pid" },
	{ 0xc0a54449, "pid_task" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0xceed33cf, "arch_freq_scale" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x037a0cba,
	0x9fe899b7,
	0x24f00fda,
	0x29161415,
	0x9f46ced8,
	0x52c5c991,
	0x8d522714,
	0x2469810f,
	0x0296695f,
	0xe5010018,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x7aa1756e,
	0x63991289,
	0xc0a54449,
	0xe2d5255a,
	0x9a85eebb,
	0x2be0c009,
	0x31f2a14c,
	0xb2fb935e,
	0xee46e386,
	0x280f9f14,
	0xde7ece30,
	0xe4bc4b09,
	0xceed33cf,
	0x0f05f001,
	0x15db3b99,
	0x73caefdc,
	0xd820ab9a,
	0xa65c6def,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"get_cpu_idle_time\0"
	"set_cpus_allowed_ptr\0"
	"find_task_by_vpid\0"
	"__sw_hweight64\0"
	"__kmalloc_noprof\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"refcount_warn_saturate\0"
	"__put_task_struct\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"kvfree\0"
	"find_get_pid\0"
	"pid_task\0"
	"strcmp\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__kvmalloc_node_noprof\0"
	"param_ops_int\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"__cpu_possible_mask\0"
	"cpu_topology\0"
	"arch_freq_scale\0"
	"mem_alloc_profiling_key\0"
	"__cpu_active_mask\0"
	"init_task\0"
	"vendor_data_pad\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


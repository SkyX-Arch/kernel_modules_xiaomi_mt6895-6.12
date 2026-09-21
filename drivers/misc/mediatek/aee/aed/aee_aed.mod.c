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

KSYMTAB_FUNC(aee_get_mode, "", "");
KSYMTAB_FUNC(aee_kernel_exception_api_func, "", "");
KSYMTAB_FUNC(aee_kernel_warning_api_func, "", "");
KSYMTAB_FUNC(aee_kernel_fatal_api_func, "", "");
KSYMTAB_FUNC(aee_is_printk_too_much, "", "");
KSYMTAB_FUNC(aee_kernel_reminding_api, "", "");
KSYMTAB_FUNC(aed_md_exception_api, "", "");
KSYMTAB_FUNC(aed_md32_exception_api, "", "");
KSYMTAB_FUNC(aed_scp_exception_api, "", "");
KSYMTAB_FUNC(aed_combo_exception_api, "", "");
KSYMTAB_FUNC(aed_common_exception_api, "", "");
KSYMTAB_FUNC(aed_get_status, "", "");

SYMBOL_CRC(aee_get_mode, 0xa2aed337, "");
SYMBOL_CRC(aee_kernel_exception_api_func, 0x45b60059, "");
SYMBOL_CRC(aee_kernel_warning_api_func, 0xdb976d85, "");
SYMBOL_CRC(aee_kernel_fatal_api_func, 0xd2db42b8, "");
SYMBOL_CRC(aee_is_printk_too_much, 0x29c37d82, "");
SYMBOL_CRC(aee_kernel_reminding_api, 0x68cc0616, "");
SYMBOL_CRC(aed_md_exception_api, 0x6961e6ba, "");
SYMBOL_CRC(aed_md32_exception_api, 0x7efa57bf, "");
SYMBOL_CRC(aed_scp_exception_api, 0x02d5dc71, "");
SYMBOL_CRC(aed_combo_exception_api, 0x4af93671, "");
SYMBOL_CRC(aed_common_exception_api, 0x97680f44, "");
SYMBOL_CRC(aed_get_status, 0x65a333bb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x999e8297, "vfree" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa9f8a6d3, "__put_cred" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x25758a2c, "misc_register" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xc310b981, "strnstr" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0xa4914706, "seq_release_private" },
	{ 0xf484a58a, "seq_open_private" },
	{ 0x173e2075, "seq_write" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x037a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x6bd1aa56, "stack_trace_save" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf99fe34b, "vmalloc_user_noprof" },
	{ 0x9166fada, "strncpy" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xa6257a2f, "complete" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5a921311, "strncmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc0a54449, "pid_task" },
	{ 0x4581ae3f, "find_pid_ns" },
	{ 0xcea06c29, "task_active_pid_ns" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xcf2a6966, "up" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5420b005, "get_task_mm" },
	{ 0x97c8f6bf, "access_process_vm" },
	{ 0xff275d94, "mmput" },
	{ 0xc3246938, "misc_deregister" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0xf1e046cc, "panic" },
	{ 0x0472cf3b, "register_kprobe" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0x5eb0184d, "register_die_notifier" },
	{ 0x349cba85, "strchr" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x8c6ba271, "kthread_bind" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x85df9b6c, "strsep" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xe27121cb, "panic_notifier_list" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x00148653, "vsnprintf" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xec64a3d1, "register_module_notifier" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0xc93e87d8, "unregister_module_notifier" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x999e8297,
	0xbee3ddd5,
	0xc5b6f236,
	0xa9f8a6d3,
	0xd9a5ea54,
	0xa571f6b0,
	0x25758a2c,
	0xaf7cb74b,
	0xc310b981,
	0xb318cbab,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0xa4914706,
	0xf484a58a,
	0x173e2075,
	0x75ca79b5,
	0x34db050b,
	0xe2964344,
	0xf02aa937,
	0x037a0cba,
	0x608741b5,
	0x9a835040,
	0xd35cce70,
	0xd5977bfb,
	0xed55cabd,
	0x1e6d26a8,
	0x656e4a6e,
	0x9ec6ca96,
	0x356461c8,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x476b165a,
	0xa916b694,
	0x6bd1aa56,
	0x7e19152a,
	0x9d2ab8ac,
	0xf99fe34b,
	0x9166fada,
	0x7682ba4e,
	0x88db9f48,
	0x9a85eebb,
	0xa6257a2f,
	0x2be0c009,
	0x5a921311,
	0xbcab6ee6,
	0x6bd0e573,
	0xc0a54449,
	0x4581ae3f,
	0xcea06c29,
	0xe94986d6,
	0xcf2a6966,
	0x8d522714,
	0x2469810f,
	0xba8fbd64,
	0xb5b54b34,
	0x5420b005,
	0x97c8f6bf,
	0xff275d94,
	0xc3246938,
	0xe6de52c9,
	0x0f05f001,
	0x2d3385d3,
	0x15ba50a6,
	0xfe5d4bb2,
	0xefe8a82e,
	0x75fb9062,
	0xeae3dfd6,
	0x330c0b0f,
	0xf1e046cc,
	0x0472cf3b,
	0x83b96232,
	0x5eb0184d,
	0x349cba85,
	0xf5edea2e,
	0xf93aae46,
	0xba0aee2e,
	0x8c6ba271,
	0xce5bc4d0,
	0x7e688f68,
	0xf9a482f9,
	0x1b2fa1a9,
	0x85df9b6c,
	0xedc03953,
	0x5c3c7387,
	0x40863ba1,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xe27121cb,
	0x017de3d5,
	0xaf56600a,
	0x00148653,
	0xe0da6e4a,
	0x57c959d2,
	0x7518b5f0,
	0xec64a3d1,
	0x10a09bd4,
	0xc93e87d8,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0xf70e4a4d,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x3b6c41ea,
	0x4302d0eb,
	0xccf69887,
	0xe2d5255a,
	0x805e2dd2,
	0x7aba1ef6,
	0xac594e02,
	0xa65c6def,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"vfree\0"
	"vzalloc_noprof\0"
	"queue_work_on\0"
	"__put_cred\0"
	"__init_waitqueue_head\0"
	"__mutex_init\0"
	"misc_register\0"
	"of_property_read_string\0"
	"strnstr\0"
	"of_find_node_opts_by_path\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"seq_release_private\0"
	"seq_open_private\0"
	"seq_write\0"
	"__fortify_panic\0"
	"_raw_spin_lock_irqsave\0"
	"__wake_up\0"
	"wait_for_completion_interruptible_timeout\0"
	"kfree\0"
	"__init_swait_queue_head\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"strstr\0"
	"snprintf\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"sized_strscpy\0"
	"strnlen\0"
	"stack_trace_save\0"
	"__list_add_valid_or_report\0"
	"__tasklet_schedule\0"
	"vmalloc_user_noprof\0"
	"strncpy\0"
	"__copy_overflow\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"complete\0"
	"__arch_copy_from_user\0"
	"strncmp\0"
	"sscanf\0"
	"down_interruptible\0"
	"pid_task\0"
	"find_pid_ns\0"
	"task_active_pid_ns\0"
	"sched_clock\0"
	"up\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"get_task_mm\0"
	"access_process_vm\0"
	"mmput\0"
	"misc_deregister\0"
	"param_ops_bool\0"
	"mem_alloc_profiling_key\0"
	"system_wq\0"
	"jiffies\0"
	"sys_tz\0"
	"kmalloc_caches\0"
	"arch_timer_read_counter\0"
	"__const_udelay\0"
	"remove_proc_entry\0"
	"panic\0"
	"register_kprobe\0"
	"atomic_notifier_chain_register\0"
	"register_die_notifier\0"
	"strchr\0"
	"___ratelimit\0"
	"__arm_smccc_smc\0"
	"kthread_create_on_node\0"
	"kthread_bind\0"
	"wake_up_process\0"
	"sched_setscheduler\0"
	"msleep\0"
	"vmalloc_noprof\0"
	"strsep\0"
	"iounmap\0"
	"kstrtoull\0"
	"ioremap_prot\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"panic_notifier_list\0"
	"nr_cpu_ids\0"
	"arm64_use_ng_mappings\0"
	"vsnprintf\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"proc_mkdir\0"
	"register_module_notifier\0"
	"for_each_kernel_tracepoint\0"
	"unregister_module_notifier\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"preempt_schedule_notrace\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"kstrtouint\0"
	"free_pages\0"
	"get_free_pages_noprof\0"
	"strcmp\0"
	"tracepoint_probe_register\0"
	"tracepoint_probe_unregister\0"
	"__cpu_online_mask\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


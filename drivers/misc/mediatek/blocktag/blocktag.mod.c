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

KSYMTAB_FUNC(mtk_btag_mictx_get_data, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_mictx_register, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_mictx_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_get_aee_buffer, "", "");
KSYMTAB_FUNC(mtk_btag_ufs_send_command, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_ufs_transfer_req_compl, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_ufs_init, "_gpl", "");
KSYMTAB_FUNC(mtk_btag_ufs_exit, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_biolog_send_command, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_biolog_transfer_req_compl, "_gpl", "");
KSYMTAB_FUNC(set_mmc_perf_mode, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_biolog_check, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_biolog_init, "_gpl", "");
KSYMTAB_FUNC(mmc_mtk_biolog_exit, "_gpl", "");

SYMBOL_CRC(mtk_btag_mictx_get_data, 0x0033c933, "_gpl");
SYMBOL_CRC(mtk_btag_mictx_register, 0x5259c02d, "_gpl");
SYMBOL_CRC(mtk_btag_mictx_unregister, 0x889366c4, "_gpl");
SYMBOL_CRC(mtk_btag_get_aee_buffer, 0x52ac53b2, "");
SYMBOL_CRC(mtk_btag_ufs_send_command, 0xcc357530, "_gpl");
SYMBOL_CRC(mtk_btag_ufs_transfer_req_compl, 0x896cd710, "_gpl");
SYMBOL_CRC(mtk_btag_ufs_init, 0xe4c16222, "_gpl");
SYMBOL_CRC(mtk_btag_ufs_exit, 0x9d7537c1, "_gpl");
SYMBOL_CRC(mmc_mtk_biolog_send_command, 0xd180567c, "_gpl");
SYMBOL_CRC(mmc_mtk_biolog_transfer_req_compl, 0x892b2faa, "_gpl");
SYMBOL_CRC(set_mmc_perf_mode, 0x1b456e2e, "_gpl");
SYMBOL_CRC(mmc_mtk_biolog_check, 0x6954a460, "_gpl");
SYMBOL_CRC(mmc_mtk_biolog_init, 0x17a9a281, "_gpl");
SYMBOL_CRC(mmc_mtk_biolog_exit, 0xb917c850, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x0b954976, "xa_find" },
	{ 0x71a5f4c1, "xa_find_after" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xb4028d67, "proc_create" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x44033864, "proc_remove" },
	{ 0x79bc1bfb, "xa_erase" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x46c25534, "xa_load" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfa66f2df, "__xa_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x5a921311, "strncmp" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7b9793a2, "get_cpu_idle_time_us" },
	{ 0x1234e483, "get_cpu_iowait_time_us" },
	{ 0x9166fada, "strncpy" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x665b5ccb, "seq_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x9dbbc41f, "of_find_node_by_type" },
	{ 0x6b201699, "of_find_property" },
	{ 0x6b279ab4, "of_property_read_variable_u64_array" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xb4f43232, "proc_set_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x999e8297, "vfree" },
	{ 0xc9153568, "vm_event_states" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xc54f8db6, "kernel_cpustat" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x7d18cc38, "vm_node_stat" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2964344, "__wake_up" },
	{ 0x173e2075, "seq_write" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0x96848186, "scnprintf" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x34db050b,
	0xe94986d6,
	0x0b954976,
	0x71a5f4c1,
	0xd5977bfb,
	0x92997ed8,
	0xb4028d67,
	0xed55cabd,
	0x44033864,
	0x79bc1bfb,
	0x44c10a52,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x2d2c902f,
	0xc61f330d,
	0xe3c00b45,
	0x881d741f,
	0xa3783864,
	0x46c25534,
	0xd35cce70,
	0x8d522714,
	0x2469810f,
	0xf70e4a4d,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x2be0c009,
	0x9a85eebb,
	0x037a0cba,
	0x441d0de9,
	0x52c5c991,
	0x476b165a,
	0xfa66f2df,
	0xba8fbd64,
	0xb5b54b34,
	0xac594e02,
	0x0f05f001,
	0x5a921311,
	0x56470118,
	0x7518b5f0,
	0x28aa6a67,
	0x7b9793a2,
	0x1234e483,
	0x9166fada,
	0x3cdb28e3,
	0x665b5ccb,
	0xc8f2ae9d,
	0x656e4a6e,
	0xf9606a4e,
	0x9dbbc41f,
	0x6b201699,
	0x6b279ab4,
	0x1b2fa1a9,
	0xb4f43232,
	0x88db9f48,
	0x10a09bd4,
	0x805e2dd2,
	0xe2d5255a,
	0x29161415,
	0x7aba1ef6,
	0x999e8297,
	0xc9153568,
	0x280f9f14,
	0xde7ece30,
	0xc54f8db6,
	0x9688de8b,
	0x7d18cc38,
	0xd9a5ea54,
	0xe2964344,
	0x173e2075,
	0x819bebd4,
	0x65929cae,
	0xea82d349,
	0x102fe6de,
	0xcb2e80c6,
	0x135bb7ec,
	0xc0b7c197,
	0x19b76060,
	0x49cd25ed,
	0x8c03d20c,
	0xc5b6f236,
	0x6091797f,
	0x95bab132,
	0x1af93d4f,
	0x96848186,
	0xf8bd87ca,
	0xdb4e2667,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_raw_spin_lock_irqsave\0"
	"sched_clock\0"
	"xa_find\0"
	"xa_find_after\0"
	"mutex_lock\0"
	"_printk\0"
	"proc_create\0"
	"mutex_unlock\0"
	"proc_remove\0"
	"xa_erase\0"
	"kvfree_call_rcu\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run5\0"
	"bpf_trace_run3\0"
	"bpf_trace_run2\0"
	"xa_load\0"
	"_raw_spin_unlock_irqrestore\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"preempt_schedule_notrace\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_noprof\0"
	"sized_strscpy\0"
	"__xa_alloc\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"strncmp\0"
	"__warn_printk\0"
	"proc_mkdir\0"
	"call_rcu\0"
	"get_cpu_idle_time_us\0"
	"get_cpu_iowait_time_us\0"
	"strncpy\0"
	"seq_release\0"
	"seq_open\0"
	"seq_printf\0"
	"snprintf\0"
	"mrdump_set_extra_dump\0"
	"of_find_node_by_type\0"
	"of_find_property\0"
	"of_property_read_variable_u64_array\0"
	"vmalloc_noprof\0"
	"proc_set_user\0"
	"__check_object_size\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"strcmp\0"
	"find_task_by_vpid\0"
	"tracepoint_probe_unregister\0"
	"vfree\0"
	"vm_event_states\0"
	"__per_cpu_offset\0"
	"__cpu_possible_mask\0"
	"kernel_cpustat\0"
	"memstart_addr\0"
	"vm_node_stat\0"
	"__init_waitqueue_head\0"
	"__wake_up\0"
	"seq_write\0"
	"mutex_is_locked\0"
	"ns_to_timespec64\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_active\0"
	"hrtimer_forward\0"
	"hrtimer_start_range_ns\0"
	"kstrtouint_from_user\0"
	"alloc_workqueue\0"
	"destroy_workqueue\0"
	"queue_work_on\0"
	"synchronize_rcu\0"
	"icc_set_bw\0"
	"freq_qos_update_request\0"
	"scnprintf\0"
	"cpufreq_cpu_get\0"
	"freq_qos_add_request\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mrdump");


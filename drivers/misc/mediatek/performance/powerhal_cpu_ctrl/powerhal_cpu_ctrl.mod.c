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

KSYMTAB_DATA(powerhal2fpsgo_get_fpsgo_frame_info_fp, "", "");
KSYMTAB_FUNC(adpf_register_callback, "", "");
KSYMTAB_FUNC(adpf_unregister_callback, "", "");

SYMBOL_CRC(powerhal2fpsgo_get_fpsgo_frame_info_fp, 0x7e4337ad, "");
SYMBOL_CRC(adpf_register_callback, 0xc51c6960, "");
SYMBOL_CRC(adpf_unregister_callback, 0x972b5c0f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0xb7c0f443, "sort" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68465f38, "cpufreq_set_cci_mode" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x00148653, "vsnprintf" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xe4bc4b09, "cpu_topology" },
	{ 0x5807438a, "powerhal_adpf_create_session_hint_fp" },
	{ 0xb1515988, "powerhal_adpf_get_hint_session_preferred_rate_fp" },
	{ 0x34ee6a2f, "powerhal_adpf_update_work_duration_fp" },
	{ 0x8800706c, "powerhal_adpf_report_actual_work_duration_fp" },
	{ 0x8dc0ef24, "powerhal_adpf_pause_fp" },
	{ 0xc0d1cb03, "powerhal_adpf_resume_fp" },
	{ 0xb33fa2f6, "powerhal_adpf_close_fp" },
	{ 0xfd4fc39a, "powerhal_adpf_sent_hint_fp" },
	{ 0xa070e3c4, "powerhal_adpf_set_threads_fp" },
	{ 0xca8346e0, "powerhal_adpf_get_cpu_headroom_fp" },
	{ 0x493844a0, "powerhal_dsu_sport_mode_fp" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0xccf69887,
	0x4302d0eb,
	0xf8bd87ca,
	0x92997ed8,
	0xcd6f7bae,
	0xb7c0f443,
	0x1af93d4f,
	0xd5977bfb,
	0xed55cabd,
	0x56470118,
	0x29161415,
	0x1e6d26a8,
	0x656e4a6e,
	0x68465f38,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x88db9f48,
	0x2be0c009,
	0xe17134b6,
	0x52c5c991,
	0x00148653,
	0xf70e4a4d,
	0x8d522714,
	0x0296695f,
	0x476b165a,
	0xe5010018,
	0x2469810f,
	0x7518b5f0,
	0xb4028d67,
	0x7aa1756e,
	0xdb4e2667,
	0x96848186,
	0x9c81ceff,
	0x85df9b6c,
	0x8c8569cb,
	0xde7ece30,
	0x0f05f001,
	0xefe8a82e,
	0xac594e02,
	0xe4bc4b09,
	0x5807438a,
	0xb1515988,
	0x34ee6a2f,
	0x8800706c,
	0x8dc0ef24,
	0xc0d1cb03,
	0xb33fa2f6,
	0xfd4fc39a,
	0xa070e3c4,
	0xca8346e0,
	0x493844a0,
	0x4829a47e,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"get_free_pages_noprof\0"
	"free_pages\0"
	"cpufreq_cpu_get\0"
	"_printk\0"
	"cpufreq_cpu_put\0"
	"sort\0"
	"freq_qos_update_request\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__warn_printk\0"
	"find_task_by_vpid\0"
	"strstr\0"
	"snprintf\0"
	"cpufreq_set_cci_mode\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"vsnprintf\0"
	"preempt_schedule_notrace\0"
	"__rcu_read_lock\0"
	"refcount_warn_saturate\0"
	"sized_strscpy\0"
	"__put_task_struct\0"
	"__rcu_read_unlock\0"
	"proc_mkdir\0"
	"proc_create\0"
	"kvfree\0"
	"freq_qos_add_request\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"strsep\0"
	"kstrtoint\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_online_mask\0"
	"cpu_topology\0"
	"powerhal_adpf_create_session_hint_fp\0"
	"powerhal_adpf_get_hint_session_preferred_rate_fp\0"
	"powerhal_adpf_update_work_duration_fp\0"
	"powerhal_adpf_report_actual_work_duration_fp\0"
	"powerhal_adpf_pause_fp\0"
	"powerhal_adpf_resume_fp\0"
	"powerhal_adpf_close_fp\0"
	"powerhal_adpf_sent_hint_fp\0"
	"powerhal_adpf_set_threads_fp\0"
	"powerhal_adpf_get_cpu_headroom_fp\0"
	"powerhal_dsu_sport_mode_fp\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccidvfs,mtk_ioctl_powerhal");


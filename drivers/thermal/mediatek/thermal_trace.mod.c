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

KSYMTAB_DATA(__tracepoint_md_mutt_limit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_md_mutt_limit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_md_mutt_limit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_md_tx_pwr_limit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_md_tx_pwr_limit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_md_tx_pwr_limit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_md_scg_off, "_gpl", "");
KSYMTAB_FUNC(__traceiter_md_scg_off, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_md_scg_off, "_gpl", "");
KSYMTAB_DATA(__tracepoint_network_tput, "_gpl", "");
KSYMTAB_FUNC(__traceiter_network_tput, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_network_tput, "_gpl", "");
KSYMTAB_DATA(__tracepoint_cpu_hr_info_0, "_gpl", "");
KSYMTAB_FUNC(__traceiter_cpu_hr_info_0, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_cpu_hr_info_0, "_gpl", "");
KSYMTAB_DATA(__tracepoint_cpu_hr_info_1, "_gpl", "");
KSYMTAB_FUNC(__traceiter_cpu_hr_info_1, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_cpu_hr_info_1, "_gpl", "");

SYMBOL_CRC(__tracepoint_md_mutt_limit, 0xc9d0b97e, "_gpl");
SYMBOL_CRC(__traceiter_md_mutt_limit, 0x26ea4bee, "_gpl");
SYMBOL_CRC(__SCK__tp_func_md_mutt_limit, 0x3d785a1a, "_gpl");
SYMBOL_CRC(__tracepoint_md_tx_pwr_limit, 0x3123f345, "_gpl");
SYMBOL_CRC(__traceiter_md_tx_pwr_limit, 0xaf426228, "_gpl");
SYMBOL_CRC(__SCK__tp_func_md_tx_pwr_limit, 0x09b11a8c, "_gpl");
SYMBOL_CRC(__tracepoint_md_scg_off, 0x5a9a69ec, "_gpl");
SYMBOL_CRC(__traceiter_md_scg_off, 0xf3c5d269, "_gpl");
SYMBOL_CRC(__SCK__tp_func_md_scg_off, 0xe5f24bf7, "_gpl");
SYMBOL_CRC(__tracepoint_network_tput, 0xf2645346, "_gpl");
SYMBOL_CRC(__traceiter_network_tput, 0x32ca2d80, "_gpl");
SYMBOL_CRC(__SCK__tp_func_network_tput, 0x8e326650, "_gpl");
SYMBOL_CRC(__tracepoint_cpu_hr_info_0, 0xeb72913e, "_gpl");
SYMBOL_CRC(__traceiter_cpu_hr_info_0, 0xcf7f83b2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_cpu_hr_info_0, 0x1fda725a, "_gpl");
SYMBOL_CRC(__tracepoint_cpu_hr_info_1, 0xf269a07f, "_gpl");
SYMBOL_CRC(__traceiter_cpu_hr_info_1, 0xa1cb1520, "_gpl");
SYMBOL_CRC(__SCK__tp_func_cpu_hr_info_1, 0x06c1431b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8503409, "dev_get_stats" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x03019bb0, "frs_data" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xd067d3c5, "system_freezable_power_efficient_wq" },
	{ 0x0fd08486, "thermal_csram_base" },
	{ 0xca5670ee, "thermal_cputcm_base" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xb36db42d, "thermal_apu_mbox_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x8900d05a,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0xe80494d6,
	0x1c7a01a8,
	0xa571f6b0,
	0xc6f46339,
	0xffeedf6a,
	0xea82d349,
	0x62b33777,
	0x92997ed8,
	0x5e515be6,
	0x5a921311,
	0xe8503409,
	0x8d522714,
	0x2469810f,
	0xf70e4a4d,
	0xd5977bfb,
	0x9e87b2ff,
	0xed55cabd,
	0x86a50ae0,
	0x6b722180,
	0x0c1a5ee3,
	0x135bb7ec,
	0x656e4a6e,
	0x3b6c41ea,
	0xc0b7c197,
	0x2155f701,
	0x5c3c7387,
	0x3667c9f1,
	0xcec49a87,
	0x102fe6de,
	0xce8498d7,
	0x03019bb0,
	0x6d2fc5a6,
	0xac594e02,
	0xd067d3c5,
	0x0fd08486,
	0xca5670ee,
	0xde7ece30,
	0xb36db42d,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_print_symbols_seq\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"bpf_trace_run1\0"
	"bpf_trace_run4\0"
	"__mutex_init\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"hrtimer_init\0"
	"sysfs_create_group\0"
	"_printk\0"
	"ktime_get_ts64\0"
	"strncmp\0"
	"dev_get_stats\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"preempt_schedule_notrace\0"
	"mutex_lock\0"
	"cancel_delayed_work\0"
	"mutex_unlock\0"
	"mod_delayed_work_on\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"hrtimer_forward\0"
	"snprintf\0"
	"kstrtouint\0"
	"hrtimer_start_range_ns\0"
	"hrtimer_try_to_cancel\0"
	"kstrtoull\0"
	"sysfs_remove_group\0"
	"cancel_delayed_work_sync\0"
	"hrtimer_cancel\0"
	"kernel_kobj\0"
	"frs_data\0"
	"net_namespace_list\0"
	"__cpu_online_mask\0"
	"system_freezable_power_efficient_wq\0"
	"thermal_csram_base\0"
	"thermal_cputcm_base\0"
	"__cpu_possible_mask\0"
	"thermal_apu_mbox_base\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "thermal_interface");


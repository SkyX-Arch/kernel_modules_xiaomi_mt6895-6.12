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

KSYMTAB_DATA(mtk_cpuqos_set, "", "");
KSYMTAB_DATA(mtk_cpuqos_css_map, "", "");
KSYMTAB_FUNC(set_group_pd, "_gpl", "");
KSYMTAB_FUNC(set_task_pd, "_gpl", "");
KSYMTAB_FUNC(set_ct_group, "_gpl", "");
KSYMTAB_FUNC(set_ct_task, "_gpl", "");
KSYMTAB_FUNC(set_cpuqos_mode, "_gpl", "");
KSYMTAB_FUNC(set_task_user_group, "_gpl", "");
KSYMTAB_FUNC(set_cache_ctl_user_group, "_gpl", "");

SYMBOL_CRC(mtk_cpuqos_set, 0xd78e87a1, "");
SYMBOL_CRC(mtk_cpuqos_css_map, 0x78013c32, "");
SYMBOL_CRC(set_group_pd, 0x58e1853b, "_gpl");
SYMBOL_CRC(set_task_pd, 0xa77e7900, "_gpl");
SYMBOL_CRC(set_ct_group, 0x432e8e24, "_gpl");
SYMBOL_CRC(set_ct_task, 0xb911093e, "_gpl");
SYMBOL_CRC(set_cpuqos_mode, 0x0506a165, "_gpl");
SYMBOL_CRC(set_task_user_group, 0x13f1ddfa, "_gpl");
SYMBOL_CRC(set_cache_ctl_user_group, 0xbbeb7725, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x98f09577, "kernfs_path_from_node" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xfb6c3ae3, "cgroup_taskset_first" },
	{ 0xd8e26b0b, "cgroup_taskset_next" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x73caefdc, "init_task" },
	{ 0xd820ab9a, "vendor_data_pad" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x2946998f, "__tracepoint_android_vh_cgroup_attach" },
	{ 0x9510dc7e, "__tracepoint_android_vh_is_fpsimd_save" },
	{ 0xf4048646, "__tracepoint_task_newtask" },
	{ 0x02a8552a, "bus_get_dev_root" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x43af29f5, "kobject_uevent" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xabf45b2f, "cpu_subsys" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0xa0eae826,
	0x29161415,
	0x92997ed8,
	0x12db679a,
	0x6fc35f2b,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x3d10f515,
	0x6bd4d5dc,
	0xe80494d6,
	0x881d741f,
	0xa3783864,
	0xf70e4a4d,
	0x8d522714,
	0x0296695f,
	0x2469810f,
	0x6228c21f,
	0xe5010018,
	0xc905402b,
	0xfa4d3c24,
	0x656e4a6e,
	0x8c8569cb,
	0x42ad47ad,
	0xffeedf6a,
	0x6b722180,
	0x0c1a5ee3,
	0x7f02188f,
	0xbcab6ee6,
	0xa823db6e,
	0x3d0ffa5c,
	0xe136f93c,
	0x40863ba1,
	0x49cd25ed,
	0x7518b5f0,
	0xb4028d67,
	0xe2d5255a,
	0x98f09577,
	0x805e2dd2,
	0xfb6c3ae3,
	0xd8e26b0b,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x2be0c009,
	0x7aba1ef6,
	0x8c03d20c,
	0xee46e386,
	0x280f9f14,
	0x73caefdc,
	0xd820ab9a,
	0xac594e02,
	0xaf56600a,
	0x2946998f,
	0x9510dc7e,
	0xf4048646,
	0x02a8552a,
	0x2d405891,
	0x62b33777,
	0x43af29f5,
	0x3bd2c4ce,
	0x3667c9f1,
	0xabf45b2f,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"smp_call_function\0"
	"find_task_by_vpid\0"
	"_printk\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run7\0"
	"bpf_trace_run6\0"
	"bpf_trace_run1\0"
	"bpf_trace_run3\0"
	"bpf_trace_run2\0"
	"preempt_schedule_notrace\0"
	"__rcu_read_lock\0"
	"refcount_warn_saturate\0"
	"__rcu_read_unlock\0"
	"smp_call_function_single\0"
	"__put_task_struct\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"snprintf\0"
	"kstrtoint\0"
	"queue_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__msecs_to_jiffies\0"
	"sscanf\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"of_property_read_variable_u32_array\0"
	"ioremap_prot\0"
	"alloc_workqueue\0"
	"proc_mkdir\0"
	"proc_create\0"
	"strcmp\0"
	"kernfs_path_from_node\0"
	"tracepoint_probe_register\0"
	"cgroup_taskset_first\0"
	"cgroup_taskset_next\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__arch_copy_from_user\0"
	"tracepoint_probe_unregister\0"
	"destroy_workqueue\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"init_task\0"
	"vendor_data_pad\0"
	"__cpu_online_mask\0"
	"arm64_use_ng_mappings\0"
	"__tracepoint_android_vh_cgroup_attach\0"
	"__tracepoint_android_vh_is_fpsimd_save\0"
	"__tracepoint_task_newtask\0"
	"bus_get_dev_root\0"
	"kobject_create_and_add\0"
	"sysfs_create_group\0"
	"kobject_uevent\0"
	"kobject_put\0"
	"sysfs_remove_group\0"
	"cpu_subsys\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


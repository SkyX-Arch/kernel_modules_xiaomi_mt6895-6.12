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

KSYMTAB_FUNC(spmtwam_monitor, "", "");

SYMBOL_CRC(spmtwam_monitor, 0x757b7bc6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0x34db050b,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x1c7a01a8,
	0x75ca79b5,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xd35cce70,
	0x12db679a,
	0xf3cdc3c6,
	0xaba63322,
	0x7c611278,
	0xe136f93c,
	0x92d5838e,
	0xeae3dfd6,
	0x7518b5f0,
	0xb4028d67,
	0xa2fa95a0,
	0x96848186,
	0x9c81ceff,
	0xa916b694,
	0x19b76060,
	0xf70e4a4d,
	0x6fc35f2b,
	0x330c0b0f,
	0xac594e02,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run4\0"
	"__fortify_panic\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"__const_udelay\0"
	"proc_mkdir\0"
	"proc_create\0"
	"proc_create_data\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"strnlen\0"
	"kstrtouint_from_user\0"
	"preempt_schedule_notrace\0"
	"platform_driver_unregister\0"
	"remove_proc_entry\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,spmtwam");
MODULE_ALIAS("of:N*T*Cmediatek,spmtwamC*");

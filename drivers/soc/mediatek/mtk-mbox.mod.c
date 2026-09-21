#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_mbox_write_hd, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_read_hd, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_write, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_read, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_clr_irq, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_trigger_irq, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_check_send_irq, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_read_recv_irq, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_set_base_reg, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_set_base_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_cb_register, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_polling, "_gpl", "");
KSYMTAB_FUNC(mtk_smem_init, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_probe, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_clr_index_record, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_get_index_record, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_print_recv, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_print_send, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_print_minfo, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_dump_all, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_dump_recv, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_dump_recv_pin, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_dump_send, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_log_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_mbox_reset_record, "_gpl", "");

SYMBOL_CRC(mtk_mbox_write_hd, 0x42a00dec, "_gpl");
SYMBOL_CRC(mtk_mbox_read_hd, 0xd490c488, "_gpl");
SYMBOL_CRC(mtk_mbox_write, 0x8be40ba0, "_gpl");
SYMBOL_CRC(mtk_mbox_read, 0xab28f7ae, "_gpl");
SYMBOL_CRC(mtk_mbox_clr_irq, 0x0c4bd2ae, "_gpl");
SYMBOL_CRC(mtk_mbox_trigger_irq, 0x9ac37c2d, "_gpl");
SYMBOL_CRC(mtk_mbox_check_send_irq, 0x24f0d91a, "_gpl");
SYMBOL_CRC(mtk_mbox_read_recv_irq, 0x8875720c, "_gpl");
SYMBOL_CRC(mtk_mbox_set_base_reg, 0x6daa2957, "_gpl");
SYMBOL_CRC(mtk_mbox_set_base_addr, 0x1fa78027, "_gpl");
SYMBOL_CRC(mtk_mbox_cb_register, 0xb5c2b93e, "_gpl");
SYMBOL_CRC(mtk_mbox_polling, 0x9b064721, "_gpl");
SYMBOL_CRC(mtk_smem_init, 0x0843a757, "_gpl");
SYMBOL_CRC(mtk_mbox_probe, 0x656cde9e, "_gpl");
SYMBOL_CRC(mtk_mbox_clr_index_record, 0x139d7bcf, "_gpl");
SYMBOL_CRC(mtk_mbox_get_index_record, 0x729759aa, "_gpl");
SYMBOL_CRC(mtk_mbox_print_recv, 0xe47b8279, "_gpl");
SYMBOL_CRC(mtk_mbox_print_send, 0xd5cc5e78, "_gpl");
SYMBOL_CRC(mtk_mbox_print_minfo, 0xd0de94e9, "_gpl");
SYMBOL_CRC(mtk_mbox_dump_all, 0xccc13ccf, "_gpl");
SYMBOL_CRC(mtk_mbox_dump_recv, 0xfa14f8ea, "_gpl");
SYMBOL_CRC(mtk_mbox_dump_recv_pin, 0x924e3c8d, "_gpl");
SYMBOL_CRC(mtk_mbox_dump_send, 0x7e68a17f, "_gpl");
SYMBOL_CRC(mtk_mbox_dump, 0x31c07c49, "_gpl");
SYMBOL_CRC(mtk_mbox_log_enable, 0xc795667f, "_gpl");
SYMBOL_CRC(mtk_mbox_reset_record, 0x920afc1b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe0da6e4a,
	0x57c959d2,
	0x92997ed8,
	0x34db050b,
	0x656e4a6e,
	0x9e400c59,
	0x374f8976,
	0x9f0ef8fa,
	0x31b65f04,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0x98cf60b3,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0x881d741f,
	0xd35cce70,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xf70e4a4d,
	0x92d5838e,
	0xe94986d6,
	0xac594e02,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"snprintf\0"
	"platform_get_irq_byname\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"of_property_read_u32_index\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"strlen\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"bpf_trace_run3\0"
	"_raw_spin_unlock_irqrestore\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"preempt_schedule_notrace\0"
	"request_threaded_irq\0"
	"sched_clock\0"
	"__cpu_online_mask\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(ipi_monitor_dump, "", "");
KSYMTAB_FUNC(mtk_ipi_device_register, "", "");
KSYMTAB_FUNC(mtk_ipi_device_reset, "", "");
KSYMTAB_FUNC(mtk_ipi_register, "", "");
KSYMTAB_FUNC(mtk_ipi_unregister, "", "");
KSYMTAB_FUNC(mtk_ipi_send, "", "");
KSYMTAB_FUNC(mtk_ipi_recv, "", "");
KSYMTAB_FUNC(mtk_ipi_send_compl, "", "");
KSYMTAB_FUNC(mtk_ipi_recv_reply, "", "");
KSYMTAB_FUNC(mtk_ipi_tracking, "", "");

SYMBOL_CRC(ipi_monitor_dump, 0x3eb78627, "");
SYMBOL_CRC(mtk_ipi_device_register, 0x92e3b6d1, "");
SYMBOL_CRC(mtk_ipi_device_reset, 0x2b8d79ec, "");
SYMBOL_CRC(mtk_ipi_register, 0x65bb94f6, "");
SYMBOL_CRC(mtk_ipi_unregister, 0x758ef887, "");
SYMBOL_CRC(mtk_ipi_send, 0x4a353d20, "");
SYMBOL_CRC(mtk_ipi_recv, 0x09aacdca, "");
SYMBOL_CRC(mtk_ipi_send_compl, 0x6db70f53, "");
SYMBOL_CRC(mtk_ipi_recv_reply, 0x53f85b6b, "");
SYMBOL_CRC(mtk_ipi_tracking, 0xdfba6888, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7df5d411, "mtk_rpmsg_create_device" },
	{ 0x037a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x960385de, "mtk_rpmsg_create_channel" },
	{ 0x9131a246, "rpmsg_create_ept" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x920afc1b, "mtk_mbox_reset_record" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0xf0a432af, "rpmsg_trysend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9b064721, "mtk_mbox_polling" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x924e3c8d, "mtk_mbox_dump_recv_pin" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x34db050b,
	0x7df5d411,
	0x037a0cba,
	0x656e4a6e,
	0x960385de,
	0x9131a246,
	0xa571f6b0,
	0x920afc1b,
	0xd5977bfb,
	0xed55cabd,
	0xa6257a2f,
	0x819bebd4,
	0xf0a432af,
	0xeae3dfd6,
	0x2e3bcce2,
	0x9b064721,
	0x21ef374c,
	0x4a3ad70e,
	0xffae8e8b,
	0x924e3c8d,
	0xd35cce70,
	0x52c5c991,
	0x608741b5,
	0xe94986d6,
	0x0f05f001,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"mtk_rpmsg_create_device\0"
	"kfree\0"
	"snprintf\0"
	"mtk_rpmsg_create_channel\0"
	"rpmsg_create_ept\0"
	"__mutex_init\0"
	"mtk_mbox_reset_record\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"complete\0"
	"mutex_is_locked\0"
	"rpmsg_trysend\0"
	"__const_udelay\0"
	"wait_for_completion_interruptible\0"
	"mtk_mbox_polling\0"
	"try_wait_for_completion\0"
	"wait_for_completion_timeout\0"
	"nsecs_to_jiffies\0"
	"mtk_mbox_dump_recv_pin\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_noprof\0"
	"__init_swait_queue_head\0"
	"sched_clock\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_rpmsg_mbox,mtk-mbox");


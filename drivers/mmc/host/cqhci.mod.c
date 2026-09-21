#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(cqhci_deactivate, "", "");
KSYMTAB_FUNC(cqhci_resume, "", "");
KSYMTAB_FUNC(cqhci_set_tran_desc, "", "");
KSYMTAB_FUNC(cqhci_irq, "", "");
KSYMTAB_FUNC(cqhci_pltfm_init, "", "");
KSYMTAB_FUNC(cqhci_init, "", "");

SYMBOL_CRC(cqhci_deactivate, 0xddf21132, "");
SYMBOL_CRC(cqhci_resume, 0xad9277ef, "");
SYMBOL_CRC(cqhci_set_tran_desc, 0x90ab8803, "");
SYMBOL_CRC(cqhci_irq, 0x148498de, "");
SYMBOL_CRC(cqhci_pltfm_init, 0xdd83f75a, "");
SYMBOL_CRC(cqhci_init, 0xeb213c45, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2964344, "__wake_up" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x56470118, "__warn_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x892b2faa, "mmc_mtk_biolog_transfer_req_compl" },
	{ 0x6954a460, "mmc_mtk_biolog_check" },
	{ 0x9f84cac3, "mmc_cqe_request_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x32da3500, "dmam_free_coherent" },
	{ 0xed5eed8d, "dmam_alloc_attrs" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd180567c, "mmc_mtk_biolog_send_command" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe5960168, "dma_map_sg_attrs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x740a9f63, "devm_blk_crypto_profile_init" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe2964344,
	0x374f8976,
	0xee73d233,
	0xb4ce05a5,
	0x92997ed8,
	0xd9a5ea54,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x56470118,
	0xba8fbd64,
	0x53a1e8d9,
	0x892b2faa,
	0x6954a460,
	0x9f84cac3,
	0xb5b54b34,
	0xc8c7229e,
	0x32da3500,
	0xed5eed8d,
	0x75ca79b5,
	0x34db050b,
	0xd180567c,
	0xfbe215e4,
	0xe5960168,
	0xd35cce70,
	0xc6970ad9,
	0xb43f9365,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x7f02188f,
	0x608741b5,
	0x740a9f63,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__wake_up\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"_dev_err\0"
	"_printk\0"
	"__init_waitqueue_head\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__warn_printk\0"
	"_raw_spin_lock\0"
	"_find_next_bit\0"
	"mmc_mtk_biolog_transfer_req_compl\0"
	"mmc_mtk_biolog_check\0"
	"mmc_cqe_request_done\0"
	"_raw_spin_unlock\0"
	"devm_kmalloc\0"
	"dmam_free_coherent\0"
	"dmam_alloc_attrs\0"
	"__fortify_panic\0"
	"_raw_spin_lock_irqsave\0"
	"mmc_mtk_biolog_send_command\0"
	"sg_next\0"
	"dma_map_sg_attrs\0"
	"_raw_spin_unlock_irqrestore\0"
	"dma_unmap_sg_attrs\0"
	"ktime_get\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__msecs_to_jiffies\0"
	"__init_swait_queue_head\0"
	"devm_blk_crypto_profile_init\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "blocktag");


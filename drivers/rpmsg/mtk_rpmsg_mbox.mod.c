#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_mbox_send, "_gpl", "");
KSYMTAB_FUNC(mtk_rpmsg_create_channel, "_gpl", "");
KSYMTAB_FUNC(mtk_rpmsg_create_device, "_gpl", "");

SYMBOL_CRC(mtk_mbox_send, 0xced36ab7, "_gpl");
SYMBOL_CRC(mtk_rpmsg_create_channel, 0x960385de, "_gpl");
SYMBOL_CRC(mtk_rpmsg_create_device, 0x7df5d411, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x24f0d91a, "mtk_mbox_check_send_irq" },
	{ 0x8be40ba0, "mtk_mbox_write" },
	{ 0x9ac37c2d, "mtk_mbox_trigger_irq" },
	{ 0x2fda2cf5, "rpmsg_register_device" },
	{ 0x037a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0x24f0d91a,
	0x8be40ba0,
	0x9ac37c2d,
	0x2fda2cf5,
	0x037a0cba,
	0xd35cce70,
	0xe17134b6,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0x0296695f,
	0x0f05f001,
	0xefe8a82e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"mtk_mbox_check_send_irq\0"
	"mtk_mbox_write\0"
	"mtk_mbox_trigger_irq\0"
	"rpmsg_register_device\0"
	"kfree\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_cache_noprof\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"refcount_warn_saturate\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mbox");


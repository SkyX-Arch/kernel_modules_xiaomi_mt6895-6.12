#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_sync_timeline_create, "_gpl", "");
KSYMTAB_FUNC(mtk_sync_timeline_destroy, "_gpl", "");
KSYMTAB_FUNC(mtk_sync_timeline_inc, "_gpl", "");
KSYMTAB_FUNC(mtk_sync_fence_create, "_gpl", "");
KSYMTAB_FUNC(mtk_sync_share_fence_create, "_gpl", "");

SYMBOL_CRC(mtk_sync_timeline_create, 0xdec5777e, "_gpl");
SYMBOL_CRC(mtk_sync_timeline_destroy, 0x39e54c23, "_gpl");
SYMBOL_CRC(mtk_sync_timeline_inc, 0x669e62ec, "_gpl");
SYMBOL_CRC(mtk_sync_fence_create, 0xa6b4f7d0, "_gpl");
SYMBOL_CRC(mtk_sync_share_fence_create, 0xee9aefdd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x4f156483, "dma_resv_reserve_fences" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x037a0cba, "kfree" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe17568e3, "dma_fence_signal_timestamp_locked" },
	{ 0x60bbb124, "dma_fence_signal_locked" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbbda18c4, "dma_fence_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x14605535,
	0xa843805a,
	0xf61b1f04,
	0x0f013cdc,
	0x3f4547a7,
	0x4f156483,
	0xe17134b6,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0x34db050b,
	0x7e19152a,
	0xd35cce70,
	0x0296695f,
	0x037a0cba,
	0x9a835040,
	0x4d9b652b,
	0xe17568e3,
	0x60bbb124,
	0x8427cc7b,
	0x4b750f53,
	0xdeb99119,
	0xa5526619,
	0xca9360b5,
	0xbbda18c4,
	0x656e4a6e,
	0xe123f3d9,
	0x0f05f001,
	0xefe8a82e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"dma_fence_context_alloc\0"
	"get_unused_fd_flags\0"
	"sync_file_create\0"
	"fd_install\0"
	"put_unused_fd\0"
	"dma_resv_reserve_fences\0"
	"__kmalloc_cache_noprof\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"_raw_spin_lock_irqsave\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"refcount_warn_saturate\0"
	"kfree\0"
	"__list_del_entry_valid_or_report\0"
	"rb_erase\0"
	"dma_fence_signal_timestamp_locked\0"
	"dma_fence_signal_locked\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"dma_fence_init\0"
	"rb_insert_color\0"
	"rb_next\0"
	"dma_fence_free\0"
	"snprintf\0"
	"dma_fence_release\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


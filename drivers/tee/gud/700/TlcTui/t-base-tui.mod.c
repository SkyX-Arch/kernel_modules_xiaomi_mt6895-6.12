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

KSYMTAB_FUNC(trustedui_blank_inc, "", "");
KSYMTAB_FUNC(trustedui_blank_dec, "", "");
KSYMTAB_FUNC(trustedui_blank_get_counter, "", "");
KSYMTAB_FUNC(trustedui_blank_set_counter, "", "");
KSYMTAB_FUNC(trustedui_get_current_mode, "", "");
KSYMTAB_FUNC(trustedui_set_mode, "", "");
KSYMTAB_FUNC(trustedui_set_mask, "", "");
KSYMTAB_FUNC(trustedui_clear_mask, "", "");

SYMBOL_CRC(trustedui_blank_inc, 0x9a9260e3, "");
SYMBOL_CRC(trustedui_blank_dec, 0xac2ca493, "");
SYMBOL_CRC(trustedui_blank_get_counter, 0x8cd194e0, "");
SYMBOL_CRC(trustedui_blank_set_counter, 0x0697cf1d, "");
SYMBOL_CRC(trustedui_get_current_mode, 0x04b4e4eb, "");
SYMBOL_CRC(trustedui_set_mode, 0x837fc37e, "");
SYMBOL_CRC(trustedui_set_mask, 0x8d3241fd, "");
SYMBOL_CRC(trustedui_clear_mask, 0xe45be8a7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba860d3c, "dev_set_name" },
	{ 0x401167cc, "_dev_info" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xbd49b14c, "mc_notify" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x4f4c4ece, "mc_open_device" },
	{ 0x44799845, "mc_malloc_wsm" },
	{ 0x5628fc79, "mc_open_session" },
	{ 0xe3ab07f4, "mc_wait_notification" },
	{ 0xae33f2aa, "mc_close_device" },
	{ 0xadb96d11, "mc_close_session" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92997ed8, "_printk" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0xed3a3cb3, "dma_heap_get_name" },
	{ 0x81d613a1, "dmabuf_to_secure_handle" },
	{ 0x9d856127, "trusted_mem_api_query_pa" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0x14a0c390, "display_enter_tui" },
	{ 0xd1ed4e2c, "display_exit_tui" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xba860d3c,
	0x401167cc,
	0xe3ec2f2b,
	0xb4ce05a5,
	0xa302b90d,
	0xcfc099c4,
	0x6091b333,
	0x6fe9dcd4,
	0x9b1faacb,
	0x9a85eebb,
	0x2be0c009,
	0x75ca79b5,
	0x28ba7b6c,
	0xf9a482f9,
	0x93d6dd8c,
	0xa6257a2f,
	0x4a3ad70e,
	0xbd49b14c,
	0x2e3bcce2,
	0xd5977bfb,
	0xba0aee2e,
	0xce5bc4d0,
	0xed55cabd,
	0x4f4c4ece,
	0x44799845,
	0x5628fc79,
	0xe3ab07f4,
	0xae33f2aa,
	0xadb96d11,
	0x34db050b,
	0xd35cce70,
	0x92997ed8,
	0xeff75c0b,
	0xe49fbbe6,
	0xed3a3cb3,
	0x81d613a1,
	0x9d856127,
	0x69020168,
	0x14a0c390,
	0xd1ed4e2c,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"dev_set_name\0"
	"_dev_info\0"
	"alloc_chrdev_region\0"
	"_dev_err\0"
	"cdev_init\0"
	"cdev_add\0"
	"unregister_chrdev_region\0"
	"class_create\0"
	"device_create\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"cdev_del\0"
	"msleep\0"
	"complete_all\0"
	"complete\0"
	"wait_for_completion_timeout\0"
	"mc_notify\0"
	"wait_for_completion_interruptible\0"
	"mutex_lock\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"mutex_unlock\0"
	"mc_open_device\0"
	"mc_malloc_wsm\0"
	"mc_open_session\0"
	"mc_wait_notification\0"
	"mc_close_device\0"
	"mc_close_session\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"_printk\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_get_name\0"
	"dmabuf_to_secure_handle\0"
	"trusted_mem_api_query_pa\0"
	"dma_heap_buffer_free\0"
	"display_enter_tui\0"
	"display_exit_tui\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mcDrvModule,mtk_sec_heap,tmem_ffa,mediatek-drm");


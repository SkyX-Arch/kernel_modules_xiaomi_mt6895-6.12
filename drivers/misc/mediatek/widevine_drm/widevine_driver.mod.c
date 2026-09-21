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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x81d613a1, "dmabuf_to_secure_handle" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0xe3ec2f2b,
	0x8b808b7f,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0x28ba7b6c,
	0x6091b333,
	0xaaae9064,
	0x81d613a1,
	0x2b3df576,
	0x2be0c009,
	0x75ca79b5,
	0x9a85eebb,
	0x169f5b1f,
	0xef27af6b,
	0x6fc35f2b,
	0xb2fb935e,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"dma_buf_get\0"
	"dmabuf_to_secure_handle\0"
	"dma_buf_put\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"__arch_copy_to_user\0"
	"device_destroy\0"
	"class_destroy\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_sec_heap");

MODULE_ALIAS("of:N*T*Cmediatek,drm_wv");
MODULE_ALIAS("of:N*T*Cmediatek,drm_wvC*");

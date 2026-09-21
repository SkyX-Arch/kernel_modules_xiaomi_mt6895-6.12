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
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xa823db6e,
	0x0be515ae,
	0x1fec5304,
	0x12db679a,
	0xd9a5ea54,
	0xf3cdc3c6,
	0xb088bcfc,
	0xd4e81a21,
	0xea23ff02,
	0xaba63322,
	0x7c611278,
	0xe3ec2f2b,
	0x8b808b7f,
	0x6091b333,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0x6b722180,
	0x0c1a5ee3,
	0xc3055d20,
	0x2be0c009,
	0x9a85eebb,
	0xba8fbd64,
	0xb5b54b34,
	0xaaae9064,
	0xfff4bd7c,
	0xe70e1ef3,
	0xecbe3c62,
	0x2b3df576,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xf1e3c830,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0x6d25698b,
	0x5be9ce07,
	0xea6f49c8,
	0xe136f93c,
	0x92d5838e,
	0xe2964344,
	0x1f0a95af,
	0x28ba7b6c,
	0x169f5b1f,
	0xef27af6b,
	0x5c27c40f,
	0x6fc35f2b,
	0x15ba50a6,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"__of_parse_phandle_with_args\0"
	"__platform_driver_register\0"
	"__init_waitqueue_head\0"
	"of_find_compatible_node\0"
	"of_count_phandle_with_args\0"
	"pm_runtime_enable\0"
	"devm_clk_get\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"unregister_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"usleep_range_state\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"dma_buf_get\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_put\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"mtk_icc_set_bw\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"__wake_up\0"
	"of_mtk_icc_get\0"
	"cdev_del\0"
	"device_destroy\0"
	"class_destroy\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-icc-core");

MODULE_ALIAS("of:N*T*Cmediatek,camera-pda");
MODULE_ALIAS("of:N*T*Cmediatek,camera-pdaC*");
MODULE_ALIAS("of:N*T*Cmediatek,camera-pda2");
MODULE_ALIAS("of:N*T*Cmediatek,camera-pda2C*");

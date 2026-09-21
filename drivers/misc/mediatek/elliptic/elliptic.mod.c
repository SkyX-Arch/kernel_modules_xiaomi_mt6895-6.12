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

KSYMTAB_FUNC(elliptic_add_platform_controls, "", "");

SYMBOL_CRC(elliptic_add_platform_controls, 0xb1ef3d7c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2964344, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcf2a6966, "up" },
	{ 0x037a0cba, "kfree" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xcc348dcc, "scp_get_reserve_mem_phys" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0x7aa804ca, "scp_get_reserve_mem_size" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe2964344,
	0x92997ed8,
	0x139f2189,
	0xa571f6b0,
	0xd9a5ea54,
	0xdb760f52,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x34db050b,
	0x13d0adf7,
	0xd5977bfb,
	0xed55cabd,
	0xf23fcb99,
	0xb5b54b34,
	0xd35cce70,
	0x9a85eebb,
	0xbede130a,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0x0f314d3e,
	0xe17134b6,
	0xa302b90d,
	0xcfc099c4,
	0x9b1faacb,
	0x28ba7b6c,
	0x6bd0e573,
	0xba8fbd64,
	0xcf2a6966,
	0x037a0cba,
	0xef27af6b,
	0x6091b333,
	0x169f5b1f,
	0x0288226a,
	0x0f05f001,
	0xefe8a82e,
	0x9ec6ca96,
	0xedd46fc9,
	0x75ca79b5,
	0x182e3cfb,
	0x6e295f94,
	0xa73e125d,
	0xcc348dcc,
	0x8d21adca,
	0x7aa804ca,
	0x65bb94f6,
	0x4a353d20,
	0xc3055d20,
	0xcd709e2e,
	0x2d405891,
	0x62b33777,
	0x3bd2c4ce,
	0x656e4a6e,
	0xce8498d7,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__wake_up\0"
	"_printk\0"
	"__kfifo_alloc\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"__kfifo_free\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"_raw_spin_lock_irqsave\0"
	"__kfifo_out\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__kfifo_in\0"
	"_raw_spin_unlock\0"
	"_raw_spin_unlock_irqrestore\0"
	"__arch_copy_to_user\0"
	"pm_wakeup_ws_event\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"wakeup_source_register\0"
	"__kmalloc_cache_noprof\0"
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"cdev_del\0"
	"down_interruptible\0"
	"_raw_spin_lock\0"
	"up\0"
	"kfree\0"
	"class_destroy\0"
	"unregister_chrdev_region\0"
	"device_destroy\0"
	"wakeup_source_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"ktime_get_real_ts64\0"
	"snd_soc_add_component_controls\0"
	"__fortify_panic\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_info_volsw\0"
	"snd_soc_bytes_info_ext\0"
	"scp_get_reserve_mem_phys\0"
	"scp_get_reserve_mem_virt\0"
	"scp_get_reserve_mem_size\0"
	"mtk_ipi_register\0"
	"mtk_ipi_send\0"
	"usleep_range_state\0"
	"scp_ipidev\0"
	"kobject_create_and_add\0"
	"sysfs_create_group\0"
	"kobject_put\0"
	"snprintf\0"
	"kernel_kobj\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scp,mtk_tinysys_ipi");


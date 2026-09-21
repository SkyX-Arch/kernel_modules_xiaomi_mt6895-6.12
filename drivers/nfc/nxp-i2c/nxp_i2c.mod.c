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

KSYMTAB_FUNC(nfc_ese_pwr, "", "");
KSYMTAB_FUNC(perform_ese_cold_reset, "", "");

SYMBOL_CRC(nfc_ese_pwr, 0xb077f079, "");
SYMBOL_CRC(perform_ese_cold_reset, 0xc391cada, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfe990052, "gpio_free" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x64748600, "gpiod_set_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0xd6fc9495, "gpiod_direction_output_raw" },
	{ 0x3c50e41e, "gpiod_direction_input" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x01000e51, "schedule" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x037a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbc0334ba, "_dev_printk" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0cae9d1d, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x47b1cb63, "pm_wakeup_dev_event" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xdad8004c, "device_wakeup_disable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5e292cf6,
	0x47229b5c,
	0xfe990052,
	0x169f5b1f,
	0x28ba7b6c,
	0xef27af6b,
	0x6091b333,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0xa302b90d,
	0xcfc099c4,
	0x9b1faacb,
	0xd5977bfb,
	0xed55cabd,
	0x203392c6,
	0xe2964344,
	0x64748600,
	0x07183fe6,
	0xc3055d20,
	0xa191ccd1,
	0xd6fc9495,
	0x3c50e41e,
	0x7ec9701a,
	0x9a85eebb,
	0xd9a5ea54,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xc6f46339,
	0xc38c83b8,
	0xdc0e4855,
	0x15ba50a6,
	0x34db050b,
	0x27bbf221,
	0xfcec0987,
	0x01000e51,
	0xa571f6b0,
	0x037a0cba,
	0xc1514a3b,
	0xd35cce70,
	0x7f02188f,
	0x4a068d70,
	0x88db9f48,
	0x656e4a6e,
	0xbc0334ba,
	0x2be0c009,
	0xe17134b6,
	0x0cae9d1d,
	0x92d5838e,
	0x47b1cb63,
	0x7a4b1be7,
	0x1744f3e7,
	0xdad8004c,
	0xce2840e7,
	0x2ff78d9b,
	0x84dd786f,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"of_get_named_gpio\0"
	"gpio_request\0"
	"gpio_free\0"
	"device_destroy\0"
	"cdev_del\0"
	"class_destroy\0"
	"unregister_chrdev_region\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mutex_trylock\0"
	"__wake_up\0"
	"gpiod_set_raw_value\0"
	"gpio_to_desc\0"
	"usleep_range_state\0"
	"gpiod_get_raw_value\0"
	"gpiod_direction_output_raw\0"
	"gpiod_direction_input\0"
	"gpiod_to_irq\0"
	"__arch_copy_to_user\0"
	"__init_waitqueue_head\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"init_timer_key\0"
	"mod_timer\0"
	"timer_delete\0"
	"jiffies\0"
	"_raw_spin_lock_irqsave\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"schedule\0"
	"__mutex_init\0"
	"kfree\0"
	"free_irq\0"
	"_raw_spin_unlock_irqrestore\0"
	"__msecs_to_jiffies\0"
	"i2c_transfer_buffer_flags\0"
	"__check_object_size\0"
	"snprintf\0"
	"_dev_printk\0"
	"__arch_copy_from_user\0"
	"__kmalloc_cache_noprof\0"
	"noop_llseek\0"
	"request_threaded_irq\0"
	"pm_wakeup_dev_event\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"device_wakeup_disable\0"
	"irq_set_irq_wake\0"
	"i2c_register_driver\0"
	"i2c_del_driver\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,nq-nci");
MODULE_ALIAS("of:N*T*Cqcom,nq-nciC*");

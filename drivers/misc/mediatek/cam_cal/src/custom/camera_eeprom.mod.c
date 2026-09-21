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
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xe3fa5191, "i2c_transfer" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x5a921311,
	0x3b6c41ea,
	0x92997ed8,
	0x656e4a6e,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x6091b333,
	0x6fe9dcd4,
	0x9b1faacb,
	0xa571f6b0,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0xd5977bfb,
	0xed55cabd,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x75ca79b5,
	0x169f5b1f,
	0xef27af6b,
	0x84dd786f,
	0x0f05f001,
	0xefe8a82e,
	0xe3fa5191,
	0x9ec6ca96,
	0x365acda7,
	0x92acb4e9,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"strncmp\0"
	"kstrtouint\0"
	"_printk\0"
	"snprintf\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"unregister_chrdev_region\0"
	"class_create\0"
	"device_create\0"
	"__mutex_init\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"device_destroy\0"
	"class_destroy\0"
	"i2c_del_driver\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"i2c_transfer\0"
	"ktime_get_real_ts64\0"
	"set_normalized_timespec64\0"
	"param_ops_uint\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,camera_eeprom");
MODULE_ALIAS("of:N*T*Cmediatek,camera_eepromC*");

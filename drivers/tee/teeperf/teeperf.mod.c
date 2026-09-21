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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5a921311, "strncmp" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xb4028d67, "proc_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x816a41ca, "cpufreq_update_limits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xe136f93c,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0x6091b333,
	0xcfc099c4,
	0x9b1faacb,
	0x28ba7b6c,
	0xef27af6b,
	0x6fc35f2b,
	0x169f5b1f,
	0x85df9b6c,
	0x5a921311,
	0xa302b90d,
	0xb4028d67,
	0x88db9f48,
	0x2be0c009,
	0x3854774b,
	0xf8bd87ca,
	0x28ed2847,
	0x20d81059,
	0xcd6f7bae,
	0x816a41ca,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"of_property_read_variable_u32_array\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"unregister_chrdev_region\0"
	"cdev_add\0"
	"device_create\0"
	"cdev_del\0"
	"class_destroy\0"
	"platform_driver_unregister\0"
	"device_destroy\0"
	"strsep\0"
	"strncmp\0"
	"cdev_init\0"
	"proc_create\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtoll\0"
	"cpufreq_cpu_get\0"
	"down_write\0"
	"up_write\0"
	"cpufreq_cpu_put\0"
	"cpufreq_update_limits\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


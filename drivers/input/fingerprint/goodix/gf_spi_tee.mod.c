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
	{ 0x56f996ba, "spi_sync" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x68386af8, "__spi_register_driver" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xae422b60, "regulator_set_load" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x99fe66ff, "regulator_put" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x9b1faacb, "device_create" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x5f010919, "input_unregister_device" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xef27af6b, "class_destroy" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x2609a2fc, "pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0xd49281ca, "mt_spi_enable_master_clk" },
	{ 0x6b8d76eb, "mt_spi_disable_master_clk" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0x5e1830c0, "netlink_unicast" },
	{ 0xf4b23bfd, "__alloc_skb" },
	{ 0xc1bbc363, "__nlmsg_put" },
	{ 0xdcf2c89b, "sk_skb_reason_drop" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xcc898074, "input_event" },
	{ 0x46622bd8, "netlink_kernel_release" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x8cde9a33, "__netlink_kernel_create" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x382b1c44, "pinctrl_put" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x3dcf9f06, "spi_bus_type" },
	{ 0xc2ff374b, "uuid_fp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1e93e6e1, "init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x56f996ba,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0x7e19152a,
	0x68386af8,
	0xa571f6b0,
	0x03b28b1f,
	0x2220455c,
	0xae422b60,
	0x57d5e131,
	0xa06ad99d,
	0x62b33777,
	0xeae3dfd6,
	0x031dffa4,
	0x99fe66ff,
	0x6fe9dcd4,
	0xe3ec2f2b,
	0x9b1faacb,
	0xd5977bfb,
	0xed55cabd,
	0xa302b90d,
	0xcfc099c4,
	0x5f010919,
	0x0f314d3e,
	0x28ba7b6c,
	0x3667c9f1,
	0x169f5b1f,
	0x6091b333,
	0xef27af6b,
	0xf3cdc3c6,
	0x7c611278,
	0xce2840e7,
	0xa823db6e,
	0x2609a2fc,
	0x20dda19c,
	0xe136f93c,
	0x54325131,
	0xd49281ca,
	0x6b8d76eb,
	0x5a921311,
	0xc5b6f236,
	0x3c3ff9fd,
	0x92d5838e,
	0xbede130a,
	0x5e1830c0,
	0xf4b23bfd,
	0xc1bbc363,
	0xdcf2c89b,
	0x3ce4ca6f,
	0xfcec0987,
	0xc1514a3b,
	0x9a85eebb,
	0x2be0c009,
	0xcc898074,
	0x46622bd8,
	0x6ac61a02,
	0x0296695f,
	0x8cde9a33,
	0x9a835040,
	0x0288226a,
	0x382b1c44,
	0x8427cc7b,
	0x4b750f53,
	0x56e19f9a,
	0x92acb4e9,
	0x0f05f001,
	0xefe8a82e,
	0x3dcf9f06,
	0xc2ff374b,
	0x2d3385d3,
	0x1e93e6e1,
	0x4829a47e,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"spi_sync\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"__spi_register_driver\0"
	"__mutex_init\0"
	"regulator_get\0"
	"regulator_set_voltage\0"
	"regulator_set_load\0"
	"regulator_enable\0"
	"regulator_get_voltage\0"
	"sysfs_create_group\0"
	"__const_udelay\0"
	"regulator_disable\0"
	"regulator_put\0"
	"class_create\0"
	"alloc_chrdev_region\0"
	"device_create\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"cdev_init\0"
	"cdev_add\0"
	"input_unregister_device\0"
	"wakeup_source_register\0"
	"cdev_del\0"
	"sysfs_remove_group\0"
	"device_destroy\0"
	"unregister_chrdev_region\0"
	"class_destroy\0"
	"of_find_compatible_node\0"
	"irq_of_parse_and_map\0"
	"irq_set_irq_wake\0"
	"of_find_device_by_node\0"
	"pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"of_property_read_variable_u32_array\0"
	"pinctrl_select_state\0"
	"mt_spi_enable_master_clk\0"
	"mt_spi_disable_master_clk\0"
	"strncmp\0"
	"queue_work_on\0"
	"sprintf\0"
	"request_threaded_irq\0"
	"pm_wakeup_ws_event\0"
	"netlink_unicast\0"
	"__alloc_skb\0"
	"__nlmsg_put\0"
	"sk_skb_reason_drop\0"
	"disable_irq\0"
	"enable_irq\0"
	"free_irq\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"input_event\0"
	"netlink_kernel_release\0"
	"nonseekable_open\0"
	"refcount_warn_saturate\0"
	"__netlink_kernel_create\0"
	"__list_del_entry_valid_or_report\0"
	"wakeup_source_unregister\0"
	"pinctrl_put\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"driver_unregister\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"spi_bus_type\0"
	"uuid_fp\0"
	"system_wq\0"
	"init_net\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "spi-mt65xx,isee");

MODULE_ALIAS("of:N*T*Cgoodix,goodix-fp");
MODULE_ALIAS("of:N*T*Cgoodix,goodix-fpC*");

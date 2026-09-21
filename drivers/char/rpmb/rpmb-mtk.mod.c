#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mmc_rpmb_register, "_gpl", "");

SYMBOL_CRC(mmc_rpmb_register, 0xf14c3168, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x46db5b86, "mmc_cmdq_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x8353554f, "mmc_switch" },
	{ 0x0cc08d53, "mmc_cmdq_enable" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x4a5c0b10, "mmc_get_card" },
	{ 0x7ac9fc1d, "mmc_put_card" },
	{ 0x999e8297, "vfree" },
	{ 0x037a0cba, "kfree" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0xac478d6d, "mmc_set_data_timeout" },
	{ 0x40cef6b7, "mmc_wait_for_req" },
	{ 0x016f123e, "sg_copy_to_buffer" },
	{ 0x19a8a15b, "crypto_alloc_shash" },
	{ 0xdaf756c5, "crypto_shash_setkey" },
	{ 0xaddc295f, "crypto_shash_update" },
	{ 0xb82883c9, "crypto_shash_final" },
	{ 0xe87ba5ee, "crypto_destroy_tfm" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x684e7988, "ufs_mtk_rpmb_get_raw_dev" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfc2ec3dd, "genlmsg_put" },
	{ 0xf9a61ed4, "nla_put" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf4b23bfd, "__alloc_skb" },
	{ 0x5e1830c0, "netlink_unicast" },
	{ 0xdcf2c89b, "sk_skb_reason_drop" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xb4c90db0, "rpmb_mtk_cmd_req" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4f4c4ece, "mc_open_device" },
	{ 0x44799845, "mc_malloc_wsm" },
	{ 0xae33f2aa, "mc_close_device" },
	{ 0x5628fc79, "mc_open_session" },
	{ 0x6ceea419, "mc_free_wsm" },
	{ 0xe3ab07f4, "mc_wait_notification" },
	{ 0xbd49b14c, "mc_notify" },
	{ 0x10e9b022, "genl_register_family" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x1e93e6e1, "init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x46db5b86,
	0x92997ed8,
	0x8353554f,
	0x0cc08d53,
	0xbee3ddd5,
	0x4a5c0b10,
	0x7ac9fc1d,
	0x999e8297,
	0x037a0cba,
	0x41ed3709,
	0x75ca79b5,
	0x43babd19,
	0xdcbeba1d,
	0xac478d6d,
	0x40cef6b7,
	0x016f123e,
	0x19a8a15b,
	0xdaf756c5,
	0xaddc295f,
	0xb82883c9,
	0xe87ba5ee,
	0x88db9f48,
	0x2be0c009,
	0xe17134b6,
	0x52c5c991,
	0x9a85eebb,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0xf3cdc3c6,
	0xba0aee2e,
	0xce5bc4d0,
	0xd9a5ea54,
	0xa571f6b0,
	0xef27af6b,
	0x28ba7b6c,
	0x6091b333,
	0x3b1b6444,
	0xb318cbab,
	0x684e7988,
	0xd5977bfb,
	0xed55cabd,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xfc2ec3dd,
	0xf9a61ed4,
	0xe2964344,
	0xf4b23bfd,
	0x5e1830c0,
	0xdcf2c89b,
	0x167c5967,
	0xf93aae46,
	0xb4c90db0,
	0xe136f93c,
	0xf9a482f9,
	0x4f4c4ece,
	0x44799845,
	0xae33f2aa,
	0x5628fc79,
	0x6ceea419,
	0xe3ab07f4,
	0xbd49b14c,
	0x10e9b022,
	0x0f05f001,
	0xefe8a82e,
	0x1e93e6e1,
	0x4829a47e,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mmc_cmdq_disable\0"
	"_printk\0"
	"mmc_switch\0"
	"mmc_cmdq_enable\0"
	"vzalloc_noprof\0"
	"mmc_get_card\0"
	"mmc_put_card\0"
	"vfree\0"
	"kfree\0"
	"get_random_bytes\0"
	"__fortify_panic\0"
	"sg_init_one\0"
	"sg_copy_from_buffer\0"
	"mmc_set_data_timeout\0"
	"mmc_wait_for_req\0"
	"sg_copy_to_buffer\0"
	"crypto_alloc_shash\0"
	"crypto_shash_setkey\0"
	"crypto_shash_update\0"
	"crypto_shash_final\0"
	"crypto_destroy_tfm\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__arch_copy_to_user\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"of_find_compatible_node\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__init_waitqueue_head\0"
	"__mutex_init\0"
	"class_destroy\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"ufs_mtk_rpmb_get_raw_dev\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"genlmsg_put\0"
	"nla_put\0"
	"__wake_up\0"
	"__alloc_skb\0"
	"netlink_unicast\0"
	"sk_skb_reason_drop\0"
	"print_hex_dump\0"
	"__arm_smccc_smc\0"
	"rpmb_mtk_cmd_req\0"
	"of_property_read_variable_u32_array\0"
	"msleep\0"
	"mc_open_device\0"
	"mc_malloc_wsm\0"
	"mc_close_device\0"
	"mc_open_session\0"
	"mc_free_wsm\0"
	"mc_wait_notification\0"
	"mc_notify\0"
	"genl_register_family\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"init_net\0"
	"memcpy\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ufs-mediatek-mod,core,mcDrvModule");


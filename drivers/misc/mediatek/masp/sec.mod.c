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

KSYMTAB_FUNC(osal_kfree, "", "");
KSYMTAB_FUNC(osal_kmalloc, "", "");
KSYMTAB_FUNC(osal_copy_from_user, "", "");
KSYMTAB_FUNC(osal_copy_to_user, "", "");
KSYMTAB_FUNC(osal_verify_lock, "", "");
KSYMTAB_FUNC(osal_verify_unlock, "", "");
KSYMTAB_FUNC(osal_secro_lock, "", "");
KSYMTAB_FUNC(osal_secro_unlock, "", "");
KSYMTAB_FUNC(osal_secro_v5_lock, "", "");
KSYMTAB_FUNC(osal_secro_v5_unlock, "", "");
KSYMTAB_FUNC(osal_mtd_lock, "", "");
KSYMTAB_FUNC(osal_mtd_unlock, "", "");
KSYMTAB_FUNC(osal_rid_lock, "", "");
KSYMTAB_FUNC(osal_rid_unlock, "", "");
KSYMTAB_FUNC(osal_msleep, "", "");
KSYMTAB_FUNC(osal_assert, "", "");
KSYMTAB_FUNC(osal_set_kernel_fs, "", "");
KSYMTAB_FUNC(osal_restore_fs, "", "");
KSYMTAB_FUNC(osal_get_filp_struct, "", "");
KSYMTAB_FUNC(osal_filp_seek_set, "", "");
KSYMTAB_FUNC(osal_filp_seek_end, "", "");
KSYMTAB_FUNC(osal_filp_pos, "", "");
KSYMTAB_FUNC(osal_filp_read, "", "");
KSYMTAB_FUNC(osal_is_err, "", "");
KSYMTAB_FUNC(sec_get_random_id, "", "");

SYMBOL_CRC(osal_kfree, 0x439b2726, "");
SYMBOL_CRC(osal_kmalloc, 0xf82480d5, "");
SYMBOL_CRC(osal_copy_from_user, 0x5065dda7, "");
SYMBOL_CRC(osal_copy_to_user, 0x70b1d422, "");
SYMBOL_CRC(osal_verify_lock, 0x2104b66d, "");
SYMBOL_CRC(osal_verify_unlock, 0xf933f0e9, "");
SYMBOL_CRC(osal_secro_lock, 0x9d649bcc, "");
SYMBOL_CRC(osal_secro_unlock, 0xd12791ef, "");
SYMBOL_CRC(osal_secro_v5_lock, 0x597705d0, "");
SYMBOL_CRC(osal_secro_v5_unlock, 0xa8dee6de, "");
SYMBOL_CRC(osal_mtd_lock, 0x68e8df51, "");
SYMBOL_CRC(osal_mtd_unlock, 0xdafa2ea8, "");
SYMBOL_CRC(osal_rid_lock, 0xb5db1d4e, "");
SYMBOL_CRC(osal_rid_unlock, 0x62ca5e99, "");
SYMBOL_CRC(osal_msleep, 0x37856381, "");
SYMBOL_CRC(osal_assert, 0x11099335, "");
SYMBOL_CRC(osal_set_kernel_fs, 0x9e1c4ce7, "");
SYMBOL_CRC(osal_restore_fs, 0xe01dcc8a, "");
SYMBOL_CRC(osal_get_filp_struct, 0x7c2dc174, "");
SYMBOL_CRC(osal_filp_seek_set, 0x3febacd7, "");
SYMBOL_CRC(osal_filp_seek_end, 0x2f16b1e0, "");
SYMBOL_CRC(osal_filp_pos, 0xc9ee63f8, "");
SYMBOL_CRC(osal_filp_read, 0x8044782d, "");
SYMBOL_CRC(osal_is_err, 0xd188d228, "");
SYMBOL_CRC(sec_get_random_id, 0x376eaf25, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x999e8297, "vfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x92997ed8, "_printk" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0xb4028d67, "proc_create" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x3da016df, "seq_putc" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x254b636d, "register_reboot_notifier" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x00114764, "unregister_reboot_notifier" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92acb4e9,
	0x999e8297,
	0x1b2fa1a9,
	0x6bd0e573,
	0xcf2a6966,
	0xf9a482f9,
	0x88db9f48,
	0x2be0c009,
	0x9a85eebb,
	0x0f05f001,
	0x3fd78f3b,
	0x92997ed8,
	0x6fe9dcd4,
	0xa302b90d,
	0xcfc099c4,
	0x9b1faacb,
	0xb4028d67,
	0x169f5b1f,
	0x28ba7b6c,
	0xef27af6b,
	0x6091b333,
	0x69cfdbb0,
	0xe7ce721f,
	0x3cdb28e3,
	0x8b9c34da,
	0x3da016df,
	0xc8f2ae9d,
	0x330c0b0f,
	0x12db679a,
	0x254b636d,
	0x3b1b6444,
	0xb318cbab,
	0xe2d5255a,
	0x6fc35f2b,
	0x00114764,
	0xf3cdc3c6,
	0xaba63322,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"param_ops_uint\0"
	"vfree\0"
	"vmalloc_noprof\0"
	"down_interruptible\0"
	"up\0"
	"msleep\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"mem_alloc_profiling_key\0"
	"register_chrdev_region\0"
	"_printk\0"
	"class_create\0"
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"proc_create\0"
	"device_destroy\0"
	"cdev_del\0"
	"class_destroy\0"
	"unregister_chrdev_region\0"
	"seq_read\0"
	"seq_lseek\0"
	"seq_release\0"
	"single_open\0"
	"seq_putc\0"
	"seq_printf\0"
	"remove_proc_entry\0"
	"__platform_driver_register\0"
	"register_reboot_notifier\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"strcmp\0"
	"platform_driver_unregister\0"
	"unregister_reboot_notifier\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


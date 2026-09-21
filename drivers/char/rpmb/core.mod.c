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

KSYMTAB_FUNC(rpmb_mtk_dev_get, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_dev_put, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_cmd_seq, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_cmd_req, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_get_rw_size, "_gpl", "");
KSYMTAB_DATA(rpmb_mtk_class, "", "");
KSYMTAB_FUNC(rpmb_mtk_dev_find_device, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_dev_get_by_type, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_dev_find_by_device, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_dev_unregister, "_gpl", "");
KSYMTAB_FUNC(rpmb_mtk_dev_register, "_gpl", "");

SYMBOL_CRC(rpmb_mtk_dev_get, 0xdf92c1ca, "_gpl");
SYMBOL_CRC(rpmb_mtk_dev_put, 0x67c9eda9, "_gpl");
SYMBOL_CRC(rpmb_mtk_cmd_seq, 0xa0eb9486, "_gpl");
SYMBOL_CRC(rpmb_mtk_cmd_req, 0xb4c90db0, "_gpl");
SYMBOL_CRC(rpmb_mtk_get_rw_size, 0x112649f3, "_gpl");
SYMBOL_CRC(rpmb_mtk_class, 0x16f6481a, "");
SYMBOL_CRC(rpmb_mtk_dev_find_device, 0x5139244b, "_gpl");
SYMBOL_CRC(rpmb_mtk_dev_get_by_type, 0xc65ac931, "_gpl");
SYMBOL_CRC(rpmb_mtk_dev_find_by_device, 0x5b75593e, "_gpl");
SYMBOL_CRC(rpmb_mtk_dev_unregister, 0x12e3355c, "_gpl");
SYMBOL_CRC(rpmb_mtk_dev_register, 0xa8dcb1ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc2749a62, "get_device" },
	{ 0x234c9de3, "put_device" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9874213, "class_find_device" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x027a9026, "device_del" },
	{ 0x89d256b7, "ida_alloc_range" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x4d8597ff, "device_register" },
	{ 0xe1ef42dd, "ida_free" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xeab1dce0, "class_register" },
	{ 0xacd3d5bd, "class_unregister" },
	{ 0x20a5ab84, "ida_destroy" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc2749a62,
	0x234c9de3,
	0xd5977bfb,
	0xed55cabd,
	0x92997ed8,
	0xf9874213,
	0xa4f72277,
	0x027a9026,
	0x89d256b7,
	0xa571f6b0,
	0xba860d3c,
	0x4d8597ff,
	0xe1ef42dd,
	0x037a0cba,
	0xe17134b6,
	0x3c3ff9fd,
	0x65e0d6d7,
	0xeab1dce0,
	0xacd3d5bd,
	0x20a5ab84,
	0x0f05f001,
	0xefe8a82e,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"get_device\0"
	"put_device\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_printk\0"
	"class_find_device\0"
	"_dev_notice\0"
	"device_del\0"
	"ida_alloc_range\0"
	"__mutex_init\0"
	"dev_set_name\0"
	"device_register\0"
	"ida_free\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"sprintf\0"
	"memory_read_from_buffer\0"
	"class_register\0"
	"class_unregister\0"
	"ida_destroy\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


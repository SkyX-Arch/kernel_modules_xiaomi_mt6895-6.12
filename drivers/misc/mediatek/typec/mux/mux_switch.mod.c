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

KSYMTAB_FUNC(mtk_typec_mux_register, "_gpl", "");
KSYMTAB_FUNC(mtk_typec_mux_unregister, "_gpl", "");
KSYMTAB_FUNC(mtk_typec_switch_register, "_gpl", "");
KSYMTAB_FUNC(mtk_typec_switch_unregister, "_gpl", "");

SYMBOL_CRC(mtk_typec_mux_register, 0x660c6431, "_gpl");
SYMBOL_CRC(mtk_typec_mux_unregister, 0x64bcb914, "_gpl");
SYMBOL_CRC(mtk_typec_switch_register, 0x3cb83e14, "_gpl");
SYMBOL_CRC(mtk_typec_switch_unregister, 0x953c2f86, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4967fd7c, "typec_mux_register" },
	{ 0x037a0cba, "kfree" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc878a063, "typec_mux_unregister" },
	{ 0x8b22a134, "typec_switch_register" },
	{ 0xb00bbaf0, "typec_switch_unregister" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xd1174c77, "typec_switch_get_drvdata" },
	{ 0x6b201699, "of_find_property" },
	{ 0xce456444, "typec_mux_get_drvdata" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x44033864, "proc_remove" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0x4967fd7c,
	0x037a0cba,
	0xed55cabd,
	0xc878a063,
	0x8b22a134,
	0xb00bbaf0,
	0xe17134b6,
	0x7e19152a,
	0x9a835040,
	0x12db679a,
	0x401167cc,
	0xd1174c77,
	0x6b201699,
	0xce456444,
	0x7518b5f0,
	0xa2fa95a0,
	0x44033864,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0x3b6c41ea,
	0x88db9f48,
	0x2be0c009,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"typec_mux_register\0"
	"kfree\0"
	"mutex_unlock\0"
	"typec_mux_unregister\0"
	"typec_switch_register\0"
	"typec_switch_unregister\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"typec_switch_get_drvdata\0"
	"of_find_property\0"
	"typec_mux_get_drvdata\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"proc_remove\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"kstrtouint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


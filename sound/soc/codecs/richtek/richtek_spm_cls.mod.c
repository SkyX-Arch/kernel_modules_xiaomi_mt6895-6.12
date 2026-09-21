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

KSYMTAB_FUNC(richtek_spm_classdev_register, "_gpl", "");
KSYMTAB_FUNC(richtek_spm_classdev_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_richtek_spm_classdev_register, "_gpl", "");
KSYMTAB_FUNC(richtek_spm_classdev_trigger_ampon, "_gpl", "");
KSYMTAB_FUNC(richtek_spm_classdev_trigger_ampoff, "_gpl", "");

SYMBOL_CRC(richtek_spm_classdev_register, 0x5637e816, "_gpl");
SYMBOL_CRC(richtek_spm_classdev_unregister, 0x5dcf720e, "_gpl");
SYMBOL_CRC(devm_richtek_spm_classdev_register, 0xeb1b99b0, "_gpl");
SYMBOL_CRC(richtek_spm_classdev_trigger_ampon, 0x025c1c69, "_gpl");
SYMBOL_CRC(richtek_spm_classdev_trigger_ampoff, 0xfacb2d5d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x96848186, "scnprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0x7a198fd3, "device_create_with_groups" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0x79c89c68, "__devres_alloc_node" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x01d830d1, "devres_add" },
	{ 0xe7c4419c, "class_for_each_device" },
	{ 0x2e43b272, "mtk_spk_recv_ipi_buf_from_dsp" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xdd5505cd, "class_create_file_ns" },
	{ 0xa7a5c8a5, "class_remove_file_ns" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1085e486, "mtk_spk_send_ipi_buf_to_dsp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x96848186,
	0x92997ed8,
	0x5c6a5e82,
	0x7a198fd3,
	0xa571f6b0,
	0xcc1420a0,
	0x79c89c68,
	0xe93e49c3,
	0x01d830d1,
	0xe7c4419c,
	0x2e43b272,
	0xd5977bfb,
	0xed55cabd,
	0x6fe9dcd4,
	0xdd5505cd,
	0xa7a5c8a5,
	0xef27af6b,
	0x3b6c41ea,
	0x1085e486,
	0xf9a482f9,
	0xb4ce05a5,
	0x401167cc,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"scnprintf\0"
	"_printk\0"
	"devm_kasprintf\0"
	"device_create_with_groups\0"
	"__mutex_init\0"
	"device_unregister\0"
	"__devres_alloc_node\0"
	"devres_free\0"
	"devres_add\0"
	"class_for_each_device\0"
	"mtk_spk_recv_ipi_buf_from_dsp\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"class_create\0"
	"class_create_file_ns\0"
	"class_remove_file_ns\0"
	"class_destroy\0"
	"kstrtouint\0"
	"mtk_spk_send_ipi_buf_to_dsp\0"
	"msleep\0"
	"_dev_err\0"
	"_dev_info\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-sp-spk-amp");


MODULE_INFO(srcversion, "DD9140CF6CD4D30CA923C8B");

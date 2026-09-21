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

KSYMTAB_FUNC(mt6368_set_mtkaif_protocol, "_gpl", "");
KSYMTAB_FUNC(mt6368_mtkaif_calibration_enable, "_gpl", "");
KSYMTAB_FUNC(mt6368_mtkaif_calibration_disable, "_gpl", "");
KSYMTAB_FUNC(mt6368_set_mtkaif_calibration_phase, "_gpl", "");
KSYMTAB_FUNC(mt6368_set_codec_ops, "", "");

SYMBOL_CRC(mt6368_set_mtkaif_protocol, 0x563a0e98, "_gpl");
SYMBOL_CRC(mt6368_mtkaif_calibration_enable, 0xc6d10b35, "_gpl");
SYMBOL_CRC(mt6368_mtkaif_calibration_disable, 0x199e0ef2, "_gpl");
SYMBOL_CRC(mt6368_set_mtkaif_calibration_phase, 0x4aa37b59, "_gpl");
SYMBOL_CRC(mt6368_set_codec_ops, 0x33bb15ab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdb0ef5d8, "mt6685_set_dcxo" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x79a8bd40, "devm_snd_soc_register_component" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x96848186, "scnprintf" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0x3f9fdc27, "devm_nvmem_device_get" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0x664e41de, "snd_soc_get_volsw" },
	{ 0x78202da6, "snd_soc_component_update_bits" },
	{ 0xbda81803, "dapm_regulator_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xfb508160, "snd_soc_dapm_get_enum_double" },
	{ 0x5b3abae3, "snd_soc_dapm_put_enum_double" },
	{ 0xd1dffc98, "dapm_kcontrol_get_value" },
	{ 0xda27db63, "mt6368_accdet_modify_vref_volt" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xf01c605a, "mt6368_accdet_late_init" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x0c685cad, "iio_read_channel_raw" },
	{ 0x593ff0ca, "snd_card_add_dev_attr" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5674f36, "snd_soc_component_init_regmap" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x96a91aed, "nvmem_device_read" },
	{ 0xa6601e35, "mt6685_set_dcxo_mode" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xdb0ef5d8,
	0x64311477,
	0x6b883e5a,
	0x576b05bf,
	0x12db679a,
	0x401167cc,
	0x49dc0e6c,
	0x4e870156,
	0x79a8bd40,
	0xc8c7229e,
	0x9c81ceff,
	0x037a0cba,
	0x441d0de9,
	0x96848186,
	0x9eacf8a5,
	0x85df9b6c,
	0xe2d5255a,
	0x75ca79b5,
	0x88db9f48,
	0x2be0c009,
	0x3b6c41ea,
	0xb4ce05a5,
	0xba085e3d,
	0xed856724,
	0x3f9fdc27,
	0x2ccea269,
	0xe136f93c,
	0x6b201699,
	0x6e295f94,
	0x664e41de,
	0x78202da6,
	0xbda81803,
	0xc3055d20,
	0x182e3cfb,
	0xfb508160,
	0x5b3abae3,
	0xd1dffc98,
	0xda27db63,
	0xba0aee2e,
	0xce5bc4d0,
	0xf01c605a,
	0x57d5e131,
	0x031dffa4,
	0x0c685cad,
	0x593ff0ca,
	0x92997ed8,
	0xc5674f36,
	0xedd46fc9,
	0x96a91aed,
	0xa6601e35,
	0x6fc35f2b,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt6685_set_dcxo\0"
	"regmap_read\0"
	"regmap_write\0"
	"regmap_update_bits_base\0"
	"__platform_driver_register\0"
	"_dev_info\0"
	"dev_get_regmap\0"
	"debugfs_create_file\0"
	"devm_snd_soc_register_component\0"
	"devm_kmalloc\0"
	"simple_read_from_buffer\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"scnprintf\0"
	"kstrndup\0"
	"strsep\0"
	"strcmp\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtouint\0"
	"_dev_err\0"
	"of_get_child_by_name\0"
	"devm_iio_channel_get\0"
	"devm_nvmem_device_get\0"
	"devm_regulator_get_optional\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"snd_soc_info_volsw\0"
	"snd_soc_get_volsw\0"
	"snd_soc_component_update_bits\0"
	"dapm_regulator_event\0"
	"usleep_range_state\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_dapm_get_enum_double\0"
	"snd_soc_dapm_put_enum_double\0"
	"dapm_kcontrol_get_value\0"
	"mt6368_accdet_modify_vref_volt\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"mt6368_accdet_late_init\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"iio_read_channel_raw\0"
	"snd_card_add_dev_attr\0"
	"_printk\0"
	"snd_soc_component_init_regmap\0"
	"snd_soc_add_component_controls\0"
	"nvmem_device_read\0"
	"mt6685_set_dcxo_mode\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt6685-audclk,mt6368-accdet");

MODULE_ALIAS("of:N*T*Cmediatek,mt6368-sound");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368-soundC*");

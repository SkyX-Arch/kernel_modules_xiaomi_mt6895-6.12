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
	{ 0x401167cc, "_dev_info" },
	{ 0xd8f2dc36, "mtk_spk_update_info" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x22cf4b66, "snd_soc_of_get_dai_link_codecs" },
	{ 0x1c29f0e3, "devm_snd_soc_register_card" },
	{ 0x9220bf82, "snd_soc_rtdcom_lookup" },
	{ 0xbf281a6f, "mt6895_enable_dc_compensation" },
	{ 0xe6b2c9e2, "mt6895_set_lch_dc_compensation" },
	{ 0xf5fefe94, "mt6895_set_rch_dc_compensation" },
	{ 0xef6d3921, "mt6895_adda_dl_gain_control" },
	{ 0x33bb15ab, "mt6368_set_codec_ops" },
	{ 0x563a0e98, "mt6368_set_mtkaif_protocol" },
	{ 0x33470e95, "snd_soc_dapm_disable_pin" },
	{ 0xb665af15, "mt6368_accdet_init" },
	{ 0xf0387090, "mt6895_afe_gpio_is_prepared" },
	{ 0xf3998d6a, "mt6895_afe_gpio_request" },
	{ 0xc6d10b35, "mt6368_mtkaif_calibration_enable" },
	{ 0x4aa37b59, "mt6368_set_mtkaif_calibration_phase" },
	{ 0x64311477, "regmap_read" },
	{ 0x199e0ef2, "mt6368_mtkaif_calibration_disable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x213dfe74, "snd_soc_dai_set_sysclk" },
	{ 0x5b8eeab0, "snd_soc_set_runtime_hwparams" },
	{ 0xe6e94f93, "__pm_runtime_suspend" },
	{ 0x7f793016, "snd_soc_dapm_info_pin_switch" },
	{ 0x453a20ae, "snd_soc_dapm_get_pin_switch" },
	{ 0x25e3db4e, "snd_soc_dapm_put_pin_switch" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xfadf598a, "snd_soc_bytes_tlv_callback" },
	{ 0x3c4989b8, "mtk_spk_get_type" },
	{ 0x4bd92e79, "mtk_spk_get_i2s_out_type" },
	{ 0xcec4f420, "mtk_spk_get_i2s_in_type" },
	{ 0x92997ed8, "_printk" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xf83dc787, "snd_soc_poweroff" },
	{ 0x02575459, "snd_soc_resume" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0xd8f2dc36,
	0xba085e3d,
	0xe2d5255a,
	0x22cf4b66,
	0x1c29f0e3,
	0x9220bf82,
	0xbf281a6f,
	0xe6b2c9e2,
	0xf5fefe94,
	0xef6d3921,
	0x33bb15ab,
	0x563a0e98,
	0x33470e95,
	0xb665af15,
	0xf0387090,
	0xf3998d6a,
	0xc6d10b35,
	0x4aa37b59,
	0x64311477,
	0x199e0ef2,
	0x4eb4c414,
	0x576b05bf,
	0x13269d10,
	0x213dfe74,
	0x5b8eeab0,
	0xe6e94f93,
	0x7f793016,
	0x453a20ae,
	0x25e3db4e,
	0x182e3cfb,
	0xa73e125d,
	0xfadf598a,
	0x3c4989b8,
	0x4bd92e79,
	0xcec4f420,
	0x92997ed8,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0x9a85eebb,
	0x2be0c009,
	0x1fec5304,
	0xf83dc787,
	0x02575459,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"mtk_spk_update_info\0"
	"of_get_child_by_name\0"
	"strcmp\0"
	"snd_soc_of_get_dai_link_codecs\0"
	"devm_snd_soc_register_card\0"
	"snd_soc_rtdcom_lookup\0"
	"mt6895_enable_dc_compensation\0"
	"mt6895_set_lch_dc_compensation\0"
	"mt6895_set_rch_dc_compensation\0"
	"mt6895_adda_dl_gain_control\0"
	"mt6368_set_codec_ops\0"
	"mt6368_set_mtkaif_protocol\0"
	"snd_soc_dapm_disable_pin\0"
	"mt6368_accdet_init\0"
	"mt6895_afe_gpio_is_prepared\0"
	"mt6895_afe_gpio_request\0"
	"mt6368_mtkaif_calibration_enable\0"
	"mt6368_set_mtkaif_calibration_phase\0"
	"regmap_read\0"
	"mt6368_mtkaif_calibration_disable\0"
	"__pm_runtime_resume\0"
	"regmap_update_bits_base\0"
	"__pm_runtime_idle\0"
	"snd_soc_dai_set_sysclk\0"
	"snd_soc_set_runtime_hwparams\0"
	"__pm_runtime_suspend\0"
	"snd_soc_dapm_info_pin_switch\0"
	"snd_soc_dapm_get_pin_switch\0"
	"snd_soc_dapm_put_pin_switch\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_bytes_info_ext\0"
	"snd_soc_bytes_tlv_callback\0"
	"mtk_spk_get_type\0"
	"mtk_spk_get_i2s_out_type\0"
	"mtk_spk_get_i2s_in_type\0"
	"_printk\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__of_parse_phandle_with_args\0"
	"snd_soc_poweroff\0"
	"snd_soc_resume\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-sp-spk-amp,snd-soc-mt6895-afe,snd-soc-mt6368,mt6368-accdet");


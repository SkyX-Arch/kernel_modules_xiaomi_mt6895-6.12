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

KSYMTAB_FUNC(mt6895_afe_gpio_request, "_gpl", "");
KSYMTAB_FUNC(mt6895_afe_gpio_is_prepared, "", "");
KSYMTAB_FUNC(mt6895_enable_dc_compensation, "", "");
KSYMTAB_FUNC(mt6895_set_lch_dc_compensation, "", "");
KSYMTAB_FUNC(mt6895_set_rch_dc_compensation, "", "");
KSYMTAB_FUNC(mt6895_adda_dl_gain_control, "", "");

SYMBOL_CRC(mt6895_afe_gpio_request, 0xf3998d6a, "_gpl");
SYMBOL_CRC(mt6895_afe_gpio_is_prepared, 0xf0387090, "");
SYMBOL_CRC(mt6895_enable_dc_compensation, 0xbf281a6f, "");
SYMBOL_CRC(mt6895_set_lch_dc_compensation, 0xe6b2c9e2, "");
SYMBOL_CRC(mt6895_set_rch_dc_compensation, 0xf5fefe94, "");
SYMBOL_CRC(mt6895_adda_dl_gain_control, 0xef6d3921, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefaeb240, "mtk_dynamic_irq_release" },
	{ 0x401167cc, "_dev_info" },
	{ 0x719476dd, "is_afe_need_triggered" },
	{ 0x58751ded, "mtk_memif_set_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8681cb8c, "mtk_regmap_update_bits" },
	{ 0x89963e14, "mtk_irq_set_enable" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xfd261d27, "mtk_memif_set_disable" },
	{ 0xfda6f609, "mtk_irq_set_disable" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x96848186, "scnprintf" },
	{ 0x64311477, "regmap_read" },
	{ 0x92997ed8, "_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe5161a0d, "mtk_afe_write_reg" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x99cc082d, "__devm_regmap_init_mmio_clk" },
	{ 0x65d14cbc, "regcache_cache_only" },
	{ 0x940df58d, "regcache_mark_dirty" },
	{ 0xde257403, "mtk_audio_sram_init" },
	{ 0x031927a5, "mtk_sp_clean_written_buffer_ack" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x229844b9, "mtk_afe_combine_sub_dai" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x79a8bd40, "devm_snd_soc_register_component" },
	{ 0xb922334f, "audio_set_dsp_afe" },
	{ 0x4e8bb14c, "ultra_set_dsp_afe" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x239ab530, "snd_pcm_period_elapsed" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x5dd1374d, "mtk_afe_fe_hw_params" },
	{ 0x4cc9efcc, "mtk_afe_fe_hw_free" },
	{ 0x4ae627aa, "mtk_afe_fe_prepare" },
	{ 0x4003b2bb, "snd_pcm_hw_constraint_step" },
	{ 0x5b8eeab0, "snd_soc_set_runtime_hwparams" },
	{ 0x7d4c643e, "snd_pcm_hw_constraint_integer" },
	{ 0xc3949646, "mtk_dynamic_irq_acquire" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0xf9c6f9c3, "mtk_audio_sram_get_size" },
	{ 0x35152e34, "get_dsp_task_id_from_str" },
	{ 0x6b060912, "get_dsp_task_attr" },
	{ 0x69389f2d, "mtk_get_mmap_dl_buffer" },
	{ 0xdbde3794, "mtk_get_mmap_ul_buffer" },
	{ 0x2110a93f, "mtk_exporter_init" },
	{ 0x091c9fc8, "mtk_get_mmap_dl_fd" },
	{ 0xf485db6f, "mtk_get_mmap_ul_fd" },
	{ 0xf224fe79, "snd_soc_dapm_get_volsw" },
	{ 0xb4bfe584, "snd_soc_dapm_put_volsw" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xfb508160, "snd_soc_dapm_get_enum_double" },
	{ 0x5b3abae3, "snd_soc_dapm_put_enum_double" },
	{ 0x9220bf82, "snd_soc_rtdcom_lookup" },
	{ 0x073cbbc1, "regcache_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe20f6f33, "mtk_afe_debug_write_reg" },
	{ 0x533de3d2, "mtk_afe_debugfs_write" },
	{ 0x0788a418, "mtk_afe_debugfs_open" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xe1820c35, "mtk_afe_pcm_new" },
	{ 0x54a73b96, "mtk_afe_pcm_free" },
	{ 0xecf3f617, "mtk_afe_pcm_open" },
	{ 0x9f388300, "mtk_afe_pcm_pointer" },
	{ 0x8241537c, "mtk_afe_pcm_copy_user" },
	{ 0x468cddf1, "mtk_afe_add_sub_dai_control" },
	{ 0x593ff0ca, "snd_card_add_dev_attr" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x664e41de, "snd_soc_get_volsw" },
	{ 0x6c0a0d8d, "snd_soc_put_volsw" },
	{ 0x017769f8, "dapm_clock_event" },
	{ 0x5a921311, "strncmp" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0xeee5ceba, "mtk_memif_set_addr" },
	{ 0x698c0485, "word_size_align" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xddbf18d8, "mtk_memif_set_pbuf_size" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xefaeb240,
	0x401167cc,
	0x719476dd,
	0x58751ded,
	0xeae3dfd6,
	0x8681cb8c,
	0x89963e14,
	0xf5edea2e,
	0x45b60059,
	0xfd261d27,
	0xfda6f609,
	0x6b883e5a,
	0x037a0cba,
	0x441d0de9,
	0x96848186,
	0x64311477,
	0x92997ed8,
	0x75ca79b5,
	0x9eacf8a5,
	0x85df9b6c,
	0xe2d5255a,
	0xe5161a0d,
	0x12db679a,
	0xd4e81a21,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x99cc082d,
	0x65d14cbc,
	0x940df58d,
	0xde257403,
	0x031927a5,
	0xa571f6b0,
	0xf7ca28dd,
	0xf93aae46,
	0x229844b9,
	0x4e870156,
	0x79a8bd40,
	0xb922334f,
	0x4e8bb14c,
	0x5be9ce07,
	0xea6f49c8,
	0xc8c7229e,
	0x4eb4c414,
	0x13269d10,
	0x576b05bf,
	0xf9583f23,
	0x239ab530,
	0xce2840e7,
	0x7e19152a,
	0x5dd1374d,
	0x4cc9efcc,
	0x4ae627aa,
	0x4003b2bb,
	0x5b8eeab0,
	0x7d4c643e,
	0xc3949646,
	0x6e295f94,
	0xf9c6f9c3,
	0x35152e34,
	0x6b060912,
	0x69389f2d,
	0xdbde3794,
	0x2110a93f,
	0x091c9fc8,
	0xf485db6f,
	0xf224fe79,
	0xb4bfe584,
	0x1e6d26a8,
	0x182e3cfb,
	0xfb508160,
	0x5b3abae3,
	0x9220bf82,
	0x073cbbc1,
	0xb43f9365,
	0xc3055d20,
	0xe20f6f33,
	0x533de3d2,
	0x0788a418,
	0x9c81ceff,
	0xe1820c35,
	0x54a73b96,
	0xecf3f617,
	0x9f388300,
	0x8241537c,
	0x468cddf1,
	0x593ff0ca,
	0x5c27c40f,
	0x6fc35f2b,
	0x0f05f001,
	0x2396c7f0,
	0xd5977bfb,
	0xed55cabd,
	0x76d9b876,
	0xea23ff02,
	0xa1fd40f1,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0x664e41de,
	0x6c0a0d8d,
	0x017769f8,
	0x5a921311,
	0xaf7cb74b,
	0x68a24153,
	0xedd46fc9,
	0xeee5ceba,
	0x698c0485,
	0x18b48e28,
	0xddbf18d8,
	0x78cf2345,
	0x5a9cfed6,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_dynamic_irq_release\0"
	"_dev_info\0"
	"is_afe_need_triggered\0"
	"mtk_memif_set_enable\0"
	"__const_udelay\0"
	"mtk_regmap_update_bits\0"
	"mtk_irq_set_enable\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"mtk_memif_set_disable\0"
	"mtk_irq_set_disable\0"
	"regmap_write\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"scnprintf\0"
	"regmap_read\0"
	"_printk\0"
	"__fortify_panic\0"
	"kstrndup\0"
	"strsep\0"
	"strcmp\0"
	"mtk_afe_write_reg\0"
	"__platform_driver_register\0"
	"pm_runtime_enable\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"__devm_regmap_init_mmio_clk\0"
	"regcache_cache_only\0"
	"regcache_mark_dirty\0"
	"mtk_audio_sram_init\0"
	"mtk_sp_clean_written_buffer_ack\0"
	"__mutex_init\0"
	"platform_get_irq\0"
	"__arm_smccc_smc\0"
	"mtk_afe_combine_sub_dai\0"
	"debugfs_create_file\0"
	"devm_snd_soc_register_component\0"
	"audio_set_dsp_afe\0"
	"ultra_set_dsp_afe\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"devm_kmalloc\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"regmap_update_bits_base\0"
	"devm_request_threaded_irq\0"
	"snd_pcm_period_elapsed\0"
	"irq_set_irq_wake\0"
	"__list_add_valid_or_report\0"
	"mtk_afe_fe_hw_params\0"
	"mtk_afe_fe_hw_free\0"
	"mtk_afe_fe_prepare\0"
	"snd_pcm_hw_constraint_step\0"
	"snd_soc_set_runtime_hwparams\0"
	"snd_pcm_hw_constraint_integer\0"
	"mtk_dynamic_irq_acquire\0"
	"snd_soc_info_volsw\0"
	"mtk_audio_sram_get_size\0"
	"get_dsp_task_id_from_str\0"
	"get_dsp_task_attr\0"
	"mtk_get_mmap_dl_buffer\0"
	"mtk_get_mmap_ul_buffer\0"
	"mtk_exporter_init\0"
	"mtk_get_mmap_dl_fd\0"
	"mtk_get_mmap_ul_fd\0"
	"snd_soc_dapm_get_volsw\0"
	"snd_soc_dapm_put_volsw\0"
	"strstr\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_dapm_get_enum_double\0"
	"snd_soc_dapm_put_enum_double\0"
	"snd_soc_rtdcom_lookup\0"
	"regcache_sync\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"mtk_afe_debug_write_reg\0"
	"mtk_afe_debugfs_write\0"
	"mtk_afe_debugfs_open\0"
	"simple_read_from_buffer\0"
	"mtk_afe_pcm_new\0"
	"mtk_afe_pcm_free\0"
	"mtk_afe_pcm_open\0"
	"mtk_afe_pcm_pointer\0"
	"mtk_afe_pcm_copy_user\0"
	"mtk_afe_add_sub_dai_control\0"
	"snd_card_add_dev_attr\0"
	"__pm_runtime_disable\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"clk_set_parent\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"clk_set_rate\0"
	"devm_clk_get\0"
	"syscon_regmap_lookup_by_phandle\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"snd_soc_get_volsw\0"
	"snd_soc_put_volsw\0"
	"dapm_clock_event\0"
	"strncmp\0"
	"of_property_read_string\0"
	"snd_pcm_format_physical_width\0"
	"snd_soc_add_component_controls\0"
	"mtk_memif_set_addr\0"
	"word_size_align\0"
	"__memset_io\0"
	"mtk_memif_set_pbuf_size\0"
	"dma_free_attrs\0"
	"dma_alloc_attrs\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "snd-soc-mtk-common,aee_aed,snd-soc-audiodsp-common,snd-soc-mtk-scp-ultra");

MODULE_ALIAS("of:N*T*Cmediatek,mt6895-sound");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-soundC*");

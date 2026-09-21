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

KSYMTAB_FUNC(mtk_afe_combine_sub_dai, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_add_sub_dai_control, "_gpl", "");
KSYMTAB_FUNC(word_size_align, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_open, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_pointer, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_copy_user, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_ack, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_new, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_free, "_gpl", "");
KSYMTAB_DATA(mtk_afe_pcm_platform, "_gpl", "");
KSYMTAB_FUNC(mtk_get_channel_value, "", "");
KSYMTAB_FUNC(register_is_vow_bargein_memif_callback, "", "");
KSYMTAB_FUNC(mtk_regmap_update_bits, "", "");
KSYMTAB_FUNC(mtk_regmap_write, "", "");
KSYMTAB_FUNC(mtk_afe_fe_startup, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_shutdown, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_hw_params, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_hw_free, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_trigger, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_prepare, "_gpl", "");
KSYMTAB_DATA(mtk_afe_fe_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_dynamic_irq_acquire, "_gpl", "");
KSYMTAB_FUNC(mtk_dynamic_irq_release, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_suspend, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_resume, "_gpl", "");
KSYMTAB_FUNC(is_afe_need_triggered, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_disable, "_gpl", "");
KSYMTAB_FUNC(mtk_irq_set_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_irq_set_disable, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_channel, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_rate, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_rate_substream, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_format, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_pbuf_size, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_min_max_len, "_gpl", "");
KSYMTAB_FUNC(mtk_get_mmap_dl_fd, "_gpl", "");
KSYMTAB_FUNC(mtk_get_mmap_ul_fd, "_gpl", "");
KSYMTAB_FUNC(mtk_get_mmap_dl_buffer, "_gpl", "");
KSYMTAB_FUNC(mtk_get_mmap_ul_buffer, "_gpl", "");
KSYMTAB_FUNC(mtk_clean_mmap_dl_buffer, "_gpl", "");
KSYMTAB_FUNC(mtk_exporter_init, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_get_basic_sram, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_allocate_afe_sram, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_allocate_adsp_sram, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_allocate_sram, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_register_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_usb_offload_afe_hook, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_sram_init, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_sram_allocate, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_sram_free, "_gpl", "");
KSYMTAB_FUNC(mtk_audio_sram_get_size, "_gpl", "");
KSYMTAB_FUNC(mtk_sp_clean_written_buffer_ack, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_debugfs_open, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_debugfs_write, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_write_reg, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_debug_write_reg, "_gpl", "");

SYMBOL_CRC(mtk_afe_combine_sub_dai, 0x229844b9, "_gpl");
SYMBOL_CRC(mtk_afe_add_sub_dai_control, 0x468cddf1, "_gpl");
SYMBOL_CRC(word_size_align, 0x698c0485, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_open, 0xecf3f617, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_pointer, 0x9f388300, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_copy_user, 0x8241537c, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_ack, 0xd2cf8fa4, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_new, 0xe1820c35, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_free, 0x54a73b96, "_gpl");
SYMBOL_CRC(mtk_afe_pcm_platform, 0x5eac7de1, "_gpl");
SYMBOL_CRC(mtk_get_channel_value, 0x0f2ea484, "");
SYMBOL_CRC(register_is_vow_bargein_memif_callback, 0x8d769ee7, "");
SYMBOL_CRC(mtk_regmap_update_bits, 0x8681cb8c, "");
SYMBOL_CRC(mtk_regmap_write, 0xe57cc592, "");
SYMBOL_CRC(mtk_afe_fe_startup, 0xe5454d71, "_gpl");
SYMBOL_CRC(mtk_afe_fe_shutdown, 0xcdfdb747, "_gpl");
SYMBOL_CRC(mtk_afe_fe_hw_params, 0x5dd1374d, "_gpl");
SYMBOL_CRC(mtk_afe_fe_hw_free, 0x4cc9efcc, "_gpl");
SYMBOL_CRC(mtk_afe_fe_trigger, 0x0557cea4, "_gpl");
SYMBOL_CRC(mtk_afe_fe_prepare, 0x4ae627aa, "_gpl");
SYMBOL_CRC(mtk_afe_fe_ops, 0xfed129b0, "_gpl");
SYMBOL_CRC(mtk_dynamic_irq_acquire, 0xc3949646, "_gpl");
SYMBOL_CRC(mtk_dynamic_irq_release, 0xefaeb240, "_gpl");
SYMBOL_CRC(mtk_afe_suspend, 0xe266ea56, "_gpl");
SYMBOL_CRC(mtk_afe_resume, 0x963506b0, "_gpl");
SYMBOL_CRC(is_afe_need_triggered, 0x719476dd, "_gpl");
SYMBOL_CRC(mtk_memif_set_enable, 0x58751ded, "_gpl");
SYMBOL_CRC(mtk_memif_set_disable, 0xfd261d27, "_gpl");
SYMBOL_CRC(mtk_irq_set_enable, 0x89963e14, "_gpl");
SYMBOL_CRC(mtk_irq_set_disable, 0xfda6f609, "_gpl");
SYMBOL_CRC(mtk_memif_set_addr, 0xeee5ceba, "_gpl");
SYMBOL_CRC(mtk_memif_set_channel, 0x938667cf, "_gpl");
SYMBOL_CRC(mtk_memif_set_rate, 0x05a18f8f, "_gpl");
SYMBOL_CRC(mtk_memif_set_rate_substream, 0x34349c56, "_gpl");
SYMBOL_CRC(mtk_memif_set_format, 0x4b73cfb5, "_gpl");
SYMBOL_CRC(mtk_memif_set_pbuf_size, 0xddbf18d8, "_gpl");
SYMBOL_CRC(mtk_memif_set_min_max_len, 0xbbf7997d, "_gpl");
SYMBOL_CRC(mtk_get_mmap_dl_fd, 0x091c9fc8, "_gpl");
SYMBOL_CRC(mtk_get_mmap_ul_fd, 0xf485db6f, "_gpl");
SYMBOL_CRC(mtk_get_mmap_dl_buffer, 0x69389f2d, "_gpl");
SYMBOL_CRC(mtk_get_mmap_ul_buffer, 0xdbde3794, "_gpl");
SYMBOL_CRC(mtk_clean_mmap_dl_buffer, 0xda368da1, "_gpl");
SYMBOL_CRC(mtk_exporter_init, 0x2110a93f, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_get_basic_sram, 0x95fcba40, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_allocate_afe_sram, 0x0b07ab7b, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_allocate_adsp_sram, 0xb37fd6f0, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_allocate_sram, 0xf48bf9fe, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_register_ops, 0x7320340a, "_gpl");
SYMBOL_CRC(mtk_audio_usb_offload_afe_hook, 0xfe12af1c, "_gpl");
SYMBOL_CRC(mtk_audio_sram_init, 0xde257403, "_gpl");
SYMBOL_CRC(mtk_audio_sram_allocate, 0xc0ce5912, "_gpl");
SYMBOL_CRC(mtk_audio_sram_free, 0x69c2d49d, "_gpl");
SYMBOL_CRC(mtk_audio_sram_get_size, 0xf9c6f9c3, "_gpl");
SYMBOL_CRC(mtk_sp_clean_written_buffer_ack, 0x031927a5, "_gpl");
SYMBOL_CRC(mtk_afe_debugfs_open, 0x0788a418, "_gpl");
SYMBOL_CRC(mtk_afe_debugfs_write, 0x533de3d2, "_gpl");
SYMBOL_CRC(mtk_afe_write_reg, 0xe5161a0d, "_gpl");
SYMBOL_CRC(mtk_afe_debug_write_reg, 0xe20f6f33, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x401167cc, "_dev_info" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x9cc842c8, "snd_soc_dapm_new_controls" },
	{ 0xd5924fa9, "snd_soc_dapm_add_routes" },
	{ 0x1ebabe2c, "snd_soc_dapm_new_widgets" },
	{ 0x64311477, "regmap_read" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x9220bf82, "snd_soc_rtdcom_lookup" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x897c151c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8dbfe5de, "snd_pcm_set_ops" },
	{ 0x5ef5a9a6, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x69154b0e, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59ff91c4, "_copy_to_iter" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x4003b2bb, "snd_pcm_hw_constraint_step" },
	{ 0x5b8eeab0, "snd_soc_set_runtime_hwparams" },
	{ 0xe6e59258, "snd_pcm_hw_constraint_minmax" },
	{ 0x7d4c643e, "snd_pcm_hw_constraint_integer" },
	{ 0xb8b94ae2, "notify_allocate_mem" },
	{ 0x217c7829, "mtk_adsp_allocate_mem" },
	{ 0xe118d85a, "snd_pcm_lib_malloc_pages" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xdf889105, "afe_pcm_ipi_to_dsp" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x037a0cba, "kfree" },
	{ 0x8f475b34, "is_adsp_genpool_addr_valid" },
	{ 0x72519cba, "mtk_adsp_free_mem" },
	{ 0x5603a22f, "is_ultra_reserved_dram_addr_valid" },
	{ 0xe0a388ca, "snd_pcm_lib_free_pages" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x2f59a855, "notify_3way_semaphore_control" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x3fbeb482, "notify_vow_ipi_send" },
	{ 0x256df0b4, "notify_ultra_afe_hw_free" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xc5b6a5d2, "dma_buf_fd" },
	{ 0x0d89e2f7, "dma_buf_export" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x3ed546fe, "of_translate_address" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf326a133, "__of_get_address" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x68db9aa8, "__vma_start_write" },
	{ 0x25758a2c, "misc_register" },
	{ 0x34bba055, "adsp_register_notify" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc2283c34, "adsp_register_feature" },
	{ 0x4862e694, "audio_send_ipi_msg" },
	{ 0xbaea5c8b, "adsp_deregister_feature" },
	{ 0x14b77ad8, "get_smem_phy_start_addr" },
	{ 0xcab9bc76, "get_md_resv_mem_info" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc3246938, "misc_deregister" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0xedd46fc9,
	0x9cc842c8,
	0xd5924fa9,
	0x1ebabe2c,
	0x64311477,
	0xb4ce05a5,
	0x9220bf82,
	0x47a915f1,
	0x897c151c,
	0x8dbfe5de,
	0x5ef5a9a6,
	0xc8c7229e,
	0x75ca79b5,
	0x69154b0e,
	0x88db9f48,
	0x59ff91c4,
	0x6b883e5a,
	0x4003b2bb,
	0x5b8eeab0,
	0xe6e59258,
	0x7d4c643e,
	0xb8b94ae2,
	0x217c7829,
	0xe118d85a,
	0x18b48e28,
	0xdf889105,
	0x6b2dc060,
	0x037a0cba,
	0x8f475b34,
	0x72519cba,
	0x5603a22f,
	0xe0a388ca,
	0xd5977bfb,
	0xed55cabd,
	0x2f59a855,
	0x92997ed8,
	0xf5edea2e,
	0x45b60059,
	0xe2d5255a,
	0x576b05bf,
	0xe17134b6,
	0x3fbeb482,
	0x256df0b4,
	0x0f05f001,
	0xefe8a82e,
	0xc5b6a5d2,
	0x0d89e2f7,
	0x441d0de9,
	0xc63b0ac3,
	0x9688de8b,
	0xe4bbc1dd,
	0xf3cdc3c6,
	0xaba63322,
	0x3ed546fe,
	0x6b201699,
	0xf326a133,
	0x4eb4c414,
	0x13269d10,
	0x92acb4e9,
	0x68db9aa8,
	0x25758a2c,
	0x34bba055,
	0x12db679a,
	0x9a85eebb,
	0x2be0c009,
	0xc2283c34,
	0x4862e694,
	0xbaea5c8b,
	0x14b77ad8,
	0xcab9bc76,
	0xe136f93c,
	0xc3246938,
	0xba8fbd64,
	0xb5b54b34,
	0x9eacf8a5,
	0x85df9b6c,
	0x5c3c7387,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"snd_soc_add_component_controls\0"
	"snd_soc_dapm_new_controls\0"
	"snd_soc_dapm_add_routes\0"
	"snd_soc_dapm_new_widgets\0"
	"regmap_read\0"
	"_dev_err\0"
	"snd_soc_rtdcom_lookup\0"
	"_dev_warn\0"
	"snd_pcm_lib_preallocate_pages_for_all\0"
	"snd_pcm_set_ops\0"
	"snd_pcm_lib_preallocate_free_for_all\0"
	"devm_kmalloc\0"
	"__fortify_panic\0"
	"_copy_from_iter\0"
	"__check_object_size\0"
	"_copy_to_iter\0"
	"regmap_write\0"
	"snd_pcm_hw_constraint_step\0"
	"snd_soc_set_runtime_hwparams\0"
	"snd_pcm_hw_constraint_minmax\0"
	"snd_pcm_hw_constraint_integer\0"
	"notify_allocate_mem\0"
	"mtk_adsp_allocate_mem\0"
	"snd_pcm_lib_malloc_pages\0"
	"__memset_io\0"
	"afe_pcm_ipi_to_dsp\0"
	"dump_stack\0"
	"kfree\0"
	"is_adsp_genpool_addr_valid\0"
	"mtk_adsp_free_mem\0"
	"is_ultra_reserved_dram_addr_valid\0"
	"snd_pcm_lib_free_pages\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"notify_3way_semaphore_control\0"
	"_printk\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"strcmp\0"
	"regmap_update_bits_base\0"
	"__kmalloc_cache_noprof\0"
	"notify_vow_ipi_send\0"
	"notify_ultra_afe_hw_free\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"dma_buf_fd\0"
	"dma_buf_export\0"
	"__kmalloc_large_noprof\0"
	"remap_pfn_range\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"of_translate_address\0"
	"of_find_property\0"
	"__of_get_address\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"param_ops_uint\0"
	"__vma_start_write\0"
	"misc_register\0"
	"adsp_register_notify\0"
	"__platform_driver_register\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"adsp_register_feature\0"
	"audio_send_ipi_msg\0"
	"adsp_deregister_feature\0"
	"get_smem_phy_start_addr\0"
	"get_md_resv_mem_info\0"
	"of_property_read_variable_u32_array\0"
	"misc_deregister\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"kstrndup\0"
	"strsep\0"
	"kstrtoull\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-afe-external,snd-soc-audiodsp-common,mtk-scp-ultra,aee_aed,adsp,audio_ipi,ccci_md_all,ccci_util_lib");


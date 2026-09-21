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

KSYMTAB_FUNC(wm_adsp_fw_get, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_fw_put, "_gpl", "");
KSYMTAB_DATA(wm_adsp_fw_enum, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_handle_fw_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_write_ctl, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_read_ctl, "_gpl", "");
KSYMTAB_FUNC(wm_adsp1_init, "_gpl", "");
KSYMTAB_FUNC(wm_adsp1_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_set_dspclk, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_preloader_get, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_preloader_put, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_early_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_component_probe, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_component_remove, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_init, "_gpl", "");
KSYMTAB_FUNC(wm_halo_init, "_gpl", "");
KSYMTAB_FUNC(wm_vpu_init, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_remove, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_free, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_set_params, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_get_caps, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_trigger, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_handle_irq, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_pointer, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_copy, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_bus_error, "_gpl", "");
KSYMTAB_FUNC(wm_halo_bus_error, "_gpl", "");
KSYMTAB_FUNC(wm_halo_wdt_expire, "_gpl", "");

SYMBOL_CRC(wm_adsp_fw_get, 0x2fdf407b, "_gpl");
SYMBOL_CRC(wm_adsp_fw_put, 0x088786fd, "_gpl");
SYMBOL_CRC(wm_adsp_fw_enum, 0xfaea4085, "_gpl");
SYMBOL_CRC(wm_adsp_handle_fw_event, 0x48cef439, "_gpl");
SYMBOL_CRC(wm_adsp_write_ctl, 0xd4df61ee, "_gpl");
SYMBOL_CRC(wm_adsp_read_ctl, 0x4b1dea4d, "_gpl");
SYMBOL_CRC(wm_adsp1_init, 0xb7f21bed, "_gpl");
SYMBOL_CRC(wm_adsp1_event, 0x2b6a07ad, "_gpl");
SYMBOL_CRC(wm_adsp2_set_dspclk, 0xed9a4de7, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_get, 0xa9e3b477, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_put, 0x8ebb72f1, "_gpl");
SYMBOL_CRC(wm_adsp_early_event, 0x80f82efd, "_gpl");
SYMBOL_CRC(wm_adsp_event, 0xa162fd4d, "_gpl");
SYMBOL_CRC(wm_adsp2_component_probe, 0x84afa1c2, "_gpl");
SYMBOL_CRC(wm_adsp2_component_remove, 0x78c6d9ab, "_gpl");
SYMBOL_CRC(wm_adsp2_init, 0xa690667b, "_gpl");
SYMBOL_CRC(wm_halo_init, 0x47227139, "_gpl");
SYMBOL_CRC(wm_vpu_init, 0x45586f72, "_gpl");
SYMBOL_CRC(wm_adsp2_remove, 0xeb659115, "_gpl");
SYMBOL_CRC(wm_adsp_compr_free, 0xb0e2ccc9, "_gpl");
SYMBOL_CRC(wm_adsp_compr_set_params, 0xda98009f, "_gpl");
SYMBOL_CRC(wm_adsp_compr_get_caps, 0x6eeb9086, "_gpl");
SYMBOL_CRC(wm_adsp_compr_trigger, 0xbebf892b, "_gpl");
SYMBOL_CRC(wm_adsp_compr_handle_irq, 0x9fee8009, "_gpl");
SYMBOL_CRC(wm_adsp_compr_pointer, 0x5be3dd70, "_gpl");
SYMBOL_CRC(wm_adsp_compr_copy, 0x258fc853, "_gpl");
SYMBOL_CRC(wm_adsp2_bus_error, 0xdd3c79ef, "_gpl");
SYMBOL_CRC(wm_halo_bus_error, 0xea38ee07, "_gpl");
SYMBOL_CRC(wm_halo_wdt_expire, 0x52c16479, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x401167cc, "_dev_info" },
	{ 0x6b391597, "devm_regulator_bulk_get" },
	{ 0x81ad0a10, "regulator_bulk_enable" },
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0x3fc99356, "gpiod_set_value_cansleep" },
	{ 0x92997ed8, "_printk" },
	{ 0x64311477, "regmap_read" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x2c06a8ef, "regmap_multi_reg_write" },
	{ 0xe5215aae, "regmap_raw_read" },
	{ 0x6676a1b8, "snd_soc_register_component" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x9bd3b281, "snd_soc_unregister_component" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7e1f47d1, "regulator_bulk_disable" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xf03579fe, "devm_kstrdup_const" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xad9e0775, "_dev_crit" },
	{ 0x84927420, "spi_setup" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88e7c517, "snd_soc_info_volsw_range" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0x664e41de, "snd_soc_get_volsw" },
	{ 0x6c0a0d8d, "snd_soc_put_volsw" },
	{ 0x731757d7, "snd_soc_get_volsw_range" },
	{ 0x7defd27a, "snd_soc_put_volsw_range" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xda3b307d, "snd_soc_get_enum_double" },
	{ 0xd4c3b5d0, "snd_soc_put_enum_double" },
	{ 0x2ce2b5e3, "snd_ctl_boolean_mono_info" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xfadf598a, "snd_soc_bytes_tlv_callback" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x65d14cbc, "regcache_cache_only" },
	{ 0x940df58d, "regcache_mark_dirty" },
	{ 0x073cbbc1, "regcache_sync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa626beb1, "snd_soc_component_disable_pin" },
	{ 0x9940d82f, "snd_soc_dapm_sync" },
	{ 0x16d62600, "snd_soc_component_force_enable_pin" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xb2cdddf8, "regcache_drop_region" },
	{ 0x46ea17cf, "regmap_raw_write" },
	{ 0x0c2c5802, "work_busy" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9eb9f3ca, "gpiod_get_value_cansleep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xa0c69198, "regmap_multi_reg_write_bypassed" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfb508160, "snd_soc_dapm_get_enum_double" },
	{ 0x5b3abae3, "snd_soc_dapm_put_enum_double" },
	{ 0xf224fe79, "snd_soc_dapm_get_volsw" },
	{ 0xb4bfe584, "snd_soc_dapm_put_volsw" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x0f4c1368, "snd_soc_dapm_ignore_suspend" },
	{ 0x3c57945c, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x59f4c0a7, "snd_pcm_hw_constraint_list" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x1d4f8756, "snd_soc_card_get_kcontrol" },
	{ 0xefc8ad14, "snd_ctl_notify" },
	{ 0xae28e250, "snd_compr_stop_error" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0xe857de28, "devm_kstrdup" },
	{ 0x4bc2b369, "regmap_async_complete" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x96848186, "scnprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x8ce61d4c, "regmap_raw_write_async" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x70cc6ff8, "debugfs_create_bool" },
	{ 0x9c7c92a6, "debugfs_create_x32" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xdb15f288, "simple_open" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xe2964344, "__wake_up" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb4ce05a5,
	0x401167cc,
	0x6b391597,
	0x81ad0a10,
	0x8869c950,
	0x3fc99356,
	0x92997ed8,
	0x64311477,
	0xa571f6b0,
	0x49cd25ed,
	0xf9583f23,
	0x6b883e5a,
	0x2c06a8ef,
	0xe5215aae,
	0x6676a1b8,
	0xc6f46339,
	0xffeedf6a,
	0x576b05bf,
	0x62b33777,
	0x9bd3b281,
	0x8c03d20c,
	0x7e1f47d1,
	0x3667c9f1,
	0xf03579fe,
	0xc8c7229e,
	0xba085e3d,
	0xcd6bda8d,
	0x6b201699,
	0xe136f93c,
	0xc3055d20,
	0xd5977bfb,
	0xed55cabd,
	0xad9e0775,
	0x84927420,
	0x33a52b38,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0x88e7c517,
	0x6e295f94,
	0x664e41de,
	0x6c0a0d8d,
	0x731757d7,
	0x7defd27a,
	0x182e3cfb,
	0xda3b307d,
	0xd4c3b5d0,
	0x2ce2b5e3,
	0xa73e125d,
	0xfadf598a,
	0x3ce4ca6f,
	0x65d14cbc,
	0x940df58d,
	0x073cbbc1,
	0xfcec0987,
	0xa626beb1,
	0x9940d82f,
	0x16d62600,
	0x2f2c95c4,
	0x9e87b2ff,
	0x42ad47ad,
	0xb2cdddf8,
	0x46ea17cf,
	0x0c2c5802,
	0x03c12dfe,
	0x9166fc03,
	0xc5b6f236,
	0x9eb9f3ca,
	0x88db9f48,
	0x9a85eebb,
	0x75ca79b5,
	0x2be0c009,
	0xa0c69198,
	0x47a915f1,
	0xb43f9365,
	0xfb508160,
	0x5b3abae3,
	0xf224fe79,
	0xb4bfe584,
	0xedd46fc9,
	0x656e4a6e,
	0x0f4c1368,
	0x3c57945c,
	0xc6d09aa9,
	0x8c8569cb,
	0x59f4c0a7,
	0xe56a9336,
	0x68a24153,
	0x3b6c41ea,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0xd4c14632,
	0x2ff78d9b,
	0x7df1ce51,
	0x84dd786f,
	0x1d4f8756,
	0xefc8ad14,
	0xae28e250,
	0x56470118,
	0x5a921311,
	0x5c6a5e82,
	0xe857de28,
	0x4bc2b369,
	0x98cf60b3,
	0xa916b694,
	0x96848186,
	0xe2d5255a,
	0xa8ade12b,
	0x7e19152a,
	0x8ce61d4c,
	0xfb384d37,
	0x5cf4d4de,
	0x70cc6ff8,
	0x9c7c92a6,
	0x4e870156,
	0xdb15f288,
	0x9c81ceff,
	0xb7c7d237,
	0x9a835040,
	0xe2964344,
	0xeae3dfd6,
	0x11089ac7,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_err\0"
	"_dev_info\0"
	"devm_regulator_bulk_get\0"
	"regulator_bulk_enable\0"
	"devm_gpiod_get_optional\0"
	"gpiod_set_value_cansleep\0"
	"_printk\0"
	"regmap_read\0"
	"__mutex_init\0"
	"alloc_workqueue\0"
	"devm_request_threaded_irq\0"
	"regmap_write\0"
	"regmap_multi_reg_write\0"
	"regmap_raw_read\0"
	"snd_soc_register_component\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"regmap_update_bits_base\0"
	"sysfs_create_group\0"
	"snd_soc_unregister_component\0"
	"destroy_workqueue\0"
	"regulator_bulk_disable\0"
	"sysfs_remove_group\0"
	"devm_kstrdup_const\0"
	"devm_kmalloc\0"
	"of_get_child_by_name\0"
	"of_property_read_string_helper\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"usleep_range_state\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_dev_crit\0"
	"spi_setup\0"
	"regmap_bulk_read\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"snd_soc_info_volsw_range\0"
	"snd_soc_info_volsw\0"
	"snd_soc_get_volsw\0"
	"snd_soc_put_volsw\0"
	"snd_soc_get_volsw_range\0"
	"snd_soc_put_volsw_range\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_get_enum_double\0"
	"snd_soc_put_enum_double\0"
	"snd_ctl_boolean_mono_info\0"
	"snd_soc_bytes_info_ext\0"
	"snd_soc_bytes_tlv_callback\0"
	"disable_irq\0"
	"regcache_cache_only\0"
	"regcache_mark_dirty\0"
	"regcache_sync\0"
	"enable_irq\0"
	"snd_soc_component_disable_pin\0"
	"snd_soc_dapm_sync\0"
	"snd_soc_component_force_enable_pin\0"
	"flush_work\0"
	"cancel_delayed_work\0"
	"queue_delayed_work_on\0"
	"regcache_drop_region\0"
	"regmap_raw_write\0"
	"work_busy\0"
	"cancel_work_sync\0"
	"__flush_workqueue\0"
	"queue_work_on\0"
	"gpiod_get_value_cansleep\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__fortify_panic\0"
	"__arch_copy_from_user\0"
	"regmap_multi_reg_write_bypassed\0"
	"_dev_warn\0"
	"ktime_get\0"
	"snd_soc_dapm_get_enum_double\0"
	"snd_soc_dapm_put_enum_double\0"
	"snd_soc_dapm_get_volsw\0"
	"snd_soc_dapm_put_volsw\0"
	"snd_soc_add_component_controls\0"
	"snprintf\0"
	"snd_soc_dapm_ignore_suspend\0"
	"request_firmware\0"
	"release_firmware\0"
	"kstrtoint\0"
	"snd_pcm_hw_constraint_list\0"
	"snd_pcm_format_width\0"
	"snd_pcm_format_physical_width\0"
	"kstrtouint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"system_unbound_wq\0"
	"i2c_register_driver\0"
	"__devm_regmap_init_i2c\0"
	"i2c_del_driver\0"
	"snd_soc_card_get_kcontrol\0"
	"snd_ctl_notify\0"
	"snd_compr_stop_error\0"
	"__warn_printk\0"
	"strncmp\0"
	"devm_kasprintf\0"
	"devm_kstrdup\0"
	"regmap_async_complete\0"
	"strlen\0"
	"strnlen\0"
	"scnprintf\0"
	"strcmp\0"
	"kmemdup_noprof\0"
	"__list_add_valid_or_report\0"
	"regmap_raw_write_async\0"
	"kasprintf\0"
	"debugfs_create_dir\0"
	"debugfs_create_bool\0"
	"debugfs_create_x32\0"
	"debugfs_create_file\0"
	"simple_open\0"
	"simple_read_from_buffer\0"
	"debugfs_remove\0"
	"__list_del_entry_valid_or_report\0"
	"__wake_up\0"
	"__const_udelay\0"
	"_ctype\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs35l40");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l40C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l41");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l41C*");
MODULE_ALIAS("i2c:cs35l40");
MODULE_ALIAS("i2c:cs35l41");

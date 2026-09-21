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

KSYMTAB_FUNC(mtk_panel_register_drv_customization_funcs, "", "");
KSYMTAB_FUNC(mtk_panel_deregister_drv_customization_funcs, "", "");
KSYMTAB_FUNC(panel_to_lcm, "", "");
KSYMTAB_FUNC(mtk_panel_dsi_dcs_write_buffer, "", "");
KSYMTAB_FUNC(mtk_panel_dsi_dcs_write, "", "");
KSYMTAB_FUNC(mtk_panel_dsi_dcs_read, "", "");
KSYMTAB_FUNC(mtk_panel_dsi_dcs_read_buffer, "", "");
KSYMTAB_FUNC(mtk_panel_register_dsi_customization_funcs, "", "");
KSYMTAB_FUNC(mtk_panel_deregister_dsi_customization_funcs, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u32_array, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u32, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u8, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u8_array_from_u32, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u8_array, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u32_pointer, "", "");
KSYMTAB_FUNC(mtk_lcm_dts_read_u8_pointer, "", "");
KSYMTAB_FUNC(parse_lcm_ops_func, "", "");
KSYMTAB_FUNC(parse_lcm_common_ops_func_u8, "", "");
KSYMTAB_FUNC(parse_lcm_common_ops_func_u32, "", "");
KSYMTAB_FUNC(load_panel_resource_from_dts, "", "");
KSYMTAB_FUNC(mtk_lcm_dump_u8_array, "", "");
KSYMTAB_FUNC(mtk_lcm_dump_u32_array, "", "");
KSYMTAB_FUNC(dump_lcm_ops_func, "", "");
KSYMTAB_FUNC(dump_lcm_ops_table, "", "");
KSYMTAB_FUNC(mtk_lcm_create_input_packet, "", "");
KSYMTAB_FUNC(mtk_lcm_destroy_input_packet, "", "");
KSYMTAB_FUNC(mtk_lcm_create_input, "", "");
KSYMTAB_FUNC(mtk_lcm_destroy_input, "", "");
KSYMTAB_FUNC(mtk_panel_execute_callback, "", "");
KSYMTAB_FUNC(mtk_panel_execute_callback_group, "", "");
KSYMTAB_FUNC(mtk_lcm_destroy_ddic_packet, "", "");
KSYMTAB_FUNC(mtk_is_lcm_read_ops, "", "");
KSYMTAB_FUNC(mtk_panel_execute_operation, "", "");
KSYMTAB_FUNC(free_lcm_ops_table, "", "");
KSYMTAB_FUNC(parse_lcm_params_dsi, "", "");
KSYMTAB_FUNC(parse_lcm_ops_dsi, "", "");
KSYMTAB_FUNC(dump_lcm_dsi_fps_settings, "", "");
KSYMTAB_FUNC(dump_lcm_params_dsi, "", "");
KSYMTAB_FUNC(dump_lcm_ops_dsi, "", "");
KSYMTAB_FUNC(free_lcm_params_dsi, "", "");
KSYMTAB_FUNC(free_lcm_ops_dsi, "", "");
KSYMTAB_FUNC(parse_lcm_params_dpi, "", "");
KSYMTAB_FUNC(parse_lcm_ops_dpi, "", "");
KSYMTAB_FUNC(dump_lcm_params_dpi, "", "");
KSYMTAB_FUNC(dump_lcm_ops_dpi, "", "");
KSYMTAB_FUNC(free_lcm_params_dpi, "", "");
KSYMTAB_FUNC(free_lcm_ops_dpi, "", "");
KSYMTAB_FUNC(parse_lcm_params_dbi, "", "");
KSYMTAB_FUNC(parse_lcm_ops_dbi, "", "");
KSYMTAB_FUNC(dump_lcm_params_dbi, "", "");
KSYMTAB_FUNC(dump_lcm_ops_dbi, "", "");
KSYMTAB_FUNC(free_lcm_params_dbi, "", "");
KSYMTAB_FUNC(free_lcm_ops_dbi, "", "");

SYMBOL_CRC(mtk_panel_register_drv_customization_funcs, 0xf4223cf0, "");
SYMBOL_CRC(mtk_panel_deregister_drv_customization_funcs, 0x5edcf070, "");
SYMBOL_CRC(panel_to_lcm, 0x49f7b939, "");
SYMBOL_CRC(mtk_panel_dsi_dcs_write_buffer, 0x2089c2ba, "");
SYMBOL_CRC(mtk_panel_dsi_dcs_write, 0xac49bdb1, "");
SYMBOL_CRC(mtk_panel_dsi_dcs_read, 0xc9067455, "");
SYMBOL_CRC(mtk_panel_dsi_dcs_read_buffer, 0x824b08d2, "");
SYMBOL_CRC(mtk_panel_register_dsi_customization_funcs, 0x60cb2fb0, "");
SYMBOL_CRC(mtk_panel_deregister_dsi_customization_funcs, 0xecb1d597, "");
SYMBOL_CRC(mtk_lcm_dts_read_u32_array, 0xd5fb65f2, "");
SYMBOL_CRC(mtk_lcm_dts_read_u32, 0x84ccfd7d, "");
SYMBOL_CRC(mtk_lcm_dts_read_u8, 0xc3cb6d41, "");
SYMBOL_CRC(mtk_lcm_dts_read_u8_array_from_u32, 0x71425eb6, "");
SYMBOL_CRC(mtk_lcm_dts_read_u8_array, 0xb26ff562, "");
SYMBOL_CRC(mtk_lcm_dts_read_u32_pointer, 0x2be3e035, "");
SYMBOL_CRC(mtk_lcm_dts_read_u8_pointer, 0x9ecde94f, "");
SYMBOL_CRC(parse_lcm_ops_func, 0x89d89859, "");
SYMBOL_CRC(parse_lcm_common_ops_func_u8, 0x8f795795, "");
SYMBOL_CRC(parse_lcm_common_ops_func_u32, 0xd42f6320, "");
SYMBOL_CRC(load_panel_resource_from_dts, 0xd0e46df8, "");
SYMBOL_CRC(mtk_lcm_dump_u8_array, 0x307446c8, "");
SYMBOL_CRC(mtk_lcm_dump_u32_array, 0x1c1224a3, "");
SYMBOL_CRC(dump_lcm_ops_func, 0x74aa2cb3, "");
SYMBOL_CRC(dump_lcm_ops_table, 0xa8cf5964, "");
SYMBOL_CRC(mtk_lcm_create_input_packet, 0x8f42bf7f, "");
SYMBOL_CRC(mtk_lcm_destroy_input_packet, 0x2deddfea, "");
SYMBOL_CRC(mtk_lcm_create_input, 0x0bd5430d, "");
SYMBOL_CRC(mtk_lcm_destroy_input, 0xa02a8f79, "");
SYMBOL_CRC(mtk_panel_execute_callback, 0x21305513, "");
SYMBOL_CRC(mtk_panel_execute_callback_group, 0xf1b34079, "");
SYMBOL_CRC(mtk_lcm_destroy_ddic_packet, 0xbfd1f47f, "");
SYMBOL_CRC(mtk_is_lcm_read_ops, 0x2486d19d, "");
SYMBOL_CRC(mtk_panel_execute_operation, 0x95e52ff8, "");
SYMBOL_CRC(free_lcm_ops_table, 0x106f7132, "");
SYMBOL_CRC(parse_lcm_params_dsi, 0xb7f00ffa, "");
SYMBOL_CRC(parse_lcm_ops_dsi, 0xde0506b3, "");
SYMBOL_CRC(dump_lcm_dsi_fps_settings, 0x6a928665, "");
SYMBOL_CRC(dump_lcm_params_dsi, 0xed7199db, "");
SYMBOL_CRC(dump_lcm_ops_dsi, 0x258c8ecc, "");
SYMBOL_CRC(free_lcm_params_dsi, 0x53d09429, "");
SYMBOL_CRC(free_lcm_ops_dsi, 0xa2b65af3, "");
SYMBOL_CRC(parse_lcm_params_dpi, 0x29e72b7a, "");
SYMBOL_CRC(parse_lcm_ops_dpi, 0x9c7505cc, "");
SYMBOL_CRC(dump_lcm_params_dpi, 0xb2c0bd62, "");
SYMBOL_CRC(dump_lcm_ops_dpi, 0x44d5ae02, "");
SYMBOL_CRC(free_lcm_params_dpi, 0xd241b621, "");
SYMBOL_CRC(free_lcm_ops_dpi, 0xfc896104, "");
SYMBOL_CRC(parse_lcm_params_dbi, 0xeb65c9a4, "");
SYMBOL_CRC(parse_lcm_ops_dbi, 0x2842ee83, "");
SYMBOL_CRC(dump_lcm_params_dbi, 0x41179f53, "");
SYMBOL_CRC(dump_lcm_ops_dbi, 0xc68cc23e, "");
SYMBOL_CRC(free_lcm_params_dbi, 0x21969410, "");
SYMBOL_CRC(free_lcm_ops_dbi, 0x2d1a8afe, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1beede31, "mtk_dprec_logger_pr" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x2bbdddca, "mipi_dsi_driver_register_full" },
	{ 0x831381f1, "mipi_dsi_driver_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x7507c5a0, "mipi_dsi_dcs_write_buffer" },
	{ 0xf6205d3b, "mipi_dsi_generic_write" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa0f72043, "mipi_dsi_dcs_write" },
	{ 0x65b94165, "mipi_dsi_dcs_read" },
	{ 0x7fe0a948, "mipi_dsi_generic_read" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x1580647f, "mtk_drm_gateic_select" },
	{ 0xfd33c7bb, "of_find_backlight_by_node" },
	{ 0x91f86d0d, "drm_panel_init" },
	{ 0x0e053222, "drm_panel_add" },
	{ 0x819d1dbb, "mipi_dsi_attach" },
	{ 0x3d4bfcfc, "drm_panel_remove" },
	{ 0xf855dd8b, "mtk_panel_tch_handle_reg" },
	{ 0x1d9d740b, "mtk_panel_ext_create" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xebdd85ed, "mtk_drm_gateic_power_on" },
	{ 0xb1bcf3c7, "mtk_drm_gateic_set_voltage" },
	{ 0x3f651361, "mtk_panel_tch_rst" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbd8fa13a, "mtk_drm_gateic_power_off" },
	{ 0x0ef4bf6b, "drm_mode_duplicate" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6cb55984, "drm_mode_probed_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc59178c6, "mtk_drm_gateic_reset" },
	{ 0x937e4941, "find_panel_ext" },
	{ 0x0d9b4753, "drm_mode_equal" },
	{ 0x56470118, "__warn_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x4e53b20b, "mipi_dsi_detach" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x95eacc30, "g_mobile_log" },
	{ 0x808d3c5d, "g_detail_log" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x7137b158, "mtk_lcm_dsi_ddic_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x95585423, "devm_gpiod_get_index" },
	{ 0xd7a0e8ec, "gpiod_direction_output" },
	{ 0x09a359c5, "devm_gpiod_put" },
	{ 0x3c50e41e, "gpiod_direction_input" },
	{ 0x5a772b88, "gpiod_set_value" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1beede31,
	0x92997ed8,
	0x12db679a,
	0x2bbdddca,
	0x831381f1,
	0x6fc35f2b,
	0x7507c5a0,
	0xf6205d3b,
	0xb4ce05a5,
	0xa0f72043,
	0x65b94165,
	0x7fe0a948,
	0x037a0cba,
	0xe17134b6,
	0x1580647f,
	0xfd33c7bb,
	0x91f86d0d,
	0x0e053222,
	0x819d1dbb,
	0x3d4bfcfc,
	0xf855dd8b,
	0x1d9d740b,
	0x1fec5304,
	0xebdd85ed,
	0xb1bcf3c7,
	0x3f651361,
	0xe94986d6,
	0x34db050b,
	0xd35cce70,
	0xd5977bfb,
	0xed55cabd,
	0xbd8fa13a,
	0x0ef4bf6b,
	0xf1b5340a,
	0x4a35d30d,
	0x6cb55984,
	0x656e4a6e,
	0xc59178c6,
	0x937e4941,
	0x0d9b4753,
	0x56470118,
	0x75ca79b5,
	0xe136f93c,
	0x4e53b20b,
	0x0f05f001,
	0xefe8a82e,
	0x95eacc30,
	0x808d3c5d,
	0x67064f1d,
	0x6b201699,
	0x796ead29,
	0x2077fc84,
	0x7137b158,
	0xeae3dfd6,
	0x9e7d6bd0,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0x95585423,
	0xd7a0e8ec,
	0x09a359c5,
	0x3c50e41e,
	0x5a772b88,
	0x441d0de9,
	0x52c5c991,
	0x7e19152a,
	0xaf7cb74b,
	0x9a835040,
	0xcd6bda8d,
	0xe2d5255a,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_dprec_logger_pr\0"
	"_printk\0"
	"__platform_driver_register\0"
	"mipi_dsi_driver_register_full\0"
	"mipi_dsi_driver_unregister\0"
	"platform_driver_unregister\0"
	"mipi_dsi_dcs_write_buffer\0"
	"mipi_dsi_generic_write\0"
	"_dev_err\0"
	"mipi_dsi_dcs_write\0"
	"mipi_dsi_dcs_read\0"
	"mipi_dsi_generic_read\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"mtk_drm_gateic_select\0"
	"of_find_backlight_by_node\0"
	"drm_panel_init\0"
	"drm_panel_add\0"
	"mipi_dsi_attach\0"
	"drm_panel_remove\0"
	"mtk_panel_tch_handle_reg\0"
	"mtk_panel_ext_create\0"
	"__of_parse_phandle_with_args\0"
	"mtk_drm_gateic_power_on\0"
	"mtk_drm_gateic_set_voltage\0"
	"mtk_panel_tch_rst\0"
	"sched_clock\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mtk_drm_gateic_power_off\0"
	"drm_mode_duplicate\0"
	"drm_mode_vrefresh\0"
	"drm_mode_set_name\0"
	"drm_mode_probed_add\0"
	"snprintf\0"
	"mtk_drm_gateic_reset\0"
	"find_panel_ext\0"
	"drm_mode_equal\0"
	"__warn_printk\0"
	"__fortify_panic\0"
	"of_property_read_variable_u32_array\0"
	"mipi_dsi_detach\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"g_mobile_log\0"
	"g_detail_log\0"
	"of_property_read_variable_u8_array\0"
	"of_find_property\0"
	"of_get_next_available_child\0"
	"of_device_is_compatible\0"
	"mtk_lcm_dsi_ddic_handler\0"
	"__const_udelay\0"
	"__udelay\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"devm_gpiod_get_index\0"
	"gpiod_direction_output\0"
	"devm_gpiod_put\0"
	"gpiod_direction_input\0"
	"gpiod_set_value\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"of_property_read_string\0"
	"__list_del_entry_valid_or_report\0"
	"of_property_read_string_helper\0"
	"strcmp\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm,mediatek-drm-gateic,mtk_panel_ext");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dsi");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dsiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dpi");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dpiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dbi");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-panel-drv-dbiC*");

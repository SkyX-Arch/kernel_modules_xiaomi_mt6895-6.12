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
	{ 0x92997ed8, "_printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c320269, "mtk_ddic_dsi_read_cmd" },
	{ 0x2bbdddca, "mipi_dsi_driver_register_full" },
	{ 0xfd33c7bb, "of_find_backlight_by_node" },
	{ 0x1e41fc76, "devm_gpiod_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x09a359c5, "devm_gpiod_put" },
	{ 0x95585423, "devm_gpiod_get_index" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x91f86d0d, "drm_panel_init" },
	{ 0x0e053222, "drm_panel_add" },
	{ 0x819d1dbb, "mipi_dsi_attach" },
	{ 0x3d4bfcfc, "drm_panel_remove" },
	{ 0x1d9d740b, "mtk_panel_ext_create" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a772b88, "gpiod_set_value" },
	{ 0x3f651361, "mtk_panel_tch_rst" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7507c5a0, "mipi_dsi_dcs_write_buffer" },
	{ 0xf6205d3b, "mipi_dsi_generic_write" },
	{ 0x0ef4bf6b, "drm_mode_duplicate" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6cb55984, "drm_mode_probed_add" },
	{ 0x937e4941, "find_panel_ext" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2867289d, "mtk_ddic_dsi_send_cmd" },
	{ 0x1beede31, "mtk_dprec_logger_pr" },
	{ 0x27d87d73, "mtk_ddic_dsi_wait_te_send_cmd" },
	{ 0xfb0035f3, "find_panel_ctx" },
	{ 0x4e53b20b, "mipi_dsi_detach" },
	{ 0x6eca45c7, "mtk_panel_detach" },
	{ 0xa7a742b3, "mtk_panel_remove" },
	{ 0x831381f1, "mipi_dsi_driver_unregister" },
	{ 0xb24413bf, "param_ops_string" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xbcab6ee6,
	0x656e4a6e,
	0x5c320269,
	0x2bbdddca,
	0xfd33c7bb,
	0x1e41fc76,
	0xb4ce05a5,
	0x09a359c5,
	0x95585423,
	0x5e292cf6,
	0x31b65f04,
	0x91f86d0d,
	0x0e053222,
	0x819d1dbb,
	0x3d4bfcfc,
	0x1d9d740b,
	0xc8c7229e,
	0x1fec5304,
	0x03b28b1f,
	0x2220455c,
	0x7a8ef1df,
	0x57d5e131,
	0xeae3dfd6,
	0x5a772b88,
	0x3f651361,
	0x031dffa4,
	0xd5977bfb,
	0xed55cabd,
	0xf9a482f9,
	0x7507c5a0,
	0xf6205d3b,
	0x0ef4bf6b,
	0xf1b5340a,
	0x4a35d30d,
	0x6cb55984,
	0x937e4941,
	0xc3055d20,
	0x2867289d,
	0x1beede31,
	0x27d87d73,
	0xfb0035f3,
	0x4e53b20b,
	0x6eca45c7,
	0xa7a742b3,
	0x831381f1,
	0xb24413bf,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"sscanf\0"
	"snprintf\0"
	"mtk_ddic_dsi_read_cmd\0"
	"mipi_dsi_driver_register_full\0"
	"of_find_backlight_by_node\0"
	"devm_gpiod_get\0"
	"_dev_err\0"
	"devm_gpiod_put\0"
	"devm_gpiod_get_index\0"
	"of_get_named_gpio\0"
	"of_property_read_u32_index\0"
	"drm_panel_init\0"
	"drm_panel_add\0"
	"mipi_dsi_attach\0"
	"drm_panel_remove\0"
	"mtk_panel_ext_create\0"
	"devm_kmalloc\0"
	"__of_parse_phandle_with_args\0"
	"regulator_get\0"
	"regulator_set_voltage\0"
	"regulator_is_enabled\0"
	"regulator_enable\0"
	"__const_udelay\0"
	"gpiod_set_value\0"
	"mtk_panel_tch_rst\0"
	"regulator_disable\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"msleep\0"
	"mipi_dsi_dcs_write_buffer\0"
	"mipi_dsi_generic_write\0"
	"drm_mode_duplicate\0"
	"drm_mode_vrefresh\0"
	"drm_mode_set_name\0"
	"drm_mode_probed_add\0"
	"find_panel_ext\0"
	"usleep_range_state\0"
	"mtk_ddic_dsi_send_cmd\0"
	"mtk_dprec_logger_pr\0"
	"mtk_ddic_dsi_wait_te_send_cmd\0"
	"find_panel_ctx\0"
	"mipi_dsi_detach\0"
	"mtk_panel_detach\0"
	"mtk_panel_remove\0"
	"mipi_dsi_driver_unregister\0"
	"param_ops_string\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm,mtk_panel_ext");

MODULE_ALIAS("of:N*T*Cl12a_42_02_0a_dsc_cmd,lcm");
MODULE_ALIAS("of:N*T*Cl12a_42_02_0a_dsc_cmd,lcmC*");

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

KSYMTAB_FUNC(mtk_panel_i2c_write_bytes, "", "");
KSYMTAB_FUNC(mtk_panel_i2c_read_bytes, "", "");
KSYMTAB_FUNC(mtk_panel_i2c_write_multiple_bytes, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_register, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_select, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_get, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_power_on, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_power_off, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_set_voltage, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_reset, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_set_backlight, "", "");
KSYMTAB_FUNC(mtk_drm_gateic_enable_backlight, "", "");

SYMBOL_CRC(mtk_panel_i2c_write_bytes, 0x320a3af9, "");
SYMBOL_CRC(mtk_panel_i2c_read_bytes, 0xecbf3669, "");
SYMBOL_CRC(mtk_panel_i2c_write_multiple_bytes, 0x59f588a0, "");
SYMBOL_CRC(mtk_drm_gateic_register, 0xb616223b, "");
SYMBOL_CRC(mtk_drm_gateic_select, 0x1580647f, "");
SYMBOL_CRC(mtk_drm_gateic_get, 0x69fb5dd0, "");
SYMBOL_CRC(mtk_drm_gateic_power_on, 0xebdd85ed, "");
SYMBOL_CRC(mtk_drm_gateic_power_off, 0xbd8fa13a, "");
SYMBOL_CRC(mtk_drm_gateic_set_voltage, 0xb1bcf3c7, "");
SYMBOL_CRC(mtk_drm_gateic_reset, 0xc59178c6, "");
SYMBOL_CRC(mtk_drm_gateic_set_backlight, 0x9f61238a, "");
SYMBOL_CRC(mtk_drm_gateic_enable_backlight, 0x04b1bc3f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1beede31, "mtk_dprec_logger_pr" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x037a0cba, "kfree" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe1b51218, "i2c_unregister_device" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x1e41fc76, "devm_gpiod_get" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x09a359c5, "devm_gpiod_put" },
	{ 0x95585423, "devm_gpiod_get_index" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x5a772b88, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x95eacc30, "g_mobile_log" },
	{ 0x41e3079d, "mtk_leds_register_notifier" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xbd8167f8, "mtk_leds_unregister_notifier" },
	{ 0x808d3c5d, "g_detail_log" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1beede31,
	0x92997ed8,
	0xf5edea2e,
	0x037a0cba,
	0x4a068d70,
	0x52c5c991,
	0xe1b51218,
	0x0f05f001,
	0x1e41fc76,
	0xb4ce05a5,
	0x09a359c5,
	0x95585423,
	0xcd6bda8d,
	0x5a772b88,
	0xeae3dfd6,
	0x95eacc30,
	0x41e3079d,
	0xe136f93c,
	0xbd8167f8,
	0x808d3c5d,
	0x656e4a6e,
	0xe2d5255a,
	0x7e19152a,
	0x12db679a,
	0x2ff78d9b,
	0x6fc35f2b,
	0x84dd786f,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_dprec_logger_pr\0"
	"_printk\0"
	"___ratelimit\0"
	"kfree\0"
	"i2c_transfer_buffer_flags\0"
	"__kmalloc_noprof\0"
	"i2c_unregister_device\0"
	"mem_alloc_profiling_key\0"
	"devm_gpiod_get\0"
	"_dev_err\0"
	"devm_gpiod_put\0"
	"devm_gpiod_get_index\0"
	"of_property_read_string_helper\0"
	"gpiod_set_value\0"
	"__const_udelay\0"
	"g_mobile_log\0"
	"mtk_leds_register_notifier\0"
	"of_property_read_variable_u32_array\0"
	"mtk_leds_unregister_notifier\0"
	"g_detail_log\0"
	"snprintf\0"
	"strcmp\0"
	"__list_add_valid_or_report\0"
	"__platform_driver_register\0"
	"i2c_register_driver\0"
	"platform_driver_unregister\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm,leds-mtk");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-gateic-drv-rt4801h");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-gateic-drv-rt4801hC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-gateic-drv-rt4831a");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-drm-gateic-drv-rt4831aC*");

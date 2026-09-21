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
	{ 0xacddd9d2, "mtkfb_set_backlight_level" },
	{ 0x602ab713, "mtk_drm_set_conn_backlight_level" },
	{ 0xe009d8dc, "mtk_drm_get_lcm_version" },
	{ 0x9f61238a, "mtk_drm_gateic_set_backlight" },
	{ 0x9c866d1d, "_gate_ic_backlight_set" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xeba7a0a3, "device_get_child_node_count" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9f305f6c, "device_get_next_child_node" },
	{ 0xb4f357ef, "mt_leds_parse_dt" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xbbfcfd40, "mtk_drm_get_conn_obj_id_from_idx" },
	{ 0xdf452e47, "mt_leds_classdev_register" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x0f6d4527, "mt_leds_call_notifier" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xacddd9d2,
	0x602ab713,
	0xe009d8dc,
	0x9f61238a,
	0x9c866d1d,
	0x92997ed8,
	0x12db679a,
	0xeba7a0a3,
	0xc8c7229e,
	0x9f305f6c,
	0xb4f357ef,
	0x14fe5355,
	0xbbfcfd40,
	0xdf452e47,
	0xa4f72277,
	0x0f6d4527,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtkfb_set_backlight_level\0"
	"mtk_drm_set_conn_backlight_level\0"
	"mtk_drm_get_lcm_version\0"
	"mtk_drm_gateic_set_backlight\0"
	"_gate_ic_backlight_set\0"
	"_printk\0"
	"__platform_driver_register\0"
	"device_get_child_node_count\0"
	"devm_kmalloc\0"
	"device_get_next_child_node\0"
	"mt_leds_parse_dt\0"
	"of_device_get_match_data\0"
	"mtk_drm_get_conn_obj_id_from_idx\0"
	"mt_leds_classdev_register\0"
	"_dev_notice\0"
	"mt_leds_call_notifier\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mediatek-drm,mtk_panel_ext,mediatek-drm-gateic,rt4831a_drv,leds-mtk");

MODULE_ALIAS("of:N*T*Cmediatek,disp-leds");
MODULE_ALIAS("of:N*T*Cmediatek,disp-ledsC*");
MODULE_ALIAS("of:N*T*Cmediatek,disp-conn-leds");
MODULE_ALIAS("of:N*T*Cmediatek,disp-conn-ledsC*");
MODULE_ALIAS("of:N*T*Cmediatek,i2c-leds");
MODULE_ALIAS("of:N*T*Cmediatek,i2c-ledsC*");
MODULE_ALIAS("of:N*T*Cmediatek,i2c-leds-sgm37604a");
MODULE_ALIAS("of:N*T*Cmediatek,i2c-leds-sgm37604aC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-leds");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-ledsC*");

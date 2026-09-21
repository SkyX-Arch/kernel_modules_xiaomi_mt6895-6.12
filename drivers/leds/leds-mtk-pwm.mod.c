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
	{ 0x92997ed8, "_printk" },
	{ 0xeba7a0a3, "device_get_child_node_count" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x9f305f6c, "device_get_next_child_node" },
	{ 0xb4f357ef, "mt_leds_parse_dt" },
	{ 0xbbfcfd40, "mtk_drm_get_conn_obj_id_from_idx" },
	{ 0x97b1fda1, "pwm_apply_might_sleep" },
	{ 0x654b4ade, "devm_fwnode_pwm_get" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xdf452e47, "mt_leds_classdev_register" },
	{ 0x0f6d4527, "mt_leds_call_notifier" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xeba7a0a3,
	0xc8c7229e,
	0x9f305f6c,
	0xb4f357ef,
	0xbbfcfd40,
	0x97b1fda1,
	0x654b4ade,
	0xa4f72277,
	0xdf452e47,
	0x0f6d4527,
	0x6fc35f2b,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"device_get_child_node_count\0"
	"devm_kmalloc\0"
	"device_get_next_child_node\0"
	"mt_leds_parse_dt\0"
	"mtk_drm_get_conn_obj_id_from_idx\0"
	"pwm_apply_might_sleep\0"
	"devm_fwnode_pwm_get\0"
	"_dev_notice\0"
	"mt_leds_classdev_register\0"
	"mt_leds_call_notifier\0"
	"platform_driver_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "leds-mtk,mediatek-drm");

MODULE_ALIAS("of:N*T*Cmediatek,pwm-leds");
MODULE_ALIAS("of:N*T*Cmediatek,pwm-ledsC*");

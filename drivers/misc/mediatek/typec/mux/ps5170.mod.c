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
	{ 0x401167cc, "_dev_info" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x3cb83e14, "mtk_typec_switch_register" },
	{ 0x660c6431, "mtk_typec_mux_register" },
	{ 0x953c2f86, "mtk_typec_switch_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x6b201699, "of_find_property" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0xd1174c77, "typec_switch_get_drvdata" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x3c8b212f, "i2c_smbus_write_byte_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xce456444, "typec_mux_get_drvdata" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xae1300a5, "ssusb_get_drvdata" },
	{ 0x8b651458, "ssusb_power_register_notifier" },
	{ 0xab7db974, "ssusb_power_unregister_notifier" },
	{ 0xc878a063, "typec_mux_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0xf93aae46,
	0x576b05bf,
	0x2ff78d9b,
	0x3cb83e14,
	0x660c6431,
	0x953c2f86,
	0x49cd25ed,
	0xa571f6b0,
	0xc8c7229e,
	0xa823db6e,
	0x49dc0e6c,
	0x6b201699,
	0x1fec5304,
	0xc40993fe,
	0xd1174c77,
	0xd5977bfb,
	0xed55cabd,
	0x2f2c95c4,
	0x037a0cba,
	0xe17134b6,
	0xf9a482f9,
	0xeae3dfd6,
	0x54325131,
	0x3c8b212f,
	0xc5b6f236,
	0xce456444,
	0x1205e506,
	0x20dda19c,
	0xae1300a5,
	0x8b651458,
	0xab7db974,
	0xc878a063,
	0xce2840e7,
	0x84dd786f,
	0x0f05f001,
	0xefe8a82e,
	0x15ba50a6,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"__arm_smccc_smc\0"
	"regmap_update_bits_base\0"
	"i2c_register_driver\0"
	"mtk_typec_switch_register\0"
	"mtk_typec_mux_register\0"
	"mtk_typec_switch_unregister\0"
	"alloc_workqueue\0"
	"__mutex_init\0"
	"devm_kmalloc\0"
	"of_find_device_by_node\0"
	"dev_get_regmap\0"
	"of_find_property\0"
	"__of_parse_phandle_with_args\0"
	"device_property_read_u32_array\0"
	"typec_switch_get_drvdata\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"flush_work\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"msleep\0"
	"__const_udelay\0"
	"pinctrl_select_state\0"
	"i2c_smbus_write_byte_data\0"
	"queue_work_on\0"
	"typec_mux_get_drvdata\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"ssusb_get_drvdata\0"
	"ssusb_power_register_notifier\0"
	"ssusb_power_unregister_notifier\0"
	"typec_mux_unregister\0"
	"irq_set_irq_wake\0"
	"i2c_del_driver\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"jiffies\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mux_switch,mtu3");

MODULE_ALIAS("of:N*T*Cparade,ps5170");
MODULE_ALIAS("of:N*T*Cparade,ps5170C*");
MODULE_ALIAS("i2c:ps5170");

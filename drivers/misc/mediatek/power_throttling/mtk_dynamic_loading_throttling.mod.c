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

KSYMTAB_FUNC(register_dlpt_notify, "", "");

SYMBOL_CRC(register_dlpt_notify, 0x67e404ca, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x6b201699, "of_find_property" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x64311477, "regmap_read" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0x0c685cad, "iio_read_channel_raw" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0x8dd8676d, "iio_read_channel_attribute" },
	{ 0xb7c0f443, "sort" },
	{ 0xe37ad0cf, "power_supply_set_property" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0x49dc0e6c,
	0xa4f72277,
	0x14fe5355,
	0x1ed4c5e6,
	0x3b1b6444,
	0x6b201699,
	0x4dd57aba,
	0x64311477,
	0x576b05bf,
	0x1fec5304,
	0xed856724,
	0x0c685cad,
	0xe136f93c,
	0xc6f46339,
	0xc38c83b8,
	0x0f314d3e,
	0xba0aee2e,
	0xce5bc4d0,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x4e8b8def,
	0xd5977bfb,
	0xed55cabd,
	0x05590c04,
	0xb3f7646e,
	0xfdf04ae0,
	0xb6e871b8,
	0xd45c86ea,
	0x8dd8676d,
	0xb7c0f443,
	0xe37ad0cf,
	0x203392c6,
	0x6fc35f2b,
	0x15ba50a6,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"dev_get_regmap\0"
	"_dev_notice\0"
	"of_device_get_match_data\0"
	"of_find_node_by_name\0"
	"of_get_property\0"
	"of_find_property\0"
	"regmap_bulk_write\0"
	"regmap_read\0"
	"regmap_update_bits_base\0"
	"__of_parse_phandle_with_args\0"
	"devm_iio_channel_get\0"
	"iio_read_channel_raw\0"
	"of_property_read_variable_u32_array\0"
	"init_timer_key\0"
	"mod_timer\0"
	"wakeup_source_register\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__pm_stay_awake\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__pm_relax\0"
	"kthread_should_stop\0"
	"power_supply_get_by_name\0"
	"power_supply_get_property\0"
	"iio_read_channel_processed\0"
	"iio_read_channel_attribute\0"
	"sort\0"
	"power_supply_set_property\0"
	"mutex_trylock\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6357-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-dynamic_loading_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-dynamic_loading_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-dynamic_loading_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-dynamic_loading_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-dynamic_loading_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-dynamic_loading_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-dynamic_loading_throttlingC*");

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

KSYMTAB_FUNC(mt6368_accdet_read_audio_res, "", "");
KSYMTAB_FUNC(mt6368_accdet_late_init, "", "");
KSYMTAB_FUNC(mt6368_accdet_modify_vref_volt, "", "");
KSYMTAB_FUNC(mt6368_accdet_init, "_gpl", "");
KSYMTAB_FUNC(accdet_eint_callback_wrapper, "", "");

SYMBOL_CRC(mt6368_accdet_read_audio_res, 0x452aabfd, "");
SYMBOL_CRC(mt6368_accdet_late_init, 0xf01c605a, "");
SYMBOL_CRC(mt6368_accdet_modify_vref_volt, 0xda27db63, "");
SYMBOL_CRC(mt6368_accdet_init, 0xb665af15, "_gpl");
SYMBOL_CRC(accdet_eint_callback_wrapper, 0x2044bbfb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf6e32e46, "snd_soc_card_jack_new" },
	{ 0x9cf528f9, "snd_jack_set_key" },
	{ 0x719c8959, "snd_soc_component_set_jack" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x7e397cb8, "snd_soc_jack_report" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x96a91aed, "nvmem_device_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd7c2b302, "of_match_device" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0x3f9fdc27, "devm_nvmem_device_get" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xef27af6b, "class_destroy" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xbef74f76, "of_find_matching_node_and_match" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x0a105114, "gpiod_set_debounce" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x0bc477a2, "irq_set_irq_type" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x64311477,
	0x6b883e5a,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0xf6e32e46,
	0x9cf528f9,
	0x719c8959,
	0x27bbf221,
	0x576b05bf,
	0x7e397cb8,
	0xd45c86ea,
	0xe94986d6,
	0xc38c83b8,
	0x656e4a6e,
	0x82ee90dc,
	0xc3055d20,
	0x96a91aed,
	0xc5b6f236,
	0x12db679a,
	0xd7c2b302,
	0x0f314d3e,
	0xa571f6b0,
	0x3d0ffa5c,
	0x49dc0e6c,
	0xed856724,
	0x3f9fdc27,
	0xf7ca28dd,
	0xf9583f23,
	0xe3ec2f2b,
	0x6fe9dcd4,
	0xc6f46339,
	0x49cd25ed,
	0x8c03d20c,
	0xef27af6b,
	0xc8c7229e,
	0xbef74f76,
	0xe136f93c,
	0x75ca79b5,
	0x4e8b8def,
	0x05590c04,
	0xeae3dfd6,
	0x37befc70,
	0xfcec0987,
	0xbede130a,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0x5e292cf6,
	0x0a105114,
	0x07183fe6,
	0x7c611278,
	0x92d5838e,
	0x0bc477a2,
	0x6a19ccfc,
	0xba0aee2e,
	0xce5bc4d0,
	0x98cf60b3,
	0xa916b694,
	0xbcab6ee6,
	0x8c8569cb,
	0x6091b333,
	0x5a6368f5,
	0x6fc35f2b,
	0x15ba50a6,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"regmap_read\0"
	"regmap_write\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"snd_soc_card_jack_new\0"
	"snd_jack_set_key\0"
	"snd_soc_component_set_jack\0"
	"disable_irq_nosync\0"
	"regmap_update_bits_base\0"
	"snd_soc_jack_report\0"
	"iio_read_channel_processed\0"
	"sched_clock\0"
	"mod_timer\0"
	"snprintf\0"
	"timer_delete_sync\0"
	"usleep_range_state\0"
	"nvmem_device_read\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"of_match_device\0"
	"wakeup_source_register\0"
	"__mutex_init\0"
	"platform_get_resource\0"
	"dev_get_regmap\0"
	"devm_iio_channel_get\0"
	"devm_nvmem_device_get\0"
	"platform_get_irq\0"
	"devm_request_threaded_irq\0"
	"alloc_chrdev_region\0"
	"class_create\0"
	"init_timer_key\0"
	"alloc_workqueue\0"
	"destroy_workqueue\0"
	"class_destroy\0"
	"devm_kmalloc\0"
	"of_find_matching_node_and_match\0"
	"of_property_read_variable_u32_array\0"
	"__fortify_panic\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"__const_udelay\0"
	"jiffies_to_msecs\0"
	"enable_irq\0"
	"pm_wakeup_ws_event\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"of_get_named_gpio\0"
	"gpiod_set_debounce\0"
	"gpio_to_desc\0"
	"irq_of_parse_and_map\0"
	"request_threaded_irq\0"
	"irq_set_irq_type\0"
	"driver_create_file\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"strlen\0"
	"strnlen\0"
	"sscanf\0"
	"kstrtoint\0"
	"unregister_chrdev_region\0"
	"devm_kfree\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


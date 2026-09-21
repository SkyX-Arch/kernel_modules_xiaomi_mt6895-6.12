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
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xaba63322, "of_iomap" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0x79a8bd40, "devm_snd_soc_register_component" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xe2964344, "__wake_up" },
	{ 0x239ab530, "snd_pcm_period_elapsed" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0x2ce2b5e3, "snd_ctl_boolean_mono_info" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xfadf598a, "snd_soc_bytes_tlv_callback" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x5b8eeab0, "snd_soc_set_runtime_hwparams" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x69154b0e, "_copy_from_iter" },
	{ 0x59ff91c4, "_copy_to_iter" },
	{ 0xedc03953, "iounmap" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xd9a5ea54,
	0xf7ca28dd,
	0xb4ce05a5,
	0xaba63322,
	0xa1fd40f1,
	0x47a915f1,
	0x92997ed8,
	0x79a8bd40,
	0xc8c7229e,
	0xf9583f23,
	0xf5edea2e,
	0x401167cc,
	0xf93aae46,
	0xe2964344,
	0x239ab530,
	0x34db050b,
	0xd35cce70,
	0xe136f93c,
	0xf3cdc3c6,
	0x5cf50b74,
	0x40863ba1,
	0x3ce4ca6f,
	0xfcec0987,
	0x576b05bf,
	0xedd46fc9,
	0x182e3cfb,
	0x2ce2b5e3,
	0xa73e125d,
	0xfadf598a,
	0x88db9f48,
	0x9a85eebb,
	0x5b8eeab0,
	0x5e515be6,
	0xffae8e8b,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x69154b0e,
	0x59ff91c4,
	0xedc03953,
	0x6fc35f2b,
	0xaf56600a,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"__init_waitqueue_head\0"
	"platform_get_irq\0"
	"_dev_err\0"
	"of_iomap\0"
	"syscon_regmap_lookup_by_phandle\0"
	"_dev_warn\0"
	"_printk\0"
	"devm_snd_soc_register_component\0"
	"devm_kmalloc\0"
	"devm_request_threaded_irq\0"
	"___ratelimit\0"
	"_dev_info\0"
	"__arm_smccc_smc\0"
	"__wake_up\0"
	"snd_pcm_period_elapsed\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"of_property_read_variable_u32_array\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"ioremap_prot\0"
	"disable_irq\0"
	"enable_irq\0"
	"regmap_update_bits_base\0"
	"snd_soc_add_component_controls\0"
	"snd_soc_info_enum_double\0"
	"snd_ctl_boolean_mono_info\0"
	"snd_soc_bytes_info_ext\0"
	"snd_soc_bytes_tlv_callback\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"snd_soc_set_runtime_hwparams\0"
	"ktime_get_ts64\0"
	"nsecs_to_jiffies\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"_copy_from_iter\0"
	"_copy_to_iter\0"
	"iounmap\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-btcvsd-snd");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-btcvsd-sndC*");

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

KSYMTAB_DATA(mtk_scp_ultra_pcm_platform, "_gpl", "");
KSYMTAB_FUNC(ultra_set_dsp_afe, "_gpl", "");

SYMBOL_CRC(mtk_scp_ultra_pcm_platform, 0xe4cb7c39, "_gpl");
SYMBOL_CRC(ultra_set_dsp_afe, 0x4e8bb14c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x6676a1b8, "snd_soc_register_component" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xae326d77, "set_scp_ultra_base" },
	{ 0x9bd3b281, "snd_soc_unregister_component" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x910340f0, "get_scp_ultra_base" },
	{ 0xcc348dcc, "scp_get_reserve_mem_phys" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0x7aa804ca, "scp_get_reserve_mem_size" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x401167cc, "_dev_info" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x9cb5d1d2, "scp_A_register_notify" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x9da23678, "register_ultra_afe_hw_free_notifier" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xfadf598a, "snd_soc_bytes_tlv_callback" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2a8dae7b, "scp_register_feature" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xaae67432, "scp_deregister_feature" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x6b201699, "of_find_property" },
	{ 0xf6b30c8d, "unregister_ultra_afe_hw_free_notifier" },
	{ 0x2f59a855, "notify_3way_semaphore_control" },
	{ 0x2aeafb62, "is_scp_ready" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0xd4e81a21,
	0x6676a1b8,
	0x47a915f1,
	0xae326d77,
	0x9bd3b281,
	0xc8c7229e,
	0xe136f93c,
	0x6fc35f2b,
	0x910340f0,
	0xcc348dcc,
	0x8d21adca,
	0x7aa804ca,
	0x18b48e28,
	0x401167cc,
	0x64311477,
	0x6b883e5a,
	0x576b05bf,
	0xedd46fc9,
	0x9cb5d1d2,
	0x0f314d3e,
	0x9da23678,
	0x182e3cfb,
	0xa73e125d,
	0xfadf598a,
	0x6e295f94,
	0xf9a482f9,
	0x9a85eebb,
	0x2be0c009,
	0x75ca79b5,
	0x2a8dae7b,
	0x4e8b8def,
	0xaae67432,
	0x05590c04,
	0x4eb4c414,
	0x13269d10,
	0x6b201699,
	0xf6b30c8d,
	0x2f59a855,
	0x2aeafb62,
	0x65bb94f6,
	0x4a353d20,
	0xcd709e2e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"pm_runtime_enable\0"
	"snd_soc_register_component\0"
	"_dev_warn\0"
	"set_scp_ultra_base\0"
	"snd_soc_unregister_component\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"get_scp_ultra_base\0"
	"scp_get_reserve_mem_phys\0"
	"scp_get_reserve_mem_virt\0"
	"scp_get_reserve_mem_size\0"
	"__memset_io\0"
	"_dev_info\0"
	"regmap_read\0"
	"regmap_write\0"
	"regmap_update_bits_base\0"
	"snd_soc_add_component_controls\0"
	"scp_A_register_notify\0"
	"wakeup_source_register\0"
	"register_ultra_afe_hw_free_notifier\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_bytes_info_ext\0"
	"snd_soc_bytes_tlv_callback\0"
	"snd_soc_info_volsw\0"
	"msleep\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"scp_register_feature\0"
	"__pm_stay_awake\0"
	"scp_deregister_feature\0"
	"__pm_relax\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"of_find_property\0"
	"unregister_ultra_afe_hw_free_notifier\0"
	"notify_3way_semaphore_control\0"
	"is_scp_ready\0"
	"mtk_ipi_register\0"
	"mtk_ipi_send\0"
	"scp_ipidev\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-scp-ultra,scp,mtk-afe-external,mtk_tinysys_ipi");

MODULE_ALIAS("of:N*T*Cmediatek,snd-scp-ultra");
MODULE_ALIAS("of:N*T*Cmediatek,snd-scp-ultraC*");

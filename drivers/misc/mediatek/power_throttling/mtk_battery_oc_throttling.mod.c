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

KSYMTAB_FUNC(register_battery_oc_mbrain_cb, "", "");
KSYMTAB_FUNC(register_battery_oc_notify, "", "");
KSYMTAB_FUNC(bat_oc_set_ppb_mode, "", "");

SYMBOL_CRC(register_battery_oc_mbrain_cb, 0xec573511, "");
SYMBOL_CRC(register_battery_oc_notify, 0x1c539951, "");
SYMBOL_CRC(bat_oc_set_ppb_mode, 0xc75c6ea7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x64311477, "regmap_read" },
	{ 0x2c762752, "dev_err_probe" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xf1d0618f, "remove_proc_subtree" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x113858c3, "simple_write_to_buffer" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x27bbf221,
	0xfcec0987,
	0x4dd57aba,
	0x576b05bf,
	0x12db679a,
	0x14fe5355,
	0xe2d5255a,
	0x49dc0e6c,
	0x9e400c59,
	0xa4f72277,
	0xf9583f23,
	0x401167cc,
	0xc8c7229e,
	0x1e6d26a8,
	0x64311477,
	0x2c762752,
	0x1ed4c5e6,
	0xa079425d,
	0xe136f93c,
	0x33a52b38,
	0x7518b5f0,
	0xb4ce05a5,
	0xa2fa95a0,
	0xf1d0618f,
	0x96848186,
	0x9c81ceff,
	0x037a0cba,
	0xe17134b6,
	0x113858c3,
	0xbcab6ee6,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"regmap_bulk_write\0"
	"regmap_update_bits_base\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"strcmp\0"
	"dev_get_regmap\0"
	"platform_get_irq_byname\0"
	"_dev_notice\0"
	"devm_request_threaded_irq\0"
	"_dev_info\0"
	"devm_kmalloc\0"
	"strstr\0"
	"regmap_read\0"
	"dev_err_probe\0"
	"of_find_node_by_name\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"regmap_bulk_read\0"
	"proc_mkdir\0"
	"_dev_err\0"
	"proc_create_data\0"
	"remove_proc_subtree\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"simple_write_to_buffer\0"
	"sscanf\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6357-battery_oc_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-battery_oc_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-battery_oc_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-battery_oc_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-battery_oc_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-battery_oc_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-battery_oc_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-battery_oc_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-battery_oc_throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-battery_oc_throttlingC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-battery-oc-throttling-1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-battery-oc-throttling-1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-battery-oc-throttling-2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-battery-oc-throttling-2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-battery-oc-throttling");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-battery-oc-throttlingC*");

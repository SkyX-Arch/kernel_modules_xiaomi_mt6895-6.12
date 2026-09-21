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

KSYMTAB_FUNC(lvsys_register_notifier, "", "");
KSYMTAB_FUNC(lvsys_unregister_notifier, "", "");
KSYMTAB_FUNC(dump_lvsys_thd, "", "");
KSYMTAB_FUNC(lvsys_modify_thd, "", "");
KSYMTAB_FUNC(lvsys_modify_thd_locked, "", "");

SYMBOL_CRC(lvsys_register_notifier, 0x58f975ae, "");
SYMBOL_CRC(lvsys_unregister_notifier, 0xf7e10bc2, "");
SYMBOL_CRC(dump_lvsys_thd, 0xa5eb60f7, "");
SYMBOL_CRC(lvsys_modify_thd, 0x17f66ffe, "");
SYMBOL_CRC(lvsys_modify_thd_locked, 0x5ebcf74d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x3574e894, "platform_get_irq_byname_optional" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x64311477, "regmap_read" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0x92997ed8,
	0xa4f72277,
	0xd5977bfb,
	0xed55cabd,
	0x576b05bf,
	0x12db679a,
	0x14fe5355,
	0x49dc0e6c,
	0x1ed4c5e6,
	0xa571f6b0,
	0x3574e894,
	0x1e6d26a8,
	0xf9583f23,
	0xc8c7229e,
	0xe136f93c,
	0xa079425d,
	0x64311477,
	0x482d47c8,
	0x4dd57aba,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"_printk\0"
	"_dev_notice\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"regmap_update_bits_base\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"dev_get_regmap\0"
	"of_find_node_by_name\0"
	"__mutex_init\0"
	"platform_get_irq_byname_optional\0"
	"strstr\0"
	"devm_request_threaded_irq\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"of_property_count_elems_of_size\0"
	"regmap_read\0"
	"blocking_notifier_call_chain\0"
	"regmap_bulk_write\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6363-lvsys-notify");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-lvsys-notifyC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-lvsys-notify");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-lvsys-notifyC*");

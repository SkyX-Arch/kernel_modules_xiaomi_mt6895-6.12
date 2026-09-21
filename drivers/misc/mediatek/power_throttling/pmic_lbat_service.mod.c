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

KSYMTAB_FUNC(lbat_user_register_ext, "", "");
KSYMTAB_FUNC(lbat_user_modify_thd_ext, "", "");
KSYMTAB_FUNC(lbat_user_modify_thd_ext_locked, "", "");
KSYMTAB_FUNC(lbat_user_register, "", "");
KSYMTAB_FUNC(lbat_user_modify_thd, "", "");
KSYMTAB_FUNC(lbat_user_modify_thd_locked, "", "");
KSYMTAB_FUNC(lbat_user_set_debounce, "", "");
KSYMTAB_FUNC(lbat_read_raw, "", "");
KSYMTAB_FUNC(lbat_read_volt, "", "");

SYMBOL_CRC(lbat_user_register_ext, 0x3225e8d9, "");
SYMBOL_CRC(lbat_user_modify_thd_ext, 0x7ae5308a, "");
SYMBOL_CRC(lbat_user_modify_thd_ext_locked, 0x31fd0509, "");
SYMBOL_CRC(lbat_user_register, 0x2dd86642, "");
SYMBOL_CRC(lbat_user_modify_thd, 0x0e9aaa46, "");
SYMBOL_CRC(lbat_user_modify_thd_locked, 0xda6a51a9, "");
SYMBOL_CRC(lbat_user_set_debounce, 0x79d1ae52, "");
SYMBOL_CRC(lbat_read_raw, 0xd79b6c3b, "");
SYMBOL_CRC(lbat_read_volt, 0x23bb7042, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x92997ed8, "_printk" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0xe091c977, "list_sort" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x64311477, "regmap_read" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x401167cc, "_dev_info" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x2c762752, "dev_err_probe" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xc6f46339,
	0xffeedf6a,
	0x92997ed8,
	0xed55cabd,
	0x037a0cba,
	0xe091c977,
	0xe17134b6,
	0x52c5c991,
	0x476b165a,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x7e19152a,
	0xeae3dfd6,
	0x42ad47ad,
	0x7f02188f,
	0x9a835040,
	0x6b883e5a,
	0x4dd57aba,
	0x576b05bf,
	0x64311477,
	0x33a52b38,
	0x12db679a,
	0x14fe5355,
	0xe2d5255a,
	0x49dc0e6c,
	0xa4f72277,
	0x1ed4c5e6,
	0x401167cc,
	0x9e400c59,
	0xf9583f23,
	0x49cd25ed,
	0xe922b94d,
	0x1e6d26a8,
	0x2c762752,
	0xe136f93c,
	0x3c3ff9fd,
	0x85df9b6c,
	0x3b6c41ea,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"_printk\0"
	"mutex_unlock\0"
	"kfree\0"
	"list_sort\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"sized_strscpy\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__list_add_valid_or_report\0"
	"__const_udelay\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"__list_del_entry_valid_or_report\0"
	"regmap_write\0"
	"regmap_bulk_write\0"
	"regmap_update_bits_base\0"
	"regmap_read\0"
	"regmap_bulk_read\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"strcmp\0"
	"dev_get_regmap\0"
	"_dev_notice\0"
	"of_find_node_by_name\0"
	"_dev_info\0"
	"platform_get_irq_byname\0"
	"devm_request_threaded_irq\0"
	"alloc_workqueue\0"
	"device_create_file\0"
	"strstr\0"
	"dev_err_probe\0"
	"of_property_read_variable_u32_array\0"
	"sprintf\0"
	"strsep\0"
	"kstrtouint\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6357-lbat_service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-lbat_serviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-lbat_service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-lbat_serviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-lbat_service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359p-lbat_serviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-lbat-service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-lbat-serviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-lbat-service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377-lbat-serviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-lbat-service-1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-lbat-service-1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-lbat-service-2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6379-lbat-service-2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-lbat-service");
MODULE_ALIAS("of:N*T*Cmediatek,mt6720-lbat-serviceC*");

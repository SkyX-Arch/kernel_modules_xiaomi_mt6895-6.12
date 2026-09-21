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
	{ 0xec7964ca, "__spmi_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x97cf0526, "__devm_regmap_init_spmi_ext" },
	{ 0x64311477, "regmap_read" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x78e97923, "of_irq_get" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x401167cc, "_dev_info" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x87110a78, "devm_mfd_add_devices" },
	{ 0x037a0cba, "kfree" },
	{ 0xd12566de, "irq_domain_remove" },
	{ 0x1dce7694, "devm_of_platform_populate" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x8b262a92, "irq_domain_instantiate" },
	{ 0x981a0aea, "irq_domain_xlate_twocell" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x1b9dd860, "handle_level_irq" },
	{ 0x9b294a8f, "irq_set_chip_and_handler_name" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xec7964ca,
	0x14fe5355,
	0x97cf0526,
	0x64311477,
	0xb4ce05a5,
	0x78e97923,
	0x7c7f271f,
	0x401167cc,
	0x2077fc84,
	0x87110a78,
	0x037a0cba,
	0xd12566de,
	0x1dce7694,
	0xc8c7229e,
	0xa571f6b0,
	0x6b883e5a,
	0xf9583f23,
	0x8b262a92,
	0x981a0aea,
	0x20a789ac,
	0x1b9dd860,
	0x9b294a8f,
	0x7522f3ba,
	0xf5edea2e,
	0x549525ef,
	0x1fef36c1,
	0xd5977bfb,
	0xed55cabd,
	0x576b05bf,
	0xce2840e7,
	0x52c5c991,
	0x7a4b1be7,
	0x1744f3e7,
	0x56e19f9a,
	0x0f05f001,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__spmi_driver_register\0"
	"of_device_get_match_data\0"
	"__devm_regmap_init_spmi_ext\0"
	"regmap_read\0"
	"_dev_err\0"
	"of_irq_get\0"
	"of_get_next_child\0"
	"_dev_info\0"
	"of_device_is_compatible\0"
	"devm_mfd_add_devices\0"
	"kfree\0"
	"irq_domain_remove\0"
	"devm_of_platform_populate\0"
	"devm_kmalloc\0"
	"__mutex_init\0"
	"regmap_write\0"
	"devm_request_threaded_irq\0"
	"irq_domain_instantiate\0"
	"irq_domain_xlate_twocell\0"
	"irq_set_chip_data\0"
	"handle_level_irq\0"
	"irq_set_chip_and_handler_name\0"
	"irq_modify_status\0"
	"___ratelimit\0"
	"handle_nested_irq\0"
	"__irq_resolve_mapping\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"regmap_update_bits_base\0"
	"irq_set_irq_wake\0"
	"__kmalloc_noprof\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6315");
MODULE_ALIAS("of:N*T*Cmediatek,mt6315C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6316");
MODULE_ALIAS("of:N*T*Cmediatek,mt6316C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6319");
MODULE_ALIAS("of:N*T*Cmediatek,mt6319C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6369");
MODULE_ALIAS("of:N*T*Cmediatek,mt6369C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377");
MODULE_ALIAS("of:N*T*Cmediatek,mt6377C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6667");
MODULE_ALIAS("of:N*T*Cmediatek,mt6667C*");

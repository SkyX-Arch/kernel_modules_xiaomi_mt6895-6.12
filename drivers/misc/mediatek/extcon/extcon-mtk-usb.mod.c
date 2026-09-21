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
	{ 0x401167cc, "_dev_info" },
	{ 0x56ad78d4, "devm_extcon_dev_allocate" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x5300996c, "devm_extcon_dev_register" },
	{ 0x706dfb96, "usb_role_switch_get" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xac0fc2d2, "devm_regulator_get_exclusive" },
	{ 0x7a8ef1df, "regulator_is_enabled" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9d912731, "regulator_set_current_limit" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x6b201699, "of_find_property" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0xb2ae52e8, "tcpm_inquire_remote_cc" },
	{ 0x173e2075, "seq_write" },
	{ 0xebdbd5bd, "devm_power_supply_get_by_phandle" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xda964005, "extcon_set_state_sync" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x037a0cba, "kfree" },
	{ 0x8869c950, "devm_gpiod_get_optional" },
	{ 0x0a105114, "gpiod_set_debounce" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0x9eb9f3ca, "gpiod_get_value_cansleep" },
	{ 0x39aa4888, "usb_role_string" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x628aebe3, "pinctrl_pm_select_sleep_state" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf04b8c28, "pinctrl_pm_select_default_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0x56ad78d4,
	0xb4ce05a5,
	0x5300996c,
	0x706dfb96,
	0xaf7cb74b,
	0xe2d5255a,
	0x49cd25ed,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0xac0fc2d2,
	0x7a8ef1df,
	0xe922b94d,
	0xe136f93c,
	0x656e4a6e,
	0x8c8569cb,
	0x9d912731,
	0x2220455c,
	0x57d5e131,
	0x031dffa4,
	0x6b201699,
	0x7518b5f0,
	0xa2fa95a0,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xd9f704be,
	0xb2ae52e8,
	0x173e2075,
	0xebdbd5bd,
	0xfdf04ae0,
	0x725b192d,
	0xb6e871b8,
	0xe17134b6,
	0xda964005,
	0xd5474690,
	0x037a0cba,
	0x8869c950,
	0x0a105114,
	0x7ec9701a,
	0xf9583f23,
	0x6f21f22a,
	0x9eb9f3ca,
	0x39aa4888,
	0x42ad47ad,
	0x3ce4ca6f,
	0x628aebe3,
	0xce2840e7,
	0xf04b8c28,
	0xfcec0987,
	0x6fc35f2b,
	0x47884890,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"devm_extcon_dev_allocate\0"
	"_dev_err\0"
	"devm_extcon_dev_register\0"
	"usb_role_switch_get\0"
	"of_property_read_string\0"
	"strcmp\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"devm_regulator_get_exclusive\0"
	"regulator_is_enabled\0"
	"device_create_file\0"
	"of_property_read_variable_u32_array\0"
	"snprintf\0"
	"kstrtoint\0"
	"regulator_set_current_limit\0"
	"regulator_set_voltage\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"of_find_property\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"tcpc_dev_get_by_name\0"
	"tcpm_inquire_remote_cc\0"
	"seq_write\0"
	"devm_power_supply_get_by_phandle\0"
	"power_supply_get_by_name\0"
	"power_supply_reg_notifier\0"
	"power_supply_get_property\0"
	"__kmalloc_cache_noprof\0"
	"extcon_set_state_sync\0"
	"usb_role_switch_set_role\0"
	"kfree\0"
	"devm_gpiod_get_optional\0"
	"gpiod_set_debounce\0"
	"gpiod_to_irq\0"
	"devm_request_threaded_irq\0"
	"register_tcp_dev_notifier\0"
	"gpiod_get_value_cansleep\0"
	"usb_role_string\0"
	"queue_delayed_work_on\0"
	"disable_irq\0"
	"pinctrl_pm_select_sleep_state\0"
	"irq_set_irq_wake\0"
	"pinctrl_pm_select_default_state\0"
	"enable_irq\0"
	"platform_driver_unregister\0"
	"system_power_efficient_wq\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class");

MODULE_ALIAS("of:N*T*Cmediatek,extcon-usb");
MODULE_ALIAS("of:N*T*Cmediatek,extcon-usbC*");

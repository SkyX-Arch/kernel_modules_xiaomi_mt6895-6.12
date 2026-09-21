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
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x65778543, "devm_iio_device_alloc" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x3a6db172, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xcae128be, "__devm_iio_device_register" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0x46ea17cf, "regmap_raw_write" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x64311477, "regmap_read" },
	{ 0xe5215aae, "regmap_raw_read" },
	{ 0x394b5321, "pm_relax" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe0cf3789, "iio_get_time_ns" },
	{ 0x9dcc272a, "iio_trigger_notify_done" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x7babb9ab, "iio_push_to_buffers" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x49dc0e6c,
	0xb4ce05a5,
	0x65778543,
	0xa571f6b0,
	0x3a6db172,
	0xcae128be,
	0x7a4b1be7,
	0x1744f3e7,
	0x46ea17cf,
	0x576b05bf,
	0xd5977bfb,
	0x4dd0661c,
	0x6b883e5a,
	0xb43f9365,
	0x64311477,
	0xe5215aae,
	0x394b5321,
	0xed55cabd,
	0xc3055d20,
	0xe783e261,
	0xe0cf3789,
	0x9dcc272a,
	0x53a1e8d9,
	0x7babb9ab,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"dev_get_regmap\0"
	"_dev_err\0"
	"devm_iio_device_alloc\0"
	"__mutex_init\0"
	"devm_iio_triggered_buffer_setup_ext\0"
	"__devm_iio_device_register\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"regmap_raw_write\0"
	"regmap_update_bits_base\0"
	"mutex_lock\0"
	"pm_stay_awake\0"
	"regmap_write\0"
	"ktime_get\0"
	"regmap_read\0"
	"regmap_raw_read\0"
	"pm_relax\0"
	"mutex_unlock\0"
	"usleep_range_state\0"
	"sysfs_emit\0"
	"iio_get_time_ns\0"
	"iio_trigger_notify_done\0"
	"_find_next_bit\0"
	"iio_push_to_buffers\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmediatek,mt6375-adc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375-adcC*");

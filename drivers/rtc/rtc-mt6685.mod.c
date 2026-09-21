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
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x92997ed8, "_printk" },
	{ 0x23412816, "rtc_tm_to_ktime" },
	{ 0xe4c2c66c, "rtc_ktime_to_tm" },
	{ 0x401167cc, "_dev_info" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x90313823, "rtc_update_irq" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x946de52f, "of_device_is_available" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe9788aa6, "devm_rtc_allocate_device" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x0967fe10, "unregister_pm_notifier" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xf6e77857, "__devm_rtc_register_device" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x0fb2f8a4, "mktime64" },
	{ 0x64311477, "regmap_read" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x691c1c97, "devm_rtc_nvmem_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x979b55bb, "nvmem_cell_get" },
	{ 0x202d4ed6, "nvmem_cell_write" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x037a0cba, "kfree" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0x6b883e5a,
	0xeae3dfd6,
	0xed55cabd,
	0xa4f72277,
	0xb4ce05a5,
	0x5838f6c9,
	0x4f2250ba,
	0x4dd57aba,
	0x33a52b38,
	0xe94986d6,
	0x92997ed8,
	0x23412816,
	0xe4c2c66c,
	0x401167cc,
	0xf5edea2e,
	0xdb976d85,
	0x90313823,
	0x75ca79b5,
	0x12db679a,
	0x946de52f,
	0x14fe5355,
	0xa571f6b0,
	0xe9788aa6,
	0x49dc0e6c,
	0x0f314d3e,
	0x3b1b6444,
	0x75966ec2,
	0xc6f46339,
	0xffeedf6a,
	0xf7ca28dd,
	0x0967fe10,
	0xf9583f23,
	0xf6e77857,
	0xc8c7229e,
	0xe136f93c,
	0xfe84e5f9,
	0xb318cbab,
	0xa6257a2f,
	0x4a3ad70e,
	0x37befc70,
	0x1e7bbcb3,
	0x0fb2f8a4,
	0x64311477,
	0x27bbf221,
	0x356461c8,
	0x576b05bf,
	0x4e8b8def,
	0x608741b5,
	0x42ad47ad,
	0x7a4b1be7,
	0x1744f3e7,
	0x2be0c009,
	0x691c1c97,
	0xce2840e7,
	0x979b55bb,
	0x202d4ed6,
	0x85540ebc,
	0x99f018c4,
	0x037a0cba,
	0x6fc35f2b,
	0xb2fb935e,
	0x15ba50a6,
	0xac594e02,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"regmap_write\0"
	"__const_udelay\0"
	"mutex_unlock\0"
	"_dev_notice\0"
	"_dev_err\0"
	"rtc_valid_tm\0"
	"rtc_tm_to_time64\0"
	"regmap_bulk_write\0"
	"regmap_bulk_read\0"
	"sched_clock\0"
	"_printk\0"
	"rtc_tm_to_ktime\0"
	"rtc_ktime_to_tm\0"
	"_dev_info\0"
	"___ratelimit\0"
	"aee_kernel_warning_api_func\0"
	"rtc_update_irq\0"
	"__fortify_panic\0"
	"__platform_driver_register\0"
	"of_device_is_available\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"devm_rtc_allocate_device\0"
	"dev_get_regmap\0"
	"wakeup_source_register\0"
	"of_get_property\0"
	"register_pm_notifier\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"platform_get_irq\0"
	"unregister_pm_notifier\0"
	"devm_request_threaded_irq\0"
	"__devm_rtc_register_device\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"device_property_present\0"
	"of_find_node_opts_by_path\0"
	"complete\0"
	"wait_for_completion_timeout\0"
	"jiffies_to_msecs\0"
	"kernel_restart\0"
	"mktime64\0"
	"regmap_read\0"
	"disable_irq_nosync\0"
	"rtc_time64_to_tm\0"
	"regmap_update_bits_base\0"
	"__pm_stay_awake\0"
	"__init_swait_queue_head\0"
	"queue_delayed_work_on\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"__arch_copy_from_user\0"
	"devm_rtc_nvmem_register\0"
	"irq_set_irq_wake\0"
	"nvmem_cell_get\0"
	"nvmem_cell_write\0"
	"nvmem_cell_put\0"
	"nvmem_cell_read\0"
	"kfree\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"jiffies\0"
	"__cpu_online_mask\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");

MODULE_ALIAS("of:N*T*Cmediatek,mt6685-rtc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6685-rtcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6687-rtc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6687-rtcC*");

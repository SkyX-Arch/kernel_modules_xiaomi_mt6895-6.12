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
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0x9c9b99d4, "devm_input_allocate_device" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xe5f7029c, "devm_gpio_request_one" },
	{ 0xfe990052, "gpio_free" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5d3df214, "input_set_capability" },
	{ 0x7f23df79, "input_ff_create" },
	{ 0x6ab78205, "input_register_device" },
	{ 0x99d482d3, "input_ff_destroy" },
	{ 0x657deb94, "devm_free_irq" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xdad8004c, "device_wakeup_disable" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xdc94bf1c, "gpiod_set_raw_value_cansleep" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x09ce5d6c, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c8b212f, "i2c_smbus_write_byte_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xe3fa5191, "i2c_transfer" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x25758a2c, "misc_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xff058995, "try_module_get" },
	{ 0xe89013ef, "module_put" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x93e46ac7, "__hrtimer_get_remaining" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf1e06c66, "request_firmware_nowait" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x3c57945c, "request_firmware" },
	{ 0x999e8297, "vfree" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x394b5321, "pm_relax" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0x9c9b99d4,
	0x1205e506,
	0x20dda19c,
	0xe5f7029c,
	0xfe990052,
	0x5a6368f5,
	0xf9583f23,
	0x49cd25ed,
	0x5d3df214,
	0x7f23df79,
	0x6ab78205,
	0x99d482d3,
	0x657deb94,
	0xc8c7229e,
	0x7a4b1be7,
	0x1744f3e7,
	0xdad8004c,
	0x5e292cf6,
	0x54325131,
	0x75ca79b5,
	0xdc94bf1c,
	0x07183fe6,
	0x09ce5d6c,
	0xf9a482f9,
	0x3c8b212f,
	0xc3055d20,
	0x7ec9701a,
	0xc3246938,
	0x3667c9f1,
	0x9166fc03,
	0x8c03d20c,
	0x84dd786f,
	0x92997ed8,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xe2964344,
	0xd9a5ea54,
	0x037a0cba,
	0x441d0de9,
	0xe17134b6,
	0x0f05f001,
	0xefe8a82e,
	0xe3fa5191,
	0xd5977bfb,
	0xed55cabd,
	0x796ead29,
	0xa079425d,
	0xcb2e80c6,
	0x102fe6de,
	0x62b33777,
	0xea82d349,
	0xa571f6b0,
	0x25758a2c,
	0xc6f46339,
	0xffeedf6a,
	0x52c5c991,
	0xff058995,
	0xe89013ef,
	0x4a068d70,
	0xe136f93c,
	0x67064f1d,
	0x6b201699,
	0x93e46ac7,
	0x88db9f48,
	0x2be0c009,
	0x9a85eebb,
	0xc5b6f236,
	0x656e4a6e,
	0x3b6c41ea,
	0xbcab6ee6,
	0xf1e06c66,
	0xc6d09aa9,
	0x1b2fa1a9,
	0x3c57945c,
	0x999e8297,
	0x3ce4ca6f,
	0x52384e38,
	0x9ec6ca96,
	0xd273017c,
	0xfcec0987,
	0x4dd0661c,
	0x394b5321,
	0xc0b7c197,
	0x42ad47ad,
	0xb43f9365,
	0x4829a47e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"devm_input_allocate_device\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"devm_gpio_request_one\0"
	"gpio_free\0"
	"devm_kfree\0"
	"devm_request_threaded_irq\0"
	"alloc_workqueue\0"
	"input_set_capability\0"
	"input_ff_create\0"
	"input_register_device\0"
	"input_ff_destroy\0"
	"devm_free_irq\0"
	"devm_kmalloc\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"device_wakeup_disable\0"
	"of_get_named_gpio\0"
	"pinctrl_select_state\0"
	"__fortify_panic\0"
	"gpiod_set_raw_value_cansleep\0"
	"gpio_to_desc\0"
	"i2c_smbus_read_byte_data\0"
	"msleep\0"
	"i2c_smbus_write_byte_data\0"
	"usleep_range_state\0"
	"gpiod_to_irq\0"
	"misc_deregister\0"
	"sysfs_remove_group\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"i2c_del_driver\0"
	"_printk\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__wake_up\0"
	"__init_waitqueue_head\0"
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"i2c_transfer\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"of_get_next_available_child\0"
	"of_property_count_elems_of_size\0"
	"hrtimer_active\0"
	"hrtimer_cancel\0"
	"sysfs_create_group\0"
	"hrtimer_init\0"
	"__mutex_init\0"
	"misc_register\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"__kmalloc_noprof\0"
	"try_module_get\0"
	"module_put\0"
	"i2c_transfer_buffer_flags\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_variable_u8_array\0"
	"of_find_property\0"
	"__hrtimer_get_remaining\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__arch_copy_to_user\0"
	"queue_work_on\0"
	"snprintf\0"
	"kstrtouint\0"
	"sscanf\0"
	"request_firmware_nowait\0"
	"release_firmware\0"
	"vmalloc_noprof\0"
	"request_firmware\0"
	"vfree\0"
	"disable_irq\0"
	"cpu_latency_qos_add_request\0"
	"ktime_get_real_ts64\0"
	"cpu_latency_qos_remove_request\0"
	"enable_irq\0"
	"pm_stay_awake\0"
	"pm_relax\0"
	"hrtimer_start_range_ns\0"
	"queue_delayed_work_on\0"
	"ktime_get\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:awinic_haptic");

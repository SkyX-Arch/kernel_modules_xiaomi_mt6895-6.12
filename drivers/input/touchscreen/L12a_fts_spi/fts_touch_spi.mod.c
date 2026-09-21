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
	{ 0x037a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6257a2f, "complete" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x64748600, "gpiod_set_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x715a5ed0, "vprintk" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x56f996ba, "spi_sync" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5a921311, "strncmp" },
	{ 0x3c57945c, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8632b0e3, "proc_mkdir_data" },
	{ 0xb4028d67, "proc_create" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x665b5ccb, "seq_open" },
	{ 0x173e2075, "seq_write" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xfefe2f2f, "freq_qos_remove_request" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0x9392de81, "input_mt_report_slot_state" },
	{ 0x17c892ac, "update_fod_press_status" },
	{ 0xb762dd7b, "mi_disp_set_fod_queue_work" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x49118811, "update_palm_sensor_value" },
	{ 0x6b201699, "of_find_property" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xcc898074, "input_event" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe6a87d0f, "update_prox_sensor_value" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4dd0661c, "pm_stay_awake" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x394b5321, "pm_relax" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x68386af8, "__spi_register_driver" },
	{ 0x3c50e41e, "gpiod_direction_input" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x84927420, "spi_setup" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdc71de5f, "input_allocate_device" },
	{ 0x44fde95e, "input_mt_init_slots" },
	{ 0x284ba636, "input_set_abs_params" },
	{ 0x5d3df214, "input_set_capability" },
	{ 0x6ab78205, "input_register_device" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x5612aa3a, "get_xiaomi_touch_class" },
	{ 0x9b1faacb, "device_create" },
	{ 0xb2af64a2, "xiaomitouch_register_modedata" },
	{ 0x99375a29, "mi_disp_register_client" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x5f010919, "input_unregister_device" },
	{ 0x471e6ac7, "input_free_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdeef92c3, "devm_pinctrl_put" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xafee3184, "of_drm_find_panel" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0x99fe66ff, "regulator_put" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x88aaf668, "xiaomi_touch_set_suspend_state" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb03bd4d0, "mi_disp_unregister_client" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x8b9c34da, "single_open" },
	{ 0xd8f63b34, "__seq_puts" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd6fc9495, "gpiod_direction_output_raw" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0x9551266c, "power_supply_unreg_notifier" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x037a0cba,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x75ca79b5,
	0x0f05f001,
	0xefe8a82e,
	0xeae3dfd6,
	0xa6257a2f,
	0x3ce4ca6f,
	0x27bbf221,
	0xfcec0987,
	0x64748600,
	0x07183fe6,
	0x8427cc7b,
	0x4b750f53,
	0x715a5ed0,
	0xa571f6b0,
	0x56f996ba,
	0xd5977bfb,
	0xed55cabd,
	0xf9a482f9,
	0x5a921311,
	0x3c57945c,
	0xc6d09aa9,
	0xe2d5255a,
	0x2d39b0a7,
	0x85df9b6c,
	0xbcab6ee6,
	0x476b165a,
	0x98cf60b3,
	0xa916b694,
	0x656e4a6e,
	0x92997ed8,
	0xc3055d20,
	0x8632b0e3,
	0xb4028d67,
	0x330c0b0f,
	0x69cfdbb0,
	0xe7ce721f,
	0x3cdb28e3,
	0x665b5ccb,
	0x173e2075,
	0x7682ba4e,
	0x88db9f48,
	0x2be0c009,
	0xc0744ae3,
	0xf8bd87ca,
	0xcd6f7bae,
	0xdb4e2667,
	0xfefe2f2f,
	0x24f00fda,
	0x1af93d4f,
	0x9392de81,
	0x17c892ac,
	0xb762dd7b,
	0x031dffa4,
	0x57d5e131,
	0x49118811,
	0x6b201699,
	0xa079425d,
	0xe136f93c,
	0xcc898074,
	0x92d5838e,
	0xe2964344,
	0xe6a87d0f,
	0x4a3ad70e,
	0x4dd0661c,
	0x6c9565df,
	0x394b5321,
	0x9e87b2ff,
	0x42ad47ad,
	0x68386af8,
	0x3c50e41e,
	0xa191ccd1,
	0x84927420,
	0x54325131,
	0xb4ce05a5,
	0x49cd25ed,
	0xd9a5ea54,
	0xdc71de5f,
	0x44fde95e,
	0x284ba636,
	0x5d3df214,
	0x6ab78205,
	0x62b33777,
	0x5cf4d4de,
	0x4e870156,
	0x5612aa3a,
	0x9b1faacb,
	0xb2af64a2,
	0x99375a29,
	0x725b192d,
	0x169f5b1f,
	0x5f010919,
	0x471e6ac7,
	0x8c03d20c,
	0xdeef92c3,
	0xb088bcfc,
	0xafee3184,
	0x1fec5304,
	0xc8c7229e,
	0x5e292cf6,
	0xaf7cb74b,
	0x7c7f271f,
	0x1205e506,
	0x20dda19c,
	0x03b28b1f,
	0x99fe66ff,
	0x7ec9701a,
	0x88aaf668,
	0x608741b5,
	0xc6f46339,
	0xffeedf6a,
	0x52384e38,
	0x9166fc03,
	0xc5b6f236,
	0x9a85eebb,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xb03bd4d0,
	0x1b2fa1a9,
	0x999e8297,
	0x7a4b1be7,
	0x1744f3e7,
	0x42aac25f,
	0xbee3ddd5,
	0x8b9c34da,
	0xd8f63b34,
	0x3f72e5f3,
	0x8ddd8aad,
	0x2c208607,
	0xfdf04ae0,
	0xb6e871b8,
	0x47229b5c,
	0xfe990052,
	0xd6fc9495,
	0x3667c9f1,
	0xd273017c,
	0x9551266c,
	0xb7c7d237,
	0xc1514a3b,
	0xce2840e7,
	0x56e19f9a,
	0xde7ece30,
	0x017de3d5,
	0x2d3385d3,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kfree\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__fortify_panic\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__const_udelay\0"
	"complete\0"
	"disable_irq\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"gpiod_set_raw_value\0"
	"gpio_to_desc\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"vprintk\0"
	"__mutex_init\0"
	"spi_sync\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"msleep\0"
	"strncmp\0"
	"request_firmware\0"
	"release_firmware\0"
	"strcmp\0"
	"kstrdup\0"
	"strsep\0"
	"sscanf\0"
	"sized_strscpy\0"
	"strlen\0"
	"strnlen\0"
	"snprintf\0"
	"_printk\0"
	"usleep_range_state\0"
	"proc_mkdir_data\0"
	"proc_create\0"
	"remove_proc_entry\0"
	"seq_read\0"
	"seq_lseek\0"
	"seq_release\0"
	"seq_open\0"
	"seq_write\0"
	"__copy_overflow\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"sched_setscheduler_nocheck\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"freq_qos_add_request\0"
	"freq_qos_remove_request\0"
	"set_cpus_allowed_ptr\0"
	"freq_qos_update_request\0"
	"input_mt_report_slot_state\0"
	"update_fod_press_status\0"
	"mi_disp_set_fod_queue_work\0"
	"regulator_disable\0"
	"regulator_enable\0"
	"update_palm_sensor_value\0"
	"of_find_property\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"input_event\0"
	"request_threaded_irq\0"
	"__wake_up\0"
	"update_prox_sensor_value\0"
	"wait_for_completion_timeout\0"
	"pm_stay_awake\0"
	"cpu_latency_qos_update_request\0"
	"pm_relax\0"
	"cancel_delayed_work\0"
	"queue_delayed_work_on\0"
	"__spi_register_driver\0"
	"gpiod_direction_input\0"
	"gpiod_get_raw_value\0"
	"spi_setup\0"
	"pinctrl_select_state\0"
	"_dev_err\0"
	"alloc_workqueue\0"
	"__init_waitqueue_head\0"
	"input_allocate_device\0"
	"input_mt_init_slots\0"
	"input_set_abs_params\0"
	"input_set_capability\0"
	"input_register_device\0"
	"sysfs_create_group\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"get_xiaomi_touch_class\0"
	"device_create\0"
	"xiaomitouch_register_modedata\0"
	"mi_disp_register_client\0"
	"power_supply_reg_notifier\0"
	"device_destroy\0"
	"input_unregister_device\0"
	"input_free_device\0"
	"destroy_workqueue\0"
	"devm_pinctrl_put\0"
	"of_count_phandle_with_args\0"
	"of_drm_find_panel\0"
	"__of_parse_phandle_with_args\0"
	"devm_kmalloc\0"
	"of_get_named_gpio\0"
	"of_property_read_string\0"
	"of_get_next_child\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"regulator_get\0"
	"regulator_put\0"
	"gpiod_to_irq\0"
	"xiaomi_touch_set_suspend_state\0"
	"__init_swait_queue_head\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"cpu_latency_qos_add_request\0"
	"__flush_workqueue\0"
	"queue_work_on\0"
	"__arch_copy_to_user\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"mi_disp_unregister_client\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"sysfs_create_file_ns\0"
	"vzalloc_noprof\0"
	"single_open\0"
	"__seq_puts\0"
	"single_release\0"
	"schedule_timeout\0"
	"power_supply_is_system_supplied\0"
	"power_supply_get_by_name\0"
	"power_supply_get_property\0"
	"gpio_request\0"
	"gpio_free\0"
	"gpiod_direction_output_raw\0"
	"sysfs_remove_group\0"
	"cpu_latency_qos_remove_request\0"
	"power_supply_unreg_notifier\0"
	"debugfs_remove\0"
	"free_irq\0"
	"irq_set_irq_wake\0"
	"driver_unregister\0"
	"__cpu_possible_mask\0"
	"nr_cpu_ids\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "xiaomi_touch,mediatek-drm");


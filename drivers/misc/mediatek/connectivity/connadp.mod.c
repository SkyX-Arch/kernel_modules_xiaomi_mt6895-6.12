#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(connectivity_export_show_stack, "", "");
KSYMTAB_FUNC(connectivity_export_tracing_record_cmdline, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_init, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_deinit, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_state_change, "", "");
KSYMTAB_FUNC(connectivity_register_cmd_handler, "", "");
KSYMTAB_FUNC(connectivity_unregister_cmd_handler, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_trigger_cmd, "", "");
KSYMTAB_FUNC(connectivity_register_dfd_handler, "", "");
KSYMTAB_FUNC(connectivity_unregister_dfd_handler, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_trigger_dfd_cmd, "", "");
KSYMTAB_FUNC(connectivity_export_conap_scp_clr_dfd_buffer, "", "");
KSYMTAB_FUNC(connectivity_export_conap_get_dfd_value_info, "", "");
KSYMTAB_FUNC(connectivity_register_state_notifier, "", "");
KSYMTAB_FUNC(connectivity_unregister_state_notifier, "", "");
KSYMTAB_FUNC(connectivity_export_mmc_io_rw_direct, "", "");
KSYMTAB_FUNC(connectivity_export_dump_gpio_info, "", "");
KSYMTAB_FUNC(connectivity_export_dump_thread_state, "", "");
KSYMTAB_FUNC(connectivity_export_gpio_get_tristate_input, "", "");
KSYMTAB_FUNC(conn_dbg_add_log, "", "");
KSYMTAB_FUNC(wmt_export_platform_bridge_register, "", "");
KSYMTAB_FUNC(wmt_export_platform_bridge_unregister, "", "");
KSYMTAB_FUNC(wmt_export_platform_dbg_bridge_register, "", "");
KSYMTAB_FUNC(wmt_export_platform_dbg_bridge_unregister, "", "");
KSYMTAB_FUNC(mtk_wcn_cmb_stub_query_ctrl, "", "");
KSYMTAB_DATA(wifi_irq, "", "");
KSYMTAB_DATA(mtk_wcn_cmb_sdio_pm_cb, "", "");
KSYMTAB_DATA(mtk_wcn_cmb_sdio_pm_data, "", "");
KSYMTAB_FUNC(wmt_export_mtk_wcn_sdio_irq_flag_set, "", "");
KSYMTAB_FUNC(wmt_export_mtk_wcn_cmb_sdio_disable_eirq, "", "");
KSYMTAB_FUNC(conn_pwr_enable, "", "");
KSYMTAB_FUNC(conn_pwr_send_msg, "", "");
KSYMTAB_FUNC(conn_pwr_set_thermal_level, "", "");
KSYMTAB_FUNC(conn_pwr_set_customer_level, "", "");
KSYMTAB_FUNC(conn_pwr_drv_pre_on, "", "");
KSYMTAB_FUNC(conn_pwr_drv_post_off, "", "");
KSYMTAB_FUNC(conn_pwr_register_event_cb, "", "");
KSYMTAB_FUNC(conn_pwr_init, "", "");
KSYMTAB_FUNC(conn_pwr_deinit, "", "");
KSYMTAB_FUNC(conn_pwr_resume, "", "");
KSYMTAB_FUNC(conn_pwr_suspend, "", "");
KSYMTAB_FUNC(conn_pwr_get_drv_level, "", "");
KSYMTAB_FUNC(conn_pwr_get_platform_level, "", "");
KSYMTAB_FUNC(conn_pwr_get_thermal, "", "");
KSYMTAB_FUNC(conn_pwr_report_level_required, "", "");

SYMBOL_CRC(connectivity_export_show_stack, 0xce489b96, "");
SYMBOL_CRC(connectivity_export_tracing_record_cmdline, 0xac30ebf5, "");
SYMBOL_CRC(connectivity_export_conap_scp_init, 0x25896616, "");
SYMBOL_CRC(connectivity_export_conap_scp_deinit, 0xc1b48621, "");
SYMBOL_CRC(connectivity_export_conap_scp_state_change, 0xaf33bdd1, "");
SYMBOL_CRC(connectivity_register_cmd_handler, 0x9d211d94, "");
SYMBOL_CRC(connectivity_unregister_cmd_handler, 0x05a069ba, "");
SYMBOL_CRC(connectivity_export_conap_scp_trigger_cmd, 0x1fdb76bd, "");
SYMBOL_CRC(connectivity_register_dfd_handler, 0x5c88ea49, "");
SYMBOL_CRC(connectivity_unregister_dfd_handler, 0x5e35749a, "");
SYMBOL_CRC(connectivity_export_conap_scp_trigger_dfd_cmd, 0x9e59fbda, "");
SYMBOL_CRC(connectivity_export_conap_scp_clr_dfd_buffer, 0x401544bf, "");
SYMBOL_CRC(connectivity_export_conap_get_dfd_value_info, 0xd013db3b, "");
SYMBOL_CRC(connectivity_register_state_notifier, 0x0cccfb7c, "");
SYMBOL_CRC(connectivity_unregister_state_notifier, 0x971abb3d, "");
SYMBOL_CRC(connectivity_export_mmc_io_rw_direct, 0xf4f6e399, "");
SYMBOL_CRC(connectivity_export_dump_gpio_info, 0xb00ff188, "");
SYMBOL_CRC(connectivity_export_dump_thread_state, 0xdced65b2, "");
SYMBOL_CRC(connectivity_export_gpio_get_tristate_input, 0xd92c1527, "");
SYMBOL_CRC(conn_dbg_add_log, 0xb14af7ad, "");
SYMBOL_CRC(wmt_export_platform_bridge_register, 0x20dacb95, "");
SYMBOL_CRC(wmt_export_platform_bridge_unregister, 0x606be4ee, "");
SYMBOL_CRC(wmt_export_platform_dbg_bridge_register, 0x98317ef3, "");
SYMBOL_CRC(wmt_export_platform_dbg_bridge_unregister, 0x958545cb, "");
SYMBOL_CRC(mtk_wcn_cmb_stub_query_ctrl, 0xc7d3b813, "");
SYMBOL_CRC(wifi_irq, 0x6cd4e698, "");
SYMBOL_CRC(mtk_wcn_cmb_sdio_pm_cb, 0xccf21e34, "");
SYMBOL_CRC(mtk_wcn_cmb_sdio_pm_data, 0x21c68dad, "");
SYMBOL_CRC(wmt_export_mtk_wcn_sdio_irq_flag_set, 0xbcada9fb, "");
SYMBOL_CRC(wmt_export_mtk_wcn_cmb_sdio_disable_eirq, 0x3296a2c2, "");
SYMBOL_CRC(conn_pwr_enable, 0x8a9d5bf2, "");
SYMBOL_CRC(conn_pwr_send_msg, 0x5c1c9bbb, "");
SYMBOL_CRC(conn_pwr_set_thermal_level, 0xc24a6c8d, "");
SYMBOL_CRC(conn_pwr_set_customer_level, 0x946deb03, "");
SYMBOL_CRC(conn_pwr_drv_pre_on, 0x85b39412, "");
SYMBOL_CRC(conn_pwr_drv_post_off, 0xa2b043f3, "");
SYMBOL_CRC(conn_pwr_register_event_cb, 0xb72bd068, "");
SYMBOL_CRC(conn_pwr_init, 0x29b5066b, "");
SYMBOL_CRC(conn_pwr_deinit, 0x9c2e1e8a, "");
SYMBOL_CRC(conn_pwr_resume, 0xa2ad960a, "");
SYMBOL_CRC(conn_pwr_suspend, 0x8c95a4c3, "");
SYMBOL_CRC(conn_pwr_get_drv_level, 0x8fcfbbef, "");
SYMBOL_CRC(conn_pwr_get_platform_level, 0x7e6d08ee, "");
SYMBOL_CRC(conn_pwr_get_thermal, 0x29858d7f, "");
SYMBOL_CRC(conn_pwr_report_level_required, 0x08774663, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x43cbe87e, "dump_backtrace" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x73caefdc, "init_task" },
	{ 0xee46e386, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x037a0cba, "kfree" },
	{ 0xc54855de, "kobject_uevent_env" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9166fada, "strncpy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0xab839cb2, "kobject_get" },
	{ 0x43af29f5, "kobject_uevent" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xaa643b64, "register_low_battery_notify" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x43cbe87e,
	0x92997ed8,
	0xd5977bfb,
	0x482d47c8,
	0xed55cabd,
	0xd9051672,
	0x3e54ac69,
	0x5a921311,
	0x75ca79b5,
	0x98cf60b3,
	0xa916b694,
	0x8d522714,
	0x2469810f,
	0x73caefdc,
	0xee46e386,
	0x280f9f14,
	0x34db050b,
	0x037a0cba,
	0xc54855de,
	0x6b2dc060,
	0xf5edea2e,
	0xe94986d6,
	0xe17134b6,
	0x52c5c991,
	0x9166fada,
	0xd35cce70,
	0x3fd78f3b,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0xef27af6b,
	0x28ba7b6c,
	0x6091b333,
	0x2d405891,
	0xab839cb2,
	0x43af29f5,
	0x42aac25f,
	0x656e4a6e,
	0x2e2b40d2,
	0x169f5b1f,
	0x3bd2c4ce,
	0x92495308,
	0xf3cdc3c6,
	0x7c611278,
	0x92d5838e,
	0xfcec0987,
	0x27bbf221,
	0x0f05f001,
	0xefe8a82e,
	0xaa643b64,
	0x7aa1756e,
	0xc5b6f236,
	0x2d3385d3,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"dump_backtrace\0"
	"_printk\0"
	"mutex_lock\0"
	"blocking_notifier_call_chain\0"
	"mutex_unlock\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"strncmp\0"
	"__fortify_panic\0"
	"strlen\0"
	"strnlen\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"init_task\0"
	"runqueues\0"
	"__per_cpu_offset\0"
	"_raw_spin_lock_irqsave\0"
	"kfree\0"
	"kobject_uevent_env\0"
	"dump_stack\0"
	"___ratelimit\0"
	"sched_clock\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"strncpy\0"
	"_raw_spin_unlock_irqrestore\0"
	"register_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"class_destroy\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"kobject_create_and_add\0"
	"kobject_get\0"
	"kobject_uevent\0"
	"sysfs_create_file_ns\0"
	"snprintf\0"
	"strncat\0"
	"device_destroy\0"
	"kobject_put\0"
	"sysfs_remove_file_ns\0"
	"of_find_compatible_node\0"
	"irq_of_parse_and_map\0"
	"request_threaded_irq\0"
	"enable_irq\0"
	"disable_irq_nosync\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"register_low_battery_notify\0"
	"kvfree\0"
	"queue_work_on\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_low_battery_throttling");


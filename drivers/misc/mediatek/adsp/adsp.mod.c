#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(set_adsp_state, "", "");
KSYMTAB_FUNC(get_adsp_state, "", "");
KSYMTAB_FUNC(is_adsp_ready, "", "");
KSYMTAB_FUNC(get_adsp_core_total, "", "");
KSYMTAB_FUNC(has_system_l2sram, "", "");
KSYMTAB_FUNC(adsp_copy_to_sharedmem, "", "");
KSYMTAB_FUNC(adsp_copy_from_sharedmem, "", "");
KSYMTAB_FUNC(hook_ipi_queue_send_msg_handler, "", "");
KSYMTAB_FUNC(unhook_ipi_queue_send_msg_handler, "", "");
KSYMTAB_FUNC(adsp_push_message, "", "");
KSYMTAB_FUNC(adsp_send_message, "", "");
KSYMTAB_FUNC(adsp_send_vp_irq, "", "");
KSYMTAB_FUNC(adsp_threaded_irq_registration, "_gpl", "");
KSYMTAB_FUNC(adsp_register_notify, "", "");
KSYMTAB_FUNC(adsp_unregister_notify, "", "");
KSYMTAB_FUNC(adsp_set_slp_prot, "", "");
KSYMTAB_FUNC(adsp_set_clock_mux, "", "");
KSYMTAB_FUNC(switch_adsp_power, "", "");
KSYMTAB_FUNC(adsp_system_bootup, "", "");
KSYMTAB_FUNC(register_adspsys, "", "");
KSYMTAB_FUNC(register_adsp_core, "", "");
KSYMTAB_FUNC(reset_hal_feature_table, "", "");
KSYMTAB_FUNC(get_adsp_semaphore, "_gpl", "");
KSYMTAB_FUNC(release_adsp_semaphore, "_gpl", "");
KSYMTAB_FUNC(is_adsp_feature_in_active, "", "");
KSYMTAB_FUNC(get_feature_register, "", "");
KSYMTAB_FUNC(adsp_register_feature, "", "");
KSYMTAB_FUNC(adsp_deregister_feature, "", "");
KSYMTAB_FUNC(adsp_get_reserve_mem_phys, "", "");
KSYMTAB_FUNC(adsp_get_reserve_mem_virt, "", "");
KSYMTAB_FUNC(adsp_get_reserve_mem_size, "", "");
KSYMTAB_FUNC(adsp_mem_device_probe, "", "");
KSYMTAB_FUNC(hook_ipi_queue_recv_msg_hanlder, "", "");
KSYMTAB_FUNC(unhook_ipi_queue_recv_msg_hanlder, "", "");
KSYMTAB_FUNC(adsp_mbox_probe, "", "");
KSYMTAB_FUNC(get_adsp_mbox_pin_send, "", "");
KSYMTAB_FUNC(get_adsp_mbox_pin_recv, "", "");
KSYMTAB_FUNC(adsp_ipi_registration, "_gpl", "");
KSYMTAB_FUNC(adsp_ipi_unregistration, "_gpl", "");
KSYMTAB_FUNC(adsp_after_bootup, "", "");
KSYMTAB_FUNC(adsp_core0_init, "", "");
KSYMTAB_FUNC(adsp_core1_init, "", "");
KSYMTAB_FUNC(get_adsp_type, "", "");
KSYMTAB_FUNC(adsp_mbrain_register_callback, "", "");
KSYMTAB_FUNC(adsp_mbrain_unregister_callback, "", "");
KSYMTAB_FUNC(get_adsp_misc_buffer, "", "");
KSYMTAB_FUNC(get_adsp_aee_buffer, "", "");
KSYMTAB_FUNC(adsp_qos_probe, "", "");
KSYMTAB_FUNC(adsp_set_scene_bw, "", "");
KSYMTAB_FUNC(set_adsp_icc_bw, "", "");
KSYMTAB_FUNC(clear_adsp_icc_bw, "", "");
KSYMTAB_FUNC(adsp_icc_bw_req, "", "");
KSYMTAB_FUNC(adsp_bus_monitor_dump, "", "");
KSYMTAB_FUNC(adsp_ipic_probe, "", "");
KSYMTAB_FUNC(adsp_dbg_dump_init, "", "");
KSYMTAB_FUNC(adsp_check_adsppll_freq, "", "");
KSYMTAB_FUNC(adsp_dbg_init, "", "");

SYMBOL_CRC(set_adsp_state, 0x9f7dc772, "");
SYMBOL_CRC(get_adsp_state, 0xcd57533e, "");
SYMBOL_CRC(is_adsp_ready, 0xd82032f9, "");
SYMBOL_CRC(get_adsp_core_total, 0x1f1f4d4f, "");
SYMBOL_CRC(has_system_l2sram, 0x556f004d, "");
SYMBOL_CRC(adsp_copy_to_sharedmem, 0x41152ac1, "");
SYMBOL_CRC(adsp_copy_from_sharedmem, 0x2e82c9b6, "");
SYMBOL_CRC(hook_ipi_queue_send_msg_handler, 0x4ab79e90, "");
SYMBOL_CRC(unhook_ipi_queue_send_msg_handler, 0xdef1b825, "");
SYMBOL_CRC(adsp_push_message, 0x1de2340a, "");
SYMBOL_CRC(adsp_send_message, 0xc6b23801, "");
SYMBOL_CRC(adsp_send_vp_irq, 0xaf86099f, "");
SYMBOL_CRC(adsp_threaded_irq_registration, 0x13f601eb, "_gpl");
SYMBOL_CRC(adsp_register_notify, 0x34bba055, "");
SYMBOL_CRC(adsp_unregister_notify, 0x4778e31d, "");
SYMBOL_CRC(adsp_set_slp_prot, 0xe67b4b39, "");
SYMBOL_CRC(adsp_set_clock_mux, 0xe4e68da9, "");
SYMBOL_CRC(switch_adsp_power, 0xd56acf04, "");
SYMBOL_CRC(adsp_system_bootup, 0x92c514e1, "");
SYMBOL_CRC(register_adspsys, 0xb40913ec, "");
SYMBOL_CRC(register_adsp_core, 0x896ade09, "");
SYMBOL_CRC(reset_hal_feature_table, 0x1a1da70b, "");
SYMBOL_CRC(get_adsp_semaphore, 0x5f0ee176, "_gpl");
SYMBOL_CRC(release_adsp_semaphore, 0xb3db4910, "_gpl");
SYMBOL_CRC(is_adsp_feature_in_active, 0x4ca693ad, "");
SYMBOL_CRC(get_feature_register, 0x7410fdaf, "");
SYMBOL_CRC(adsp_register_feature, 0xc2283c34, "");
SYMBOL_CRC(adsp_deregister_feature, 0xbaea5c8b, "");
SYMBOL_CRC(adsp_get_reserve_mem_phys, 0x14bff320, "");
SYMBOL_CRC(adsp_get_reserve_mem_virt, 0x9b6ae0ff, "");
SYMBOL_CRC(adsp_get_reserve_mem_size, 0xe4e1ac4c, "");
SYMBOL_CRC(adsp_mem_device_probe, 0x8bc266ef, "");
SYMBOL_CRC(hook_ipi_queue_recv_msg_hanlder, 0xdebf52c0, "");
SYMBOL_CRC(unhook_ipi_queue_recv_msg_hanlder, 0x867c418a, "");
SYMBOL_CRC(adsp_mbox_probe, 0x8b34848b, "");
SYMBOL_CRC(get_adsp_mbox_pin_send, 0x362b2d79, "");
SYMBOL_CRC(get_adsp_mbox_pin_recv, 0xfedab08c, "");
SYMBOL_CRC(adsp_ipi_registration, 0xa3e095e2, "_gpl");
SYMBOL_CRC(adsp_ipi_unregistration, 0xc1ea575a, "_gpl");
SYMBOL_CRC(adsp_after_bootup, 0x754e2e4c, "");
SYMBOL_CRC(adsp_core0_init, 0x69a976ed, "");
SYMBOL_CRC(adsp_core1_init, 0xdf9ebbd6, "");
SYMBOL_CRC(get_adsp_type, 0x03c6adfb, "");
SYMBOL_CRC(adsp_mbrain_register_callback, 0xb77e15ba, "");
SYMBOL_CRC(adsp_mbrain_unregister_callback, 0x4f667cda, "");
SYMBOL_CRC(get_adsp_misc_buffer, 0x36bc359e, "");
SYMBOL_CRC(get_adsp_aee_buffer, 0x91761a62, "");
SYMBOL_CRC(adsp_qos_probe, 0x0b82a95c, "");
SYMBOL_CRC(adsp_set_scene_bw, 0x82a3dfea, "");
SYMBOL_CRC(set_adsp_icc_bw, 0xcc675159, "");
SYMBOL_CRC(clear_adsp_icc_bw, 0x4fed8925, "");
SYMBOL_CRC(adsp_icc_bw_req, 0x3edb241d, "");
SYMBOL_CRC(adsp_bus_monitor_dump, 0x768a601c, "");
SYMBOL_CRC(adsp_ipic_probe, 0x4add6357, "");
SYMBOL_CRC(adsp_dbg_dump_init, 0xc5c3ff9f, "");
SYMBOL_CRC(adsp_check_adsppll_freq, 0xc17de25c, "");
SYMBOL_CRC(adsp_dbg_init, 0xb099f610, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x418cddcd, "register_devapc_power_callback" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x43af29f5, "kobject_uevent" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0x25758a2c, "misc_register" },
	{ 0xa6257a2f, "complete" },
	{ 0xdb15f288, "simple_open" },
	{ 0x0cae9d1d, "noop_llseek" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x037a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x72aa63ef, "__kfifo_to_user" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0xe2964344, "__wake_up" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x999e8297, "vfree" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5a921311, "strncmp" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x62bb09bf, "clocks_calc_mult_shift" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x6b279ab4, "of_property_read_variable_u64_array" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x924e3c8d, "mtk_mbox_dump_recv_pin" },
	{ 0x24f0d91a, "mtk_mbox_check_send_irq" },
	{ 0x42a00dec, "mtk_mbox_write_hd" },
	{ 0x9ac37c2d, "mtk_mbox_trigger_irq" },
	{ 0x8be40ba0, "mtk_mbox_write" },
	{ 0x656cde9e, "mtk_mbox_probe" },
	{ 0x9b064721, "mtk_mbox_polling" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x946de52f, "of_device_is_available" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa4234d01, "slbc_request" },
	{ 0x2a66c694, "slbc_power_on" },
	{ 0x8877c8c0, "slbc_power_off" },
	{ 0x0e12e362, "slbc_release" },
	{ 0xe06f78c7, "slbc_gid_request" },
	{ 0x803673d2, "slbc_validate" },
	{ 0x3b3f2cda, "slbc_invalidate" },
	{ 0x4fe5340d, "slbc_gid_release" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x51b8698f, "mtk_emidbg_dump" },
	{ 0xf9a482f9, "msleep" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x0c2c5802, "work_busy" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa2aed337, "aee_get_mode" },
	{ 0x97680f44, "aed_common_exception_api" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x367365db, "mt_get_fmeter_freq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x349cba85, "strchr" },
	{ 0x8b9c34da, "single_open" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf77555cd,
	0x5d112304,
	0x92997ed8,
	0xf5edea2e,
	0x92d5838e,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0xf93aae46,
	0xd5977bfb,
	0xed55cabd,
	0x4a3ad70e,
	0x418cddcd,
	0xce2840e7,
	0x43af29f5,
	0x49cd25ed,
	0xd9a5ea54,
	0x75966ec2,
	0x09674aa9,
	0x25758a2c,
	0xa6257a2f,
	0xdb15f288,
	0x0cae9d1d,
	0x1b2fa1a9,
	0xbd462b55,
	0x96848186,
	0x8c8569cb,
	0x2d39b0a7,
	0x85df9b6c,
	0xe2d5255a,
	0x037a0cba,
	0x3b6c41ea,
	0x9c81ceff,
	0x98cf60b3,
	0xa916b694,
	0x75ca79b5,
	0x88db9f48,
	0x2be0c009,
	0x72aa63ef,
	0x19b76060,
	0x6ac61a02,
	0xe2964344,
	0x13d0adf7,
	0x9a85eebb,
	0x0f05f001,
	0x34db050b,
	0xd35cce70,
	0x999e8297,
	0x45b60059,
	0xc6f46339,
	0xffeedf6a,
	0xa571f6b0,
	0xe17134b6,
	0x42ad47ad,
	0xefe8a82e,
	0x2d3385d3,
	0x5a921311,
	0x9e87b2ff,
	0x598dfa08,
	0x7f02188f,
	0x62bb09bf,
	0x862258db,
	0xe94986d6,
	0xea82d349,
	0x102fe6de,
	0x135bb7ec,
	0x6f9e763b,
	0xc0b7c197,
	0x75fb9062,
	0xc3055d20,
	0x203392c6,
	0xb43f9365,
	0xf3cdc3c6,
	0x5cf50b74,
	0x40863ba1,
	0x6b279ab4,
	0xe136f93c,
	0xaf56600a,
	0x14de1090,
	0x924e3c8d,
	0x24f0d91a,
	0x42a00dec,
	0x9ac37c2d,
	0x8be40ba0,
	0x656cde9e,
	0x9b064721,
	0x656e4a6e,
	0x4e870156,
	0x1ed4c5e6,
	0x946de52f,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xa4234d01,
	0x2a66c694,
	0x8877c8c0,
	0x0e12e362,
	0xe06f78c7,
	0x803673d2,
	0x3b3f2cda,
	0x4fe5340d,
	0x4e8b8def,
	0x93d6dd8c,
	0x51b8698f,
	0xf9a482f9,
	0x05590c04,
	0x0c2c5802,
	0xf9606a4e,
	0x0f314d3e,
	0xa2aed337,
	0x97680f44,
	0xc5b6f236,
	0xc8c7229e,
	0x608741b5,
	0x374f8976,
	0xee73d233,
	0x49eaeb64,
	0x95bab132,
	0xc905402b,
	0xfa4d3c24,
	0xedc03953,
	0x6b722180,
	0x0c1a5ee3,
	0x367365db,
	0xeae3dfd6,
	0x69cfdbb0,
	0x3f72e5f3,
	0x349cba85,
	0x8b9c34da,
	0x476b165a,
	0xc8f2ae9d,
	0x173e2075,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__memcpy_toio\0"
	"__memcpy_fromio\0"
	"_printk\0"
	"___ratelimit\0"
	"request_threaded_irq\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"__arm_smccc_smc\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"wait_for_completion_timeout\0"
	"register_devapc_power_callback\0"
	"irq_set_irq_wake\0"
	"kobject_uevent\0"
	"alloc_workqueue\0"
	"__init_waitqueue_head\0"
	"register_pm_notifier\0"
	"dev_pm_genpd_add_notifier\0"
	"misc_register\0"
	"complete\0"
	"simple_open\0"
	"noop_llseek\0"
	"vmalloc_noprof\0"
	"__kfifo_init\0"
	"scnprintf\0"
	"kstrtoint\0"
	"kstrdup\0"
	"strsep\0"
	"strcmp\0"
	"kfree\0"
	"kstrtouint\0"
	"simple_read_from_buffer\0"
	"strlen\0"
	"strnlen\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__kfifo_to_user\0"
	"kstrtouint_from_user\0"
	"nonseekable_open\0"
	"__wake_up\0"
	"__kfifo_out\0"
	"__arch_copy_to_user\0"
	"mem_alloc_profiling_key\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"vfree\0"
	"aee_kernel_exception_api_func\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"__mutex_init\0"
	"__kmalloc_cache_noprof\0"
	"queue_delayed_work_on\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"strncmp\0"
	"cancel_delayed_work\0"
	"flush_delayed_work\0"
	"__msecs_to_jiffies\0"
	"clocks_calc_mult_shift\0"
	"timecounter_init\0"
	"sched_clock\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_forward\0"
	"timecounter_read\0"
	"hrtimer_start_range_ns\0"
	"arch_timer_read_counter\0"
	"usleep_range_state\0"
	"mutex_trylock\0"
	"ktime_get\0"
	"of_find_compatible_node\0"
	"of_reserved_mem_lookup\0"
	"ioremap_prot\0"
	"of_property_read_variable_u64_array\0"
	"of_property_read_variable_u32_array\0"
	"arm64_use_ng_mappings\0"
	"mt_irq_dump_status\0"
	"mtk_mbox_dump_recv_pin\0"
	"mtk_mbox_check_send_irq\0"
	"mtk_mbox_write_hd\0"
	"mtk_mbox_trigger_irq\0"
	"mtk_mbox_write\0"
	"mtk_mbox_probe\0"
	"mtk_mbox_polling\0"
	"snprintf\0"
	"debugfs_create_file\0"
	"of_find_node_by_name\0"
	"of_device_is_available\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"slbc_request\0"
	"slbc_power_on\0"
	"slbc_power_off\0"
	"slbc_release\0"
	"slbc_gid_request\0"
	"slbc_validate\0"
	"slbc_invalidate\0"
	"slbc_gid_release\0"
	"__pm_stay_awake\0"
	"complete_all\0"
	"mtk_emidbg_dump\0"
	"msleep\0"
	"__pm_relax\0"
	"work_busy\0"
	"mrdump_set_extra_dump\0"
	"wakeup_source_register\0"
	"aee_get_mode\0"
	"aed_common_exception_api\0"
	"queue_work_on\0"
	"devm_kmalloc\0"
	"__init_swait_queue_head\0"
	"platform_get_resource_byname\0"
	"devm_ioremap\0"
	"of_icc_get\0"
	"icc_set_bw\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"iounmap\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"mt_get_fmeter_freq\0"
	"__const_udelay\0"
	"seq_read\0"
	"single_release\0"
	"strchr\0"
	"single_open\0"
	"sized_strscpy\0"
	"seq_printf\0"
	"seq_write\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "device-apc-common,aee_aed,irq-dbg,mtk-mbox,mtk_slbc,emi,mrdump,clk-common");


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

KSYMTAB_FUNC(timesync_filter_set, "_gpl", "");
KSYMTAB_FUNC(timesync_filter_get, "_gpl", "");
KSYMTAB_FUNC(timesync_filter_init, "_gpl", "");

SYMBOL_CRC(timesync_filter_set, 0xbd7eea28, "_gpl");
SYMBOL_CRC(timesync_filter_get, 0x974a3c9c, "_gpl");
SYMBOL_CRC(timesync_filter_init, 0x7fb0ac6d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0x9cb5d1d2, "scp_A_register_notify" },
	{ 0x14b80435, "scp_A_unregister_notify" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xa837c196, "scp_wdt_reset" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x758ef887, "mtk_ipi_unregister" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa6257a2f, "complete" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x91637e55, "get_scp_dram_region_manage" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x08fb92ef, "hf_device_register" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0x7aa804ca, "scp_get_reserve_mem_size" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xc0744ae3, "sched_setscheduler_nocheck" },
	{ 0x0967fe10, "unregister_pm_notifier" },
	{ 0x29adad6f, "hf_device_unregister" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x1e19eb6c, "_printk_deferred" },
	{ 0x8d99bea7, "hf_manager_create" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xdb019033, "hf_manager_destroy" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc348dcc, "scp_get_reserve_mem_phys" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xc77a6808, "sap_enabled" },
	{ 0xfd32e32f, "sap_delicated_clock_supported" },
	{ 0x7e23cc99, "sensor_control_scp" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc9854e13, "sap_ipidev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x34db050b,
	0x3e54ac69,
	0xc6f46339,
	0xffeedf6a,
	0x49cd25ed,
	0x92997ed8,
	0x9cb5d1d2,
	0x14b80435,
	0x9166fc03,
	0x8c03d20c,
	0xd35cce70,
	0x482d47c8,
	0xa837c196,
	0x9e87b2ff,
	0xc5b6f236,
	0x42ad47ad,
	0x2d3385d3,
	0x65bb94f6,
	0x758ef887,
	0x75ca79b5,
	0x7e19152a,
	0x25974000,
	0xa6257a2f,
	0x9a835040,
	0x4a3ad70e,
	0xf5edea2e,
	0xc4f0da12,
	0x4a353d20,
	0xc3055d20,
	0x608741b5,
	0xba8fbd64,
	0xb5b54b34,
	0xcd709e2e,
	0xd5977bfb,
	0xed55cabd,
	0x91637e55,
	0xe17134b6,
	0x476b165a,
	0xa916b694,
	0x0f05f001,
	0xefe8a82e,
	0xa571f6b0,
	0x0f314d3e,
	0x08fb92ef,
	0x8d21adca,
	0x7aa804ca,
	0x75966ec2,
	0xba0aee2e,
	0xce5bc4d0,
	0xc0744ae3,
	0x0967fe10,
	0x29adad6f,
	0x0288226a,
	0x037a0cba,
	0x52c5c991,
	0xb3f7646e,
	0x2e3bcce2,
	0x13d0adf7,
	0xbede130a,
	0xf23fcb99,
	0x1e19eb6c,
	0x8d99bea7,
	0xb39378cc,
	0xdb019033,
	0xf77555cd,
	0x5d112304,
	0x56470118,
	0xcc348dcc,
	0xc38c83b8,
	0x2f2c95c4,
	0x82ee90dc,
	0x4e8b8def,
	0x05590c04,
	0xe94986d6,
	0x9ec6ca96,
	0x356461c8,
	0x15ba50a6,
	0xfe5d4bb2,
	0xc77a6808,
	0xfd32e32f,
	0x7e23cc99,
	0x8810754a,
	0xc9854e13,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"_raw_spin_lock_irqsave\0"
	"blocking_notifier_chain_unregister\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"alloc_workqueue\0"
	"_printk\0"
	"scp_A_register_notify\0"
	"scp_A_unregister_notify\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"_raw_spin_unlock_irqrestore\0"
	"blocking_notifier_call_chain\0"
	"scp_wdt_reset\0"
	"cancel_delayed_work\0"
	"queue_work_on\0"
	"queue_delayed_work_on\0"
	"system_wq\0"
	"mtk_ipi_register\0"
	"mtk_ipi_unregister\0"
	"__fortify_panic\0"
	"__list_add_valid_or_report\0"
	"wait_for_completion\0"
	"complete\0"
	"__list_del_entry_valid_or_report\0"
	"wait_for_completion_timeout\0"
	"___ratelimit\0"
	"ktime_get_with_offset\0"
	"mtk_ipi_send\0"
	"usleep_range_state\0"
	"__init_swait_queue_head\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"scp_ipidev\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"get_scp_dram_region_manage\0"
	"__kmalloc_cache_noprof\0"
	"sized_strscpy\0"
	"strnlen\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__mutex_init\0"
	"wakeup_source_register\0"
	"hf_device_register\0"
	"scp_get_reserve_mem_virt\0"
	"scp_get_reserve_mem_size\0"
	"register_pm_notifier\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"sched_setscheduler_nocheck\0"
	"unregister_pm_notifier\0"
	"hf_device_unregister\0"
	"wakeup_source_unregister\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"kthread_should_stop\0"
	"wait_for_completion_interruptible\0"
	"__kfifo_out\0"
	"pm_wakeup_ws_event\0"
	"__kfifo_in\0"
	"_printk_deferred\0"
	"hf_manager_create\0"
	"kthread_stop\0"
	"hf_manager_destroy\0"
	"__memcpy_toio\0"
	"__memcpy_fromio\0"
	"__warn_printk\0"
	"scp_get_reserve_mem_phys\0"
	"mod_timer\0"
	"flush_work\0"
	"timer_delete_sync\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"sched_clock\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"jiffies\0"
	"sys_tz\0"
	"sap_enabled\0"
	"sap_delicated_clock_supported\0"
	"sensor_control_scp\0"
	"_find_first_bit\0"
	"sap_ipidev\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scp,mtk_tinysys_ipi,hf_manager");


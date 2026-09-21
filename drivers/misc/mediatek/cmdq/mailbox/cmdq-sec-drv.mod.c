#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(cmdq_sec_mbox_enable, "", "");
KSYMTAB_FUNC(cmdq_sec_mbox_disable, "", "");
KSYMTAB_FUNC(cmdq_sec_mbox_chan_id, "", "");
KSYMTAB_FUNC(cmdq_sec_insert_backup_cookie, "", "");
KSYMTAB_FUNC(cmdq_sec_dump_secure_thread_cookie, "", "");
KSYMTAB_FUNC(cmdq_sec_dump_notify_loop, "", "");
KSYMTAB_FUNC(cmdq_sec_dump_operation, "", "");
KSYMTAB_FUNC(cmdq_sec_dump_response, "", "");
KSYMTAB_FUNC(cmdq_sec_mbox_switch_normal, "", "");
KSYMTAB_FUNC(cmdq_sec_mbox_stop, "", "");
KSYMTAB_FUNC(cmdq_sec_mmp_wait, "", "");
KSYMTAB_FUNC(cmdq_sec_mmp_wait_done, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_set_data, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_set_mtee, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_set_secid, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_free_data, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_set_payload, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_write_reg_disp, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_write_reg, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_assign_metadata, "", "");
KSYMTAB_FUNC(cmdq_sec_dump_secure_data, "", "");
KSYMTAB_FUNC(cmdq_sec_pkt_wait_complete, "", "");
KSYMTAB_FUNC(cmdq_sec_err_dump, "", "");

SYMBOL_CRC(cmdq_sec_mbox_enable, 0x79bb07e9, "");
SYMBOL_CRC(cmdq_sec_mbox_disable, 0xcfe411c7, "");
SYMBOL_CRC(cmdq_sec_mbox_chan_id, 0x06aec9cf, "");
SYMBOL_CRC(cmdq_sec_insert_backup_cookie, 0x7e5ed91a, "");
SYMBOL_CRC(cmdq_sec_dump_secure_thread_cookie, 0xe7d00fa3, "");
SYMBOL_CRC(cmdq_sec_dump_notify_loop, 0x3b8038ba, "");
SYMBOL_CRC(cmdq_sec_dump_operation, 0x352631c1, "");
SYMBOL_CRC(cmdq_sec_dump_response, 0xfffd2cd9, "");
SYMBOL_CRC(cmdq_sec_mbox_switch_normal, 0x25215081, "");
SYMBOL_CRC(cmdq_sec_mbox_stop, 0xf3c3ed2c, "");
SYMBOL_CRC(cmdq_sec_mmp_wait, 0x906d1369, "");
SYMBOL_CRC(cmdq_sec_mmp_wait_done, 0x51fc35a1, "");
SYMBOL_CRC(cmdq_sec_pkt_set_data, 0xc5ab6171, "");
SYMBOL_CRC(cmdq_sec_pkt_set_mtee, 0xa6a55170, "");
SYMBOL_CRC(cmdq_sec_pkt_set_secid, 0xfa869029, "");
SYMBOL_CRC(cmdq_sec_pkt_free_data, 0x98707972, "");
SYMBOL_CRC(cmdq_sec_pkt_set_payload, 0xf0f7ec7e, "");
SYMBOL_CRC(cmdq_sec_pkt_write_reg_disp, 0x8cfd7d4a, "");
SYMBOL_CRC(cmdq_sec_pkt_write_reg, 0xd0064824, "");
SYMBOL_CRC(cmdq_sec_pkt_assign_metadata, 0xb59db057, "");
SYMBOL_CRC(cmdq_sec_dump_secure_data, 0x17d0e76c, "");
SYMBOL_CRC(cmdq_sec_pkt_wait_complete, 0x9fe0dff6, "");
SYMBOL_CRC(cmdq_sec_err_dump, 0x2608e571, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x92997ed8, "_printk" },
	{ 0xfbdd82be, "KREE_RegisterSharedmem" },
	{ 0x037a0cba, "kfree" },
	{ 0xd9a6d5ea, "KREE_UnregisterSharedmem" },
	{ 0x552d4efc, "KREE_CreateSession" },
	{ 0x5878d629, "KREE_CloseSession" },
	{ 0xf45addc2, "KREE_TeeServiceCallPlus" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xde2fadca, "mtk_cmdq_log" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbeefe2e7, "mtk_mminfra_on_off" },
	{ 0x80e38994, "cmdq_pkt_read" },
	{ 0x23daec08, "cmdq_pkt_logic_command" },
	{ 0x766f1ee7, "cmdq_get_hw_flags" },
	{ 0x1f26d82a, "cmdq_pkt_write_indriect" },
	{ 0xd843cd45, "cmdq_pkt_set_event" },
	{ 0xf95cc9b1, "cmdq_util_error_save" },
	{ 0x69c8c1ed, "cmdq_dump_summary" },
	{ 0xd77d7c9c, "mmprofile_log_ex" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x3375e996, "cmdq_print_trace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x3a724b9a, "cmdq_util_dump_lock" },
	{ 0x1cf259a2, "cmdq_util_error_enable" },
	{ 0xf36be3ca, "cmdq_util_error_disable" },
	{ 0xc56dae99, "cmdq_util_dump_unlock" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0x0cac54c3, "cmdq_pkt_finalize_loop" },
	{ 0xc9cc8982, "cmdq_clear_event" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0xe9c0c46d, "cmdq_pkt_flush_async" },
	{ 0xc3d83563, "cmdq_mbox_stop" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9cddefee, "cmdq_util_is_feature_en" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xba8d7d65, "cmdq_util_pkvm_disable" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x15ef1b6a, "mbox_controller_register" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xe17d4dcd, "cmdq_util_track_ctrl" },
	{ 0xe1778ae5, "cmdq_sec_helper_set_fp" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x899ea9dc, "mmprofile_enable" },
	{ 0xda38583a, "mmprofile_start" },
	{ 0x7ffb1903, "mmprofile_register_event" },
	{ 0x560a0e63, "mmprofile_enable_event_recursive" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb27f86de, "mbox_controller_unregister" },
	{ 0xa9b58fb1, "mminfra_power_cb" },
	{ 0xeb836211, "mminfra_gce_cg" },
	{ 0x619a6e0b, "cpr_not_support_cookie" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x35153fe3, "cmdq_print_debug" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xb9ccd5be, "cmdq_pkt_assign_command" },
	{ 0x306c7ee9, "cmdq_pkt_append_command" },
	{ 0x7ed3c651, "cmdq_pkt_get_va_by_offset" },
	{ 0x14837105, "cmdq_mbox_get_thread_timeout" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x641247a0, "cmdq_dump_pkt" },
	{ 0x0f9f71f3, "cmdq_mbox_mtcmos_by_fast" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf93aae46,
	0x92997ed8,
	0xfbdd82be,
	0x037a0cba,
	0xd9a6d5ea,
	0x552d4efc,
	0x5878d629,
	0xf45addc2,
	0x75ca79b5,
	0xe17134b6,
	0x52c5c991,
	0xde2fadca,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xe4bbc1dd,
	0xd5977bfb,
	0xed55cabd,
	0xbeefe2e7,
	0x80e38994,
	0x23daec08,
	0x766f1ee7,
	0x1f26d82a,
	0xd843cd45,
	0xf95cc9b1,
	0x69c8c1ed,
	0xd77d7c9c,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0x3375e996,
	0x43b0c9c3,
	0xe94986d6,
	0x3a724b9a,
	0x1cf259a2,
	0xf36be3ca,
	0xc56dae99,
	0x22ae5020,
	0xdfcaaee7,
	0x9f6801a4,
	0x0cac54c3,
	0xc9cc8982,
	0xfc102d94,
	0xe9c0c46d,
	0xc3d83563,
	0xe1d5b76c,
	0x34db050b,
	0xc38c83b8,
	0x9a835040,
	0xd35cce70,
	0xdc0e4855,
	0x7f02188f,
	0x9cddefee,
	0x56470118,
	0xc5b6f236,
	0x12db679a,
	0x1ed4c5e6,
	0x656e4a6e,
	0xf5edea2e,
	0x45b60059,
	0xe136f93c,
	0xba8d7d65,
	0xf3cdc3c6,
	0xa823db6e,
	0x0be515ae,
	0x3d0ffa5c,
	0xee73d233,
	0xea23ff02,
	0xa571f6b0,
	0x49cd25ed,
	0x15ef1b6a,
	0xb088bcfc,
	0xd4e81a21,
	0xe17d4dcd,
	0xe1778ae5,
	0xc8c7229e,
	0xea6f49c8,
	0x7e19152a,
	0xc6f46339,
	0x5a9cfed6,
	0x5cf50b74,
	0x40863ba1,
	0x899ea9dc,
	0xda38583a,
	0x7ffb1903,
	0x560a0e63,
	0xba0aee2e,
	0xce5bc4d0,
	0xf9a482f9,
	0xb27f86de,
	0xa9b58fb1,
	0xeb836211,
	0x619a6e0b,
	0x15ba50a6,
	0x35153fe3,
	0xaf56600a,
	0xb9ccd5be,
	0x306c7ee9,
	0x7ed3c651,
	0x14837105,
	0x25974000,
	0x4a3ad70e,
	0x641247a0,
	0x0f9f71f3,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__arm_smccc_smc\0"
	"_printk\0"
	"KREE_RegisterSharedmem\0"
	"kfree\0"
	"KREE_UnregisterSharedmem\0"
	"KREE_CreateSession\0"
	"KREE_CloseSession\0"
	"KREE_TeeServiceCallPlus\0"
	"__fortify_panic\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"mtk_cmdq_log\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mtk_mminfra_on_off\0"
	"cmdq_pkt_read\0"
	"cmdq_pkt_logic_command\0"
	"cmdq_get_hw_flags\0"
	"cmdq_pkt_write_indriect\0"
	"cmdq_pkt_set_event\0"
	"cmdq_util_error_save\0"
	"cmdq_dump_summary\0"
	"mmprofile_log_ex\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"cmdq_print_trace\0"
	"preempt_schedule\0"
	"sched_clock\0"
	"cmdq_util_dump_lock\0"
	"cmdq_util_error_enable\0"
	"cmdq_util_error_disable\0"
	"cmdq_util_dump_unlock\0"
	"cmdq_mbox_create\0"
	"cmdq_pkt_create\0"
	"cmdq_pkt_wfe\0"
	"cmdq_pkt_finalize_loop\0"
	"cmdq_clear_event\0"
	"cmdq_mbox_enable\0"
	"cmdq_pkt_flush_async\0"
	"cmdq_mbox_stop\0"
	"cmdq_mbox_disable\0"
	"_raw_spin_lock_irqsave\0"
	"mod_timer\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"timer_delete\0"
	"__msecs_to_jiffies\0"
	"cmdq_util_is_feature_en\0"
	"__warn_printk\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"of_find_node_by_name\0"
	"snprintf\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"of_property_read_variable_u32_array\0"
	"cmdq_util_pkvm_disable\0"
	"of_find_compatible_node\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"platform_get_resource\0"
	"devm_ioremap\0"
	"devm_clk_get\0"
	"__mutex_init\0"
	"alloc_workqueue\0"
	"mbox_controller_register\0"
	"of_count_phandle_with_args\0"
	"pm_runtime_enable\0"
	"cmdq_util_track_ctrl\0"
	"cmdq_sec_helper_set_fp\0"
	"devm_kmalloc\0"
	"dma_set_coherent_mask\0"
	"__list_add_valid_or_report\0"
	"init_timer_key\0"
	"dma_alloc_attrs\0"
	"of_reserved_mem_lookup\0"
	"ioremap_prot\0"
	"mmprofile_enable\0"
	"mmprofile_start\0"
	"mmprofile_register_event\0"
	"mmprofile_enable_event_recursive\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"msleep\0"
	"mbox_controller_unregister\0"
	"mminfra_power_cb\0"
	"mminfra_gce_cg\0"
	"cpr_not_support_cookie\0"
	"jiffies\0"
	"cmdq_print_debug\0"
	"arm64_use_ng_mappings\0"
	"cmdq_pkt_assign_command\0"
	"cmdq_pkt_append_command\0"
	"cmdq_pkt_get_va_by_offset\0"
	"cmdq_mbox_get_thread_timeout\0"
	"wait_for_completion\0"
	"wait_for_completion_timeout\0"
	"cmdq_dump_pkt\0"
	"cmdq_mbox_mtcmos_by_fast\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_tz_system,mtk-cmdq-drv-ext,mtk-mminfra-util-dummy,mmprofile,aee_aed");


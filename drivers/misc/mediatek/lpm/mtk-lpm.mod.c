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

KSYMTAB_FUNC(lpm_notifier_register, "", "");
KSYMTAB_FUNC(lpm_notifier_unregister, "", "");
KSYMTAB_FUNC(lpm_model_register, "", "");
KSYMTAB_FUNC(lpm_model_unregister, "", "");
KSYMTAB_FUNC(lpm_issuer_register, "", "");
KSYMTAB_FUNC(lpm_issuer_unregister, "", "");
KSYMTAB_FUNC(lpm_suspend_registry, "", "");
KSYMTAB_FUNC(lpm_suspend_type_get, "", "");
KSYMTAB_FUNC(lpm_callee_registry, "", "");
KSYMTAB_FUNC(lpm_callee_unregistry, "", "");
KSYMTAB_FUNC(lpm_callee_get_impl, "", "");
KSYMTAB_FUNC(lpm_callee_put_impl, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_entry_node_remove, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_root_entry_create, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_entry_root_get, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_sub_entry_add, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_sub_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_cpuidle_sysfs_remove, "", "");
KSYMTAB_FUNC(mtk_lp_sysfs_entry_func_create, "", "");
KSYMTAB_FUNC(mtk_lp_sysfs_entry_func_node_add, "", "");
KSYMTAB_FUNC(mtk_lp_sysfs_entry_func_node_remove, "", "");
KSYMTAB_FUNC(mtk_lp_sysfs_entry_func_group_create, "", "");
KSYMTAB_FUNC(mtk_suspend_sysfs_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_suspend_sysfs_entry_node_remove, "", "");
KSYMTAB_FUNC(mtk_suspend_sysfs_root_entry_create, "", "");
KSYMTAB_FUNC(mtk_suspend_sysfs_entry_root_get, "", "");
KSYMTAB_FUNC(mtk_spm_sysfs_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_spm_sysfs_entry_node_remove, "", "");
KSYMTAB_FUNC(mtk_spm_sysfs_root_entry_create, "", "");
KSYMTAB_FUNC(mtk_spm_sysfs_entry_root_get, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_entry_node_remove, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_root_entry_create, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_entry_root_get, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_sub_entry_add, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_sub_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_lpm_sysfs_remove, "", "");
KSYMTAB_FUNC(mtk_ocla_sysfs_entry_node_add, "", "");
KSYMTAB_FUNC(mtk_ocla_sysfs_entry_node_remove, "", "");
KSYMTAB_FUNC(mtk_ocla_sysfs_root_entry_create, "", "");
KSYMTAB_FUNC(mtk_ocla_sysfs_entry_root_get, "", "");
KSYMTAB_FUNC(lpm_platform_trace_get, "", "");
KSYMTAB_FUNC(lpm_irqremain_list_release, "", "");
KSYMTAB_FUNC(lpm_irqremain_get, "", "");
KSYMTAB_FUNC(lpm_irqremain_put, "", "");
KSYMTAB_DATA(__tracepoint_lpm_trace, "", "");
KSYMTAB_FUNC(__traceiter_lpm_trace, "", "");
KSYMTAB_DATA(__SCK__tp_func_lpm_trace, "", "");
KSYMTAB_DATA(__tracepoint_SPM__resource_req_0, "", "");
KSYMTAB_FUNC(__traceiter_SPM__resource_req_0, "", "");
KSYMTAB_DATA(__SCK__tp_func_SPM__resource_req_0, "", "");

SYMBOL_CRC(lpm_notifier_register, 0xa7f924e5, "");
SYMBOL_CRC(lpm_notifier_unregister, 0xdbf15485, "");
SYMBOL_CRC(lpm_model_register, 0xcef47338, "");
SYMBOL_CRC(lpm_model_unregister, 0x246fd075, "");
SYMBOL_CRC(lpm_issuer_register, 0xa6a6d090, "");
SYMBOL_CRC(lpm_issuer_unregister, 0x7d1acc00, "");
SYMBOL_CRC(lpm_suspend_registry, 0xee638774, "");
SYMBOL_CRC(lpm_suspend_type_get, 0x822c124d, "");
SYMBOL_CRC(lpm_callee_registry, 0xfbf4008c, "");
SYMBOL_CRC(lpm_callee_unregistry, 0x4f05e3eb, "");
SYMBOL_CRC(lpm_callee_get_impl, 0x84dad270, "");
SYMBOL_CRC(lpm_callee_put_impl, 0xc5e76030, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_entry_node_add, 0xa55169a3, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_entry_node_remove, 0x9f8a8ff9, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_root_entry_create, 0xe93acd86, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_entry_root_get, 0xa520f61d, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_sub_entry_add, 0x58cb358f, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_sub_entry_node_add, 0xbd0884bb, "");
SYMBOL_CRC(mtk_cpuidle_sysfs_remove, 0x699fa051, "");
SYMBOL_CRC(mtk_lp_sysfs_entry_func_create, 0x55067d21, "");
SYMBOL_CRC(mtk_lp_sysfs_entry_func_node_add, 0x7c5ba4c8, "");
SYMBOL_CRC(mtk_lp_sysfs_entry_func_node_remove, 0xa53fb20e, "");
SYMBOL_CRC(mtk_lp_sysfs_entry_func_group_create, 0x0ca656fe, "");
SYMBOL_CRC(mtk_suspend_sysfs_entry_node_add, 0xa5cd22db, "");
SYMBOL_CRC(mtk_suspend_sysfs_entry_node_remove, 0x41657e44, "");
SYMBOL_CRC(mtk_suspend_sysfs_root_entry_create, 0x81ec4014, "");
SYMBOL_CRC(mtk_suspend_sysfs_entry_root_get, 0xf14f8ef0, "");
SYMBOL_CRC(mtk_spm_sysfs_entry_node_add, 0xda472c36, "");
SYMBOL_CRC(mtk_spm_sysfs_entry_node_remove, 0x47f4cc99, "");
SYMBOL_CRC(mtk_spm_sysfs_root_entry_create, 0x653b329e, "");
SYMBOL_CRC(mtk_spm_sysfs_entry_root_get, 0xd6484cb5, "");
SYMBOL_CRC(mtk_lpm_sysfs_entry_node_add, 0x3ece7ae7, "");
SYMBOL_CRC(mtk_lpm_sysfs_entry_node_remove, 0x12d88946, "");
SYMBOL_CRC(mtk_lpm_sysfs_root_entry_create, 0xef93aa82, "");
SYMBOL_CRC(mtk_lpm_sysfs_entry_root_get, 0xff2bbc02, "");
SYMBOL_CRC(mtk_lpm_sysfs_sub_entry_add, 0x12c27859, "");
SYMBOL_CRC(mtk_lpm_sysfs_sub_entry_node_add, 0x09bd7da0, "");
SYMBOL_CRC(mtk_lpm_sysfs_remove, 0x04f00888, "");
SYMBOL_CRC(mtk_ocla_sysfs_entry_node_add, 0xb43d1682, "");
SYMBOL_CRC(mtk_ocla_sysfs_entry_node_remove, 0xcc62e23d, "");
SYMBOL_CRC(mtk_ocla_sysfs_root_entry_create, 0xfc6e255d, "");
SYMBOL_CRC(mtk_ocla_sysfs_entry_root_get, 0xfede02ef, "");
SYMBOL_CRC(lpm_platform_trace_get, 0x79b80d2c, "");
SYMBOL_CRC(lpm_irqremain_list_release, 0x031d56ae, "");
SYMBOL_CRC(lpm_irqremain_get, 0xb0ba6ecb, "");
SYMBOL_CRC(lpm_irqremain_put, 0xf606cdec, "");
SYMBOL_CRC(__tracepoint_lpm_trace, 0x5a681312, "");
SYMBOL_CRC(__traceiter_lpm_trace, 0x38c81276, "");
SYMBOL_CRC(__SCK__tp_func_lpm_trace, 0xe22b1e21, "");
SYMBOL_CRC(__tracepoint_SPM__resource_req_0, 0xb276dc30, "");
SYMBOL_CRC(__traceiter_SPM__resource_req_0, 0xcbc42e90, "");
SYMBOL_CRC(__SCK__tp_func_SPM__resource_req_0, 0x7475c695, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0x07629943, "raw_notifier_chain_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xe5e55228, "__cpuhp_state_add_instance" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x18245177, "__cpuhp_state_remove_instance" },
	{ 0x92997ed8, "_printk" },
	{ 0x6bcaac61, "cpuidle_get_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x55c76a23, "ksys_sync_helper" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x9b555c8c, "pm_suspend_default_s2idle" },
	{ 0xf553318d, "cpuidle_pause_and_lock" },
	{ 0xcabe04de, "cpuidle_resume_and_unlock" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0x52647db1, "ct_idle_exit" },
	{ 0xa2c0f59a, "ct_idle_enter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xc2d55962, "work_on_cpu_key" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x037a0cba, "kfree" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0x44033864, "proc_remove" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x665b5ccb, "seq_open" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x6b201699, "of_find_property" },
	{ 0x2c235092, "of_prop_next_u32" },
	{ 0x78e97923, "of_irq_get" },
	{ 0x0bc477a2, "irq_set_irq_type" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0x16ad39d4, "irq_to_desc" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xaba63322, "of_iomap" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x40cead39, "bpf_trace_run9" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x354cf7b5,
	0x07629943,
	0x34db050b,
	0xba8fbd64,
	0xd35cce70,
	0xb5b54b34,
	0x75ca79b5,
	0xe5e55228,
	0x7b37d4a7,
	0x18245177,
	0x92997ed8,
	0x6bcaac61,
	0xe2d5255a,
	0x55c76a23,
	0xf3cdc3c6,
	0xf93aae46,
	0xaf7cb74b,
	0x9b555c8c,
	0xf553318d,
	0xcabe04de,
	0x0f314d3e,
	0x4e8b8def,
	0xb9c425de,
	0x75966ec2,
	0xe136f93c,
	0xb66eb73f,
	0xcaec9cda,
	0x52647db1,
	0xa2c0f59a,
	0x49cd25ed,
	0xc5b6f236,
	0xf9a482f9,
	0x017de3d5,
	0x280f9f14,
	0x7e19152a,
	0x9a835040,
	0xc2d55962,
	0x9f46ced8,
	0xac594e02,
	0xc60d0620,
	0xd5977bfb,
	0x037a0cba,
	0xed55cabd,
	0xe17134b6,
	0x0f05f001,
	0xefe8a82e,
	0x7518b5f0,
	0x44033864,
	0xa2fa95a0,
	0xe7ce721f,
	0x665b5ccb,
	0x69cfdbb0,
	0x88db9f48,
	0x2be0c009,
	0x3cdb28e3,
	0x6b201699,
	0x2c235092,
	0x78e97923,
	0x0bc477a2,
	0x52c5c991,
	0x1fec5304,
	0x7726dda9,
	0x16ad39d4,
	0xc1cad332,
	0xaba63322,
	0xe0da6e4a,
	0x57c959d2,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x40cead39,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"raw_notifier_chain_register\0"
	"raw_notifier_chain_unregister\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock_irqrestore\0"
	"_raw_spin_unlock\0"
	"__fortify_panic\0"
	"__cpuhp_state_add_instance\0"
	"_find_first_zero_bit\0"
	"__cpuhp_state_remove_instance\0"
	"_printk\0"
	"cpuidle_get_driver\0"
	"strcmp\0"
	"ksys_sync_helper\0"
	"of_find_compatible_node\0"
	"__arm_smccc_smc\0"
	"of_property_read_string\0"
	"pm_suspend_default_s2idle\0"
	"cpuidle_pause_and_lock\0"
	"cpuidle_resume_and_unlock\0"
	"wakeup_source_register\0"
	"__pm_stay_awake\0"
	"register_syscore_ops\0"
	"register_pm_notifier\0"
	"of_property_read_variable_u32_array\0"
	"__cpuhp_setup_state\0"
	"raw_notifier_call_chain\0"
	"ct_idle_exit\0"
	"ct_idle_enter\0"
	"alloc_workqueue\0"
	"queue_work_on\0"
	"msleep\0"
	"nr_cpu_ids\0"
	"__per_cpu_offset\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"work_on_cpu_key\0"
	"__sw_hweight64\0"
	"__cpu_online_mask\0"
	"__num_online_cpus\0"
	"mutex_lock\0"
	"kfree\0"
	"mutex_unlock\0"
	"__kmalloc_cache_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"proc_mkdir\0"
	"proc_remove\0"
	"proc_create_data\0"
	"seq_lseek\0"
	"seq_open\0"
	"seq_read\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"seq_release\0"
	"of_find_property\0"
	"of_prop_next_u32\0"
	"of_irq_get\0"
	"irq_set_irq_type\0"
	"__kmalloc_noprof\0"
	"__of_parse_phandle_with_args\0"
	"irq_get_irq_data\0"
	"irq_to_desc\0"
	"of_address_to_resource\0"
	"of_iomap\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"bpf_trace_run9\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


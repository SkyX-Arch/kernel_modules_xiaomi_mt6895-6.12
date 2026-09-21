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

KSYMTAB_DATA(mtk_common_rate_change_notify_fp, "", "");
KSYMTAB_FUNC(MTKGPUPower_model_start, "", "");
KSYMTAB_FUNC(MTKGPUPower_model_start_swpm, "", "");
KSYMTAB_FUNC(MTKGPUPower_model_stop, "", "");
KSYMTAB_FUNC(MTKGPUPower_model_suspend, "", "");
KSYMTAB_FUNC(MTKGPUPower_model_resume, "", "");
KSYMTAB_FUNC(kbase_sync_single_for_device, "", "");
KSYMTAB_FUNC(kbase_sync_single_for_cpu, "", "");
KSYMTAB_FUNC(kbase_region_tracker_find_region_enclosing_address, "", "");
KSYMTAB_FUNC(kbase_region_tracker_find_region_base_address, "", "");
KSYMTAB_FUNC(kbase_remove_va_region, "", "");
KSYMTAB_FUNC(kbase_add_va_region, "", "");
KSYMTAB_FUNC(kbase_mem_term, "", "");
KSYMTAB_FUNC(kbase_alloc_free_region, "", "");
KSYMTAB_FUNC(kbase_free_alloced_region, "", "");
KSYMTAB_FUNC(kbase_gpu_mmap, "", "");
KSYMTAB_FUNC(kbasep_find_enclosing_cpu_mapping_offset, "", "");
KSYMTAB_FUNC(kbasep_find_enclosing_gpu_mapping_start_and_offset, "", "");
KSYMTAB_FUNC(kbase_sync_now, "", "");
KSYMTAB_FUNC(kbase_mem_free_region, "", "");
KSYMTAB_FUNC(kbase_mem_free, "", "");
KSYMTAB_FUNC(kbase_free_phy_pages_helper_locked, "", "");
KSYMTAB_FUNC(kbase_mem_kref_free, "", "");
KSYMTAB_FUNC(kbase_alloc_phy_pages, "", "");
KSYMTAB_FUNC(kbase_gpu_vm_lock, "", "");
KSYMTAB_FUNC(kbase_gpu_vm_unlock, "", "");
KSYMTAB_FUNC(kbase_pm_context_active, "", "");
KSYMTAB_FUNC(kbase_pm_context_idle, "", "");
KSYMTAB_FUNC(kbasep_debug_assert_call_hook, "", "");
KSYMTAB_FUNC(kbase_mem_alloc, "", "");
KSYMTAB_FUNC(kbase_context_mmap, "", "");
KSYMTAB_FUNC(kbase_vmap, "", "");
KSYMTAB_FUNC(kbase_vunmap, "", "");
KSYMTAB_FUNC(kbase_find_device, "", "");
KSYMTAB_FUNC(kbase_release_device, "", "");
KSYMTAB_FUNC(_kbase_event_wakeup, "", "");
KSYMTAB_FUNC(kbase_event_pending, "", "");
KSYMTAB_FUNC(kbase_disjoint_event_get, "", "");
KSYMTAB_FUNC(kbase_gator_hwcnt_init_names, "", "");
KSYMTAB_FUNC(kbase_gator_hwcnt_term_names, "", "");
KSYMTAB_FUNC(kbase_gator_hwcnt_init, "", "");
KSYMTAB_FUNC(kbase_gator_hwcnt_term, "", "");
KSYMTAB_FUNC(kbase_gator_instr_hwcnt_dump_complete, "", "");
KSYMTAB_FUNC(kbase_gator_instr_hwcnt_dump_irq, "", "");
KSYMTAB_FUNC(kbase_mem_pool_set_max_size, "", "");
KSYMTAB_FUNC(kbase_context_debugfs_init, "", "");
KSYMTAB_FUNC(kbase_context_debugfs_term, "", "");
KSYMTAB_FUNC(kbase_create_context, "", "");
KSYMTAB_FUNC(kbase_destroy_context, "", "");
KSYMTAB_FUNC(kbase_device_get_list, "", "");
KSYMTAB_FUNC(kbase_device_put_list, "", "");
KSYMTAB_FUNC(kbase_reg_write, "", "");
KSYMTAB_FUNC(kbase_reg_read, "", "");
KSYMTAB_FUNC(kbase_synchronize_irqs, "", "");
KSYMTAB_FUNC(kbase_pm_wait_for_poweroff_complete, "", "");
KSYMTAB_FUNC(kbase_hwaccess_pm_halt, "", "");
KSYMTAB_FUNC(kbase_pm_set_debug_core_mask, "", "");
KSYMTAB_DATA(corestack_driver_control, "", "");
KSYMTAB_FUNC(kbase_pm_get_present_cores, "", "");
KSYMTAB_FUNC(kbase_pm_get_active_cores, "", "");
KSYMTAB_FUNC(kbase_pm_get_trans_cores, "", "");
KSYMTAB_FUNC(kbase_pm_get_ready_cores, "", "");
KSYMTAB_FUNC(kbase_pm_wait_for_desired_state, "", "");
KSYMTAB_FUNC(kbase_pm_enable_interrupts, "", "");
KSYMTAB_FUNC(kbase_pm_disable_interrupts, "", "");
KSYMTAB_FUNC(kbase_pm_clock_on, "", "");
KSYMTAB_FUNC(kbase_pm_clock_off, "", "");
KSYMTAB_FUNC(kbase_pm_reset_done, "", "");
KSYMTAB_FUNC(kbase_pm_request_gpu_cycle_counter, "", "");
KSYMTAB_FUNC(kbase_pm_request_gpu_cycle_counter_l2_is_on, "", "");
KSYMTAB_FUNC(kbase_pm_release_gpu_cycle_counter, "", "");
KSYMTAB_FUNC(kbasep_pm_metrics_init, "", "");
KSYMTAB_FUNC(kbasep_pm_metrics_term, "", "");
KSYMTAB_FUNC(kbase_pm_get_dvfs_metrics, "", "");
KSYMTAB_FUNC(kbase_pm_metrics_is_active, "", "");
KSYMTAB_FUNC(kbase_devfreq_set_core_mask, "", "");
KSYMTAB_FUNC(kbase_pm_ca_get_core_mask, "", "");
KSYMTAB_DATA(kbase_pm_always_on_policy_ops, "", "");
KSYMTAB_DATA(kbase_pm_coarse_demand_policy_ops, "", "");
KSYMTAB_FUNC(kbase_pm_list_policies, "", "");
KSYMTAB_FUNC(kbase_pm_get_policy, "", "");
KSYMTAB_FUNC(kbase_pm_set_policy, "", "");
KSYMTAB_FUNC(kbase_clk_rate_trace_manager_notify_all, "", "");
KSYMTAB_FUNC(kbase_mmu_insert_pages, "", "");
KSYMTAB_FUNC(kbase_mmu_update, "", "");
KSYMTAB_FUNC(kbase_mmu_disable, "", "");
KSYMTAB_FUNC(kbase_mmu_teardown_pages, "", "");
KSYMTAB_FUNC(kbase_mmu_report_mcu_as_fault_and_reset, "", "");
KSYMTAB_FUNC(kbase_mmu_gpu_fault_interrupt, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_get_trace_buffer, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_trace_buffer_get_trace_enable_bits_count, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_trace_buffer_update_trace_enable_bit, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_trace_buffer_is_empty, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_trace_buffer_read_data, "", "");
KSYMTAB_FUNC(kbase_csf_firmware_trace_buffers_dump, "", "");
KSYMTAB_FUNC(kbase_csf_scheduler_group_copy_suspend_buf, "", "");
KSYMTAB_FUNC(kbase_csf_scheduler_pm_suspend, "", "");
KSYMTAB_FUNC(kbase_csf_scheduler_pm_resume, "", "");
KSYMTAB_FUNC(kbase_csf_scheduler_pm_active, "", "");
KSYMTAB_FUNC(kbase_csf_scheduler_pm_idle, "", "");
KSYMTAB_FUNC(kbase_reset_gpu_prevent_and_wait, "", "");
KSYMTAB_FUNC(kbase_reset_gpu_allow, "", "");
KSYMTAB_FUNC(kbase_prepare_to_reset_gpu, "", "");
KSYMTAB_FUNC(kbase_reset_gpu, "", "");
KSYMTAB_FUNC(kbase_reset_gpu_wait, "", "");
KSYMTAB_FUNC(kbase_ipa_control_init, "", "");
KSYMTAB_FUNC(kbase_ipa_control_term, "", "");
KSYMTAB_FUNC(kbase_ipa_control_register, "", "");
KSYMTAB_FUNC(kbase_ipa_control_unregister, "", "");
KSYMTAB_FUNC(kbase_ipa_control_query, "", "");
KSYMTAB_FUNC(kbase_ipa_control_handle_gpu_reset_pre, "", "");
KSYMTAB_FUNC(kbase_ipa_control_handle_gpu_reset_post, "", "");
KSYMTAB_DATA(kbase_simple_ipa_model_ops, "", "");
KSYMTAB_FUNC(kbase_ipa_model_ops_find, "", "");
KSYMTAB_FUNC(kbase_ipa_model_name_from_id, "", "");
KSYMTAB_FUNC(kbase_ipa_term_model, "", "");
KSYMTAB_FUNC(kbase_ipa_init_model, "", "");
KSYMTAB_FUNC(kbase_ipa_init, "", "");
KSYMTAB_FUNC(kbase_ipa_term, "", "");
KSYMTAB_FUNC(kbase_get_real_power_locked, "", "");
KSYMTAB_FUNC(kbase_get_real_power, "", "");
KSYMTAB_DATA(kbase_ipa_power_model_ops, "", "");
KSYMTAB_DATA(kbase_todx_ipa_model_ops, "", "");
KSYMTAB_DATA(kbase_lodx_ipa_model_ops, "", "");

SYMBOL_CRC(mtk_common_rate_change_notify_fp, 0xa3392647, "");
SYMBOL_CRC(MTKGPUPower_model_start, 0x018f6c00, "");
SYMBOL_CRC(MTKGPUPower_model_start_swpm, 0x337121ee, "");
SYMBOL_CRC(MTKGPUPower_model_stop, 0x60720316, "");
SYMBOL_CRC(MTKGPUPower_model_suspend, 0xf9daa225, "");
SYMBOL_CRC(MTKGPUPower_model_resume, 0x8708ecc8, "");
SYMBOL_CRC(kbase_sync_single_for_device, 0x5358e41a, "");
SYMBOL_CRC(kbase_sync_single_for_cpu, 0x5265c706, "");
SYMBOL_CRC(kbase_region_tracker_find_region_enclosing_address, 0xd2fcd6da, "");
SYMBOL_CRC(kbase_region_tracker_find_region_base_address, 0xe6a25099, "");
SYMBOL_CRC(kbase_remove_va_region, 0x2b48bf86, "");
SYMBOL_CRC(kbase_add_va_region, 0x7a306e1e, "");
SYMBOL_CRC(kbase_mem_term, 0x27226478, "");
SYMBOL_CRC(kbase_alloc_free_region, 0xa44083fa, "");
SYMBOL_CRC(kbase_free_alloced_region, 0x6353384b, "");
SYMBOL_CRC(kbase_gpu_mmap, 0xd3cf4282, "");
SYMBOL_CRC(kbasep_find_enclosing_cpu_mapping_offset, 0x8fc430a6, "");
SYMBOL_CRC(kbasep_find_enclosing_gpu_mapping_start_and_offset, 0x4128bbc7, "");
SYMBOL_CRC(kbase_sync_now, 0xb47aca17, "");
SYMBOL_CRC(kbase_mem_free_region, 0x4f9b8004, "");
SYMBOL_CRC(kbase_mem_free, 0xaa5140e3, "");
SYMBOL_CRC(kbase_free_phy_pages_helper_locked, 0xdb9c8120, "");
SYMBOL_CRC(kbase_mem_kref_free, 0xcce0ab6d, "");
SYMBOL_CRC(kbase_alloc_phy_pages, 0xb842df4c, "");
SYMBOL_CRC(kbase_gpu_vm_lock, 0x53c0dbaf, "");
SYMBOL_CRC(kbase_gpu_vm_unlock, 0x41036626, "");
SYMBOL_CRC(kbase_pm_context_active, 0x7bd0ba74, "");
SYMBOL_CRC(kbase_pm_context_idle, 0x1a55c3e1, "");
SYMBOL_CRC(kbasep_debug_assert_call_hook, 0x22b1b7f3, "");
SYMBOL_CRC(kbase_mem_alloc, 0x5c474ac5, "");
SYMBOL_CRC(kbase_context_mmap, 0x5b06573c, "");
SYMBOL_CRC(kbase_vmap, 0xb23a5bcf, "");
SYMBOL_CRC(kbase_vunmap, 0xb0661259, "");
SYMBOL_CRC(kbase_find_device, 0x94ea91e4, "");
SYMBOL_CRC(kbase_release_device, 0x27a7668b, "");
SYMBOL_CRC(_kbase_event_wakeup, 0x6f76b99a, "");
SYMBOL_CRC(kbase_event_pending, 0xba2489ce, "");
SYMBOL_CRC(kbase_disjoint_event_get, 0x8133af2f, "");
SYMBOL_CRC(kbase_gator_hwcnt_init_names, 0xe1c1fad5, "");
SYMBOL_CRC(kbase_gator_hwcnt_term_names, 0x06b41b89, "");
SYMBOL_CRC(kbase_gator_hwcnt_init, 0x3ef2d576, "");
SYMBOL_CRC(kbase_gator_hwcnt_term, 0x4d53cdf0, "");
SYMBOL_CRC(kbase_gator_instr_hwcnt_dump_complete, 0x1fe1fc52, "");
SYMBOL_CRC(kbase_gator_instr_hwcnt_dump_irq, 0x1daa004c, "");
SYMBOL_CRC(kbase_mem_pool_set_max_size, 0x5a491c11, "");
SYMBOL_CRC(kbase_context_debugfs_init, 0xac45ced5, "");
SYMBOL_CRC(kbase_context_debugfs_term, 0x9664f11f, "");
SYMBOL_CRC(kbase_create_context, 0xa3ba2848, "");
SYMBOL_CRC(kbase_destroy_context, 0x7ca1cce2, "");
SYMBOL_CRC(kbase_device_get_list, 0x0bc02c1d, "");
SYMBOL_CRC(kbase_device_put_list, 0xb75b5f90, "");
SYMBOL_CRC(kbase_reg_write, 0xd1a9d052, "");
SYMBOL_CRC(kbase_reg_read, 0x71e6aa20, "");
SYMBOL_CRC(kbase_synchronize_irqs, 0xb51a2d80, "");
SYMBOL_CRC(kbase_pm_wait_for_poweroff_complete, 0x46c14719, "");
SYMBOL_CRC(kbase_hwaccess_pm_halt, 0xa9a6b887, "");
SYMBOL_CRC(kbase_pm_set_debug_core_mask, 0xdbdb6206, "");
SYMBOL_CRC(corestack_driver_control, 0x09cb393c, "");
SYMBOL_CRC(kbase_pm_get_present_cores, 0xc569b1a5, "");
SYMBOL_CRC(kbase_pm_get_active_cores, 0xfce53daa, "");
SYMBOL_CRC(kbase_pm_get_trans_cores, 0x5bfabddb, "");
SYMBOL_CRC(kbase_pm_get_ready_cores, 0x427aff12, "");
SYMBOL_CRC(kbase_pm_wait_for_desired_state, 0x3fe6b3e4, "");
SYMBOL_CRC(kbase_pm_enable_interrupts, 0x064cf43d, "");
SYMBOL_CRC(kbase_pm_disable_interrupts, 0x9025c457, "");
SYMBOL_CRC(kbase_pm_clock_on, 0x64cdc6a6, "");
SYMBOL_CRC(kbase_pm_clock_off, 0x1452fddf, "");
SYMBOL_CRC(kbase_pm_reset_done, 0x547a4e7f, "");
SYMBOL_CRC(kbase_pm_request_gpu_cycle_counter, 0x96867d64, "");
SYMBOL_CRC(kbase_pm_request_gpu_cycle_counter_l2_is_on, 0xaefe8bb9, "");
SYMBOL_CRC(kbase_pm_release_gpu_cycle_counter, 0xd6b3773c, "");
SYMBOL_CRC(kbasep_pm_metrics_init, 0x7cfcae37, "");
SYMBOL_CRC(kbasep_pm_metrics_term, 0xe5127ae6, "");
SYMBOL_CRC(kbase_pm_get_dvfs_metrics, 0xb36308c4, "");
SYMBOL_CRC(kbase_pm_metrics_is_active, 0x8fa7c088, "");
SYMBOL_CRC(kbase_devfreq_set_core_mask, 0x2fb68727, "");
SYMBOL_CRC(kbase_pm_ca_get_core_mask, 0x0607b059, "");
SYMBOL_CRC(kbase_pm_always_on_policy_ops, 0x68e100c5, "");
SYMBOL_CRC(kbase_pm_coarse_demand_policy_ops, 0xc2b35bdc, "");
SYMBOL_CRC(kbase_pm_list_policies, 0xbe9c35ce, "");
SYMBOL_CRC(kbase_pm_get_policy, 0xc95d9722, "");
SYMBOL_CRC(kbase_pm_set_policy, 0x1292ef57, "");
SYMBOL_CRC(kbase_clk_rate_trace_manager_notify_all, 0x2197653b, "");
SYMBOL_CRC(kbase_mmu_insert_pages, 0xff0429b2, "");
SYMBOL_CRC(kbase_mmu_update, 0xd9f11856, "");
SYMBOL_CRC(kbase_mmu_disable, 0x31315903, "");
SYMBOL_CRC(kbase_mmu_teardown_pages, 0x82cbf62f, "");
SYMBOL_CRC(kbase_mmu_report_mcu_as_fault_and_reset, 0xf354e6eb, "");
SYMBOL_CRC(kbase_mmu_gpu_fault_interrupt, 0x80a7bcb8, "");
SYMBOL_CRC(kbase_csf_firmware_get_trace_buffer, 0x9ff647c7, "");
SYMBOL_CRC(kbase_csf_firmware_trace_buffer_get_trace_enable_bits_count, 0xf439af7c, "");
SYMBOL_CRC(kbase_csf_firmware_trace_buffer_update_trace_enable_bit, 0xc472d50b, "");
SYMBOL_CRC(kbase_csf_firmware_trace_buffer_is_empty, 0x0acbe7c4, "");
SYMBOL_CRC(kbase_csf_firmware_trace_buffer_read_data, 0xd9a045db, "");
SYMBOL_CRC(kbase_csf_firmware_trace_buffers_dump, 0x6fa21e9c, "");
SYMBOL_CRC(kbase_csf_scheduler_group_copy_suspend_buf, 0x770d037a, "");
SYMBOL_CRC(kbase_csf_scheduler_pm_suspend, 0x56f9efec, "");
SYMBOL_CRC(kbase_csf_scheduler_pm_resume, 0xf49e0506, "");
SYMBOL_CRC(kbase_csf_scheduler_pm_active, 0x2bd4dbae, "");
SYMBOL_CRC(kbase_csf_scheduler_pm_idle, 0xc2cc4403, "");
SYMBOL_CRC(kbase_reset_gpu_prevent_and_wait, 0xf0899dab, "");
SYMBOL_CRC(kbase_reset_gpu_allow, 0x07653b5b, "");
SYMBOL_CRC(kbase_prepare_to_reset_gpu, 0x2df14469, "");
SYMBOL_CRC(kbase_reset_gpu, 0x9c96aee6, "");
SYMBOL_CRC(kbase_reset_gpu_wait, 0x72d1ce40, "");
SYMBOL_CRC(kbase_ipa_control_init, 0xd03dfed9, "");
SYMBOL_CRC(kbase_ipa_control_term, 0x9d7e7bd5, "");
SYMBOL_CRC(kbase_ipa_control_register, 0xc5b85c78, "");
SYMBOL_CRC(kbase_ipa_control_unregister, 0x6475f5b7, "");
SYMBOL_CRC(kbase_ipa_control_query, 0x2de01499, "");
SYMBOL_CRC(kbase_ipa_control_handle_gpu_reset_pre, 0xf98b995b, "");
SYMBOL_CRC(kbase_ipa_control_handle_gpu_reset_post, 0xaf6213db, "");
SYMBOL_CRC(kbase_simple_ipa_model_ops, 0x2c0685af, "");
SYMBOL_CRC(kbase_ipa_model_ops_find, 0x3bdb351c, "");
SYMBOL_CRC(kbase_ipa_model_name_from_id, 0x3a9a7b57, "");
SYMBOL_CRC(kbase_ipa_term_model, 0x47c5e004, "");
SYMBOL_CRC(kbase_ipa_init_model, 0x7918dc34, "");
SYMBOL_CRC(kbase_ipa_init, 0xb1b3bdc4, "");
SYMBOL_CRC(kbase_ipa_term, 0x44def430, "");
SYMBOL_CRC(kbase_get_real_power_locked, 0x84118358, "");
SYMBOL_CRC(kbase_get_real_power, 0x1715bbb3, "");
SYMBOL_CRC(kbase_ipa_power_model_ops, 0xbe397aa7, "");
SYMBOL_CRC(kbase_todx_ipa_model_ops, 0xfb7ed903, "");
SYMBOL_CRC(kbase_lodx_ipa_model_ops, 0xe19dff8c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xfb01b4e5, "gpufreq_bringup" },
	{ 0x83a878ce, "gpufreq_commit" },
	{ 0xf591cac9, "ged_dvfs_get_last_commit_idx" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0x92997ed8, "_printk" },
	{ 0xb4028d67, "proc_create" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc2fa1ae0, "gpufreq_get_cur_oppidx" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0x3692d973, "mtk_notify_gpu_freq_change_fp" },
	{ 0x1f1724b1, "ged_dvfs_cal_gpu_utilization_ex_fp" },
	{ 0xe4931974, "ged_dvfs_gpu_freq_commit_fp" },
	{ 0xe76b433c, "ged_dvfs_set_gpu_core_mask_fp" },
	{ 0x401167cc, "_dev_info" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2ae5231c, "devfreq_add_governor" },
	{ 0x0bfda5a8, "gpufreq_get_cur_freq" },
	{ 0xd7f5c83d, "devfreq_remove_governor" },
	{ 0xad50fbe4, "devfreq_monitor_start" },
	{ 0xe0edb163, "devfreq_monitor_stop" },
	{ 0x91cbcd2a, "devfreq_update_interval" },
	{ 0xa0914291, "devfreq_monitor_suspend" },
	{ 0x34dca902, "devfreq_monitor_resume" },
	{ 0xef55c1b7, "gpufreq_set_limit" },
	{ 0x1ce31752, "gpufreq_get_leakage_power" },
	{ 0xd887beae, "gpufreq_get_dynamic_power" },
	{ 0x037a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x4f86ba0f, "mtk_get_gpu_pmu_init_fp" },
	{ 0xd8d5d4a4, "mtk_get_gpu_pmu_deinit_fp" },
	{ 0x48b99f36, "mtk_get_gpu_pmu_swapnreset_fp" },
	{ 0x577190b7, "mtk_get_gpu_pmu_swapnreset_stop_fp" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa9ae58c9, "mtk_ltr_gpu_pmu_start_fp" },
	{ 0x26dbd395, "mtk_ltr_gpu_pmu_stop_fp" },
	{ 0x4e1cc5c4, "mtk_swpm_gpu_pm_start_fp" },
	{ 0x3b0da3a7, "mtk_set_gpu_idle_fp" },
	{ 0x06a043ba, "mtk_notify_gpu_power_change" },
	{ 0xcca965ad, "ged_dvfs_gpu_clock_switch_notify" },
	{ 0xf43c8e9e, "gpufreq_power_control" },
	{ 0xbc5ce545, "aee_rr_rec_gpu_dvfs_status" },
	{ 0x35806b02, "aee_rr_curr_gpu_dvfs_status" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x80f53944, "regulator_get_optional" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x32df1fff, "devm_clk_get_optional" },
	{ 0x2353930d, "clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xd679e36d, "__dma_sync_single_for_device" },
	{ 0x019f121b, "__dma_sync_single_for_cpu" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xff058995, "try_module_get" },
	{ 0xe89013ef, "module_put" },
	{ 0x999e8297, "vfree" },
	{ 0x8fc545b9, "dma_buf_unmap_attachment" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0xd352f45d, "unpin_user_page" },
	{ 0x32dc0f64, "pin_user_pages_remote" },
	{ 0xece784c2, "rb_first" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xfd588b8e, "find_vma_intersection" },
	{ 0x448af6f4, "__traceiter_gpu_mem_total" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x05a347eb, "__mmdrop" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x9f6e3039, "set_page_dirty_lock" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0xc0b37761, "__tracepoint_gpu_mem_total" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0469683, "__alloc_pages_noprof" },
	{ 0x70c2b594, "__free_pages" },
	{ 0x19c8cbf0, "vmf_insert_pfn_prot" },
	{ 0x82667f4d, "gpufreq_get_shader_present" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x521dad52, "param_ops_byte" },
	{ 0x4361b3fa, "param_array_ops" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xc2865ca9, "anon_inode_getfd" },
	{ 0x5bc52a09, "mtk_get_gpu_loading" },
	{ 0xdffed6fb, "gpufreq_get_cur_volt" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x8df82a4c, "trace_print_array_seq" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x4d296494, "__arch_clear_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x16b656de, "unmap_mapping_range" },
	{ 0xd486fb9c, "downgrade_write" },
	{ 0x6b50e951, "up_read" },
	{ 0x3355da1c, "down_read" },
	{ 0x322c9d3b, "rt_mutex_lock" },
	{ 0x9a4f004e, "rt_mutex_unlock" },
	{ 0x9083187d, "dma_buf_mmap" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0x86de4a10, "dma_buf_map_attachment" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x188ead67, "ww_mutex_lock" },
	{ 0x191c4b97, "ww_mutex_unlock" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x3ebbc7f7, "pin_user_pages" },
	{ 0x51cfe4ac, "get_user_pages" },
	{ 0x68db9aa8, "__vma_start_write" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7ee25d67, "vmap" },
	{ 0x94961283, "vunmap" },
	{ 0x621ae253, "fput" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x4770b00e, "kthread_bind_mask" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x7e688f68, "sched_setscheduler" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xc2749a62, "get_device" },
	{ 0x234c9de3, "put_device" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x99fe66ff, "regulator_put" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x7af1af44, "dev_pm_opp_of_remove_table" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0xc0ce7521, "__request_region" },
	{ 0x6711919a, "__release_region" },
	{ 0x3757b0bd, "dev_pm_opp_set_config" },
	{ 0x32295715, "dev_pm_opp_clear_config" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x3183b4d6, "mtk_bandwidth_resource_init" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0xfe31a642, "trace_output_call" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x9591bf2b, "iomem_resource" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x0c3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x63991289, "find_get_pid" },
	{ 0xc0a54449, "pid_task" },
	{ 0x5aa25ab9, "put_pid" },
	{ 0xe5010018, "__put_task_struct" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x74e14dc8, "register_oom_notifier" },
	{ 0x1c400fa0, "unregister_oom_notifier" },
	{ 0x25758a2c, "misc_register" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x819bebd4, "mutex_is_locked" },
	{ 0x3dfdda96, "dcs_enable" },
	{ 0x6d264fa1, "gpufreq_fake_mtcmos_control" },
	{ 0x05a5e1f2, "gpufreq_pdca_config" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fdcc90, "of_machine_compatible_match" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x568203e7, "devfreq_add_device" },
	{ 0x225c1c05, "devfreq_remove_device" },
	{ 0x788cc6d9, "devfreq_register_opp_notifier" },
	{ 0xbdefe20d, "of_devfreq_cooling_register_power" },
	{ 0x4e526c85, "devfreq_unregister_opp_notifier" },
	{ 0x8ed406db, "devfreq_cooling_unregister" },
	{ 0x6d02d5ec, "dev_pm_opp_find_freq_exact" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0xb4084128, "devfreq_recommended_opp" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0x252c7c6e, "dev_pm_opp_find_freq_floor" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x6b201699, "of_find_property" },
	{ 0x6b279ab4, "of_property_read_variable_u64_array" },
	{ 0x8f27ba6d, "devfreq_resume_device" },
	{ 0x944cab1a, "devfreq_suspend_device" },
	{ 0xcc0975fd, "rt_mutex_trylock" },
	{ 0xd1edde11, "__rt_mutex_init" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc0b10b8e, "param_get_int" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x58612a5a, "vm_unmapped_area" },
	{ 0xefa14aff, "mm_get_unmapped_area" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0xfdd0214d, "kobject_init_and_add" },
	{ 0xbabc5cdd, "kobject_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcb456737, "__kthread_init_worker" },
	{ 0xfcbb845b, "kthread_cancel_work_sync" },
	{ 0xbc704fe1, "kthread_flush_worker" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x40c152f7, "shmem_file_setup" },
	{ 0x716425b7, "kthread_queue_work" },
	{ 0xe7a991ce, "kthread_mod_delayed_work" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x0f86f560, "kthread_delayed_work_timer_fn" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x2830bb70, "kthread_cancel_delayed_work_sync" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x06d11488, "__bitmap_equal" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x9f7b625e, "get_user_pages_fast" },
	{ 0x70daa11e, "dma_fence_remove_callback" },
	{ 0x4909a790, "dma_fence_get_status" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0xdf115faa, "__folio_put" },
	{ 0x3d21099d, "__page_pinner_put_page" },
	{ 0xacfe4142, "page_pinner_inited" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xea124bd1, "gcd" },
	{ 0x88f5cdef, "down_read_trylock" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x3c57945c, "request_firmware" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4d924f20, "memremap" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xb24413bf, "param_ops_string" },
	{ 0xeefd2e5c, "param_ops_ulong" },
	{ 0x6ecc607e, "mem_section" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xde7e6296, "thermal_zone_get_temp" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x81beafe4, "thermal_zone_get_zone_by_name" },
	{ 0x5a921311, "strncmp" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x9166fada, "strncpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0xfb01b4e5,
	0x83a878ce,
	0xf591cac9,
	0x7518b5f0,
	0x92997ed8,
	0xb4028d67,
	0x330c0b0f,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc2fa1ae0,
	0xc8f2ae9d,
	0x173e2075,
	0x3692d973,
	0x1f1724b1,
	0xe4931974,
	0xe76b433c,
	0x401167cc,
	0xba8fbd64,
	0xb5b54b34,
	0x2ae5231c,
	0x0bfda5a8,
	0xd7f5c83d,
	0xad50fbe4,
	0xe0edb163,
	0x91cbcd2a,
	0xa0914291,
	0x34dca902,
	0xef55c1b7,
	0x1ce31752,
	0xd887beae,
	0x037a0cba,
	0xedc03953,
	0x9ec6ca96,
	0x1e6d26a8,
	0x441d0de9,
	0xe17134b6,
	0x52c5c991,
	0x40863ba1,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0x4f86ba0f,
	0xd8d5d4a4,
	0x48b99f36,
	0x577190b7,
	0x0f05f001,
	0xefe8a82e,
	0xaf56600a,
	0x51fcca8a,
	0x1cc7f053,
	0xe136f93c,
	0xa9ae58c9,
	0x26dbd395,
	0x4e1cc5c4,
	0x3b0da3a7,
	0x06a043ba,
	0xcca965ad,
	0xf43c8e9e,
	0xbc5ce545,
	0x35806b02,
	0x2396c7f0,
	0x47a915f1,
	0xeae3dfd6,
	0xb6e6d99d,
	0xb077e70a,
	0xb4ce05a5,
	0x2ccea269,
	0x1ed4c5e6,
	0xa823db6e,
	0x80f53944,
	0x57d5e131,
	0xa06ad99d,
	0x2220455c,
	0x556e4390,
	0x32df1fff,
	0x2353930d,
	0x7c9a7371,
	0x815588a6,
	0xe6de52c9,
	0x92acb4e9,
	0xd679e36d,
	0x019f121b,
	0x34db050b,
	0x75ca79b5,
	0xd35cce70,
	0xf82ec573,
	0x4d9b652b,
	0xca9360b5,
	0x7fe32873,
	0x56470118,
	0xa571f6b0,
	0xff058995,
	0xe89013ef,
	0x999e8297,
	0x8fc545b9,
	0xecbe3c62,
	0x2b3df576,
	0x03c12dfe,
	0xd352f45d,
	0x32dc0f64,
	0xece784c2,
	0xa5526619,
	0x1fec5304,
	0x0296695f,
	0x6b2dc060,
	0xfd588b8e,
	0x448af6f4,
	0xf70e4a4d,
	0x8810754a,
	0x21ea5251,
	0x05a347eb,
	0x9a835040,
	0x7e19152a,
	0xc5b6f236,
	0xff732842,
	0x9f6e3039,
	0x7cc1c7f4,
	0x9688de8b,
	0xa6f6226c,
	0xc0b37761,
	0xac594e02,
	0x2d3385d3,
	0xa0469683,
	0x70c2b594,
	0x19c8cbf0,
	0x82667f4d,
	0x9f46ced8,
	0x74c134b9,
	0x67064f1d,
	0x521dad52,
	0x4361b3fa,
	0x944375db,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xe0da6e4a,
	0x57c959d2,
	0xea82d349,
	0x102fe6de,
	0xc2865ca9,
	0x5bc52a09,
	0xdffed6fb,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x8df82a4c,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xa3783864,
	0x9714e0bb,
	0xc0b7c197,
	0xd9a5ea54,
	0x88db9f48,
	0x9a85eebb,
	0x4d296494,
	0x2be0c009,
	0xc63b0ac3,
	0xe4bbc1dd,
	0x49cd25ed,
	0x8c03d20c,
	0xccf69887,
	0x4302d0eb,
	0x28ed2847,
	0x20d81059,
	0x605d5bfa,
	0xbee3ddd5,
	0x16b656de,
	0xd486fb9c,
	0x6b50e951,
	0x3355da1c,
	0x322c9d3b,
	0x9a4f004e,
	0x9083187d,
	0xdd2ef3e5,
	0xfa501412,
	0x86de4a10,
	0xfbe215e4,
	0x188ead67,
	0x191c4b97,
	0xaaae9064,
	0xfff4bd7c,
	0x1b2fa1a9,
	0x3ebbc7f7,
	0x51cfe4ac,
	0x68db9aa8,
	0x8d522714,
	0x2469810f,
	0x7ee25d67,
	0x94961283,
	0x621ae253,
	0xba0aee2e,
	0x955b0e2e,
	0x4770b00e,
	0xce5bc4d0,
	0x7e688f68,
	0x9e400c59,
	0xf7ca28dd,
	0xc2749a62,
	0x234c9de3,
	0xb8273d0b,
	0x3d0ffa5c,
	0x99fe66ff,
	0xb57f5be6,
	0x2e1ca751,
	0xcd6bb6eb,
	0x7af1af44,
	0xc6a4a872,
	0x3b1b6444,
	0x62b33777,
	0x3667c9f1,
	0xc0ce7521,
	0x6711919a,
	0x3757b0bd,
	0x32295715,
	0x96848186,
	0x8c8569cb,
	0xbcab6ee6,
	0x3b6c41ea,
	0x222e7ce2,
	0x12db679a,
	0x3183b4d6,
	0x9166fc03,
	0x6ebe366f,
	0x6fc35f2b,
	0x8900d05a,
	0xfe31a642,
	0x94c62eb0,
	0x881d741f,
	0x1c7a01a8,
	0xe3c00b45,
	0xe80494d6,
	0x9591bf2b,
	0xcd91b127,
	0x131db64a,
	0x0c3690fc,
	0xe46021ca,
	0x3d9ee9f0,
	0x197d5b60,
	0x656e4a6e,
	0x7155bcf8,
	0xe123f3d9,
	0xaacf03c1,
	0x93d6dd8c,
	0x608741b5,
	0xddf6ad7a,
	0x25974000,
	0x63991289,
	0xc0a54449,
	0x5aa25ab9,
	0xe5010018,
	0x5be9ce07,
	0xea6f49c8,
	0x74e14dc8,
	0x1c400fa0,
	0x25758a2c,
	0xc3246938,
	0x8ddd8aad,
	0x7f02188f,
	0xf9a482f9,
	0xf5edea2e,
	0xc1514a3b,
	0xe523ad75,
	0x92d5838e,
	0x819bebd4,
	0x3dfdda96,
	0x6d264fa1,
	0x05a5e1f2,
	0x135bb7ec,
	0xcb2e80c6,
	0xb43f9365,
	0xe2fdcc90,
	0xaf7cb74b,
	0x1edb69d6,
	0x568203e7,
	0x225c1c05,
	0x788cc6d9,
	0xbdefe20d,
	0x4e526c85,
	0x8ed406db,
	0x6d02d5ec,
	0xf644e56a,
	0xb3bceb42,
	0xb4084128,
	0x76d9b876,
	0x166667b7,
	0x252c7c6e,
	0xc2a5a5eb,
	0x2077fc84,
	0x796ead29,
	0x66bcb0f8,
	0x6b201699,
	0x6b279ab4,
	0x8f27ba6d,
	0x944cab1a,
	0xcc0975fd,
	0xd1edde11,
	0x2f2c95c4,
	0x43b0c9c3,
	0xc38c83b8,
	0xc0b10b8e,
	0xc6f46339,
	0xc6cbbc89,
	0x15ba50a6,
	0x82ee90dc,
	0x98cf60b3,
	0xa916b694,
	0x58612a5a,
	0xefa14aff,
	0x2d405891,
	0x3bd2c4ce,
	0xfdd0214d,
	0xbabc5cdd,
	0xe2d5255a,
	0x167c5967,
	0xcb456737,
	0xfcbb845b,
	0xbc704fe1,
	0xb39378cc,
	0x40c152f7,
	0x716425b7,
	0xe7a991ce,
	0x53a1e8d9,
	0x0f86f560,
	0xffeedf6a,
	0xcec49a87,
	0x2830bb70,
	0x42ad47ad,
	0x37befc70,
	0xf6fc8791,
	0xf390f6f1,
	0xa084749a,
	0x06d11488,
	0x7b37d4a7,
	0x14605535,
	0xdeb99119,
	0xf61b1f04,
	0xa843805a,
	0x0f013cdc,
	0x9f7b625e,
	0x70daa11e,
	0x4909a790,
	0x628c0f8f,
	0xdf115faa,
	0x3d21099d,
	0xacfe4142,
	0x42aac25f,
	0x5c3c7387,
	0x92495308,
	0xea124bd1,
	0x88f5cdef,
	0xf5a94b83,
	0x3c57945c,
	0xa4f72277,
	0xc6d09aa9,
	0x4d924f20,
	0x9e9fdd9d,
	0xb24413bf,
	0xeefd2e5c,
	0x6ecc607e,
	0xb3f7646e,
	0xde7e6296,
	0xcc5005fe,
	0x81beafe4,
	0x5a921311,
	0xf3cdc3c6,
	0x9166fada,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"gpufreq_bringup\0"
	"gpufreq_commit\0"
	"ged_dvfs_get_last_commit_idx\0"
	"proc_mkdir\0"
	"_printk\0"
	"proc_create\0"
	"remove_proc_entry\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"gpufreq_get_cur_oppidx\0"
	"seq_printf\0"
	"seq_write\0"
	"mtk_notify_gpu_freq_change_fp\0"
	"ged_dvfs_cal_gpu_utilization_ex_fp\0"
	"ged_dvfs_gpu_freq_commit_fp\0"
	"ged_dvfs_set_gpu_core_mask_fp\0"
	"_dev_info\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"devfreq_add_governor\0"
	"gpufreq_get_cur_freq\0"
	"devfreq_remove_governor\0"
	"devfreq_monitor_start\0"
	"devfreq_monitor_stop\0"
	"devfreq_update_interval\0"
	"devfreq_monitor_suspend\0"
	"devfreq_monitor_resume\0"
	"gpufreq_set_limit\0"
	"gpufreq_get_leakage_power\0"
	"gpufreq_get_dynamic_power\0"
	"kfree\0"
	"iounmap\0"
	"ktime_get_real_ts64\0"
	"strstr\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"ioremap_prot\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"mtk_get_gpu_pmu_init_fp\0"
	"mtk_get_gpu_pmu_deinit_fp\0"
	"mtk_get_gpu_pmu_swapnreset_fp\0"
	"mtk_get_gpu_pmu_swapnreset_stop_fp\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"arm64_use_ng_mappings\0"
	"get_scmi_tinysys_info\0"
	"scmi_tinysys_common_set\0"
	"of_property_read_variable_u32_array\0"
	"mtk_ltr_gpu_pmu_start_fp\0"
	"mtk_ltr_gpu_pmu_stop_fp\0"
	"mtk_swpm_gpu_pm_start_fp\0"
	"mtk_set_gpu_idle_fp\0"
	"mtk_notify_gpu_power_change\0"
	"ged_dvfs_gpu_clock_switch_notify\0"
	"gpufreq_power_control\0"
	"aee_rr_rec_gpu_dvfs_status\0"
	"aee_rr_curr_gpu_dvfs_status\0"
	"clk_set_parent\0"
	"_dev_warn\0"
	"__const_udelay\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"_dev_err\0"
	"devm_regulator_get_optional\0"
	"of_find_node_by_name\0"
	"of_find_device_by_node\0"
	"regulator_get_optional\0"
	"regulator_enable\0"
	"regulator_get_voltage\0"
	"regulator_set_voltage\0"
	"clk_get_rate\0"
	"devm_clk_get_optional\0"
	"clk_get\0"
	"clk_prepare\0"
	"clk_enable\0"
	"param_ops_bool\0"
	"param_ops_uint\0"
	"__dma_sync_single_for_device\0"
	"__dma_sync_single_for_cpu\0"
	"_raw_spin_lock_irqsave\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_irqrestore\0"
	"rb_prev\0"
	"rb_erase\0"
	"rb_next\0"
	"rb_replace_node\0"
	"__warn_printk\0"
	"__mutex_init\0"
	"try_module_get\0"
	"module_put\0"
	"vfree\0"
	"dma_buf_unmap_attachment\0"
	"dma_buf_detach\0"
	"dma_buf_put\0"
	"cancel_work_sync\0"
	"unpin_user_page\0"
	"pin_user_pages_remote\0"
	"rb_first\0"
	"rb_insert_color\0"
	"__of_parse_phandle_with_args\0"
	"refcount_warn_saturate\0"
	"dump_stack\0"
	"find_vma_intersection\0"
	"__traceiter_gpu_mem_total\0"
	"preempt_schedule_notrace\0"
	"_find_first_bit\0"
	"__bitmap_weight\0"
	"__mmdrop\0"
	"__list_del_entry_valid_or_report\0"
	"__list_add_valid_or_report\0"
	"queue_work_on\0"
	"dma_unmap_page_attrs\0"
	"set_page_dirty_lock\0"
	"dma_map_page_attrs\0"
	"memstart_addr\0"
	"kasan_flag_enabled\0"
	"__tracepoint_gpu_mem_total\0"
	"__cpu_online_mask\0"
	"system_wq\0"
	"__alloc_pages_noprof\0"
	"__free_pages\0"
	"vmf_insert_pfn_prot\0"
	"gpufreq_get_shader_present\0"
	"__sw_hweight64\0"
	"__sw_hweight32\0"
	"of_property_read_variable_u8_array\0"
	"param_ops_byte\0"
	"param_array_ops\0"
	"_totalram_pages\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"anon_inode_getfd\0"
	"mtk_get_gpu_loading\0"
	"gpufreq_get_cur_volt\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_print_array_seq\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run2\0"
	"ktime_get_raw\0"
	"hrtimer_start_range_ns\0"
	"__init_waitqueue_head\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_clear_user\0"
	"__arch_copy_from_user\0"
	"remap_pfn_range\0"
	"kimage_voffset\0"
	"alloc_workqueue\0"
	"destroy_workqueue\0"
	"get_free_pages_noprof\0"
	"free_pages\0"
	"down_write\0"
	"up_write\0"
	"cache_line_size\0"
	"vzalloc_noprof\0"
	"unmap_mapping_range\0"
	"downgrade_write\0"
	"up_read\0"
	"down_read\0"
	"rt_mutex_lock\0"
	"rt_mutex_unlock\0"
	"dma_buf_mmap\0"
	"__dma_sync_sg_for_device\0"
	"__dma_sync_sg_for_cpu\0"
	"dma_buf_map_attachment\0"
	"sg_next\0"
	"ww_mutex_lock\0"
	"ww_mutex_unlock\0"
	"dma_buf_get\0"
	"dma_buf_attach\0"
	"vmalloc_noprof\0"
	"pin_user_pages\0"
	"get_user_pages\0"
	"__vma_start_write\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"vmap\0"
	"vunmap\0"
	"fput\0"
	"kthread_create_on_node\0"
	"kthread_worker_fn\0"
	"kthread_bind_mask\0"
	"wake_up_process\0"
	"sched_setscheduler\0"
	"platform_get_irq_byname\0"
	"platform_get_irq\0"
	"get_device\0"
	"put_device\0"
	"__wake_up_sync\0"
	"platform_get_resource\0"
	"regulator_put\0"
	"of_clk_get\0"
	"clk_put\0"
	"dev_pm_opp_of_add_table\0"
	"dev_pm_opp_of_remove_table\0"
	"__clk_is_enabled\0"
	"of_get_property\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"__request_region\0"
	"__release_region\0"
	"dev_pm_opp_set_config\0"
	"dev_pm_opp_clear_config\0"
	"scnprintf\0"
	"kstrtoint\0"
	"sscanf\0"
	"kstrtouint\0"
	"sysfs_streq\0"
	"__platform_driver_register\0"
	"mtk_bandwidth_resource_init\0"
	"__flush_workqueue\0"
	"ktime_get_mono_fast_ns\0"
	"platform_driver_unregister\0"
	"trace_print_symbols_seq\0"
	"trace_output_call\0"
	"trace_print_flags_seq\0"
	"bpf_trace_run3\0"
	"bpf_trace_run4\0"
	"bpf_trace_run5\0"
	"bpf_trace_run1\0"
	"iomem_resource\0"
	"system_highpri_wq\0"
	"system_long_wq\0"
	"_raw_spin_lock_bh\0"
	"_raw_spin_unlock_bh\0"
	"clear_page\0"
	"dma_fence_default_wait\0"
	"snprintf\0"
	"sync_file_get_fence\0"
	"dma_fence_release\0"
	"dma_fence_signal\0"
	"complete_all\0"
	"__init_swait_queue_head\0"
	"completion_done\0"
	"wait_for_completion\0"
	"find_get_pid\0"
	"pid_task\0"
	"put_pid\0"
	"__put_task_struct\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"register_oom_notifier\0"
	"unregister_oom_notifier\0"
	"misc_register\0"
	"misc_deregister\0"
	"schedule_timeout\0"
	"__msecs_to_jiffies\0"
	"msleep\0"
	"___ratelimit\0"
	"free_irq\0"
	"synchronize_irq\0"
	"request_threaded_irq\0"
	"mutex_is_locked\0"
	"dcs_enable\0"
	"gpufreq_fake_mtcmos_control\0"
	"gpufreq_pdca_config\0"
	"hrtimer_forward\0"
	"hrtimer_active\0"
	"ktime_get\0"
	"of_machine_compatible_match\0"
	"of_property_read_string\0"
	"ktime_get_raw_ts64\0"
	"devfreq_add_device\0"
	"devfreq_remove_device\0"
	"devfreq_register_opp_notifier\0"
	"of_devfreq_cooling_register_power\0"
	"devfreq_unregister_opp_notifier\0"
	"devfreq_cooling_unregister\0"
	"dev_pm_opp_find_freq_exact\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"devfreq_recommended_opp\0"
	"clk_set_rate\0"
	"dev_pm_opp_get_opp_count\0"
	"dev_pm_opp_find_freq_floor\0"
	"dev_pm_opp_find_freq_ceil\0"
	"of_device_is_compatible\0"
	"of_get_next_available_child\0"
	"of_property_read_u64\0"
	"of_find_property\0"
	"of_property_read_variable_u64_array\0"
	"devfreq_resume_device\0"
	"devfreq_suspend_device\0"
	"rt_mutex_trylock\0"
	"__rt_mutex_init\0"
	"flush_work\0"
	"preempt_schedule\0"
	"mod_timer\0"
	"param_get_int\0"
	"init_timer_key\0"
	"capable\0"
	"jiffies\0"
	"timer_delete_sync\0"
	"strlen\0"
	"strnlen\0"
	"vm_unmapped_area\0"
	"mm_get_unmapped_area\0"
	"kobject_create_and_add\0"
	"kobject_put\0"
	"kobject_init_and_add\0"
	"kobject_del\0"
	"strcmp\0"
	"print_hex_dump\0"
	"__kthread_init_worker\0"
	"kthread_cancel_work_sync\0"
	"kthread_flush_worker\0"
	"kthread_stop\0"
	"shmem_file_setup\0"
	"kthread_queue_work\0"
	"kthread_mod_delayed_work\0"
	"_find_next_bit\0"
	"kthread_delayed_work_timer_fn\0"
	"delayed_work_timer_fn\0"
	"cancel_delayed_work_sync\0"
	"kthread_cancel_delayed_work_sync\0"
	"queue_delayed_work_on\0"
	"jiffies_to_msecs\0"
	"__bitmap_xor\0"
	"__bitmap_andnot\0"
	"__bitmap_or\0"
	"__bitmap_equal\0"
	"_find_first_zero_bit\0"
	"dma_fence_context_alloc\0"
	"dma_fence_init\0"
	"sync_file_create\0"
	"get_unused_fd_flags\0"
	"fd_install\0"
	"get_user_pages_fast\0"
	"dma_fence_remove_callback\0"
	"dma_fence_get_status\0"
	"dma_fence_add_callback\0"
	"__folio_put\0"
	"__page_pinner_put_page\0"
	"page_pinner_inited\0"
	"sysfs_create_file_ns\0"
	"kstrtoull\0"
	"sysfs_remove_file_ns\0"
	"gcd\0"
	"down_read_trylock\0"
	"__init_rwsem\0"
	"request_firmware\0"
	"_dev_notice\0"
	"release_firmware\0"
	"memremap\0"
	"memunmap\0"
	"param_ops_string\0"
	"param_ops_ulong\0"
	"mem_section\0"
	"kthread_should_stop\0"
	"thermal_zone_get_temp\0"
	"msleep_interruptible\0"
	"thermal_zone_get_zone_by_name\0"
	"strncmp\0"
	"of_find_compatible_node\0"
	"strncpy\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpufreq_wrapper,ged,mtk_gpu_hal,tinysys-scmi,mrdump");

MODULE_ALIAS("of:N*T*Carm,mali-valhall");
MODULE_ALIAS("of:N*T*Carm,mali-valhallC*");

MODULE_INFO(srcversion, "EDFAD12C9389244425904E6");

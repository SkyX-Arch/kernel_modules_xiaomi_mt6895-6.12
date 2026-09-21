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

KSYMTAB_FUNC(xhci_enable_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_disable_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_set_interrupter_moderation_, "_gpl", "");
KSYMTAB_FUNC(xhci_run_, "_gpl", "");
KSYMTAB_FUNC(xhci_stop_, "_gpl", "");
KSYMTAB_FUNC(xhci_shutdown_, "_gpl", "");
KSYMTAB_FUNC(xhci_suspend_, "_gpl", "");
KSYMTAB_FUNC(xhci_resume_, "_gpl", "");
KSYMTAB_FUNC(xhci_get_endpoint_index_, "_gpl", "");
KSYMTAB_FUNC(xhci_get_endpoint_address_, "_gpl", "");
KSYMTAB_FUNC(xhci_drop_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_add_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_stop_endpoint_sync_, "_gpl", "");
KSYMTAB_FUNC(xhci_check_bandwidth_, "_gpl", "");
KSYMTAB_FUNC(xhci_reset_bandwidth_, "_gpl", "");
KSYMTAB_FUNC(xhci_address_device_, "_gpl", "");
KSYMTAB_FUNC(xhci_vendor_get_ops_, "_gpl", "");
KSYMTAB_FUNC(xhci_update_hub_device_, "_gpl", "");
KSYMTAB_FUNC(xhci_gen_setup_, "_gpl", "");
KSYMTAB_FUNC(xhci_init_driver_, "_gpl", "");
KSYMTAB_FUNC(xhci_segment_free_, "_gpl", "");
KSYMTAB_FUNC(xhci_link_segments_, "_gpl", "");
KSYMTAB_FUNC(xhci_remove_stream_mapping_, "_gpl", "");
KSYMTAB_FUNC(xhci_ring_free_, "_gpl", "");
KSYMTAB_FUNC(xhci_initialize_ring_info_, "_gpl", "");
KSYMTAB_FUNC(xhci_ring_alloc_, "_gpl", "");
KSYMTAB_FUNC(xhci_get_slot_ctx_, "_gpl", "");
KSYMTAB_FUNC(xhci_get_ep_ctx__, "_gpl", "");
KSYMTAB_FUNC(xhci_alloc_command_, "_gpl", "");
KSYMTAB_FUNC(xhci_free_command_, "_gpl", "");
KSYMTAB_FUNC(xhci_free_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_remove_secondary_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_create_secondary_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_ext_cap_init_, "_gpl", "");
KSYMTAB_FUNC(xhci_trb_virt_to_dma_, "_gpl", "");
KSYMTAB_FUNC(xhci_ring_cmd_db_, "_gpl", "");
KSYMTAB_FUNC(xhci_msi_irq_, "_gpl", "");
KSYMTAB_FUNC(xhci_queue_stop_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_vendor_queue_command_, "_gpl", "");
KSYMTAB_FUNC(xhci_port_state_to_neutral_, "_gpl", "");
KSYMTAB_FUNC(xhci_hub_control_, "_gpl", "");
KSYMTAB_FUNC(xhci_bus_suspend_, "_gpl", "");
KSYMTAB_FUNC(xhci_bus_resume_, "_gpl", "");
KSYMTAB_FUNC(xhci_dbg_trace_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_dbg_quirks_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_dbg_quirks_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_dbg_quirks_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_dbg_init_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_dbg_init_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_dbg_init_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_urb_enqueue_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_urb_enqueue_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_urb_enqueue_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_urb_dequeue_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_urb_dequeue_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_urb_dequeue_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_handle_transfer_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_handle_transfer_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_handle_transfer_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_urb_giveback_, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_urb_giveback_, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_urb_giveback_, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_alloc_virt_device, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_alloc_virt_device, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_alloc_virt_device, "_gpl", "");
KSYMTAB_DATA(__tracepoint_xhci_free_virt_device, "_gpl", "");
KSYMTAB_FUNC(__traceiter_xhci_free_virt_device, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_xhci_free_virt_device, "_gpl", "");
KSYMTAB_FUNC(register_xhci_enum_mbrain_cb, "", "");
KSYMTAB_FUNC(unregister_xhci_enum_mbrain_cb, "", "");
KSYMTAB_FUNC(xhci_sideband_notify_ep_ring_free_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_add_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_remove_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_stop_endpoint_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_get_endpoint_buffer_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_get_event_buffer_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_create_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_remove_interrupter_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_interrupter_id_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_register_, "_gpl", "");
KSYMTAB_FUNC(xhci_sideband_unregister_, "_gpl", "");

SYMBOL_CRC(xhci_enable_interrupter_, 0x090c4ceb, "_gpl");
SYMBOL_CRC(xhci_disable_interrupter_, 0x7515092f, "_gpl");
SYMBOL_CRC(xhci_set_interrupter_moderation_, 0x85339a57, "_gpl");
SYMBOL_CRC(xhci_run_, 0xee469a35, "_gpl");
SYMBOL_CRC(xhci_stop_, 0x04fc8a2f, "_gpl");
SYMBOL_CRC(xhci_shutdown_, 0xc743753e, "_gpl");
SYMBOL_CRC(xhci_suspend_, 0x4f394515, "_gpl");
SYMBOL_CRC(xhci_resume_, 0x0b8591d8, "_gpl");
SYMBOL_CRC(xhci_get_endpoint_index_, 0x6a250d3e, "_gpl");
SYMBOL_CRC(xhci_get_endpoint_address_, 0x1cfe1913, "_gpl");
SYMBOL_CRC(xhci_drop_endpoint_, 0xb9624cc6, "_gpl");
SYMBOL_CRC(xhci_add_endpoint_, 0xa4cc44c2, "_gpl");
SYMBOL_CRC(xhci_stop_endpoint_sync_, 0xe76b28a7, "_gpl");
SYMBOL_CRC(xhci_check_bandwidth_, 0xe17322d4, "_gpl");
SYMBOL_CRC(xhci_reset_bandwidth_, 0x0dc6f4b1, "_gpl");
SYMBOL_CRC(xhci_address_device_, 0xe0cc64a5, "_gpl");
SYMBOL_CRC(xhci_vendor_get_ops_, 0x7a890a32, "_gpl");
SYMBOL_CRC(xhci_update_hub_device_, 0x5c2d7ed1, "_gpl");
SYMBOL_CRC(xhci_gen_setup_, 0xf4112988, "_gpl");
SYMBOL_CRC(xhci_init_driver_, 0x8717f132, "_gpl");
SYMBOL_CRC(xhci_segment_free_, 0x4a83c5ef, "_gpl");
SYMBOL_CRC(xhci_link_segments_, 0x96a3058a, "_gpl");
SYMBOL_CRC(xhci_remove_stream_mapping_, 0x98827a89, "_gpl");
SYMBOL_CRC(xhci_ring_free_, 0x31b53c0b, "_gpl");
SYMBOL_CRC(xhci_initialize_ring_info_, 0xa48a8fc8, "_gpl");
SYMBOL_CRC(xhci_ring_alloc_, 0x9bf4254c, "_gpl");
SYMBOL_CRC(xhci_get_slot_ctx_, 0x94b4b7e3, "_gpl");
SYMBOL_CRC(xhci_get_ep_ctx__, 0xca15eb73, "_gpl");
SYMBOL_CRC(xhci_alloc_command_, 0x74036553, "_gpl");
SYMBOL_CRC(xhci_free_command_, 0xc40acb77, "_gpl");
SYMBOL_CRC(xhci_free_interrupter_, 0x8e05ee50, "_gpl");
SYMBOL_CRC(xhci_remove_secondary_interrupter_, 0x772649be, "_gpl");
SYMBOL_CRC(xhci_create_secondary_interrupter_, 0xe2d4fb97, "_gpl");
SYMBOL_CRC(xhci_ext_cap_init_, 0x0504e8ce, "_gpl");
SYMBOL_CRC(xhci_trb_virt_to_dma_, 0x4cf1cfca, "_gpl");
SYMBOL_CRC(xhci_ring_cmd_db_, 0xd42cc830, "_gpl");
SYMBOL_CRC(xhci_msi_irq_, 0xeb8140d2, "_gpl");
SYMBOL_CRC(xhci_queue_stop_endpoint_, 0x03491a9f, "_gpl");
SYMBOL_CRC(xhci_vendor_queue_command_, 0xab5298c5, "_gpl");
SYMBOL_CRC(xhci_port_state_to_neutral_, 0x47ea9877, "_gpl");
SYMBOL_CRC(xhci_hub_control_, 0x15b713ff, "_gpl");
SYMBOL_CRC(xhci_bus_suspend_, 0x75a95df3, "_gpl");
SYMBOL_CRC(xhci_bus_resume_, 0x4cc76ea0, "_gpl");
SYMBOL_CRC(xhci_dbg_trace_, 0x44dba2de, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_dbg_quirks_, 0x01fbef3e, "_gpl");
SYMBOL_CRC(__traceiter_xhci_dbg_quirks_, 0xfa484226, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_dbg_quirks_, 0xe37b07c3, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_dbg_init_, 0x212e192b, "_gpl");
SYMBOL_CRC(__traceiter_xhci_dbg_init_, 0x26705b50, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_dbg_init_, 0x6b051489, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_urb_enqueue_, 0xbe1b2f33, "_gpl");
SYMBOL_CRC(__traceiter_xhci_urb_enqueue_, 0x64db744d, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_urb_enqueue_, 0x7df5217a, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_urb_dequeue_, 0xf40a2726, "_gpl");
SYMBOL_CRC(__traceiter_xhci_urb_dequeue_, 0x7f054f94, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_urb_dequeue_, 0x37e4296f, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_handle_transfer_, 0x1b5a2d43, "_gpl");
SYMBOL_CRC(__traceiter_xhci_handle_transfer_, 0x3b54f26b, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_handle_transfer_, 0x35485a96, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_urb_giveback_, 0x7d46eb0c, "_gpl");
SYMBOL_CRC(__traceiter_xhci_urb_giveback_, 0x35896cb3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_urb_giveback_, 0x7285fc36, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_alloc_virt_device, 0xb5f9f431, "_gpl");
SYMBOL_CRC(__traceiter_xhci_alloc_virt_device, 0x03de8dec, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_alloc_virt_device, 0x436ec01d, "_gpl");
SYMBOL_CRC(__tracepoint_xhci_free_virt_device, 0x5a47eecd, "_gpl");
SYMBOL_CRC(__traceiter_xhci_free_virt_device, 0xf396dada, "_gpl");
SYMBOL_CRC(__SCK__tp_func_xhci_free_virt_device, 0x74559918, "_gpl");
SYMBOL_CRC(register_xhci_enum_mbrain_cb, 0xa0a8b5e4, "");
SYMBOL_CRC(unregister_xhci_enum_mbrain_cb, 0xe1ba953a, "");
SYMBOL_CRC(xhci_sideband_notify_ep_ring_free_, 0x8bbb996f, "_gpl");
SYMBOL_CRC(xhci_sideband_add_endpoint_, 0xaa3e0784, "_gpl");
SYMBOL_CRC(xhci_sideband_remove_endpoint_, 0xb82b0223, "_gpl");
SYMBOL_CRC(xhci_sideband_stop_endpoint_, 0xc431e139, "_gpl");
SYMBOL_CRC(xhci_sideband_get_endpoint_buffer_, 0xf2754ab9, "_gpl");
SYMBOL_CRC(xhci_sideband_get_event_buffer_, 0xb1646ca4, "_gpl");
SYMBOL_CRC(xhci_sideband_create_interrupter_, 0xe631bcd9, "_gpl");
SYMBOL_CRC(xhci_sideband_remove_interrupter_, 0x6d6973e5, "_gpl");
SYMBOL_CRC(xhci_sideband_interrupter_id_, 0xe281a77a, "_gpl");
SYMBOL_CRC(xhci_sideband_register_, 0x9477b72d, "_gpl");
SYMBOL_CRC(xhci_sideband_unregister_, 0xe860ebd6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x02483201, "usb_hcd_is_primary_hcd" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc025feb5, "usb_root_hub_lost_power" },
	{ 0xfe2e85b2, "usb_hcd_resume_root_hub" },
	{ 0xd1eab1b9, "usb_hcd_poll_rh_status" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x037a0cba, "kfree" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x401167cc, "_dev_info" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa41a3c37, "usb_hcd_check_unlink_urb" },
	{ 0xa0665327, "usb_hcd_unlink_urb_from_ep" },
	{ 0x7d045b3b, "usb_hcd_giveback_urb" },
	{ 0x7b206ad1, "usb_hcd_map_urb_for_dma" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x54b23e67, "sg_pcopy_to_buffer" },
	{ 0x81114b67, "__kmalloc_cache_node_noprof" },
	{ 0xc8cdf6b8, "__kmalloc_node_noprof" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xb1927334, "usb_hcd_unmap_urb_for_dma" },
	{ 0xfe1c9ea5, "sg_pcopy_from_buffer" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0xc4aad04c, "param_ops_ullong" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x1a99785e, "radix_tree_lookup" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8bdffccb, "dma_pool_create" },
	{ 0x290be338, "radix_tree_delete" },
	{ 0xb22e16d5, "radix_tree_maybe_preload" },
	{ 0x0d385950, "radix_tree_insert" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xa2e459f7, "platform_device_alloc" },
	{ 0x9f1f73b3, "platform_device_add_resources" },
	{ 0x07ba5792, "platform_device_put" },
	{ 0xbb0bdd6f, "device_create_managed_software_node" },
	{ 0x5fbf4220, "platform_device_add" },
	{ 0x760194bf, "__devm_add_action" },
	{ 0x27ef3d1e, "platform_device_unregister" },
	{ 0x7fa2dacd, "usb_hc_died" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0xe6baf922, "usb_hcd_start_port_resume" },
	{ 0x43ec4a4a, "usb_wakeup_notification" },
	{ 0x550e68ae, "usb_hub_clear_tt_buffer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x324a08f0, "usb_hcd_link_urb_to_ep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a9fffc1, "usb_hcd_end_port_resume" },
	{ 0x99bfae36, "pm_runtime_forbid" },
	{ 0x6f847f37, "pm_runtime_allow" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x00148653, "vsnprintf" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x910c04bd, "trace_seq_acquire" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2c762752, "dev_err_probe" },
	{ 0x3574e894, "platform_get_irq_byname_optional" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x1de80880, "devm_of_phy_optional_get" },
	{ 0x8ad898b0, "pm_runtime_set_autosuspend_delay" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x81ad0a10, "regulator_bulk_enable" },
	{ 0x84fd181a, "usb_create_hcd" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x8dfe0eff, "usb_add_hcd" },
	{ 0xb631007a, "usb_create_shared_hcd" },
	{ 0xb52ea45f, "dev_pm_set_dedicated_wake_irq_reverse" },
	{ 0x1a0d35c4, "snd_usb_register_platform_ops" },
	{ 0x4abf604e, "usb_remove_hcd" },
	{ 0x5a983a7f, "usb_put_hcd" },
	{ 0x7e1f47d1, "regulator_bulk_disable" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x6b391597, "devm_regulator_bulk_get" },
	{ 0x66b972b0, "devm_clk_bulk_get_optional" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x44033864, "proc_remove" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x173e2075, "seq_write" },
	{ 0x8e4cd884, "phy_set_mode_ext" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0xfd074c74, "__pm_runtime_use_autosuspend" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x35c7757d, "__device_reset" },
	{ 0x7a4b1be7, "device_set_wakeup_capable" },
	{ 0x1744f3e7, "device_wakeup_enable" },
	{ 0xdad8004c, "device_wakeup_disable" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe6e94f93, "__pm_runtime_suspend" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x6ab61a33, "dev_pm_clear_wake_irq" },
	{ 0xd64b1971, "snd_usb_unregister_platform_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x900a7309, "usb_ifnum_to_if" },
	{ 0x3892e6e0, "usb_altnum_to_altsetting" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x92997ed8, "_printk" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe4e72217, "dma_get_sgtable_attrs" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x3eb103cd, "sg_alloc_table_from_pages_segment" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x02d1793c, "kstrtou16_from_user" },
	{ 0xbeba7da2, "debugfs_create_regset32" },
	{ 0x96848186, "scnprintf" },
	{ 0xbedcc97f, "usb_debug_root" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xeae3dfd6,
	0x47a915f1,
	0xb4ce05a5,
	0x02483201,
	0xd5977bfb,
	0xed55cabd,
	0xf9a482f9,
	0xc025feb5,
	0xfe2e85b2,
	0xd1eab1b9,
	0x34db050b,
	0x25974000,
	0x037a0cba,
	0xa571f6b0,
	0x5be9ce07,
	0xea6f49c8,
	0x401167cc,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x56470118,
	0xf70e4a4d,
	0x8427cc7b,
	0x4b750f53,
	0x82ee90dc,
	0xc3055d20,
	0x75ca79b5,
	0xd3cc3c5d,
	0xc6f46339,
	0x24d273d1,
	0xc38c83b8,
	0xd35cce70,
	0x74c134b9,
	0x9a835040,
	0x7e19152a,
	0xe17134b6,
	0x52c5c991,
	0xa41a3c37,
	0xa0665327,
	0x7d045b3b,
	0x7b206ad1,
	0xfbe215e4,
	0x54b23e67,
	0x81114b67,
	0xc8cdf6b8,
	0xc31db0ce,
	0xba72f076,
	0x7cc1c7f4,
	0xb1927334,
	0xfe1c9ea5,
	0xff732842,
	0x151f4898,
	0xb43f9365,
	0x92acb4e9,
	0xb2fb935e,
	0xc4aad04c,
	0x15ba50a6,
	0xac594e02,
	0x0f05f001,
	0xefe8a82e,
	0x2f7754a8,
	0x1a99785e,
	0xcec49a87,
	0xb5aa7165,
	0xffeedf6a,
	0x8bdffccb,
	0x290be338,
	0xb22e16d5,
	0x0d385950,
	0x43b0c9c3,
	0x678b96ec,
	0x608741b5,
	0x78cf2345,
	0x5a9cfed6,
	0xa2e459f7,
	0x9f1f73b3,
	0x07ba5792,
	0xbb0bdd6f,
	0x5fbf4220,
	0x760194bf,
	0x27ef3d1e,
	0x7fa2dacd,
	0xa6257a2f,
	0x4a3ad70e,
	0x7f02188f,
	0x86a50ae0,
	0x93d6dd8c,
	0x9e87b2ff,
	0xe6baf922,
	0x43ec4a4a,
	0x550e68ae,
	0xba8fbd64,
	0xb5b54b34,
	0x324a08f0,
	0x2d3385d3,
	0x4a9fffc1,
	0x99bfae36,
	0x6f847f37,
	0xe0da6e4a,
	0x57c959d2,
	0x29eba14a,
	0x00148653,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x910c04bd,
	0x656e4a6e,
	0x98cf60b3,
	0x8900d05a,
	0x3c3ff9fd,
	0x2d2c902f,
	0xc61f330d,
	0xe80494d6,
	0x881d741f,
	0xa3783864,
	0x12db679a,
	0x2077fc84,
	0x19a304ba,
	0x2c762752,
	0x3574e894,
	0xf7ca28dd,
	0x1de80880,
	0x8ad898b0,
	0xd4e81a21,
	0x81ad0a10,
	0x84fd181a,
	0x374f8976,
	0x9f0ef8fa,
	0xa823db6e,
	0x8dfe0eff,
	0xb631007a,
	0xb52ea45f,
	0x1a0d35c4,
	0x4abf604e,
	0x5a983a7f,
	0x7e1f47d1,
	0xc8c7229e,
	0x6b391597,
	0x66b972b0,
	0x6b201699,
	0xe136f93c,
	0xf4b6fbcb,
	0x1fec5304,
	0x7518b5f0,
	0xa2fa95a0,
	0x44033864,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x173e2075,
	0x8e4cd884,
	0x88db9f48,
	0x2be0c009,
	0x146a11fc,
	0xfd074c74,
	0x4eb4c414,
	0xead5c8e5,
	0xc7a7e770,
	0x63c08029,
	0x35c7757d,
	0x7a4b1be7,
	0x1744f3e7,
	0xdad8004c,
	0xc40993fe,
	0x6ebe366f,
	0xe6e94f93,
	0x479f7d4b,
	0x5c27c40f,
	0x6ab61a33,
	0xd64b1971,
	0x3ce4ca6f,
	0x576b05bf,
	0xfcec0987,
	0x6fc35f2b,
	0xe56a9336,
	0xb9638db4,
	0x805e2dd2,
	0x900a7309,
	0x3892e6e0,
	0xd6eaaea1,
	0xe2d5255a,
	0x2d39b0a7,
	0x92997ed8,
	0x7aba1ef6,
	0x7aa1756e,
	0xe4e72217,
	0xc8c85086,
	0x31f2a14c,
	0x3eb103cd,
	0xb7c7d237,
	0x4e870156,
	0x5cf4d4de,
	0xc8f2ae9d,
	0x02d1793c,
	0xbeba7da2,
	0x96848186,
	0xbedcc97f,
	0xa65c6def,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__const_udelay\0"
	"_dev_warn\0"
	"_dev_err\0"
	"usb_hcd_is_primary_hcd\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"msleep\0"
	"usb_root_hub_lost_power\0"
	"usb_hcd_resume_root_hub\0"
	"usb_hcd_poll_rh_status\0"
	"_raw_spin_lock_irqsave\0"
	"wait_for_completion\0"
	"kfree\0"
	"__mutex_init\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"_dev_info\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__warn_printk\0"
	"preempt_schedule_notrace\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"timer_delete_sync\0"
	"usleep_range_state\0"
	"__fortify_panic\0"
	"iommu_get_domain_for_dev\0"
	"init_timer_key\0"
	"add_timer\0"
	"mod_timer\0"
	"_raw_spin_unlock_irqrestore\0"
	"__sw_hweight32\0"
	"__list_del_entry_valid_or_report\0"
	"__list_add_valid_or_report\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"usb_hcd_check_unlink_urb\0"
	"usb_hcd_unlink_urb_from_ep\0"
	"usb_hcd_giveback_urb\0"
	"usb_hcd_map_urb_for_dma\0"
	"sg_next\0"
	"sg_pcopy_to_buffer\0"
	"__kmalloc_cache_node_noprof\0"
	"__kmalloc_node_noprof\0"
	"is_vmalloc_addr\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"usb_hcd_unmap_urb_for_dma\0"
	"sg_pcopy_from_buffer\0"
	"dma_unmap_page_attrs\0"
	"schedule_timeout_uninterruptible\0"
	"ktime_get\0"
	"param_ops_uint\0"
	"param_ops_int\0"
	"param_ops_ullong\0"
	"jiffies\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"dma_pool_free\0"
	"radix_tree_lookup\0"
	"cancel_delayed_work_sync\0"
	"dma_pool_destroy\0"
	"delayed_work_timer_fn\0"
	"dma_pool_create\0"
	"radix_tree_delete\0"
	"radix_tree_maybe_preload\0"
	"radix_tree_insert\0"
	"preempt_schedule\0"
	"dma_pool_alloc\0"
	"__init_swait_queue_head\0"
	"dma_free_attrs\0"
	"dma_alloc_attrs\0"
	"platform_device_alloc\0"
	"platform_device_add_resources\0"
	"platform_device_put\0"
	"device_create_managed_software_node\0"
	"platform_device_add\0"
	"__devm_add_action\0"
	"platform_device_unregister\0"
	"usb_hc_died\0"
	"complete\0"
	"wait_for_completion_timeout\0"
	"__msecs_to_jiffies\0"
	"mod_delayed_work_on\0"
	"complete_all\0"
	"cancel_delayed_work\0"
	"usb_hcd_start_port_resume\0"
	"usb_wakeup_notification\0"
	"usb_hub_clear_tt_buffer\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"usb_hcd_link_urb_to_ep\0"
	"system_wq\0"
	"usb_hcd_end_port_resume\0"
	"pm_runtime_forbid\0"
	"pm_runtime_allow\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"trace_event_buffer_reserve\0"
	"vsnprintf\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"trace_seq_acquire\0"
	"snprintf\0"
	"strlen\0"
	"trace_print_symbols_seq\0"
	"sprintf\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run1\0"
	"bpf_trace_run3\0"
	"bpf_trace_run2\0"
	"__platform_driver_register\0"
	"of_device_is_compatible\0"
	"usb_disabled\0"
	"dev_err_probe\0"
	"platform_get_irq_byname_optional\0"
	"platform_get_irq\0"
	"devm_of_phy_optional_get\0"
	"pm_runtime_set_autosuspend_delay\0"
	"pm_runtime_enable\0"
	"regulator_bulk_enable\0"
	"usb_create_hcd\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"of_find_device_by_node\0"
	"usb_add_hcd\0"
	"usb_create_shared_hcd\0"
	"dev_pm_set_dedicated_wake_irq_reverse\0"
	"snd_usb_register_platform_ops\0"
	"usb_remove_hcd\0"
	"usb_put_hcd\0"
	"regulator_bulk_disable\0"
	"devm_kmalloc\0"
	"devm_regulator_bulk_get\0"
	"devm_clk_bulk_get_optional\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"syscon_node_to_regmap\0"
	"__of_parse_phandle_with_args\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"proc_remove\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_write\0"
	"phy_set_mode_ext\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__pm_runtime_set_status\0"
	"__pm_runtime_use_autosuspend\0"
	"__pm_runtime_resume\0"
	"clk_bulk_prepare\0"
	"clk_bulk_enable\0"
	"clk_bulk_unprepare\0"
	"__device_reset\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"device_wakeup_disable\0"
	"device_property_read_u32_array\0"
	"ktime_get_mono_fast_ns\0"
	"__pm_runtime_suspend\0"
	"clk_bulk_disable\0"
	"__pm_runtime_disable\0"
	"dev_pm_clear_wake_irq\0"
	"snd_usb_unregister_platform_ops\0"
	"disable_irq\0"
	"regmap_update_bits_base\0"
	"enable_irq\0"
	"platform_driver_unregister\0"
	"snd_pcm_format_width\0"
	"snd_pcm_rate_to_rate_bit\0"
	"tracepoint_probe_register\0"
	"usb_ifnum_to_if\0"
	"usb_altnum_to_altsetting\0"
	"full_name_hash\0"
	"strcmp\0"
	"kstrdup\0"
	"_printk\0"
	"tracepoint_probe_unregister\0"
	"kvfree\0"
	"dma_get_sgtable_attrs\0"
	"sg_free_table\0"
	"__kvmalloc_node_noprof\0"
	"sg_alloc_table_from_pages_segment\0"
	"debugfs_remove\0"
	"debugfs_create_file\0"
	"debugfs_create_dir\0"
	"seq_printf\0"
	"kstrtou16_from_user\0"
	"debugfs_create_regset32\0"
	"scnprintf\0"
	"usb_debug_root\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhci-p2");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhci-p2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhci-p1");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhci-p1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-xhci");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-xhciC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-xhci");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-xhciC*");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhci");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-xhciC*");

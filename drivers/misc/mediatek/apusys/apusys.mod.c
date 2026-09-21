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

KSYMTAB_FUNC(reviser_set_init_info, "", "");
KSYMTAB_FUNC(apummu_set_init_info, "", "");
KSYMTAB_FUNC(get_apu_iommu_tfrp, "", "");
KSYMTAB_FUNC(apu_cmd_qos_start, "", "");
KSYMTAB_FUNC(apu_cmd_qos_suspend, "", "");
KSYMTAB_FUNC(apu_cmd_qos_end, "", "");
KSYMTAB_FUNC(vpu_set_init_info, "", "");
KSYMTAB_FUNC(vpu_init_info_remove, "", "");
KSYMTAB_FUNC(aov_recovery_cb, "", "");
KSYMTAB_FUNC(sw_logger_config_init, "", "");

SYMBOL_CRC(reviser_set_init_info, 0xfb44eb74, "");
SYMBOL_CRC(apummu_set_init_info, 0x50460cdb, "");
SYMBOL_CRC(get_apu_iommu_tfrp, 0x343078c7, "");
SYMBOL_CRC(apu_cmd_qos_start, 0x3a353408, "");
SYMBOL_CRC(apu_cmd_qos_suspend, 0x9a693186, "");
SYMBOL_CRC(apu_cmd_qos_end, 0x7d2c4da9, "");
SYMBOL_CRC(vpu_set_init_info, 0x53d31ab2, "");
SYMBOL_CRC(vpu_init_info_remove, 0x5283ebd8, "");
SYMBOL_CRC(aov_recovery_cb, 0xc6836d99, "");
SYMBOL_CRC(sw_logger_config_init, 0xe476fb00, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0xe7387c02, "apu_power_drv_init" },
	{ 0x09d24f53, "apu_power_drv_exit" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x25758a2c, "misc_register" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6e59048a, "__register_rpmsg_driver" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x69009501, "unregister_rpmsg_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x27929ba7, "dma_buf_end_cpu_access" },
	{ 0x2e2980cc, "dma_buf_begin_cpu_access" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc5b6a5d2, "dma_buf_fd" },
	{ 0x56470118, "__warn_printk" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x060ba97c, "gen_pool_free_owner" },
	{ 0x0aec4ab0, "idr_get_next" },
	{ 0x841a578a, "idr_remove" },
	{ 0x31d7c7bc, "idr_find" },
	{ 0x8509e8f6, "idr_alloc_cyclic" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x621ae253, "fput" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xcf2a6966, "up" },
	{ 0xff2cba95, "__get_task_comm" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6510de94, "debugfs_create_u32" },
	{ 0x63e374fd, "debugfs_create_u8" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xddb759be, "debugfs_attr_read" },
	{ 0x1b0df581, "debugfs_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0x239bc957, "apusys_power_check" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xa6257a2f, "complete" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0xcc1cb855, "bpf_trace_run12" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc086fe8e, "debugfs_create_u64" },
	{ 0x70cc6ff8, "debugfs_create_bool" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x4ec54e78, "bitmap_to_arr32" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x0c10d94a, "rpmsg_sendto" },
	{ 0x9131a246, "rpmsg_create_ept" },
	{ 0x908e4af5, "rpmsg_destroy_ept" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa39d99f7, "rpmsg_send" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x28ed2847, "down_write" },
	{ 0x20d81059, "up_write" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x3355da1c, "down_read" },
	{ 0x6b50e951, "up_read" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x9166fada, "strncpy" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xe61a9633, "apu_power_device_register" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x98004a5d, "apu_power_device_unregister" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x3ae7965f, "apu_device_power_suspend" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x033c7bb3, "apu_device_power_on" },
	{ 0x6ba2fc3d, "apu_device_power_off" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0x92495308, "sysfs_remove_file_ns" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x18500fa9, "dma_buf_vmap_unlocked" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7640bcae, "dma_buf_vunmap_unlocked" },
	{ 0x6028a171, "is_coherent_heap_dmabuf" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x38075705, "dma_buf_attach_ssid" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xba085e3d, "of_get_child_by_name" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x067e2f47, "dma_heap_put" },
	{ 0x69020168, "dma_heap_buffer_free" },
	{ 0x0d89e2f7, "dma_buf_export" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x6cb39818, "apu_power_callback_device_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x4d9b7ec4, "apu_power_callback_device_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x3700a11e, "default_llseek" },
	{ 0xdb15f288, "simple_open" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa4234d01, "slbc_request" },
	{ 0x0e12e362, "slbc_release" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0x05e0ed61, "iommu_unmap" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd7d01741, "vmalloc_to_page" },
	{ 0x3eb103cd, "sg_alloc_table_from_pages_segment" },
	{ 0x16f88d54, "iommu_map_sg" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xfa501412, "__dma_sync_sg_for_cpu" },
	{ 0x01000e51, "schedule" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc2ca87f0, "slbc_status" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xe06f78c7, "slbc_gid_request" },
	{ 0x803673d2, "slbc_validate" },
	{ 0x3b3f2cda, "slbc_invalidate" },
	{ 0x4fe5340d, "slbc_gid_release" },
	{ 0xaba63322, "of_iomap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0xbabc5cdd, "kobject_del" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x173e2075, "seq_write" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0xefd576f6, "apu_qos_set_vcore" },
	{ 0x7bf94eb3, "get_qos_bound" },
	{ 0xdb27589c, "get_qos_bound_idx" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0xb2978ccf, "icc_put" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0x371b73fa, "qos_sram_write" },
	{ 0xdde97e81, "qos_sram_read" },
	{ 0xcfca06ca, "get_qos_bound_apubw_mon" },
	{ 0x5a921311, "strncmp" },
	{ 0x3da016df, "seq_putc" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x3cdb28e3, "seq_release" },
	{ 0x665b5ccb, "seq_open" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0xf1d0618f, "remove_proc_subtree" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d6182b9, "device_show_bool" },
	{ 0x53e59dc7, "device_store_bool" },
	{ 0x6193a516, "apupw_get_tag" },
	{ 0xe025340d, "kicker_ppb_request_power" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0x3d05375e, "of_dma_configure_id" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xaa3217c8, "apu_device_set_opp" },
	{ 0x88d2c20e, "apusys_boost_value_to_opp" },
	{ 0x6b704d05, "apu_get_power_on_status" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x3c57945c, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x27334177, "debugfs_create_devm_seqfile" },
	{ 0x9c7c92a6, "debugfs_create_x32" },
	{ 0x44033864, "proc_remove" },
	{ 0x398eca52, "proc_create_single_data" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x6bd4d5dc, "bpf_trace_run6" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x40cead39, "bpf_trace_run9" },
	{ 0xe091c977, "list_sort" },
	{ 0x7ee25d67, "vmap" },
	{ 0xe5960168, "dma_map_sg_attrs" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0xdd2ef3e5, "__dma_sync_sg_for_device" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x00148653, "vsnprintf" },
	{ 0x63e5a56e, "seq_hex_dump" },
	{ 0x9f984513, "strrchr" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xdb3ccf12, "iommu_iova_to_phys" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf1e046cc, "panic" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x203392c6, "mutex_trylock" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x3d10f515, "bpf_trace_run7" },
	{ 0xe5f24ab0, "bpf_trace_run11" },
	{ 0x3d417806, "rproc_add_subdev" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xa308aa15, "rproc_remove_subdev" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0xff732842, "dma_unmap_page_attrs" },
	{ 0xba72f076, "dev_driver_string" },
	{ 0x7cc1c7f4, "dma_map_page_attrs" },
	{ 0xfaac98c9, "rproc_alloc" },
	{ 0xfea87247, "of_property_read_u64_index" },
	{ 0x4d924f20, "memremap" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x700ad7cc, "rproc_add" },
	{ 0x44c9a0ee, "rproc_free" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x8ed2d989, "iommu_map" },
	{ 0xe4e72217, "dma_get_sgtable_attrs" },
	{ 0x8f15998c, "rproc_del" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x33cffcff, "rpmsg_unregister_device" },
	{ 0x2fda2cf5, "rpmsg_register_device" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0x019f121b, "__dma_sync_single_for_cpu" },
	{ 0xc0374d9c, "kernel_sigaction" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0xd8f63b34, "__seq_puts" },
	{ 0x9a1ddf64, "sysfs_create_bin_file" },
	{ 0xfd2c5a12, "sysfs_remove_bin_file" },
	{ 0x263c3152, "bcmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8fc545b9, "dma_buf_unmap_attachment" },
	{ 0x86de4a10, "dma_buf_map_attachment" },
	{ 0x1ed60c86, "dma_buf_vmap" },
	{ 0xcec1d8ff, "dma_buf_vunmap" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x29161415, "find_task_by_vpid" },
	{ 0xd9346889, "sched_setattr_nocheck" },
	{ 0xa5644698, "bpf_trace_run10" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5cf4d4de,
	0xe7387c02,
	0x09d24f53,
	0xb7c7d237,
	0x25758a2c,
	0x12db679a,
	0x6e59048a,
	0x6fc35f2b,
	0xc3246938,
	0x69009501,
	0x656e4a6e,
	0x401167cc,
	0xa571f6b0,
	0x037a0cba,
	0xe17134b6,
	0x0296695f,
	0xd5977bfb,
	0xf5edea2e,
	0x45b60059,
	0xed55cabd,
	0xe136f93c,
	0x0f05f001,
	0xefe8a82e,
	0x197d5b60,
	0xdeb99119,
	0x14605535,
	0x7b37d4a7,
	0xe123f3d9,
	0x14fe5355,
	0x9a835040,
	0x441d0de9,
	0x52c5c991,
	0x7682ba4e,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x9a85eebb,
	0xaaae9064,
	0x2b3df576,
	0x27929ba7,
	0x2e2980cc,
	0x7e19152a,
	0xc5b6a5d2,
	0x56470118,
	0xced0f4d4,
	0x6c224cda,
	0xada31e57,
	0xbefa51a3,
	0x060ba97c,
	0x0aec4ab0,
	0x841a578a,
	0x31d7c7bc,
	0x8509e8f6,
	0xe9ffc063,
	0x92e683f5,
	0xa843805a,
	0xf61b1f04,
	0x7155bcf8,
	0x0f013cdc,
	0x621ae253,
	0x3f4547a7,
	0xcf2a6966,
	0xff2cba95,
	0x167c5967,
	0xe94986d6,
	0xaacf03c1,
	0x64d11af1,
	0xc5b6f236,
	0x2d3385d3,
	0x62b33777,
	0x3667c9f1,
	0x3b6c41ea,
	0x6510de94,
	0x63e374fd,
	0x4e870156,
	0xddb759be,
	0x1b0df581,
	0xbf748e79,
	0x0140f701,
	0x239bc957,
	0xbee3ddd5,
	0x999e8297,
	0x5a6368f5,
	0xc8c7229e,
	0xf1969a8e,
	0x15ba50a6,
	0xe0da6e4a,
	0x57c959d2,
	0xb3f7646e,
	0x2e3bcce2,
	0x5e515be6,
	0xa6257a2f,
	0xba0aee2e,
	0xce5bc4d0,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0xcc1cb855,
	0xf70e4a4d,
	0x608741b5,
	0xf8d07858,
	0xac594e02,
	0x9e87b2ff,
	0xc6f46339,
	0xffeedf6a,
	0xc086fe8e,
	0x70cc6ff8,
	0xa3783864,
	0x881d741f,
	0x42ad47ad,
	0x7f02188f,
	0xca9360b5,
	0x4d9b652b,
	0xa5526619,
	0x4e8b8def,
	0x05590c04,
	0x4ec54e78,
	0xc8f2ae9d,
	0x0f314d3e,
	0x25974000,
	0x0288226a,
	0x476b165a,
	0x98cf60b3,
	0xa916b694,
	0xf9a482f9,
	0xc38c83b8,
	0x0c10d94a,
	0x9131a246,
	0x908e4af5,
	0xdc0e4855,
	0xc3055d20,
	0xa39d99f7,
	0x4a3ad70e,
	0xeae3dfd6,
	0x9e7d6bd0,
	0x28ed2847,
	0x20d81059,
	0xf5a94b83,
	0x3355da1c,
	0x6b50e951,
	0x2688ec10,
	0xca21ebd3,
	0x34db050b,
	0x615911d7,
	0x922f45a6,
	0x9166fada,
	0x64127b67,
	0xd35cce70,
	0xd9a5ea54,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xa4f72277,
	0xf7ca28dd,
	0xf9583f23,
	0x6fe9dcd4,
	0x9b1faacb,
	0xa823db6e,
	0xe61a9633,
	0x1fec5304,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x28ba7b6c,
	0x6091b333,
	0x98004a5d,
	0x169f5b1f,
	0xef27af6b,
	0x96848186,
	0x6b722180,
	0x0c1a5ee3,
	0x03c12dfe,
	0x3ae7965f,
	0x24d273d1,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x82ee90dc,
	0x033c7bb3,
	0x6ba2fc3d,
	0xb43f9365,
	0xe2964344,
	0xc905402b,
	0xfa4d3c24,
	0x2d405891,
	0x3bd2c4ce,
	0x42aac25f,
	0x92495308,
	0xce8498d7,
	0x18500fa9,
	0x9eacf8a5,
	0xba8fbd64,
	0xb5b54b34,
	0x7640bcae,
	0x6028a171,
	0xe70e1ef3,
	0xfbe215e4,
	0xf1e3c830,
	0xecbe3c62,
	0x38075705,
	0xfff4bd7c,
	0x66bcb0f8,
	0xba085e3d,
	0x5be9ce07,
	0xea6f49c8,
	0xeff75c0b,
	0xe49fbbe6,
	0x067e2f47,
	0x69020168,
	0x0d89e2f7,
	0xb3f985a8,
	0xc8c85086,
	0x6cb39818,
	0xf3cdc3c6,
	0xedc03953,
	0x40863ba1,
	0x4d9b7ec4,
	0xaf56600a,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0x3700a11e,
	0xdb15f288,
	0x31f2a14c,
	0x5d112304,
	0x9c81ceff,
	0x7aa1756e,
	0x665e62b5,
	0x391b5530,
	0x0c6a7f0d,
	0x85df9b6c,
	0xa4234d01,
	0x0e12e362,
	0xd3cc3c5d,
	0x05e0ed61,
	0x78cf2345,
	0xc31db0ce,
	0xd7d01741,
	0x3eb103cd,
	0x16f88d54,
	0x5a9cfed6,
	0xfa501412,
	0x01000e51,
	0x21ea5251,
	0xf390f6f1,
	0x53a1e8d9,
	0xdf521442,
	0xf93aae46,
	0xc2ca87f0,
	0x365acda7,
	0x49cd25ed,
	0x598dfa08,
	0x8810754a,
	0xe06f78c7,
	0x803673d2,
	0x3b3f2cda,
	0x4fe5340d,
	0xaba63322,
	0x7c611278,
	0xdb976d85,
	0x92d5838e,
	0x7726dda9,
	0xc1514a3b,
	0xea82d349,
	0x102fe6de,
	0xc0b7c197,
	0x135bb7ec,
	0xbabc5cdd,
	0x9688de8b,
	0xe4bbc1dd,
	0xccf69887,
	0x8c8569cb,
	0x4302d0eb,
	0xbcab6ee6,
	0x173e2075,
	0x95bab132,
	0xefd576f6,
	0x7bf94eb3,
	0xdb27589c,
	0x6c9565df,
	0x49eaeb64,
	0x52384e38,
	0xb2978ccf,
	0xd273017c,
	0x371b73fa,
	0xdde97e81,
	0xcfca06ca,
	0x5a921311,
	0x3da016df,
	0xa2fa95a0,
	0x3cdb28e3,
	0x665b5ccb,
	0x7518b5f0,
	0xb4028d67,
	0xf1d0618f,
	0x7aba1ef6,
	0x805e2dd2,
	0xe2d5255a,
	0x1d6182b9,
	0x53e59dc7,
	0x6193a516,
	0xe025340d,
	0x8b808b7f,
	0x3d05375e,
	0xd36dc10c,
	0xaa3217c8,
	0x88d2c20e,
	0x6b704d05,
	0xf02aa937,
	0xaf7cb74b,
	0x3c57945c,
	0xc6d09aa9,
	0x27334177,
	0x9c7c92a6,
	0x44033864,
	0x398eca52,
	0x2155f701,
	0xe3c00b45,
	0x6bd4d5dc,
	0x3ce4ca6f,
	0x9166fc03,
	0x8c03d20c,
	0x40cead39,
	0xe091c977,
	0x7ee25d67,
	0xe5960168,
	0xc6970ad9,
	0xdd2ef3e5,
	0x86a50ae0,
	0x00148653,
	0x63e5a56e,
	0x9f984513,
	0x27bbf221,
	0xfcec0987,
	0x41ed3709,
	0x6ac61a02,
	0x75fb9062,
	0xdb3ccf12,
	0x9e400c59,
	0xf1e046cc,
	0xf77555cd,
	0x203392c6,
	0x18b48e28,
	0x3d10f515,
	0xe5f24ab0,
	0x3d417806,
	0xb66eb73f,
	0xa308aa15,
	0xaab744b7,
	0xff732842,
	0xba72f076,
	0x7cc1c7f4,
	0xfaac98c9,
	0xfea87247,
	0x4d924f20,
	0xd4e81a21,
	0x700ad7cc,
	0x44c9a0ee,
	0x4eb4c414,
	0x13269d10,
	0x8ed2d989,
	0xe4e72217,
	0x8f15998c,
	0x330c0b0f,
	0xdd115996,
	0x2f2c95c4,
	0x2077fc84,
	0x33cffcff,
	0x2fda2cf5,
	0x796ead29,
	0x019f121b,
	0xc0374d9c,
	0x374f8976,
	0xd8f63b34,
	0x9a1ddf64,
	0xfd2c5a12,
	0x263c3152,
	0x5c3c7387,
	0x8fc545b9,
	0x86de4a10,
	0x1ed60c86,
	0xcec1d8ff,
	0xcec49a87,
	0x14de1090,
	0x51fcca8a,
	0x1cc7f053,
	0x29161415,
	0xd9346889,
	0xa5644698,
	0xe80494d6,
	0xa65c6def,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"debugfs_create_dir\0"
	"apu_power_drv_init\0"
	"apu_power_drv_exit\0"
	"debugfs_remove\0"
	"misc_register\0"
	"__platform_driver_register\0"
	"__register_rpmsg_driver\0"
	"platform_driver_unregister\0"
	"misc_deregister\0"
	"unregister_rpmsg_driver\0"
	"snprintf\0"
	"_dev_info\0"
	"__mutex_init\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"refcount_warn_saturate\0"
	"mutex_lock\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"mutex_unlock\0"
	"of_property_read_variable_u32_array\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"dma_fence_default_wait\0"
	"dma_fence_init\0"
	"dma_fence_context_alloc\0"
	"_find_first_zero_bit\0"
	"dma_fence_release\0"
	"of_device_get_match_data\0"
	"__list_del_entry_valid_or_report\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_noprof\0"
	"__copy_overflow\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"__arch_copy_to_user\0"
	"dma_buf_get\0"
	"dma_buf_put\0"
	"dma_buf_end_cpu_access\0"
	"dma_buf_begin_cpu_access\0"
	"__list_add_valid_or_report\0"
	"dma_buf_fd\0"
	"__warn_printk\0"
	"gen_pool_create\0"
	"gen_pool_destroy\0"
	"gen_pool_dma_alloc_align\0"
	"gen_pool_add_owner\0"
	"gen_pool_free_owner\0"
	"idr_get_next\0"
	"idr_remove\0"
	"idr_find\0"
	"idr_alloc_cyclic\0"
	"down_trylock\0"
	"down_timeout\0"
	"get_unused_fd_flags\0"
	"sync_file_create\0"
	"sync_file_get_fence\0"
	"fd_install\0"
	"fput\0"
	"put_unused_fd\0"
	"up\0"
	"__get_task_comm\0"
	"print_hex_dump\0"
	"sched_clock\0"
	"dma_fence_signal\0"
	"dma_fence_wait_timeout\0"
	"queue_work_on\0"
	"system_wq\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"kstrtouint\0"
	"debugfs_create_u32\0"
	"debugfs_create_u8\0"
	"debugfs_create_file\0"
	"debugfs_attr_read\0"
	"debugfs_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"apusys_power_check\0"
	"vzalloc_noprof\0"
	"vfree\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"__usecs_to_jiffies\0"
	"jiffies\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"kthread_should_stop\0"
	"wait_for_completion_interruptible\0"
	"ktime_get_ts64\0"
	"complete\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run12\0"
	"preempt_schedule_notrace\0"
	"__init_swait_queue_head\0"
	"bitmap_from_arr32\0"
	"__cpu_online_mask\0"
	"cancel_delayed_work\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"debugfs_create_u64\0"
	"debugfs_create_bool\0"
	"bpf_trace_run2\0"
	"bpf_trace_run3\0"
	"queue_delayed_work_on\0"
	"__msecs_to_jiffies\0"
	"rb_next\0"
	"rb_erase\0"
	"rb_insert_color\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"bitmap_to_arr32\0"
	"seq_printf\0"
	"wakeup_source_register\0"
	"wait_for_completion\0"
	"wakeup_source_unregister\0"
	"sized_strscpy\0"
	"strlen\0"
	"strnlen\0"
	"msleep\0"
	"mod_timer\0"
	"rpmsg_sendto\0"
	"rpmsg_create_ept\0"
	"rpmsg_destroy_ept\0"
	"timer_delete\0"
	"usleep_range_state\0"
	"rpmsg_send\0"
	"wait_for_completion_timeout\0"
	"__const_udelay\0"
	"__udelay\0"
	"down_write\0"
	"up_write\0"
	"__init_rwsem\0"
	"down_read\0"
	"up_read\0"
	"bitmap_zalloc\0"
	"bitmap_free\0"
	"_raw_spin_lock_irqsave\0"
	"__bitmap_set\0"
	"__bitmap_clear\0"
	"strncpy\0"
	"bitmap_find_next_zero_area_off\0"
	"_raw_spin_unlock_irqrestore\0"
	"__init_waitqueue_head\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"_dev_notice\0"
	"platform_get_irq\0"
	"devm_request_threaded_irq\0"
	"class_create\0"
	"device_create\0"
	"of_find_device_by_node\0"
	"apu_power_device_register\0"
	"__of_parse_phandle_with_args\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"apu_power_device_unregister\0"
	"device_destroy\0"
	"class_destroy\0"
	"scnprintf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"cancel_work_sync\0"
	"apu_device_power_suspend\0"
	"add_timer\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"timer_delete_sync\0"
	"apu_device_power_on\0"
	"apu_device_power_off\0"
	"ktime_get\0"
	"__wake_up\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"kobject_create_and_add\0"
	"kobject_put\0"
	"sysfs_create_file_ns\0"
	"sysfs_remove_file_ns\0"
	"kernel_kobj\0"
	"dma_buf_vmap_unlocked\0"
	"kstrndup\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"dma_buf_vunmap_unlocked\0"
	"is_coherent_heap_dmabuf\0"
	"dma_buf_map_attachment_unlocked\0"
	"sg_next\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_attach_ssid\0"
	"dma_buf_attach\0"
	"of_property_read_u64\0"
	"of_get_child_by_name\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"dma_heap_put\0"
	"dma_heap_buffer_free\0"
	"dma_buf_export\0"
	"sg_alloc_table\0"
	"sg_free_table\0"
	"apu_power_callback_device_register\0"
	"of_find_compatible_node\0"
	"iounmap\0"
	"ioremap_prot\0"
	"apu_power_callback_device_unregister\0"
	"arm64_use_ng_mappings\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"default_llseek\0"
	"simple_open\0"
	"__kvmalloc_node_noprof\0"
	"__memcpy_fromio\0"
	"simple_read_from_buffer\0"
	"kvfree\0"
	"generic_file_llseek\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"strsep\0"
	"slbc_request\0"
	"slbc_release\0"
	"iommu_get_domain_for_dev\0"
	"iommu_unmap\0"
	"dma_free_attrs\0"
	"is_vmalloc_addr\0"
	"vmalloc_to_page\0"
	"sg_alloc_table_from_pages_segment\0"
	"iommu_map_sg\0"
	"dma_alloc_attrs\0"
	"__dma_sync_sg_for_cpu\0"
	"schedule\0"
	"__bitmap_weight\0"
	"__bitmap_andnot\0"
	"_find_next_bit\0"
	"_find_next_zero_bit\0"
	"__arm_smccc_smc\0"
	"slbc_status\0"
	"set_normalized_timespec64\0"
	"alloc_workqueue\0"
	"flush_delayed_work\0"
	"_find_first_bit\0"
	"slbc_gid_request\0"
	"slbc_validate\0"
	"slbc_invalidate\0"
	"slbc_gid_release\0"
	"of_iomap\0"
	"irq_of_parse_and_map\0"
	"aee_kernel_warning_api_func\0"
	"request_threaded_irq\0"
	"irq_get_irq_data\0"
	"free_irq\0"
	"hrtimer_init\0"
	"hrtimer_cancel\0"
	"hrtimer_start_range_ns\0"
	"hrtimer_forward\0"
	"kobject_del\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"get_free_pages_noprof\0"
	"kstrtoint\0"
	"free_pages\0"
	"sscanf\0"
	"seq_write\0"
	"icc_set_bw\0"
	"apu_qos_set_vcore\0"
	"get_qos_bound\0"
	"get_qos_bound_idx\0"
	"cpu_latency_qos_update_request\0"
	"of_icc_get\0"
	"cpu_latency_qos_add_request\0"
	"icc_put\0"
	"cpu_latency_qos_remove_request\0"
	"qos_sram_write\0"
	"qos_sram_read\0"
	"get_qos_bound_apubw_mon\0"
	"strncmp\0"
	"seq_putc\0"
	"proc_create_data\0"
	"seq_release\0"
	"seq_open\0"
	"proc_mkdir\0"
	"proc_create\0"
	"remove_proc_subtree\0"
	"tracepoint_probe_unregister\0"
	"tracepoint_probe_register\0"
	"strcmp\0"
	"device_show_bool\0"
	"device_store_bool\0"
	"apupw_get_tag\0"
	"kicker_ppb_request_power\0"
	"cdev_alloc\0"
	"of_dma_configure_id\0"
	"get_random_u32\0"
	"apu_device_set_opp\0"
	"apusys_boost_value_to_opp\0"
	"apu_get_power_on_status\0"
	"wait_for_completion_interruptible_timeout\0"
	"of_property_read_string\0"
	"request_firmware\0"
	"release_firmware\0"
	"debugfs_create_devm_seqfile\0"
	"debugfs_create_x32\0"
	"proc_remove\0"
	"proc_create_single_data\0"
	"hrtimer_try_to_cancel\0"
	"bpf_trace_run5\0"
	"bpf_trace_run6\0"
	"disable_irq\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"bpf_trace_run9\0"
	"list_sort\0"
	"vmap\0"
	"dma_map_sg_attrs\0"
	"dma_unmap_sg_attrs\0"
	"__dma_sync_sg_for_device\0"
	"mod_delayed_work_on\0"
	"vsnprintf\0"
	"seq_hex_dump\0"
	"strrchr\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"get_random_bytes\0"
	"nonseekable_open\0"
	"arch_timer_read_counter\0"
	"iommu_iova_to_phys\0"
	"platform_get_irq_byname\0"
	"panic\0"
	"__memcpy_toio\0"
	"mutex_trylock\0"
	"__memset_io\0"
	"bpf_trace_run7\0"
	"bpf_trace_run11\0"
	"rproc_add_subdev\0"
	"__cpuhp_setup_state\0"
	"rproc_remove_subdev\0"
	"__cpuhp_remove_state\0"
	"dma_unmap_page_attrs\0"
	"dev_driver_string\0"
	"dma_map_page_attrs\0"
	"rproc_alloc\0"
	"of_property_read_u64_index\0"
	"memremap\0"
	"pm_runtime_enable\0"
	"rproc_add\0"
	"rproc_free\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"iommu_map\0"
	"dma_get_sgtable_attrs\0"
	"rproc_del\0"
	"remove_proc_entry\0"
	"mrdump_mini_add_extra_file\0"
	"flush_work\0"
	"of_device_is_compatible\0"
	"rpmsg_unregister_device\0"
	"rpmsg_register_device\0"
	"of_get_next_available_child\0"
	"__dma_sync_single_for_cpu\0"
	"kernel_sigaction\0"
	"platform_get_resource_byname\0"
	"__seq_puts\0"
	"sysfs_create_bin_file\0"
	"sysfs_remove_bin_file\0"
	"bcmp\0"
	"kstrtoull\0"
	"dma_buf_unmap_attachment\0"
	"dma_buf_map_attachment\0"
	"dma_buf_vmap\0"
	"dma_buf_vunmap\0"
	"cancel_delayed_work_sync\0"
	"mt_irq_dump_status\0"
	"get_scmi_tinysys_info\0"
	"scmi_tinysys_common_set\0"
	"find_task_by_vpid\0"
	"sched_setattr_nocheck\0"
	"bpf_trace_run10\0"
	"bpf_trace_run1\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "apu_top,aee_aed,system_heap,mtk_slbc,mtk_qos,mtk_peak_power_budget,mrdump,irq-dbg,tinysys-scmi");

MODULE_ALIAS("of:N*T*Cmtk,edma");
MODULE_ALIAS("of:N*T*Cmtk,edmaC*");
MODULE_ALIAS("of:N*T*Cmtk,edma-sub");
MODULE_ALIAS("of:N*T*Cmtk,edma-subC*");
MODULE_ALIAS("of:N*T*Cmtk,edma-sub-v20");
MODULE_ALIAS("of:N*T*Cmtk,edma-sub-v20C*");
MODULE_ALIAS("of:N*T*Cmtk,edma-sub-v30");
MODULE_ALIAS("of:N*T*Cmtk,edma-sub-v30C*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6893-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6893-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6885-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6885-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6873-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6873-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6853-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6853-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6877-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6877-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,_rv-reviser-mt6886");
MODULE_ALIAS("of:N*T*Cmediatek,_rv-reviser-mt6886C*");
MODULE_ALIAS("of:N*T*Cmediatek,_rv-reviser");
MODULE_ALIAS("of:N*T*Cmediatek,_rv-reviserC*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummuC*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6989");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6989C*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6878");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6878C*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6991");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6991C*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6899");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6899C*");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6993");
MODULE_ALIAS("of:N*T*Cmediatek,rv-apummu-mt6993C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mnoc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mnocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mnoc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-mnocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-mnoc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-mnocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mnoc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-mnocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mnoc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mnocC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-debug");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-debugC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-debug");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-debugC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-debug");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-debugC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-debug");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-debugC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6779-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6779-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6873-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6873-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6885-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6885-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6893-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6893-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6877-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6877-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt8195-mdla");
MODULE_ALIAS("of:N*T*Cmediatek,_mt8195-mdlaC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mdla-rv");
MODULE_ALIAS("of:N*T*Cmediatek,_mdla-rvC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6785-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6785-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vpu_core");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vpu_coreC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-apusys_devapc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6885-apusys_devapcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-apusys_devapc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-apusys_devapcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-apusys_devapc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-apusys_devapcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-apusys_devapc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-apusys_devapcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-apusys_devapc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-apusys_devapcC*");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_sw_logger");
MODULE_ALIAS("of:N*T*Cmediatek,apusys_sw_loggerC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6879-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6879-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6886-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6886-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6895-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6895-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6983-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6983-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6985-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt6985-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,_mt8139-mvpu");
MODULE_ALIAS("of:N*T*Cmediatek,_mt8139-mvpuC*");
MODULE_ALIAS("of:N*T*Cmediatek,apusys-aov-smmu-device");
MODULE_ALIAS("of:N*T*Cmediatek,apusys-aov-smmu-deviceC*");
MODULE_ALIAS("of:N*T*Cmediatek,secure-apu-smmu-device");
MODULE_ALIAS("of:N*T*Cmediatek,secure-apu-smmu-deviceC*");

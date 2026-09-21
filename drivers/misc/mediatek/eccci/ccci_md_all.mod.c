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

KSYMTAB_FUNC(ccci_skb_dequeue, "", "");
KSYMTAB_FUNC(ccci_skb_enqueue, "", "");
KSYMTAB_FUNC(ccci_skb_queue_init, "", "");
KSYMTAB_FUNC(ccci_alloc_skb, "", "");
KSYMTAB_FUNC(ccci_free_skb, "", "");
KSYMTAB_FUNC(ccci_dump_skb_pool_usage, "", "");
KSYMTAB_FUNC(ccci_get_per_md_data, "", "");
KSYMTAB_FUNC(ccci_mbrain_register, "", "");
KSYMTAB_FUNC(ccci_mbrain_unregister, "", "");
KSYMTAB_FUNC(mtk_ccci_request_port, "", "");
KSYMTAB_FUNC(mtk_ccci_open_port, "", "");
KSYMTAB_FUNC(mtk_ccci_release_port, "", "");
KSYMTAB_FUNC(ccci_c2k_set_usb_callback, "", "");
KSYMTAB_FUNC(ccci_port_get_dev_name, "", "");
KSYMTAB_FUNC(mtk_ccci_send_data, "", "");
KSYMTAB_FUNC(mtk_ccci_read_data, "", "");
KSYMTAB_FUNC(ccci_port_dump_status, "", "");
KSYMTAB_FUNC(ccci_port_queue_status_notify, "", "");
KSYMTAB_FUNC(ccci_port_recv_skb, "", "");
KSYMTAB_FUNC(ccci_port_send_msg_to_md, "", "");
KSYMTAB_FUNC(modem_dtr_set, "", "");
KSYMTAB_FUNC(modem_dcd_state, "", "");
KSYMTAB_FUNC(ccci_c2k_rawbulk_intercept, "", "");
KSYMTAB_FUNC(ccci_c2k_buffer_push, "", "");
KSYMTAB_FUNC(exec_ccci_kern_func, "", "");
KSYMTAB_FUNC(ccci_rpc_remap_queue, "", "");
KSYMTAB_FUNC(get_smem_start_addr, "", "");
KSYMTAB_FUNC(get_smem_phy_start_addr, "", "");
KSYMTAB_FUNC(register_ccci_sys_call_back, "", "");
KSYMTAB_FUNC(ccci_set_power_throttle_cb, "", "");
KSYMTAB_FUNC(register_udc_functions, "", "");
KSYMTAB_DATA(ccci_hif, "", "");
KSYMTAB_FUNC(ccci_md_add_log_history, "", "");
KSYMTAB_FUNC(ccci_md_dump_log_history, "", "");
KSYMTAB_FUNC(ccci_hif_register, "", "");
KSYMTAB_FUNC(ccci_md_get_smem_by_user_id, "", "");
KSYMTAB_FUNC(ccci_get_md_view_phy_addr_by_user_id, "", "");
KSYMTAB_FUNC(ccci_register_md_state_receiver, "", "");
KSYMTAB_FUNC(ccci_set_dpmaif_debug_cb, "", "");
KSYMTAB_FUNC(mtk_ccci_register_md_state_cb, "", "");
KSYMTAB_FUNC(fsm_get_entity, "", "");
KSYMTAB_FUNC(ccci_fsm_get_md_state, "", "");
KSYMTAB_FUNC(ccci_fsm_get_md_state_for_user, "", "");
KSYMTAB_FUNC(md_fsm_exp_info, "", "");
KSYMTAB_FUNC(md_notify_flightmode_cb_register, "", "");
KSYMTAB_FUNC(ccci_set_spm_mdsrc_cb, "", "");
KSYMTAB_FUNC(ccci_set_spm_md_sleep_cb, "", "");
KSYMTAB_FUNC(ccci_md_force_assert, "", "");
KSYMTAB_FUNC(ccci_modem_init_common, "", "");

SYMBOL_CRC(ccci_skb_dequeue, 0xc678f1c6, "");
SYMBOL_CRC(ccci_skb_enqueue, 0x36e7ce2d, "");
SYMBOL_CRC(ccci_skb_queue_init, 0xb92dd0be, "");
SYMBOL_CRC(ccci_alloc_skb, 0x937c158a, "");
SYMBOL_CRC(ccci_free_skb, 0x228a686e, "");
SYMBOL_CRC(ccci_dump_skb_pool_usage, 0x9d81d651, "");
SYMBOL_CRC(ccci_get_per_md_data, 0xa0e7e691, "");
SYMBOL_CRC(ccci_mbrain_register, 0x1bc86913, "");
SYMBOL_CRC(ccci_mbrain_unregister, 0xdd76e4ca, "");
SYMBOL_CRC(mtk_ccci_request_port, 0xad14b49d, "");
SYMBOL_CRC(mtk_ccci_open_port, 0xe3982125, "");
SYMBOL_CRC(mtk_ccci_release_port, 0xd79924f3, "");
SYMBOL_CRC(ccci_c2k_set_usb_callback, 0x1761953f, "");
SYMBOL_CRC(ccci_port_get_dev_name, 0xaa217d98, "");
SYMBOL_CRC(mtk_ccci_send_data, 0x3ba29c19, "");
SYMBOL_CRC(mtk_ccci_read_data, 0xb24ba354, "");
SYMBOL_CRC(ccci_port_dump_status, 0x8bdc5822, "");
SYMBOL_CRC(ccci_port_queue_status_notify, 0x98264bb3, "");
SYMBOL_CRC(ccci_port_recv_skb, 0x3a4efb3c, "");
SYMBOL_CRC(ccci_port_send_msg_to_md, 0xa398699b, "");
SYMBOL_CRC(modem_dtr_set, 0x1f1ae43b, "");
SYMBOL_CRC(modem_dcd_state, 0xd3504f48, "");
SYMBOL_CRC(ccci_c2k_rawbulk_intercept, 0x9ba9b917, "");
SYMBOL_CRC(ccci_c2k_buffer_push, 0x3c3ef6ed, "");
SYMBOL_CRC(exec_ccci_kern_func, 0xcdd61926, "");
SYMBOL_CRC(ccci_rpc_remap_queue, 0x5ce691e5, "");
SYMBOL_CRC(get_smem_start_addr, 0x13275205, "");
SYMBOL_CRC(get_smem_phy_start_addr, 0x14b77ad8, "");
SYMBOL_CRC(register_ccci_sys_call_back, 0xafa7d906, "");
SYMBOL_CRC(ccci_set_power_throttle_cb, 0x9a9555f9, "");
SYMBOL_CRC(register_udc_functions, 0x286a2ee5, "");
SYMBOL_CRC(ccci_hif, 0xf1fa39ed, "");
SYMBOL_CRC(ccci_md_add_log_history, 0x2dfad08c, "");
SYMBOL_CRC(ccci_md_dump_log_history, 0x74095342, "");
SYMBOL_CRC(ccci_hif_register, 0x17b4c17b, "");
SYMBOL_CRC(ccci_md_get_smem_by_user_id, 0x710d2d97, "");
SYMBOL_CRC(ccci_get_md_view_phy_addr_by_user_id, 0x3e1bb677, "");
SYMBOL_CRC(ccci_register_md_state_receiver, 0xac93498d, "");
SYMBOL_CRC(ccci_set_dpmaif_debug_cb, 0x6bbc67ef, "");
SYMBOL_CRC(mtk_ccci_register_md_state_cb, 0x6b269f65, "");
SYMBOL_CRC(fsm_get_entity, 0x08a54426, "");
SYMBOL_CRC(ccci_fsm_get_md_state, 0x3b31bb5b, "");
SYMBOL_CRC(ccci_fsm_get_md_state_for_user, 0xbf79e3c4, "");
SYMBOL_CRC(md_fsm_exp_info, 0x5d39d790, "");
SYMBOL_CRC(md_notify_flightmode_cb_register, 0xfcf6d8b8, "");
SYMBOL_CRC(ccci_set_spm_mdsrc_cb, 0xcf5e6b70, "");
SYMBOL_CRC(ccci_set_spm_md_sleep_cb, 0xa6fd251e, "");
SYMBOL_CRC(ccci_md_force_assert, 0x809ca784, "");
SYMBOL_CRC(ccci_modem_init_common, 0xb2e9124b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe3176987, "skb_queue_tail" },
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x095bcefe, "skb_push" },
	{ 0x3bee7bd2, "skb_pull" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba95b4d5, "dev_kfree_skb_any_reason" },
	{ 0xe8165471, "__netdev_alloc_skb" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x9b1faacb, "device_create" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x0a105114, "gpiod_set_debounce" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xbef74f76, "of_find_matching_node_and_match" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x0bc477a2, "irq_set_irq_type" },
	{ 0xb472de60, "inject_pin_status_event" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x037a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xe2964344, "__wake_up" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x7594d536, "skb_put" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe06f78c7, "slbc_gid_request" },
	{ 0x803673d2, "slbc_validate" },
	{ 0x3b3f2cda, "slbc_invalidate" },
	{ 0x4fe5340d, "slbc_gid_release" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0xe8837d03, "ccci_event_log" },
	{ 0xc63b0ac3, "remap_pfn_range" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xa60386f1, "get_modem_is_enabled" },
	{ 0x8b76fae3, "ccci_util_cmpt_mem_dump" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x68db9aa8, "__vma_start_write" },
	{ 0x9743fb5c, "skb_trim" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb4028d67, "proc_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x145226de, "inject_md_status_event" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x962dded2, "register_spmi_md_force_assert" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x5a921311, "strncmp" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x37dd5de9, "ccci_get_adc_num" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x1749211d, "ccci_get_adc_val" },
	{ 0x991f0960, "ccmni_ops" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x007f1d60, "mtk_disp_mipi_clk_change" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xf41c01eb, "mtk_disp_mipi_ccci_callback" },
	{ 0x738e21be, "mtk_disp_osc_ccci_callback" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x08eb1085, "get_md_resv_udc_info" },
	{ 0x26d966fd, "get_md_resv_phy_cap_size" },
	{ 0x204036fe, "get_md_smem_dfd_size" },
	{ 0xb4196514, "get_smem_amms_pos_size" },
	{ 0x0668fd33, "get_smem_align_padding_size" },
	{ 0xdb033c0a, "get_md_cache_region_info" },
	{ 0xcab9bc76, "get_md_resv_mem_info" },
	{ 0xa122b79a, "ccci_map_phy_addr" },
	{ 0x53c6d267, "get_md_resv_csmem_info" },
	{ 0x18c331d7, "get_md_smem_cachable_offset" },
	{ 0x64957f22, "mtk_ccci_get_md_nc_smem_inf" },
	{ 0xf909b421, "mtk_ccci_get_md_c_smem_inf" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xd767d2cf, "get_md_resv_ccb_info" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0x419a5ba1, "mtk_ccci_get_smem_by_id" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x1966c223, "ccci_util_mem_dump" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x92dfafaa, "ufs_mtk_cali_hold" },
	{ 0xeff56a13, "ufs_mtk_cali_release" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xdc059dfd, "mtk_clear_md_violation" },
	{ 0xe9863326, "smpu_clear_md_violation" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xa7eee324, "ccci_get_adc_mV" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa0612e94, "get_soc_md_rt_rat" },
	{ 0xa4f4d318, "check_rat_at_rt_setting" },
	{ 0x51939dcb, "get_mtee_is_enabled" },
	{ 0x8bd51a07, "get_md_resv_sib_size" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xdccf1550, "get_md_sib_mem_info" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x4bc2042c, "mtk_emiisu_record_off" },
	{ 0x7944e0fc, "tracing_off" },
	{ 0x6961e6ba, "aed_md_exception_api" },
	{ 0x94c0bce2, "register_devapc_vio_callback" },
	{ 0x6cc60406, "check_rat_at_md_img" },
	{ 0x5aa36892, "get_md_bin_capability" },
	{ 0xa0e55e02, "set_soc_md_rt_rat_by_idx" },
	{ 0x6bfc0e5c, "set_soc_md_rt_rat_str" },
	{ 0x55714f75, "get_md_img_type" },
	{ 0x023fc232, "get_soc_md_rt_rat_idx" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfdd0214d, "kobject_init_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x4b922029, "ccci_get_md_info_str" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9166fada, "strncpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe189bf8f, "mtk_emimpu_md_handling_register" },
	{ 0x47a8d9c2, "mtk_smpu_md_handling_register" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0xf2bebf92, "regulator_count_voltages" },
	{ 0x082966fe, "regulator_list_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x99fe66ff, "regulator_put" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaba63322, "of_iomap" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x51b8698f, "mtk_emidbg_dump" },
	{ 0xc460ce0f, "spmi_dump_pmif_record_reg" },
	{ 0x37d20ffc, "kicker_pbm_by_md" },
	{ 0x53331182, "regulator_sync_voltage" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xbe8f1358, "ccci_sysfs_add_modem" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x7d606fd7, "ccci_get_md_check_hdr_inf" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x05668b68, "init_md_section_level" },
	{ 0x42aac25f, "sysfs_create_file_ns" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0xe3176987,
	0xba637490,
	0x92997ed8,
	0xf9a482f9,
	0x095bcefe,
	0x3bee7bd2,
	0x49cd25ed,
	0xc5b6f236,
	0xd35cce70,
	0xba95b4d5,
	0xe8165471,
	0x75ca79b5,
	0x3b1b6444,
	0x9b1faacb,
	0x6fe9dcd4,
	0xb318cbab,
	0xd5977bfb,
	0xed55cabd,
	0xc6f46339,
	0xffeedf6a,
	0x5e292cf6,
	0x0a105114,
	0x07183fe6,
	0x7c611278,
	0xbef74f76,
	0xe136f93c,
	0x92d5838e,
	0x0bc477a2,
	0xb472de60,
	0x42ad47ad,
	0x2d3385d3,
	0xe2d5255a,
	0xa302b90d,
	0xcfc099c4,
	0xe17134b6,
	0x0f05f001,
	0xefe8a82e,
	0x037a0cba,
	0x96848186,
	0xba0aee2e,
	0xce5bc4d0,
	0xe2964344,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xd9a5ea54,
	0x28ba7b6c,
	0x7594d536,
	0xb3f7646e,
	0x5e515be6,
	0xfe5d4bb2,
	0xf3cdc3c6,
	0xa571f6b0,
	0xe06f78c7,
	0x803673d2,
	0x3b3f2cda,
	0x4fe5340d,
	0x9ec6ca96,
	0xf5edea2e,
	0xad73041f,
	0x5102a30b,
	0x6ac61a02,
	0xe8837d03,
	0xc63b0ac3,
	0xe94986d6,
	0x37befc70,
	0x2773c485,
	0xa60386f1,
	0x8b76fae3,
	0x98cf60b3,
	0xa916b694,
	0x8427cc7b,
	0x9a835040,
	0x4b750f53,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x68db9aa8,
	0x9743fb5c,
	0xbede130a,
	0x656e4a6e,
	0xb4028d67,
	0x3fd78f3b,
	0xe3ec2f2b,
	0x0f314d3e,
	0x7e19152a,
	0x145226de,
	0x75fb9062,
	0x962dded2,
	0x1ed4c5e6,
	0x5a921311,
	0x31b65f04,
	0xba8fbd64,
	0xb5b54b34,
	0x52c5c991,
	0xd36dc10c,
	0x37dd5de9,
	0xa191ccd1,
	0x1749211d,
	0x991f0960,
	0xcb2e80c6,
	0xc0b7c197,
	0xea82d349,
	0x007f1d60,
	0xfdf04ae0,
	0xb6e871b8,
	0xf41c01eb,
	0x738e21be,
	0x1b2fa1a9,
	0x999e8297,
	0x08eb1085,
	0x26d966fd,
	0x204036fe,
	0xb4196514,
	0x0668fd33,
	0xdb033c0a,
	0xcab9bc76,
	0xa122b79a,
	0x53c6d267,
	0x18c331d7,
	0x64957f22,
	0xf909b421,
	0x18b48e28,
	0xd767d2cf,
	0xdd115996,
	0x419a5ba1,
	0xf93aae46,
	0xeae3dfd6,
	0x9e7d6bd0,
	0x5d112304,
	0xedc03953,
	0x1966c223,
	0x64311477,
	0x6b883e5a,
	0x40863ba1,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xaf56600a,
	0x92dfafaa,
	0xeff56a13,
	0x4e8b8def,
	0xdc059dfd,
	0xe9863326,
	0x05590c04,
	0xa7eee324,
	0x41ed3709,
	0xa0612e94,
	0xa4f4d318,
	0x51939dcb,
	0x8bd51a07,
	0xf77555cd,
	0xdccf1550,
	0xb88dbfce,
	0x14de1090,
	0x4bc2042c,
	0x7944e0fc,
	0x6961e6ba,
	0x94c0bce2,
	0x6cc60406,
	0x5aa36892,
	0xa0e55e02,
	0x6bfc0e5c,
	0x55714f75,
	0x023fc232,
	0x8ddd8aad,
	0xfdd0214d,
	0x3bd2c4ce,
	0xce8498d7,
	0x4b922029,
	0x356461c8,
	0x9166fada,
	0x56470118,
	0xe189bf8f,
	0x47a8d9c2,
	0x9a807c66,
	0xf2bebf92,
	0x082966fe,
	0x2220455c,
	0xa06ad99d,
	0x99fe66ff,
	0xa823db6e,
	0x49dc0e6c,
	0x2ccea269,
	0x57d5e131,
	0x12db679a,
	0xaba63322,
	0xa1fd40f1,
	0xea23ff02,
	0xaf7cb74b,
	0xd4e81a21,
	0x51b8698f,
	0xc460ce0f,
	0x37d20ffc,
	0x53331182,
	0x13269d10,
	0x4eb4c414,
	0xfcec0987,
	0x27bbf221,
	0xbe8f1358,
	0xb9c425de,
	0x7d606fd7,
	0xce2840e7,
	0x05668b68,
	0x42aac25f,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"skb_queue_tail\0"
	"ccci_dump_write\0"
	"_printk\0"
	"msleep\0"
	"skb_push\0"
	"skb_pull\0"
	"alloc_workqueue\0"
	"queue_work_on\0"
	"_raw_spin_unlock_irqrestore\0"
	"dev_kfree_skb_any_reason\0"
	"__netdev_alloc_skb\0"
	"__fortify_panic\0"
	"of_get_property\0"
	"device_create\0"
	"class_create\0"
	"of_find_node_opts_by_path\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"of_get_named_gpio\0"
	"gpiod_set_debounce\0"
	"gpio_to_desc\0"
	"irq_of_parse_and_map\0"
	"of_find_matching_node_and_match\0"
	"of_property_read_variable_u32_array\0"
	"request_threaded_irq\0"
	"irq_set_irq_type\0"
	"inject_pin_status_event\0"
	"queue_delayed_work_on\0"
	"system_wq\0"
	"strcmp\0"
	"cdev_init\0"
	"cdev_add\0"
	"__kmalloc_cache_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"kfree\0"
	"scnprintf\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"__wake_up\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__init_waitqueue_head\0"
	"cdev_del\0"
	"skb_put\0"
	"kthread_should_stop\0"
	"ktime_get_ts64\0"
	"sys_tz\0"
	"of_find_compatible_node\0"
	"__mutex_init\0"
	"slbc_gid_request\0"
	"slbc_validate\0"
	"slbc_invalidate\0"
	"slbc_gid_release\0"
	"ktime_get_real_ts64\0"
	"___ratelimit\0"
	"autoremove_wake_function\0"
	"do_wait_intr_irq\0"
	"nonseekable_open\0"
	"ccci_event_log\0"
	"remap_pfn_range\0"
	"sched_clock\0"
	"jiffies_to_msecs\0"
	"__wake_up_locked\0"
	"get_modem_is_enabled\0"
	"ccci_util_cmpt_mem_dump\0"
	"strlen\0"
	"strnlen\0"
	"_raw_spin_lock_irq\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irq\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"__vma_start_write\0"
	"skb_trim\0"
	"pm_wakeup_ws_event\0"
	"snprintf\0"
	"proc_create\0"
	"register_chrdev_region\0"
	"alloc_chrdev_region\0"
	"wakeup_source_register\0"
	"__list_add_valid_or_report\0"
	"inject_md_status_event\0"
	"arch_timer_read_counter\0"
	"register_spmi_md_force_assert\0"
	"of_find_node_by_name\0"
	"strncmp\0"
	"of_property_read_u32_index\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__kmalloc_noprof\0"
	"get_random_u32\0"
	"ccci_get_adc_num\0"
	"gpiod_get_raw_value\0"
	"ccci_get_adc_val\0"
	"ccmni_ops\0"
	"hrtimer_active\0"
	"hrtimer_start_range_ns\0"
	"hrtimer_init\0"
	"mtk_disp_mipi_clk_change\0"
	"power_supply_get_by_name\0"
	"power_supply_get_property\0"
	"mtk_disp_mipi_ccci_callback\0"
	"mtk_disp_osc_ccci_callback\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"get_md_resv_udc_info\0"
	"get_md_resv_phy_cap_size\0"
	"get_md_smem_dfd_size\0"
	"get_smem_amms_pos_size\0"
	"get_smem_align_padding_size\0"
	"get_md_cache_region_info\0"
	"get_md_resv_mem_info\0"
	"ccci_map_phy_addr\0"
	"get_md_resv_csmem_info\0"
	"get_md_smem_cachable_offset\0"
	"mtk_ccci_get_md_nc_smem_inf\0"
	"mtk_ccci_get_md_c_smem_inf\0"
	"__memset_io\0"
	"get_md_resv_ccb_info\0"
	"mrdump_mini_add_extra_file\0"
	"mtk_ccci_get_smem_by_id\0"
	"__arm_smccc_smc\0"
	"__const_udelay\0"
	"__udelay\0"
	"__memcpy_fromio\0"
	"iounmap\0"
	"ccci_util_mem_dump\0"
	"regmap_read\0"
	"regmap_write\0"
	"ioremap_prot\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"arm64_use_ng_mappings\0"
	"ufs_mtk_cali_hold\0"
	"ufs_mtk_cali_release\0"
	"__pm_stay_awake\0"
	"mtk_clear_md_violation\0"
	"smpu_clear_md_violation\0"
	"__pm_relax\0"
	"ccci_get_adc_mV\0"
	"get_random_bytes\0"
	"get_soc_md_rt_rat\0"
	"check_rat_at_rt_setting\0"
	"get_mtee_is_enabled\0"
	"get_md_resv_sib_size\0"
	"__memcpy_toio\0"
	"get_md_sib_mem_info\0"
	"irq_set_irqchip_state\0"
	"mt_irq_dump_status\0"
	"mtk_emiisu_record_off\0"
	"tracing_off\0"
	"aed_md_exception_api\0"
	"register_devapc_vio_callback\0"
	"check_rat_at_md_img\0"
	"get_md_bin_capability\0"
	"set_soc_md_rt_rat_by_idx\0"
	"set_soc_md_rt_rat_str\0"
	"get_md_img_type\0"
	"get_soc_md_rt_rat_idx\0"
	"schedule_timeout\0"
	"kobject_init_and_add\0"
	"kobject_put\0"
	"kernel_kobj\0"
	"ccci_get_md_info_str\0"
	"rtc_time64_to_tm\0"
	"strncpy\0"
	"__warn_printk\0"
	"mtk_emimpu_md_handling_register\0"
	"mtk_smpu_md_handling_register\0"
	"devm_regulator_get\0"
	"regulator_count_voltages\0"
	"regulator_list_voltage\0"
	"regulator_set_voltage\0"
	"regulator_get_voltage\0"
	"regulator_put\0"
	"of_find_device_by_node\0"
	"dev_get_regmap\0"
	"devm_regulator_get_optional\0"
	"regulator_enable\0"
	"__platform_driver_register\0"
	"of_iomap\0"
	"syscon_regmap_lookup_by_phandle\0"
	"devm_clk_get\0"
	"of_property_read_string\0"
	"pm_runtime_enable\0"
	"mtk_emidbg_dump\0"
	"spmi_dump_pmif_record_reg\0"
	"kicker_pbm_by_md\0"
	"regulator_sync_voltage\0"
	"__pm_runtime_idle\0"
	"__pm_runtime_resume\0"
	"enable_irq\0"
	"disable_irq_nosync\0"
	"ccci_sysfs_add_modem\0"
	"register_syscore_ops\0"
	"ccci_get_md_check_hdr_inf\0"
	"irq_set_irq_wake\0"
	"init_md_section_level\0"
	"sysfs_create_file_ns\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib,mtk_slbc,spmi-mtk-pmif,ccci_auxadc,ccmni,mediatek-drm,mrdump,ufs-mediatek-dbg,mtk-emi-mpu,smpu,irq-dbg,emi,aee_aed,device-apc-common,mtk_pbm,mtk_mdpm");


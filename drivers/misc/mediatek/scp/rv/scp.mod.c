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

KSYMTAB_DATA(sap_ipidev, "", "");
KSYMTAB_FUNC(sap_enabled, "_gpl", "");
KSYMTAB_FUNC(sap_delicated_clock_supported, "_gpl", "");
KSYMTAB_FUNC(get_scp_semaphore, "_gpl", "");
KSYMTAB_FUNC(release_scp_semaphore, "_gpl", "");
KSYMTAB_FUNC(scp_get_semaphore_3way, "_gpl", "");
KSYMTAB_FUNC(scp_release_semaphore_3way, "_gpl", "");
KSYMTAB_FUNC(scp_A_register_notify, "_gpl", "");
KSYMTAB_FUNC(scp_A_unregister_notify, "_gpl", "");
KSYMTAB_FUNC(is_scp_ready, "_gpl", "");
KSYMTAB_FUNC(scp_wdt_reset, "", "");
KSYMTAB_FUNC(scp_get_reserve_mem_phys, "_gpl", "");
KSYMTAB_FUNC(scp_get_reserve_mem_virt, "_gpl", "");
KSYMTAB_FUNC(scp_get_reserve_mem_size, "_gpl", "");
KSYMTAB_FUNC(scp_register_feature, "_gpl", "");
KSYMTAB_FUNC(scp_deregister_feature, "_gpl", "");
KSYMTAB_FUNC(sensor_control_scp, "_gpl", "");
KSYMTAB_FUNC(get_scp_dram_region_manage, "_gpl", "");
KSYMTAB_FUNC(scp_send_thermal_wq, "_gpl", "");
KSYMTAB_DATA(scp_ipidev, "", "");
KSYMTAB_FUNC(scp_ipi_registration, "_gpl", "");
KSYMTAB_FUNC(scp_ipi_unregistration, "_gpl", "");
KSYMTAB_FUNC(scp_ipi_send, "_gpl", "");
KSYMTAB_FUNC(scp_awake_lock, "_gpl", "");
KSYMTAB_FUNC(scp_awake_unlock, "_gpl", "");
KSYMTAB_FUNC(scp_clr_spm_reg, "_gpl", "");
KSYMTAB_FUNC(get_scp_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(register_scp_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(unregister_scp_mbrain_dbg_ops, "", "");
KSYMTAB_FUNC(get_scp_mbrain_tmon_ops, "", "");
KSYMTAB_FUNC(register_scp_mbrain_tmon_ops, "", "");
KSYMTAB_FUNC(unregister_scp_mbrain_tmon_ops, "", "");

SYMBOL_CRC(sap_ipidev, 0xc9854e13, "");
SYMBOL_CRC(sap_enabled, 0xc77a6808, "_gpl");
SYMBOL_CRC(sap_delicated_clock_supported, 0xfd32e32f, "_gpl");
SYMBOL_CRC(get_scp_semaphore, 0x2db21c80, "_gpl");
SYMBOL_CRC(release_scp_semaphore, 0x63d4ecc5, "_gpl");
SYMBOL_CRC(scp_get_semaphore_3way, 0x67a94ad7, "_gpl");
SYMBOL_CRC(scp_release_semaphore_3way, 0xe0b2305f, "_gpl");
SYMBOL_CRC(scp_A_register_notify, 0x9cb5d1d2, "_gpl");
SYMBOL_CRC(scp_A_unregister_notify, 0x14b80435, "_gpl");
SYMBOL_CRC(is_scp_ready, 0x2aeafb62, "_gpl");
SYMBOL_CRC(scp_wdt_reset, 0xa837c196, "");
SYMBOL_CRC(scp_get_reserve_mem_phys, 0xcc348dcc, "_gpl");
SYMBOL_CRC(scp_get_reserve_mem_virt, 0x8d21adca, "_gpl");
SYMBOL_CRC(scp_get_reserve_mem_size, 0x7aa804ca, "_gpl");
SYMBOL_CRC(scp_register_feature, 0x2a8dae7b, "_gpl");
SYMBOL_CRC(scp_deregister_feature, 0xaae67432, "_gpl");
SYMBOL_CRC(sensor_control_scp, 0x7e23cc99, "_gpl");
SYMBOL_CRC(get_scp_dram_region_manage, 0x91637e55, "_gpl");
SYMBOL_CRC(scp_send_thermal_wq, 0xb8d8b9dc, "_gpl");
SYMBOL_CRC(scp_ipidev, 0xcd709e2e, "");
SYMBOL_CRC(scp_ipi_registration, 0x352d45cc, "_gpl");
SYMBOL_CRC(scp_ipi_unregistration, 0x5f003923, "_gpl");
SYMBOL_CRC(scp_ipi_send, 0x1636f87b, "_gpl");
SYMBOL_CRC(scp_awake_lock, 0xc4662108, "_gpl");
SYMBOL_CRC(scp_awake_unlock, 0x4f509eed, "_gpl");
SYMBOL_CRC(scp_clr_spm_reg, 0xc2285a53, "_gpl");
SYMBOL_CRC(get_scp_mbrain_dbg_ops, 0x6fdc3f9a, "");
SYMBOL_CRC(register_scp_mbrain_dbg_ops, 0x16a533d9, "");
SYMBOL_CRC(unregister_scp_mbrain_dbg_ops, 0xa702eb98, "");
SYMBOL_CRC(get_scp_mbrain_tmon_ops, 0x947814a5, "");
SYMBOL_CRC(register_scp_mbrain_tmon_ops, 0x768f33ff, "");
SYMBOL_CRC(unregister_scp_mbrain_tmon_ops, 0x7abeab5d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xa191ccd1, "gpiod_get_raw_value" },
	{ 0x07183fe6, "gpio_to_desc" },
	{ 0x5d37f189, "gpio_dump_regs_range" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x92e3b6d1, "mtk_ipi_device_register" },
	{ 0x5e292cf6, "of_get_named_gpio" },
	{ 0x6b201699, "of_find_property" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x656cde9e, "mtk_mbox_probe" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x367365db, "mt_get_fmeter_freq" },
	{ 0x1d222ced, "irq_get_irqchip_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x24d273d1, "add_timer" },
	{ 0xdb15f288, "simple_open" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0xbf37e88f, "register_3way_semaphore_notifier" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x5cf50b74, "of_reserved_mem_lookup" },
	{ 0x037a0cba, "kfree" },
	{ 0x139d7bcf, "mtk_mbox_clr_index_record" },
	{ 0x729759aa, "mtk_mbox_get_index_record" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x25758a2c, "misc_register" },
	{ 0x7181c4e7, "device_create_bin_file" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x3fbe65ce, "unregister_3way_semaphore_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xa2aed337, "aee_get_mode" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x97680f44, "aed_common_exception_api" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0x999e8297, "vfree" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8875720c, "mtk_mbox_read_recv_irq" },
	{ 0xab28f7ae, "mtk_mbox_read" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xe2964344, "__wake_up" },
	{ 0x53f85b6b, "mtk_ipi_recv_reply" },
	{ 0x6db70f53, "mtk_ipi_send_compl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0x64311477, "regmap_read" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe2fdcc90, "of_machine_compatible_match" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x173e2075, "seq_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x96848186,
	0x656e4a6e,
	0x1ed4c5e6,
	0xaf7cb74b,
	0x5a921311,
	0x12db679a,
	0x6fc35f2b,
	0x6b722180,
	0x0c1a5ee3,
	0xa191ccd1,
	0x07183fe6,
	0x5d37f189,
	0xe136f93c,
	0x374f8976,
	0x9f0ef8fa,
	0x92e3b6d1,
	0x5e292cf6,
	0x6b201699,
	0x67064f1d,
	0xbee3ddd5,
	0x31b65f04,
	0x656cde9e,
	0xa079425d,
	0xce2840e7,
	0x0f05f001,
	0x367365db,
	0x1d222ced,
	0x34db050b,
	0xd9051672,
	0x3e54ac69,
	0x24d273d1,
	0xdb15f288,
	0xd5977bfb,
	0xed55cabd,
	0x482d47c8,
	0xeae3dfd6,
	0xf9a482f9,
	0x4e8b8def,
	0xc38c83b8,
	0x4a353d20,
	0x49cd25ed,
	0x40863ba1,
	0x0f314d3e,
	0xa06ad99d,
	0xc905402b,
	0xfa4d3c24,
	0xd35cce70,
	0xba8fbd64,
	0xb5b54b34,
	0xc5b6f236,
	0xf93aae46,
	0x9c81ceff,
	0xa916b694,
	0x75ca79b5,
	0x88db9f48,
	0x2be0c009,
	0xc6f46339,
	0x65bb94f6,
	0xbf37e88f,
	0x3d0ffa5c,
	0xe2d5255a,
	0x9e400c59,
	0xf3cdc3c6,
	0x7c611278,
	0xa1fd40f1,
	0x92d5838e,
	0x3b1b6444,
	0x2ccea269,
	0x5cf50b74,
	0x037a0cba,
	0x139d7bcf,
	0x729759aa,
	0x05590c04,
	0xdc0e4855,
	0x25758a2c,
	0x7181c4e7,
	0x4e870156,
	0x3fbe65ce,
	0xc1514a3b,
	0xc3246938,
	0x9166fc03,
	0x8c03d20c,
	0x15ba50a6,
	0xaf56600a,
	0xa2aed337,
	0xf02aa937,
	0x97680f44,
	0x1b2fa1a9,
	0xa6257a2f,
	0x999e8297,
	0xc4f0da12,
	0x8875720c,
	0xab28f7ae,
	0x27bbf221,
	0xfcec0987,
	0x9d2ab8ac,
	0xd9a5ea54,
	0xa571f6b0,
	0x9a85eebb,
	0xe2964344,
	0x53f85b6b,
	0x6db70f53,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x6b883e5a,
	0x64311477,
	0x18b48e28,
	0x2396c7f0,
	0x2220455c,
	0x576b05bf,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x75966ec2,
	0xa4f72277,
	0x03b28b1f,
	0xa823db6e,
	0x1fec5304,
	0xe2fdcc90,
	0x52c5c991,
	0xea23ff02,
	0x57d5e131,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x173e2075,
	0xbcab6ee6,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scnprintf\0"
	"snprintf\0"
	"of_find_node_by_name\0"
	"of_property_read_string\0"
	"strncmp\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"gpiod_get_raw_value\0"
	"gpio_to_desc\0"
	"gpio_dump_regs_range\0"
	"of_property_read_variable_u32_array\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"mtk_ipi_device_register\0"
	"of_get_named_gpio\0"
	"of_find_property\0"
	"of_property_read_variable_u8_array\0"
	"vzalloc_noprof\0"
	"of_property_read_u32_index\0"
	"mtk_mbox_probe\0"
	"of_property_count_elems_of_size\0"
	"irq_set_irq_wake\0"
	"mem_alloc_profiling_key\0"
	"mt_get_fmeter_freq\0"
	"irq_get_irqchip_state\0"
	"_raw_spin_lock_irqsave\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"add_timer\0"
	"simple_open\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"blocking_notifier_call_chain\0"
	"__const_udelay\0"
	"msleep\0"
	"__pm_stay_awake\0"
	"mod_timer\0"
	"mtk_ipi_send\0"
	"alloc_workqueue\0"
	"ioremap_prot\0"
	"wakeup_source_register\0"
	"regulator_get_voltage\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_raw_spin_unlock_irqrestore\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"queue_work_on\0"
	"__arm_smccc_smc\0"
	"simple_read_from_buffer\0"
	"strnlen\0"
	"__fortify_panic\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"init_timer_key\0"
	"mtk_ipi_register\0"
	"register_3way_semaphore_notifier\0"
	"platform_get_resource\0"
	"strcmp\0"
	"platform_get_irq_byname\0"
	"of_find_compatible_node\0"
	"irq_of_parse_and_map\0"
	"syscon_regmap_lookup_by_phandle\0"
	"request_threaded_irq\0"
	"of_get_property\0"
	"devm_regulator_get_optional\0"
	"of_reserved_mem_lookup\0"
	"kfree\0"
	"mtk_mbox_clr_index_record\0"
	"mtk_mbox_get_index_record\0"
	"__pm_relax\0"
	"timer_delete\0"
	"misc_register\0"
	"device_create_bin_file\0"
	"debugfs_create_file\0"
	"unregister_3way_semaphore_notifier\0"
	"free_irq\0"
	"misc_deregister\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"jiffies\0"
	"arm64_use_ng_mappings\0"
	"aee_get_mode\0"
	"wait_for_completion_interruptible_timeout\0"
	"aed_common_exception_api\0"
	"vmalloc_noprof\0"
	"complete\0"
	"vfree\0"
	"ktime_get_with_offset\0"
	"mtk_mbox_read_recv_irq\0"
	"mtk_mbox_read\0"
	"disable_irq_nosync\0"
	"enable_irq\0"
	"__tasklet_schedule\0"
	"__init_waitqueue_head\0"
	"__mutex_init\0"
	"__arch_copy_to_user\0"
	"__wake_up\0"
	"mtk_ipi_recv_reply\0"
	"mtk_ipi_send_compl\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"regmap_write\0"
	"regmap_read\0"
	"__memset_io\0"
	"clk_set_parent\0"
	"regulator_set_voltage\0"
	"regmap_update_bits_base\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"register_pm_notifier\0"
	"_dev_notice\0"
	"regulator_get\0"
	"of_find_device_by_node\0"
	"__of_parse_phandle_with_args\0"
	"of_machine_compatible_match\0"
	"__kmalloc_noprof\0"
	"devm_clk_get\0"
	"regulator_enable\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_write\0"
	"sscanf\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pinctrl-mtk-common-v2_debug,mtk_tinysys_ipi,mtk-mbox,clk-common,mtk-afe-external,aee_aed");


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

KSYMTAB_FUNC(mtk8250_wakeup_callback_register, "", "");
KSYMTAB_FUNC(uarthub_drv_callbacks_register, "", "");
KSYMTAB_FUNC(uarthub_drv_callbacks_unregister, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_is_enable_fw_flow_ctrl_with_inband, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_enable_ctrl, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_is_support, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_bt_on_count_inc, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_is_txrx_idle, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_irq_register_cb, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_set_esc_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_inband_trigger_ctrl, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_inband_is_tx_complete, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dump_with_tag, "", "");
KSYMTAB_FUNC(mtk8250_uart_dump_bus_status_info, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_bt_sleep_flow_hw_mech_en, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_set_bt_sleep_flow_hw_mech_en, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_host_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_set_host_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_clear_host_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_host_bt_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_cmm_bt_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_bt_awake_sta, "", "");
KSYMTAB_FUNC(mtk8250_uart_dump, "", "");
KSYMTAB_FUNC(mtk8250_uart_start_record, "", "");
KSYMTAB_FUNC(mtk8250_uart_start_record_dbg, "", "");
KSYMTAB_FUNC(mtk8250_uart_reg_debug_dump, "", "");
KSYMTAB_FUNC(mtk8250_uart_end_record, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_host_fw_own_status, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_reset_flow_ctrl, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_host_wakeup_status, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dev0_set_tx_request, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dev0_set_rx_request, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dev0_clear_tx_request, "", "");
KSYMTAB_FUNC(mtk8250_set_runtime_active_status, "", "");
KSYMTAB_FUNC(mtk8250_set_flush_flag, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dev0_clear_rx_request, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_get_uart_cmm_rx_count, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_fifo_ctrl, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_assert_bit_ctrl, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_dump, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_reset, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_register_cb, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_enable_bypass_mode, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_set_request, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_clear_request, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_is_assert, "", "");
KSYMTAB_FUNC(mtk8250_uart_hub_is_ready, "", "");

SYMBOL_CRC(mtk8250_wakeup_callback_register, 0xf2e658a5, "");
SYMBOL_CRC(uarthub_drv_callbacks_register, 0x53e3fa1b, "");
SYMBOL_CRC(uarthub_drv_callbacks_unregister, 0x5f549b51, "");
SYMBOL_CRC(mtk8250_uart_hub_is_enable_fw_flow_ctrl_with_inband, 0x29ac501a, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_enable_ctrl, 0xb222231b, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_is_support, 0x6de7f034, "");
SYMBOL_CRC(mtk8250_uart_hub_bt_on_count_inc, 0xe2a74cf5, "");
SYMBOL_CRC(mtk8250_uart_hub_is_txrx_idle, 0x0d2f797c, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_irq_register_cb, 0x37378d10, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_set_esc_sta, 0xed88ba2f, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_inband_trigger_ctrl, 0xff3b7a83, "");
SYMBOL_CRC(mtk8250_uart_hub_inband_is_tx_complete, 0xf80123fb, "");
SYMBOL_CRC(mtk8250_uart_hub_dump_with_tag, 0xfbb7b186, "");
SYMBOL_CRC(mtk8250_uart_dump_bus_status_info, 0x11faf770, "");
SYMBOL_CRC(mtk8250_uart_hub_get_bt_sleep_flow_hw_mech_en, 0xd81fc6f8, "");
SYMBOL_CRC(mtk8250_uart_hub_set_bt_sleep_flow_hw_mech_en, 0xa3f668e1, "");
SYMBOL_CRC(mtk8250_uart_hub_get_host_awake_sta, 0x9b460d23, "");
SYMBOL_CRC(mtk8250_uart_hub_set_host_awake_sta, 0xa473cd33, "");
SYMBOL_CRC(mtk8250_uart_hub_clear_host_awake_sta, 0xa5fa10e6, "");
SYMBOL_CRC(mtk8250_uart_hub_get_host_bt_awake_sta, 0xd4029991, "");
SYMBOL_CRC(mtk8250_uart_hub_get_cmm_bt_awake_sta, 0x72f076f1, "");
SYMBOL_CRC(mtk8250_uart_hub_get_bt_awake_sta, 0x104fbcea, "");
SYMBOL_CRC(mtk8250_uart_dump, 0x1d112aab, "");
SYMBOL_CRC(mtk8250_uart_start_record, 0x425bd626, "");
SYMBOL_CRC(mtk8250_uart_start_record_dbg, 0x456c37c6, "");
SYMBOL_CRC(mtk8250_uart_reg_debug_dump, 0x209f5047, "");
SYMBOL_CRC(mtk8250_uart_end_record, 0x7d5cc79e, "");
SYMBOL_CRC(mtk8250_uart_hub_get_host_fw_own_status, 0x56587d8f, "");
SYMBOL_CRC(mtk8250_uart_hub_reset_flow_ctrl, 0x2fc19391, "");
SYMBOL_CRC(mtk8250_uart_hub_get_host_wakeup_status, 0xcda5da07, "");
SYMBOL_CRC(mtk8250_uart_hub_dev0_set_tx_request, 0xdeae7137, "");
SYMBOL_CRC(mtk8250_uart_hub_dev0_set_rx_request, 0x1db3a8b4, "");
SYMBOL_CRC(mtk8250_uart_hub_dev0_clear_tx_request, 0xc1a9db23, "");
SYMBOL_CRC(mtk8250_set_runtime_active_status, 0xdab49ca2, "");
SYMBOL_CRC(mtk8250_set_flush_flag, 0x7c37bc83, "");
SYMBOL_CRC(mtk8250_uart_hub_dev0_clear_rx_request, 0x83b37071, "");
SYMBOL_CRC(mtk8250_uart_hub_get_uart_cmm_rx_count, 0xeaf05d89, "");
SYMBOL_CRC(mtk8250_uart_hub_fifo_ctrl, 0x72048e77, "");
SYMBOL_CRC(mtk8250_uart_hub_assert_bit_ctrl, 0x58280377, "");
SYMBOL_CRC(mtk8250_uart_hub_dump, 0x4b16035a, "");
SYMBOL_CRC(mtk8250_uart_hub_reset, 0x5d2221ed, "");
SYMBOL_CRC(mtk8250_uart_hub_register_cb, 0x755a7422, "");
SYMBOL_CRC(mtk8250_uart_hub_enable_bypass_mode, 0x9f90e330, "");
SYMBOL_CRC(mtk8250_uart_hub_set_request, 0x27d0f2e2, "");
SYMBOL_CRC(mtk8250_uart_hub_clear_request, 0x7d2856e0, "");
SYMBOL_CRC(mtk8250_uart_hub_is_assert, 0xfef92b26, "");
SYMBOL_CRC(mtk8250_uart_hub_is_ready, 0x9b536105, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x8a66d2b6, "uart_xchar_out" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x58a59ee1, "__kfifo_dma_out_prepare" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x45bb3e27, "mtk_uart_set_apdma_clk" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x14de1090, "mt_irq_dump_status" },
	{ 0x9b197b65, "mtk_uart_set_rx_res_status" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb65a99f, "mtk_uart_apdma_enable_vff" },
	{ 0x20ab4b65, "mtk_uart_get_apdma_rx_state" },
	{ 0xd8a8b41e, "mtk_uart_set_apdma_rx_irq" },
	{ 0xe9e821e5, "mtk_uart_set_tx_res_status" },
	{ 0x78434c79, "mtk_uart_set_apdma_status" },
	{ 0x698f3950, "mtk_uart_apdma_polling_tx_finish" },
	{ 0x91bef507, "mtk_uart_apdma_polling_rx_finish" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2c8233b0, "uart_write_wakeup" },
	{ 0x019f121b, "__dma_sync_single_for_cpu" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x18e3e2ad, "nbcon_device_try_acquire" },
	{ 0x8d91682a, "nbcon_device_release" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd679e36d, "__dma_sync_single_for_device" },
	{ 0x098a7ae7, "mtk_save_uart_apdma_reg" },
	{ 0xb3bb47ba, "serial8250_get_port" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x41f72304, "mtk_uart_apdma_data_dump" },
	{ 0x1b7e9d4a, "mtk_uart_apdma_start_record" },
	{ 0xc3e4a0ea, "mtk_uart_apdma_record_dbg" },
	{ 0xe431bbb4, "mtk_uart_apdma_debug_dump" },
	{ 0x9edd0063, "mtk_uart_apdma_end_record" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xedc03953, "iounmap" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x7c731ead, "mtk_uart_get_apdma_handler_state" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3a711812, "serial8250_register_8250_port" },
	{ 0xa12bf5a7, "platform_get_irq_optional" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa9fd4f8b, "serial8250_rpm_get" },
	{ 0x3b336cc8, "serial8250_rpm_put" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xe6e94f93, "__pm_runtime_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf845e4d7, "serial8250_do_shutdown" },
	{ 0xdd11b299, "serial8250_do_startup" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0x0bd394d8, "tty_termios_baud_rate" },
	{ 0x05ed5b73, "serial8250_do_set_termios" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xe42e40f3, "uart_get_baud_rate" },
	{ 0x54330870, "uart_get_divisor" },
	{ 0x540fb687, "uart_update_timeout" },
	{ 0x8553dcc8, "mtk_uart_set_apdma_rx_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6ace248b, "tty_flip_buffer_push" },
	{ 0x5a70435b, "mtk_uart_get_apdma_rpt" },
	{ 0x8e988a84, "__tty_insert_flip_string_flags" },
	{ 0xde94c65b, "mtk_uart_rx_setting" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0x628aebe3, "pinctrl_pm_select_sleep_state" },
	{ 0xf04b8c28, "pinctrl_pm_select_default_state" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x8a66d2b6,
	0x2cf0c910,
	0x58a59ee1,
	0x656e4a6e,
	0xd5977bfb,
	0x45bb3e27,
	0xed55cabd,
	0x14de1090,
	0x9b197b65,
	0xeae3dfd6,
	0xfb65a99f,
	0x20ab4b65,
	0xd8a8b41e,
	0xe9e821e5,
	0x78434c79,
	0x698f3950,
	0x91bef507,
	0x75ca79b5,
	0x2c8233b0,
	0x019f121b,
	0x34db050b,
	0x18e3e2ad,
	0x8d91682a,
	0xd35cce70,
	0xd679e36d,
	0x098a7ae7,
	0xb3bb47ba,
	0xe94986d6,
	0x41f72304,
	0x1b7e9d4a,
	0xc3e4a0ea,
	0xe431bbb4,
	0x9edd0063,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xc3055d20,
	0xedc03953,
	0x40863ba1,
	0x7c731ead,
	0x12db679a,
	0xf7ca28dd,
	0x3d0ffa5c,
	0xb4ce05a5,
	0xee73d233,
	0x14fe5355,
	0x401167cc,
	0xa571f6b0,
	0x49cd25ed,
	0x556e4390,
	0x3a711812,
	0xa12bf5a7,
	0xd4e81a21,
	0xc8c7229e,
	0xea23ff02,
	0x47a915f1,
	0x31b65f04,
	0xe136f93c,
	0xcd6bda8d,
	0x92d5838e,
	0xce2840e7,
	0xa9fd4f8b,
	0x3b336cc8,
	0x4eb4c414,
	0xe6e94f93,
	0xb6e6d99d,
	0xb077e70a,
	0xf845e4d7,
	0xdd11b299,
	0x5a6368f5,
	0x0bd394d8,
	0x05ed5b73,
	0x5641485b,
	0xe42e40f3,
	0x54330870,
	0x540fb687,
	0x8553dcc8,
	0xf9a482f9,
	0x56470118,
	0x6ace248b,
	0x5a70435b,
	0x8e988a84,
	0xde94c65b,
	0xc5b6f236,
	0x7c9a7371,
	0x815588a6,
	0x146a11fc,
	0x5c27c40f,
	0xcefcd99a,
	0xcc248d26,
	0x628aebe3,
	0xf04b8c28,
	0xc7208c3a,
	0x6fc35f2b,
	0xaf56600a,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"uart_xchar_out\0"
	"sg_init_table\0"
	"__kfifo_dma_out_prepare\0"
	"snprintf\0"
	"mutex_lock\0"
	"mtk_uart_set_apdma_clk\0"
	"mutex_unlock\0"
	"mt_irq_dump_status\0"
	"mtk_uart_set_rx_res_status\0"
	"__const_udelay\0"
	"mtk_uart_apdma_enable_vff\0"
	"mtk_uart_get_apdma_rx_state\0"
	"mtk_uart_set_apdma_rx_irq\0"
	"mtk_uart_set_tx_res_status\0"
	"mtk_uart_set_apdma_status\0"
	"mtk_uart_apdma_polling_tx_finish\0"
	"mtk_uart_apdma_polling_rx_finish\0"
	"__fortify_panic\0"
	"uart_write_wakeup\0"
	"__dma_sync_single_for_cpu\0"
	"_raw_spin_lock_irqsave\0"
	"nbcon_device_try_acquire\0"
	"nbcon_device_release\0"
	"_raw_spin_unlock_irqrestore\0"
	"__dma_sync_single_for_device\0"
	"mtk_save_uart_apdma_reg\0"
	"serial8250_get_port\0"
	"sched_clock\0"
	"mtk_uart_apdma_data_dump\0"
	"mtk_uart_apdma_start_record\0"
	"mtk_uart_apdma_record_dbg\0"
	"mtk_uart_apdma_debug_dump\0"
	"mtk_uart_apdma_end_record\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"usleep_range_state\0"
	"iounmap\0"
	"ioremap_prot\0"
	"mtk_uart_get_apdma_handler_state\0"
	"__platform_driver_register\0"
	"platform_get_irq\0"
	"platform_get_resource\0"
	"_dev_err\0"
	"devm_ioremap\0"
	"of_device_get_match_data\0"
	"_dev_info\0"
	"__mutex_init\0"
	"alloc_workqueue\0"
	"clk_get_rate\0"
	"serial8250_register_8250_port\0"
	"platform_get_irq_optional\0"
	"pm_runtime_enable\0"
	"devm_kmalloc\0"
	"devm_clk_get\0"
	"_dev_warn\0"
	"of_property_read_u32_index\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_string_helper\0"
	"request_threaded_irq\0"
	"irq_set_irq_wake\0"
	"serial8250_rpm_get\0"
	"serial8250_rpm_put\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_suspend\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"serial8250_do_shutdown\0"
	"serial8250_do_startup\0"
	"devm_kfree\0"
	"tty_termios_baud_rate\0"
	"serial8250_do_set_termios\0"
	"tty_termios_encode_baud_rate\0"
	"uart_get_baud_rate\0"
	"uart_get_divisor\0"
	"uart_update_timeout\0"
	"mtk_uart_set_apdma_rx_state\0"
	"msleep\0"
	"__warn_printk\0"
	"tty_flip_buffer_push\0"
	"mtk_uart_get_apdma_rpt\0"
	"__tty_insert_flip_string_flags\0"
	"mtk_uart_rx_setting\0"
	"queue_work_on\0"
	"clk_prepare\0"
	"clk_enable\0"
	"__pm_runtime_set_status\0"
	"__pm_runtime_disable\0"
	"serial8250_unregister_port\0"
	"serial8250_suspend_port\0"
	"pinctrl_pm_select_sleep_state\0"
	"pinctrl_pm_select_default_state\0"
	"serial8250_resume_port\0"
	"platform_driver_unregister\0"
	"arm64_use_ng_mappings\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-uart-apdma,irq-dbg");

MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uart");
MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uartC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uart");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uartC*");

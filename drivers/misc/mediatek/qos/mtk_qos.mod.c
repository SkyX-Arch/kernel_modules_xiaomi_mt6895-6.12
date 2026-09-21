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

KSYMTAB_FUNC(qos_get_ipi_cmd, "_gpl", "");
KSYMTAB_FUNC(qos_sram_read, "_gpl", "");
KSYMTAB_FUNC(qos_sram_write, "_gpl", "");
KSYMTAB_FUNC(qos_force_polling_mode, "_gpl", "");
KSYMTAB_FUNC(qos_evt_tri_dbg_enable, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_count, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_buf, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_bw_threshold, "", "");
KSYMTAB_FUNC(get_qos_bound_idx, "", "");
KSYMTAB_FUNC(register_qos_notifier, "", "");
KSYMTAB_FUNC(unregister_qos_notifier, "", "");
KSYMTAB_FUNC(get_qos_bound_apubw_mon, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_apulat_mon, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_emibw_mon, "_gpl", "");
KSYMTAB_FUNC(get_qos_bound_smibw_mon, "_gpl", "");
KSYMTAB_FUNC(qos_init_rec_share, "_gpl", "");
KSYMTAB_FUNC(qos_rec_get_dramc_hist_bw, "_gpl", "");
KSYMTAB_FUNC(qos_rec_get_hist_data_bw, "_gpl", "");
KSYMTAB_FUNC(qos_rec_check_sram_ext, "_gpl", "");
KSYMTAB_FUNC(qos_ltr_buffer_support, "_gpl", "");
KSYMTAB_FUNC(qos_rec_get_hist_idx, "_gpl", "");
KSYMTAB_FUNC(qos_share_init_sram, "_gpl", "");
KSYMTAB_FUNC(qos_share_init_sram_ext, "_gpl", "");
KSYMTAB_FUNC(qos_share_init_sram_dbg, "_gpl", "");
KSYMTAB_FUNC(qos_rec_get_hist_bw, "_gpl", "");
KSYMTAB_FUNC(qos_share_sram_read_dbg, "_gpl", "");
KSYMTAB_FUNC(qos_share_sram_read_ext, "_gpl", "");
KSYMTAB_FUNC(qos_share_sram_read, "_gpl", "");
KSYMTAB_FUNC(qos_ipi_to_sspm_scmi_command, "_gpl", "");
KSYMTAB_FUNC(qos_ipi_init, "_gpl", "");
KSYMTAB_FUNC(qos_ipi_recv_init, "_gpl", "");

SYMBOL_CRC(qos_get_ipi_cmd, 0x5063ae40, "_gpl");
SYMBOL_CRC(qos_sram_read, 0xdde97e81, "_gpl");
SYMBOL_CRC(qos_sram_write, 0x371b73fa, "_gpl");
SYMBOL_CRC(qos_force_polling_mode, 0x30958346, "_gpl");
SYMBOL_CRC(qos_evt_tri_dbg_enable, 0x7e1a57c5, "_gpl");
SYMBOL_CRC(get_qos_bound_count, 0xab602512, "_gpl");
SYMBOL_CRC(get_qos_bound_buf, 0x9316458a, "_gpl");
SYMBOL_CRC(get_qos_bound, 0x7bf94eb3, "_gpl");
SYMBOL_CRC(get_qos_bound_bw_threshold, 0x37b9d804, "");
SYMBOL_CRC(get_qos_bound_idx, 0xdb27589c, "");
SYMBOL_CRC(register_qos_notifier, 0x228d9ed1, "");
SYMBOL_CRC(unregister_qos_notifier, 0x4a2cdcb9, "");
SYMBOL_CRC(get_qos_bound_apubw_mon, 0xcfca06ca, "_gpl");
SYMBOL_CRC(get_qos_bound_apulat_mon, 0x82dc0e13, "_gpl");
SYMBOL_CRC(get_qos_bound_emibw_mon, 0x703de9f9, "_gpl");
SYMBOL_CRC(get_qos_bound_smibw_mon, 0xbf6bc494, "_gpl");
SYMBOL_CRC(qos_init_rec_share, 0x95dd976e, "_gpl");
SYMBOL_CRC(qos_rec_get_dramc_hist_bw, 0xfe7434ba, "_gpl");
SYMBOL_CRC(qos_rec_get_hist_data_bw, 0x95fc090a, "_gpl");
SYMBOL_CRC(qos_rec_check_sram_ext, 0x10145cb8, "_gpl");
SYMBOL_CRC(qos_ltr_buffer_support, 0xded99d5c, "_gpl");
SYMBOL_CRC(qos_rec_get_hist_idx, 0xccc0bcdb, "_gpl");
SYMBOL_CRC(qos_share_init_sram, 0xefff8f76, "_gpl");
SYMBOL_CRC(qos_share_init_sram_ext, 0x33445339, "_gpl");
SYMBOL_CRC(qos_share_init_sram_dbg, 0xf8be9c29, "_gpl");
SYMBOL_CRC(qos_rec_get_hist_bw, 0x10c6040e, "_gpl");
SYMBOL_CRC(qos_share_sram_read_dbg, 0x3695f8c9, "_gpl");
SYMBOL_CRC(qos_share_sram_read_ext, 0x2df01202, "_gpl");
SYMBOL_CRC(qos_share_sram_read, 0x61492322, "_gpl");
SYMBOL_CRC(qos_ipi_to_sspm_scmi_command, 0xe9d29479, "_gpl");
SYMBOL_CRC(qos_ipi_init, 0x5f3a4970, "_gpl");
SYMBOL_CRC(qos_ipi_recv_init, 0x1a0235b6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x720bd81e, "sspm_sbuf_get" },
	{ 0x458ec8f9, "mtk_dramc_get_steps_freq" },
	{ 0xd702d989, "mtk_emicen_get_ch_cnt" },
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3667c9f1, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb6ea4eb1, "sspm_reserve_mem_get_phys" },
	{ 0x238d879c, "sspm_reserve_mem_get_virt" },
	{ 0x317f1dbc, "sspm_reserve_mem_get_size" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x69601fbf, "scmi_tinysys_common_get" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x1271fac9, "scmi_tinysys_register_event_notifier" },
	{ 0x4056037d, "scmi_tinysys_event_notify" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x3b1b6444,
	0x14fe5355,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xb318cbab,
	0xc8c7229e,
	0xe136f93c,
	0x6b201699,
	0x720bd81e,
	0x458ec8f9,
	0xd702d989,
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x62b33777,
	0x3667c9f1,
	0x656e4a6e,
	0x8c8569cb,
	0xb6ea4eb1,
	0x238d879c,
	0x317f1dbc,
	0x12db679a,
	0x6fc35f2b,
	0xd5977bfb,
	0x1cc7f053,
	0x69601fbf,
	0xed55cabd,
	0x51fcca8a,
	0x1271fac9,
	0x4056037d,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"of_get_property\0"
	"of_device_get_match_data\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"of_find_node_opts_by_path\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"sspm_sbuf_get\0"
	"mtk_dramc_get_steps_freq\0"
	"mtk_emicen_get_ch_cnt\0"
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"sysfs_create_group\0"
	"sysfs_remove_group\0"
	"snprintf\0"
	"kstrtoint\0"
	"sspm_reserve_mem_get_phys\0"
	"sspm_reserve_mem_get_virt\0"
	"sspm_reserve_mem_get_size\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"mutex_lock\0"
	"scmi_tinysys_common_set\0"
	"scmi_tinysys_common_get\0"
	"mutex_unlock\0"
	"get_scmi_tinysys_info\0"
	"scmi_tinysys_register_event_notifier\0"
	"scmi_tinysys_event_notify\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "sspm_v3,mtk_dramc,emi,tinysys-scmi");


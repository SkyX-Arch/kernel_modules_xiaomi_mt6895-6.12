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

KSYMTAB_DATA(ext_pmif_base, "", "");
KSYMTAB_DATA(register_spmi_md_force_assert, "", "");
KSYMTAB_FUNC(spmi_dump_wdt_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmif_acc_vio_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmic_acc_vio_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmif_busy_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmif_swinf_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmif_all_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_pmif_record_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_dump_spmimst_all_reg, "_gpl", "");
KSYMTAB_FUNC(spmi_pmif_create_attr, "_gpl", "");
KSYMTAB_FUNC(spmi_slvid_nack_cnt_add, "_gpl", "");
KSYMTAB_FUNC(get_spmi_slvid_nack_cnt, "_gpl", "");
KSYMTAB_FUNC(spmi_pmif_dbg_init, "_gpl", "");

SYMBOL_CRC(ext_pmif_base, 0x185f3324, "");
SYMBOL_CRC(register_spmi_md_force_assert, 0x962dded2, "");
SYMBOL_CRC(spmi_dump_wdt_reg, 0x1a1b2734, "_gpl");
SYMBOL_CRC(spmi_dump_pmif_acc_vio_reg, 0x16915d29, "_gpl");
SYMBOL_CRC(spmi_dump_pmic_acc_vio_reg, 0x697ef74e, "_gpl");
SYMBOL_CRC(spmi_dump_pmif_busy_reg, 0x3e7e4a84, "_gpl");
SYMBOL_CRC(spmi_dump_pmif_swinf_reg, 0xcb8b83d4, "_gpl");
SYMBOL_CRC(spmi_dump_pmif_all_reg, 0x54439c86, "_gpl");
SYMBOL_CRC(spmi_dump_pmif_record_reg, 0xc460ce0f, "_gpl");
SYMBOL_CRC(spmi_dump_spmimst_all_reg, 0x40b5dc2e, "_gpl");
SYMBOL_CRC(spmi_pmif_create_attr, 0x470052d3, "_gpl");
SYMBOL_CRC(spmi_slvid_nack_cnt_add, 0xf9971f23, "_gpl");
SYMBOL_CRC(get_spmi_slvid_nack_cnt, 0x3b87d790, "_gpl");
SYMBOL_CRC(spmi_pmif_dbg_init, 0x3afb4e07, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x7088dd6c, "spmi_controller_alloc" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x401167cc, "_dev_info" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xb358e223, "spmi_controller_add" },
	{ 0xd12566de, "irq_domain_remove" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x8b262a92, "irq_domain_instantiate" },
	{ 0xc2610736, "irq_domain_xlate_onetwocell" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xfadf798a, "irq_set_chip" },
	{ 0xdc6596fa, "irq_set_parent" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x234c9de3, "put_device" },
	{ 0x196327b9, "spmi_controller_remove" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xd8f63b34, "__seq_puts" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xe94986d6,
	0x34db050b,
	0xeae3dfd6,
	0xb4ce05a5,
	0xd35cce70,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x12db679a,
	0x7088dd6c,
	0x14fe5355,
	0x374f8976,
	0x9f0ef8fa,
	0xa4f72277,
	0x401167cc,
	0xea23ff02,
	0x0f314d3e,
	0xa571f6b0,
	0x9e400c59,
	0xb358e223,
	0xd12566de,
	0xe136f93c,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x31b65f04,
	0xa079425d,
	0xf9583f23,
	0x4e8b8def,
	0xd5977bfb,
	0xed55cabd,
	0x05590c04,
	0xf5edea2e,
	0xdb976d85,
	0xc8c7229e,
	0x8b262a92,
	0xc2610736,
	0x20a789ac,
	0xfadf798a,
	0xdc6596fa,
	0x7522f3ba,
	0x549525ef,
	0x1fef36c1,
	0xce2840e7,
	0xdd115996,
	0xb6e6d99d,
	0x234c9de3,
	0x196327b9,
	0x6fc35f2b,
	0x656e4a6e,
	0x5cf4d4de,
	0x4e870156,
	0x2077fc84,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xd8f63b34,
	0x3da016df,
	0x173e2075,
	0xc8f2ae9d,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"sched_clock\0"
	"_raw_spin_lock_irqsave\0"
	"__const_udelay\0"
	"_dev_err\0"
	"_raw_spin_unlock_irqrestore\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__platform_driver_register\0"
	"spmi_controller_alloc\0"
	"of_device_get_match_data\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"_dev_notice\0"
	"_dev_info\0"
	"devm_clk_get\0"
	"wakeup_source_register\0"
	"__mutex_init\0"
	"platform_get_irq_byname\0"
	"spmi_controller_add\0"
	"irq_domain_remove\0"
	"of_property_read_variable_u32_array\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"of_property_read_u32_index\0"
	"of_property_count_elems_of_size\0"
	"devm_request_threaded_irq\0"
	"__pm_stay_awake\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__pm_relax\0"
	"___ratelimit\0"
	"aee_kernel_warning_api_func\0"
	"devm_kmalloc\0"
	"irq_domain_instantiate\0"
	"irq_domain_xlate_onetwocell\0"
	"irq_set_chip_data\0"
	"irq_set_chip\0"
	"irq_set_parent\0"
	"irq_modify_status\0"
	"handle_nested_irq\0"
	"__irq_resolve_mapping\0"
	"irq_set_irq_wake\0"
	"mrdump_mini_add_extra_file\0"
	"clk_disable\0"
	"put_device\0"
	"spmi_controller_remove\0"
	"platform_driver_unregister\0"
	"snprintf\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"of_device_is_compatible\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"__seq_puts\0"
	"seq_putc\0"
	"seq_write\0"
	"seq_printf\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,mrdump");

MODULE_ALIAS("of:N*T*Cmediatek,mt6853-pmif-m");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-pmif-mC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-spmi-m");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-spmi-mC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-pmif-m");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-pmif-mC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-spmi-m");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-spmi-mC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-spmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-spmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-spmiC*");

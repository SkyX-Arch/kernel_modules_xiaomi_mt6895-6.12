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

KSYMTAB_FUNC(mtee_iova_to_phys, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_dbg_hang_detect, "_gpl", "");

SYMBOL_CRC(mtee_iova_to_phys, 0x97441009, "_gpl");
SYMBOL_CRC(mtk_iommu_dbg_hang_detect, 0xcbfd72d6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe4247826, "pm_runtime_get_if_in_use" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcda97337, "ao_secure_dbg_switch_by_atf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xcd926ce7, "mtk_iommu_set_ops" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0x64311477, "regmap_read" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x401167cc, "_dev_info" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0x0be515ae, "device_link_add" },
	{ 0x946de52f, "of_device_is_available" },
	{ 0xe0cbbd4a, "component_match_add_release" },
	{ 0x07ba5792, "platform_device_put" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x13ac70b8, "iommu_device_sysfs_add" },
	{ 0x048f6277, "iommu_device_register" },
	{ 0x539ad12b, "component_master_add_with_match" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0x686fd714, "mtk_smi_dbg_register_notifier" },
	{ 0x44aa3d07, "iommu_device_unregister" },
	{ 0xd1f1c987, "iommu_device_sysfs_remove" },
	{ 0xea730692, "device_link_remove" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7bccbaa0, "mtk_iommu_pm_trace" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x4d6d0bbc, "iommu_group_ref_get" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x33037d05, "iommu_alloc_resv_region" },
	{ 0x9da3590d, "dev_iommu_priv_set" },
	{ 0x13d540e0, "iommu_fwspec_add_ids" },
	{ 0xc148a03a, "alloc_io_pgtable_ops" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0xfbe64611, "mtk_iommu_sec_bk_init_by_atf" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xc68d99df, "report_custom_iommu_fault" },
	{ 0x64af7550, "mtk_iommu_secure_bk_tf_dump" },
	{ 0x2a4384d7, "mtk_iova_dump" },
	{ 0xfa5ae31f, "mtk_iommu_get_port_name" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5f475efb, "mtk_iommu_tlb_sync_trace" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc41530a5, "mtk_iommu_sec_bk_irq_en_by_atf" },
	{ 0x61bc7847, "mtk_iommu_get_mau_config" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf843029e, "mtk_iova_map" },
	{ 0x4565a0fa, "mtk_iova_unmap" },
	{ 0x037a0cba, "kfree" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xfab19e40, "component_bind_all" },
	{ 0x081129fa, "component_unbind_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3cb0e023, "mtk_iommu_debug_reset" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x657deb94, "devm_free_irq" },
	{ 0x57a85210, "component_master_del" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf432f7e7, "pm_runtime_force_suspend" },
	{ 0xf7316ea6, "pm_runtime_force_resume" },
	{ 0x41fd9201, "mtk_iommu_secure_bk_backup_by_atf" },
	{ 0xca1843ca, "mtk_iommu_secure_bk_restore_by_atf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf93aae46,
	0x92997ed8,
	0x34db050b,
	0xe4247826,
	0xd35cce70,
	0xcda97337,
	0x6b722180,
	0x0c1a5ee3,
	0x13269d10,
	0x12db679a,
	0x14fe5355,
	0xa571f6b0,
	0xcd926ce7,
	0xa1fd40f1,
	0xee6b71c4,
	0x64311477,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf7ca28dd,
	0xb088bcfc,
	0x47a915f1,
	0xa823db6e,
	0xb4ce05a5,
	0x401167cc,
	0xea23ff02,
	0x5be9ce07,
	0x0be515ae,
	0x946de52f,
	0xe0cbbd4a,
	0x07ba5792,
	0x1e6d26a8,
	0xd4e81a21,
	0x13ac70b8,
	0x048f6277,
	0x539ad12b,
	0x09674aa9,
	0x686fd714,
	0x44aa3d07,
	0xd1f1c987,
	0xea730692,
	0xc8c7229e,
	0x7bccbaa0,
	0xe17134b6,
	0x1fec5304,
	0xe136f93c,
	0x6b201699,
	0xcd6bda8d,
	0x6b2dc060,
	0xd5977bfb,
	0x8d22bb58,
	0x4d6d0bbc,
	0xed55cabd,
	0x33037d05,
	0x9da3590d,
	0x13d540e0,
	0xc148a03a,
	0x4eb4c414,
	0xfbe64611,
	0xc905402b,
	0xfa4d3c24,
	0xf9583f23,
	0xc68d99df,
	0x64af7550,
	0x2a4384d7,
	0xfa5ae31f,
	0xeae3dfd6,
	0x5f475efb,
	0x689f7bde,
	0x24d273d1,
	0xc41530a5,
	0x61bc7847,
	0xc3055d20,
	0xf843029e,
	0x4565a0fa,
	0x037a0cba,
	0xd3cc3c5d,
	0x7e19152a,
	0xfab19e40,
	0x081129fa,
	0xe2d5255a,
	0xc6f46339,
	0x3cb0e023,
	0x9a835040,
	0x5c27c40f,
	0x657deb94,
	0x57a85210,
	0xb6e6d99d,
	0xb077e70a,
	0xf432f7e7,
	0xf7316ea6,
	0x41fd9201,
	0xca1843ca,
	0x7c9a7371,
	0x815588a6,
	0x6fc35f2b,
	0x9688de8b,
	0xe4bbc1dd,
	0x0f05f001,
	0xefe8a82e,
	0x15ba50a6,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__arm_smccc_smc\0"
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"pm_runtime_get_if_in_use\0"
	"_raw_spin_unlock_irqrestore\0"
	"ao_secure_dbg_switch_by_atf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__pm_runtime_idle\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"mtk_iommu_set_ops\0"
	"syscon_regmap_lookup_by_phandle\0"
	"syscon_regmap_lookup_by_compatible\0"
	"regmap_read\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_irq\0"
	"of_count_phandle_with_args\0"
	"_dev_warn\0"
	"of_find_device_by_node\0"
	"_dev_err\0"
	"_dev_info\0"
	"devm_clk_get\0"
	"dma_set_mask\0"
	"device_link_add\0"
	"of_device_is_available\0"
	"component_match_add_release\0"
	"platform_device_put\0"
	"strstr\0"
	"pm_runtime_enable\0"
	"iommu_device_sysfs_add\0"
	"iommu_device_register\0"
	"component_master_add_with_match\0"
	"dev_pm_genpd_add_notifier\0"
	"mtk_smi_dbg_register_notifier\0"
	"iommu_device_unregister\0"
	"iommu_device_sysfs_remove\0"
	"device_link_remove\0"
	"devm_kmalloc\0"
	"mtk_iommu_pm_trace\0"
	"__kmalloc_cache_noprof\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"of_property_read_string_helper\0"
	"dump_stack\0"
	"mutex_lock\0"
	"iommu_group_alloc\0"
	"iommu_group_ref_get\0"
	"mutex_unlock\0"
	"iommu_alloc_resv_region\0"
	"dev_iommu_priv_set\0"
	"iommu_fwspec_add_ids\0"
	"alloc_io_pgtable_ops\0"
	"__pm_runtime_resume\0"
	"mtk_iommu_sec_bk_init_by_atf\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"devm_request_threaded_irq\0"
	"report_custom_iommu_fault\0"
	"mtk_iommu_secure_bk_tf_dump\0"
	"mtk_iova_dump\0"
	"mtk_iommu_get_port_name\0"
	"__const_udelay\0"
	"mtk_iommu_tlb_sync_trace\0"
	"mtk_smi_dbg_hang_detect\0"
	"add_timer\0"
	"mtk_iommu_sec_bk_irq_en_by_atf\0"
	"mtk_iommu_get_mau_config\0"
	"usleep_range_state\0"
	"mtk_iova_map\0"
	"mtk_iova_unmap\0"
	"kfree\0"
	"iommu_get_domain_for_dev\0"
	"__list_add_valid_or_report\0"
	"component_bind_all\0"
	"component_unbind_all\0"
	"strcmp\0"
	"init_timer_key\0"
	"mtk_iommu_debug_reset\0"
	"__list_del_entry_valid_or_report\0"
	"__pm_runtime_disable\0"
	"devm_free_irq\0"
	"component_master_del\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"pm_runtime_force_suspend\0"
	"pm_runtime_force_resume\0"
	"mtk_iommu_secure_bk_backup_by_atf\0"
	"mtk_iommu_secure_bk_restore_by_atf\0"
	"clk_prepare\0"
	"clk_enable\0"
	"platform_driver_unregister\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "iommu-secure,mtk-iommu-util,mtk-smi-dbg,iommu_debug");

MODULE_ALIAS("of:N*T*Cmediatek,mt2712-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-apu-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-apu-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-apu-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-apu-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu2");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu3");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-iommu3C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mdp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-mdp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-apu-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-apu-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-apu-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-apu-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mdp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mdp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-apu-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-apu-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mdp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6899-mdp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-apu-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-apu-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mdp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-mdp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-apu-iommu0");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-apu-iommu0C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-apu-iommu1");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-apu-iommu1C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-disp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mdp-iommu");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mdp-iommuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-m4uC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-m4u");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-m4uC*");

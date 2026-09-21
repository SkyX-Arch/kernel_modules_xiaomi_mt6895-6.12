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

KSYMTAB_FUNC(mtk_iova_map, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_unmap, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_map_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_trace_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_debug_reset, "_gpl", "");
KSYMTAB_FUNC(report_custom_iommu_fault, "_gpl", "");
KSYMTAB_FUNC(report_iommu_mau_fault, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_register_fault_callback, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_unregister_fault_callback, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_get_port_name, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_get_mau_config, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_set_debug_ops, "_gpl", "");
KSYMTAB_FUNC(report_custom_smmu_fault, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_wpreg_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_ste_cd_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_ste_cd_info_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_pgtable_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_pgtable_ops_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_iova_to_iopte, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_get_port_tf_ids, "_gpl", "");
KSYMTAB_FUNC(get_peri_iommu_id, "_gpl", "");
KSYMTAB_FUNC(peri_tf_analyse, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_tlb_sync_trace, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_pm_trace, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_alloc, "_gpl", "");
KSYMTAB_FUNC(mtk_iova_free, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_ela_init, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_enable_ela, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_disable_ela, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_ela_enabled, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_ela_dump, "_gpl", "");

SYMBOL_CRC(mtk_iova_map, 0xf843029e, "_gpl");
SYMBOL_CRC(mtk_iova_unmap, 0x4565a0fa, "_gpl");
SYMBOL_CRC(mtk_iova_map_dump, 0x3c1b5516, "_gpl");
SYMBOL_CRC(mtk_iova_dump, 0x2a4384d7, "_gpl");
SYMBOL_CRC(mtk_iova_trace_dump, 0x6afc3ee0, "_gpl");
SYMBOL_CRC(mtk_iommu_debug_reset, 0x3cb0e023, "_gpl");
SYMBOL_CRC(report_custom_iommu_fault, 0xc68d99df, "_gpl");
SYMBOL_CRC(report_iommu_mau_fault, 0x4feded90, "_gpl");
SYMBOL_CRC(mtk_iommu_register_fault_callback, 0x79146c3e, "_gpl");
SYMBOL_CRC(mtk_iommu_unregister_fault_callback, 0x5ff23113, "_gpl");
SYMBOL_CRC(mtk_iommu_get_port_name, 0xfa5ae31f, "_gpl");
SYMBOL_CRC(mtk_iommu_get_mau_config, 0x61bc7847, "_gpl");
SYMBOL_CRC(mtk_smmu_set_debug_ops, 0x8f2dd651, "_gpl");
SYMBOL_CRC(report_custom_smmu_fault, 0x215c7467, "_gpl");
SYMBOL_CRC(mtk_smmu_wpreg_dump, 0x4c0cecdf, "_gpl");
SYMBOL_CRC(mtk_smmu_ste_cd_dump, 0x501b55ab, "_gpl");
SYMBOL_CRC(mtk_smmu_ste_cd_info_dump, 0xeeb8a061, "_gpl");
SYMBOL_CRC(mtk_smmu_pgtable_dump, 0x146798b1, "_gpl");
SYMBOL_CRC(mtk_smmu_pgtable_ops_dump, 0xd8c5d8bd, "_gpl");
SYMBOL_CRC(mtk_smmu_iova_to_iopte, 0xf6a923f9, "_gpl");
SYMBOL_CRC(mtk_smmu_get_port_tf_ids, 0xd6d377f6, "_gpl");
SYMBOL_CRC(get_peri_iommu_id, 0xc9abf683, "_gpl");
SYMBOL_CRC(peri_tf_analyse, 0x948af7ac, "_gpl");
SYMBOL_CRC(mtk_iommu_tlb_sync_trace, 0x5f475efb, "_gpl");
SYMBOL_CRC(mtk_iommu_pm_trace, 0x7bccbaa0, "_gpl");
SYMBOL_CRC(mtk_iova_alloc, 0xcb90bdf7, "_gpl");
SYMBOL_CRC(mtk_iova_free, 0xbe49e3aa, "_gpl");
SYMBOL_CRC(mtk_smmu_ela_init, 0xe1f053af, "_gpl");
SYMBOL_CRC(mtk_smmu_enable_ela, 0x71e38483, "_gpl");
SYMBOL_CRC(mtk_smmu_disable_ela, 0xc2cfc242, "_gpl");
SYMBOL_CRC(mtk_smmu_ela_enabled, 0x81888b72, "_gpl");
SYMBOL_CRC(mtk_smmu_ela_dump, 0xb7889f8d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x037a0cba, "kfree" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x6bd1aa56, "stack_trace_save" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x630547d1, "mtk_smmu_tbu_data_get" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x349cba85, "strchr" },
	{ 0xa916b694, "strnlen" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xe091c977, "list_sort" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0xf9606a4e, "mrdump_set_extra_dump" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xc046d25b, "android_rvh_probe_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xa028da29, "__tracepoint_android_vh_iommu_iovad_alloc_iova" },
	{ 0x3b83eaff, "__tracepoint_android_vh_iommu_iovad_free_iova" },
	{ 0x5b946a09, "__tracepoint_android_rvh_iommu_limit_align_shift" },
	{ 0x08f479c8, "mtk_smmu_rpm_get" },
	{ 0x7d924693, "mtk_smmu_rpm_put" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x34db050b,
	0xe94986d6,
	0x037a0cba,
	0xf5edea2e,
	0x656e4a6e,
	0x29c37d82,
	0xdb976d85,
	0xece784c2,
	0xca9360b5,
	0x6bd1aa56,
	0x441d0de9,
	0xe17134b6,
	0x7e19152a,
	0xd35cce70,
	0x9a835040,
	0xc8f2ae9d,
	0x6b722180,
	0x0c1a5ee3,
	0x630547d1,
	0x75ca79b5,
	0x349cba85,
	0xa916b694,
	0xd3cc3c5d,
	0xe091c977,
	0xba8fbd64,
	0xb5b54b34,
	0xa5526619,
	0x4d9b652b,
	0x12db679a,
	0x14fe5355,
	0xf3cdc3c6,
	0xc8c7229e,
	0x7518b5f0,
	0xa2fa95a0,
	0xf9606a4e,
	0x391b5530,
	0x0c6a7f0d,
	0x665e62b5,
	0xbf748e79,
	0x0140f701,
	0x1b2fa1a9,
	0xaa0c318b,
	0x805e2dd2,
	0xc046d25b,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xa028da29,
	0x3b83eaff,
	0x5b946a09,
	0x08f479c8,
	0x7d924693,
	0xb318cbab,
	0xcd6bda8d,
	0xc905402b,
	0xfa4d3c24,
	0xa823db6e,
	0x9eacf8a5,
	0x85df9b6c,
	0x3b6c41ea,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"_raw_spin_lock_irqsave\0"
	"sched_clock\0"
	"kfree\0"
	"___ratelimit\0"
	"snprintf\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"rb_first\0"
	"rb_next\0"
	"stack_trace_save\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_del_entry_valid_or_report\0"
	"seq_printf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"mtk_smmu_tbu_data_get\0"
	"__fortify_panic\0"
	"strchr\0"
	"strnlen\0"
	"iommu_get_domain_for_dev\0"
	"list_sort\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"rb_insert_color\0"
	"rb_erase\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"of_find_compatible_node\0"
	"devm_kmalloc\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"mrdump_set_extra_dump\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"generic_file_llseek\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"vmalloc_noprof\0"
	"vscnprintf\0"
	"tracepoint_probe_register\0"
	"android_rvh_probe_register\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"__tracepoint_android_vh_iommu_iovad_alloc_iova\0"
	"__tracepoint_android_vh_iommu_iovad_free_iova\0"
	"__tracepoint_android_rvh_iommu_limit_align_shift\0"
	"mtk_smmu_rpm_get\0"
	"mtk_smmu_rpm_put\0"
	"of_find_node_opts_by_path\0"
	"of_property_read_string_helper\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"of_find_device_by_node\0"
	"kstrndup\0"
	"strsep\0"
	"kstrtouint\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,mtk-iommu-util,mrdump");


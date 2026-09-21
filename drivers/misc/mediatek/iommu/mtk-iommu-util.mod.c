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

KSYMTAB_FUNC(mtk_iommu_set_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_update_pm_status, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_set_pm_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_set_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_rpm_get, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_rpm_put, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_register_tbu, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_unregister_tbu, "_gpl", "");
KSYMTAB_FUNC(mtk_smmu_tbu_data_get, "_gpl", "");

SYMBOL_CRC(mtk_iommu_set_ops, 0xcd926ce7, "_gpl");
SYMBOL_CRC(mtk_iommu_update_pm_status, 0x16af3b30, "_gpl");
SYMBOL_CRC(mtk_iommu_set_pm_ops, 0xae761960, "_gpl");
SYMBOL_CRC(mtk_smmu_set_ops, 0x584799a7, "_gpl");
SYMBOL_CRC(mtk_smmu_rpm_get, 0x08f479c8, "_gpl");
SYMBOL_CRC(mtk_smmu_rpm_put, 0x7d924693, "_gpl");
SYMBOL_CRC(mtk_smmu_register_tbu, 0x0387486e, "_gpl");
SYMBOL_CRC(mtk_smmu_unregister_tbu, 0xd4b60022, "_gpl");
SYMBOL_CRC(mtk_smmu_tbu_data_get, 0x630547d1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0x7e19152a,
	0xd35cce70,
	0x9a835040,
	0xf3cdc3c6,
	0xe17134b6,
	0x037a0cba,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__list_del_entry_valid_or_report\0"
	"of_find_compatible_node\0"
	"__kmalloc_cache_noprof\0"
	"kfree\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


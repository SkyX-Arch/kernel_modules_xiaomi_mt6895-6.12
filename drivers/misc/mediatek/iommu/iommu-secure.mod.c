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

KSYMTAB_FUNC(mtk_iommu_sec_bk_init_by_atf, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_sec_bk_irq_en_by_atf, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_secure_bk_backup_by_atf, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_secure_bk_restore_by_atf, "_gpl", "");
KSYMTAB_FUNC(ao_secure_dbg_switch_by_atf, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_secure_bk_tf_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_copy_to_secure_entry, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_clean_secure_entry, "_gpl", "");
KSYMTAB_FUNC(mtk_iommu_dump_secure_entry, "_gpl", "");

SYMBOL_CRC(mtk_iommu_sec_bk_init_by_atf, 0xfbe64611, "_gpl");
SYMBOL_CRC(mtk_iommu_sec_bk_irq_en_by_atf, 0xc41530a5, "_gpl");
SYMBOL_CRC(mtk_iommu_secure_bk_backup_by_atf, 0x41fd9201, "_gpl");
SYMBOL_CRC(mtk_iommu_secure_bk_restore_by_atf, 0xca1843ca, "_gpl");
SYMBOL_CRC(ao_secure_dbg_switch_by_atf, 0xcda97337, "_gpl");
SYMBOL_CRC(mtk_iommu_secure_bk_tf_dump, 0x64af7550, "_gpl");
SYMBOL_CRC(mtk_iommu_copy_to_secure_entry, 0xe21c7b38, "_gpl");
SYMBOL_CRC(mtk_iommu_clean_secure_entry, 0x753768e0, "_gpl");
SYMBOL_CRC(mtk_iommu_dump_secure_entry, 0x090826ab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xf93aae46,
	0x12db679a,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__arm_smccc_smc\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-disp-iommu-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-mdp-iommu-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu0-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-apu-iommu1-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m4-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m6-bank4C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank1");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank1C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank2");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank2C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank3");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank3C*");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank4");
MODULE_ALIAS("of:N*T*Cmediatek,common-peri-iommu-m7-bank4C*");

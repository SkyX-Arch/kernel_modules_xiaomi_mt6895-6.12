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

KSYMTAB_FUNC(vcp_set_fp, "_gpl", "");
KSYMTAB_FUNC(mmup_enable_count_ex, "_gpl", "");
KSYMTAB_FUNC(is_mmup_enable_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_get_ipidev, "_gpl", "");
KSYMTAB_FUNC(vcp_get_reserve_mem_phys_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_get_reserve_mem_virt_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_get_reserve_mem_size_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_get_sram_virt_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_register_feature_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_deregister_feature_ex, "_gpl", "");
KSYMTAB_FUNC(is_vcp_ready_ex, "_gpl", "");
KSYMTAB_FUNC(is_vcp_suspending_ex, "_gpl", "");
KSYMTAB_FUNC(is_vcp_ao_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_A_register_notify_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_A_unregister_notify_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_cmd_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_register_mminfra_cb_ex, "_gpl", "");
KSYMTAB_FUNC(vcp_get_io_device_ex, "_gpl", "");
KSYMTAB_FUNC(dump_vcp_irq_status_ex, "_gpl", "");

SYMBOL_CRC(vcp_set_fp, 0x5a0cc31b, "_gpl");
SYMBOL_CRC(mmup_enable_count_ex, 0x8547ed7d, "_gpl");
SYMBOL_CRC(is_mmup_enable_ex, 0x862b117b, "_gpl");
SYMBOL_CRC(vcp_get_ipidev, 0x84072dc8, "_gpl");
SYMBOL_CRC(vcp_get_reserve_mem_phys_ex, 0x9c00ff0a, "_gpl");
SYMBOL_CRC(vcp_get_reserve_mem_virt_ex, 0x885260b9, "_gpl");
SYMBOL_CRC(vcp_get_reserve_mem_size_ex, 0x95b57945, "_gpl");
SYMBOL_CRC(vcp_get_sram_virt_ex, 0x5b9684f1, "_gpl");
SYMBOL_CRC(vcp_register_feature_ex, 0x88b539b6, "_gpl");
SYMBOL_CRC(vcp_deregister_feature_ex, 0x4e86d8bc, "_gpl");
SYMBOL_CRC(is_vcp_ready_ex, 0xb1f33e13, "_gpl");
SYMBOL_CRC(is_vcp_suspending_ex, 0x101529b7, "_gpl");
SYMBOL_CRC(is_vcp_ao_ex, 0x3813e2d9, "_gpl");
SYMBOL_CRC(vcp_A_register_notify_ex, 0x8e726dd5, "_gpl");
SYMBOL_CRC(vcp_A_unregister_notify_ex, 0x02f17f8d, "_gpl");
SYMBOL_CRC(vcp_cmd_ex, 0x2477f0b0, "_gpl");
SYMBOL_CRC(vcp_register_mminfra_cb_ex, 0xcf3fd141, "_gpl");
SYMBOL_CRC(vcp_get_io_device_ex, 0xbdb534a0, "_gpl");
SYMBOL_CRC(dump_vcp_irq_status_ex, 0x68a654f5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"module_layout\0"
;

MODULE_INFO(depends, "");


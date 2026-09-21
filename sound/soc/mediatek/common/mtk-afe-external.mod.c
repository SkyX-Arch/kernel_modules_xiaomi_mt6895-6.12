#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(register_afe_allocate_mem_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_afe_allocate_mem_notifier, "_gpl", "");
KSYMTAB_FUNC(notify_allocate_mem, "_gpl", "");
KSYMTAB_FUNC(register_vp_audio_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_vp_audio_notifier, "_gpl", "");
KSYMTAB_FUNC(notify_vb_audio_control, "_gpl", "");
KSYMTAB_FUNC(register_3way_semaphore_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_3way_semaphore_notifier, "_gpl", "");
KSYMTAB_FUNC(notify_3way_semaphore_control, "_gpl", "");
KSYMTAB_FUNC(register_vow_ipi_send_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_vow_ipi_send_notifier, "_gpl", "");
KSYMTAB_FUNC(notify_vow_ipi_send, "_gpl", "");
KSYMTAB_FUNC(register_ultra_afe_hw_free_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_ultra_afe_hw_free_notifier, "_gpl", "");
KSYMTAB_FUNC(notify_ultra_afe_hw_free, "_gpl", "");
KSYMTAB_FUNC(audio_get_power_scenario, "_gpl", "");
KSYMTAB_FUNC(register_get_power_scene_callback, "_gpl", "");

SYMBOL_CRC(register_afe_allocate_mem_notifier, 0x0a61d3a0, "_gpl");
SYMBOL_CRC(unregister_afe_allocate_mem_notifier, 0x700ad2f0, "_gpl");
SYMBOL_CRC(notify_allocate_mem, 0xb8b94ae2, "_gpl");
SYMBOL_CRC(register_vp_audio_notifier, 0x61915ca2, "_gpl");
SYMBOL_CRC(unregister_vp_audio_notifier, 0x8c502660, "_gpl");
SYMBOL_CRC(notify_vb_audio_control, 0xd7e8fa89, "_gpl");
SYMBOL_CRC(register_3way_semaphore_notifier, 0xbf37e88f, "_gpl");
SYMBOL_CRC(unregister_3way_semaphore_notifier, 0x3fbe65ce, "_gpl");
SYMBOL_CRC(notify_3way_semaphore_control, 0x2f59a855, "_gpl");
SYMBOL_CRC(register_vow_ipi_send_notifier, 0xbe7e7660, "_gpl");
SYMBOL_CRC(unregister_vow_ipi_send_notifier, 0x3706c5a1, "_gpl");
SYMBOL_CRC(notify_vow_ipi_send, 0x3fbeb482, "_gpl");
SYMBOL_CRC(register_ultra_afe_hw_free_notifier, 0x9da23678, "_gpl");
SYMBOL_CRC(unregister_ultra_afe_hw_free_notifier, 0xf6b30c8d, "_gpl");
SYMBOL_CRC(notify_ultra_afe_hw_free, 0x256df0b4, "_gpl");
SYMBOL_CRC(audio_get_power_scenario, 0x93953706, "_gpl");
SYMBOL_CRC(register_get_power_scene_callback, 0xdcf76741, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0x07629943, "raw_notifier_chain_unregister" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0xfba03a3f, "atomic_notifier_call_chain" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x354cf7b5,
	0x07629943,
	0xcaec9cda,
	0x83b96232,
	0xc866487b,
	0xfba03a3f,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"raw_notifier_chain_register\0"
	"raw_notifier_chain_unregister\0"
	"raw_notifier_call_chain\0"
	"atomic_notifier_chain_register\0"
	"atomic_notifier_chain_unregister\0"
	"atomic_notifier_call_chain\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


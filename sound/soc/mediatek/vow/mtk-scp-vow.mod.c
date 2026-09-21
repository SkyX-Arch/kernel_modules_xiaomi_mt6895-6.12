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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc348dcc, "scp_get_reserve_mem_phys" },
	{ 0x8d21adca, "scp_get_reserve_mem_virt" },
	{ 0xf6a1db9b, "vow_ipi_send" },
	{ 0x0a61d3a0, "register_afe_allocate_mem_notifier" },
	{ 0xbe7e7660, "register_vow_ipi_send_notifier" },
	{ 0x700ad2f0, "unregister_afe_allocate_mem_notifier" },
	{ 0x3706c5a1, "unregister_vow_ipi_send_notifier" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xcc348dcc,
	0x8d21adca,
	0xf6a1db9b,
	0x0a61d3a0,
	0xbe7e7660,
	0x700ad2f0,
	0x3706c5a1,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"scp_get_reserve_mem_phys\0"
	"scp_get_reserve_mem_virt\0"
	"vow_ipi_send\0"
	"register_afe_allocate_mem_notifier\0"
	"register_vow_ipi_send_notifier\0"
	"unregister_afe_allocate_mem_notifier\0"
	"unregister_vow_ipi_send_notifier\0"
	"module_layout\0"
;

MODULE_INFO(depends, "scp,mtk-vow,mtk-afe-external");


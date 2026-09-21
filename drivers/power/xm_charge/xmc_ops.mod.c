#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(xmc_ops_charge_enable, "", "");
KSYMTAB_FUNC(xmc_ops_charge_done, "", "");
KSYMTAB_FUNC(xmc_ops_get_charge_enable, "", "");
KSYMTAB_FUNC(xmc_ops_powerpath_enable, "", "");
KSYMTAB_FUNC(xmc_ops_get_powerpath_enable, "", "");
KSYMTAB_FUNC(xmc_ops_bc12_enable, "", "");
KSYMTAB_FUNC(xmc_ops_charge_timer_enable, "", "");
KSYMTAB_FUNC(xmc_ops_terminate_enable, "", "");
KSYMTAB_FUNC(xmc_ops_get_charge_state, "", "");
KSYMTAB_FUNC(xmc_ops_get_mivr_state, "", "");
KSYMTAB_FUNC(xmc_ops_set_dpdm_voltage, "", "");
KSYMTAB_FUNC(xmc_ops_otg_vbus_enable, "", "");
KSYMTAB_FUNC(xmc_ops_set_div_mode, "", "");
KSYMTAB_FUNC(xmc_ops_get_div_mode, "", "");
KSYMTAB_FUNC(xmc_ops_set_fcc, "", "");
KSYMTAB_FUNC(xmc_ops_set_icl, "", "");
KSYMTAB_FUNC(xmc_ops_set_fv, "", "");
KSYMTAB_FUNC(xmc_ops_set_iterm, "", "");
KSYMTAB_FUNC(xmc_ops_set_vinmin, "", "");
KSYMTAB_FUNC(xmc_ops_get_vbus, "", "");
KSYMTAB_FUNC(xmc_ops_get_ibus, "", "");
KSYMTAB_FUNC(xmc_ops_get_vbat, "", "");
KSYMTAB_FUNC(xmc_ops_get_ts, "", "");
KSYMTAB_FUNC(xmc_ops_adc_enable, "", "");
KSYMTAB_FUNC(xmc_ops_device_init, "", "");
KSYMTAB_FUNC(xmc_ops_dump_register, "", "");
KSYMTAB_FUNC(xmc_ops_request_vdm_cmd, "", "");
KSYMTAB_FUNC(xmc_ops_set_cap, "", "");
KSYMTAB_FUNC(xmc_ops_get_cap, "", "");
KSYMTAB_FUNC(xmc_ops_get_pd_id, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_soh, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_temp_max, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_time_ot, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_full, "", "");
KSYMTAB_FUNC(xmc_ops_set_gauge_fast_charge, "", "");
KSYMTAB_FUNC(xmc_ops_set_gauge_shutdown_mode, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_qmax, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_true_rem_q, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_initial_q, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_true_full_chg_q, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_t_sim, "", "");
KSYMTAB_FUNC(xmc_ops_get_gauge_cell_grid, "", "");
KSYMTAB_FUNC(xmc_ops_get_rsoc, "", "");
KSYMTAB_FUNC(xmc_ops_get_data, "", "");
KSYMTAB_FUNC(xmc_ops_find_device, "", "");
KSYMTAB_FUNC(xmc_device_register, "", "");
KSYMTAB_FUNC(xmc_device_unregister, "", "");

SYMBOL_CRC(xmc_ops_charge_enable, 0x20f68d33, "");
SYMBOL_CRC(xmc_ops_charge_done, 0xf8fdef0d, "");
SYMBOL_CRC(xmc_ops_get_charge_enable, 0xd3d72d08, "");
SYMBOL_CRC(xmc_ops_powerpath_enable, 0x7d8ee4d4, "");
SYMBOL_CRC(xmc_ops_get_powerpath_enable, 0xe1ee449c, "");
SYMBOL_CRC(xmc_ops_bc12_enable, 0x82432962, "");
SYMBOL_CRC(xmc_ops_charge_timer_enable, 0x7f328afe, "");
SYMBOL_CRC(xmc_ops_terminate_enable, 0x62e46571, "");
SYMBOL_CRC(xmc_ops_get_charge_state, 0xe387a470, "");
SYMBOL_CRC(xmc_ops_get_mivr_state, 0xeb8d7587, "");
SYMBOL_CRC(xmc_ops_set_dpdm_voltage, 0x87b72559, "");
SYMBOL_CRC(xmc_ops_otg_vbus_enable, 0x0c6fd042, "");
SYMBOL_CRC(xmc_ops_set_div_mode, 0xe860826e, "");
SYMBOL_CRC(xmc_ops_get_div_mode, 0x41dcda9e, "");
SYMBOL_CRC(xmc_ops_set_fcc, 0xe8af77b2, "");
SYMBOL_CRC(xmc_ops_set_icl, 0x105e6a4f, "");
SYMBOL_CRC(xmc_ops_set_fv, 0x329cad79, "");
SYMBOL_CRC(xmc_ops_set_iterm, 0xfa65e8e7, "");
SYMBOL_CRC(xmc_ops_set_vinmin, 0x3021bb72, "");
SYMBOL_CRC(xmc_ops_get_vbus, 0xda9bbfd5, "");
SYMBOL_CRC(xmc_ops_get_ibus, 0xce99938b, "");
SYMBOL_CRC(xmc_ops_get_vbat, 0xc079fcfa, "");
SYMBOL_CRC(xmc_ops_get_ts, 0x0a9597a8, "");
SYMBOL_CRC(xmc_ops_adc_enable, 0x6ef46d59, "");
SYMBOL_CRC(xmc_ops_device_init, 0x4df8eb7e, "");
SYMBOL_CRC(xmc_ops_dump_register, 0x5546b48b, "");
SYMBOL_CRC(xmc_ops_request_vdm_cmd, 0x029ffa44, "");
SYMBOL_CRC(xmc_ops_set_cap, 0x6de1c310, "");
SYMBOL_CRC(xmc_ops_get_cap, 0xfdd5e7c0, "");
SYMBOL_CRC(xmc_ops_get_pd_id, 0xd6043980, "");
SYMBOL_CRC(xmc_ops_get_gauge_soh, 0x731c418e, "");
SYMBOL_CRC(xmc_ops_get_gauge_temp_max, 0x24bde5b9, "");
SYMBOL_CRC(xmc_ops_get_gauge_time_ot, 0x5b49bf18, "");
SYMBOL_CRC(xmc_ops_get_gauge_full, 0x0691ae30, "");
SYMBOL_CRC(xmc_ops_set_gauge_fast_charge, 0xedef1d95, "");
SYMBOL_CRC(xmc_ops_set_gauge_shutdown_mode, 0x84b96316, "");
SYMBOL_CRC(xmc_ops_get_gauge_qmax, 0x5a177bee, "");
SYMBOL_CRC(xmc_ops_get_gauge_true_rem_q, 0x13c53126, "");
SYMBOL_CRC(xmc_ops_get_gauge_initial_q, 0x416d9e3f, "");
SYMBOL_CRC(xmc_ops_get_gauge_true_full_chg_q, 0x5c68b3dc, "");
SYMBOL_CRC(xmc_ops_get_gauge_t_sim, 0x5e05a5ee, "");
SYMBOL_CRC(xmc_ops_get_gauge_cell_grid, 0x8331913c, "");
SYMBOL_CRC(xmc_ops_get_rsoc, 0x5b4118f4, "");
SYMBOL_CRC(xmc_ops_get_data, 0x4296d91d, "");
SYMBOL_CRC(xmc_ops_find_device, 0xf025cb10, "");
SYMBOL_CRC(xmc_device_register, 0x6623ec06, "");
SYMBOL_CRC(xmc_device_unregister, 0x5d2ae827, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x037a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0xe2d5255a,
	0x2d39b0a7,
	0x037a0cba,
	0xd35cce70,
	0xe17134b6,
	0x7e19152a,
	0x9a835040,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"strcmp\0"
	"kstrdup\0"
	"kfree\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


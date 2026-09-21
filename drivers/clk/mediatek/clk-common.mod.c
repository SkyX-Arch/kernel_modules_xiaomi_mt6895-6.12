#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(register_mtk_clk_external_api_cb, "_gpl", "");
KSYMTAB_FUNC(set_sp_clk_ops, "_gpl", "");
KSYMTAB_FUNC(sp_merge_clk_control, "_gpl", "");
KSYMTAB_FUNC(register_mtk_clk_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_mtk_clk_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_ipi_callback, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_get_ipi_cb, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_polling_vcp_ready, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_mminfra_hwv_power_ctrl, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_mminfra_hwv_power_ctrl_optional, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_mminfra_hwv_data, "_gpl", "");
KSYMTAB_FUNC(mtk_alloc_clk_data, "_gpl", "");
KSYMTAB_FUNC(mtk_free_clk_data, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_fixed_clks, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_factors, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_gates_with_dev, "", "");
KSYMTAB_FUNC(mtk_clk_register_gates, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_composite, "", "");
KSYMTAB_FUNC(mtk_clk_register_composites, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_dividers, "", "");
KSYMTAB_FUNC(mtk_clk_simple_probe, "", "");
KSYMTAB_FUNC(register_fh_set_rate, "_gpl", "");
KSYMTAB_FUNC(mtk_hwv_pll_on, "_gpl", "");
KSYMTAB_FUNC(mtk_hwv_pll_off, "_gpl", "");
KSYMTAB_FUNC(mtk_hwv_pll_is_on, "_gpl", "");
KSYMTAB_DATA(mtk_pll_ops, "_gpl", "");
KSYMTAB_DATA(mtk_pll_fenc_ops, "_gpl", "");
KSYMTAB_DATA(mtk_pll_setclr_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_pll_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_pll_setclr_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_pll_no_res_setclr_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_plls, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_null, "", "");
KSYMTAB_DATA(mtk_clk_gate_ops_setclr_dummy, "", "");
KSYMTAB_DATA(mtk_clk_gate_ops_setclr_dummys, "", "");
KSYMTAB_DATA(mtk_clk_gate_ops_hwv_dummy, "", "");
KSYMTAB_DATA(mtk_clk_gate_ops_setclr_inv_dummy, "", "");
KSYMTAB_DATA(mtk_clk_gate_ops_setclr, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_setclr_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_mm_gate_ops_setclr, "_gpl", "");
KSYMTAB_DATA(mtk_clk_mm_gate_ops_setclr_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_hwv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_hwv_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_no_setclr, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_ops_no_setclr_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_mm_gate_ops_no_setclr_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_generic_ap_hwv_ops, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_generic_ap_hwv_ops_inv, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_generic_mm_hwv_ops, "_gpl", "");
KSYMTAB_DATA(mtk_clk_gate_generic_mm_hwv_ops_inv, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_gate_hwv, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_gate, "_gpl", "");
KSYMTAB_FUNC(mtk_mux_set_quick_switch_chk_cb, "", "");
KSYMTAB_FUNC(mtk_clk_mux_register_callback, "_gpl", "");
KSYMTAB_DATA(mtk_mux_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_clr_set_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_clr_set_upd_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_clr_set_upd_fenc_delay_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_fenc_clr_set_upd_fenc_delay_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_fenc_clr_set_upd_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_clr_set_upd_2_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_clr_set_upd_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_generic_hwv_drate_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_fenc_clr_set_upd_2_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_gate_fenc_clr_set_upd_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_generic_hwv_ops, "_gpl", "");
KSYMTAB_DATA(mtk_mux_generic_hwv_al_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_mux_fenc_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_mux_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_dfs_mux_dummy_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_dfs_mux_fenc_ops, "_gpl", "");
KSYMTAB_DATA(mtk_hwv_dfs_mux_ops, "_gpl", "");
KSYMTAB_DATA(mtk_ipi_mux_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_register_muxes, "_gpl", "");
KSYMTAB_DATA(mtk_mux_user_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_clk_mux_register_user_clks, "_gpl", "");
KSYMTAB_FUNC(set_clkchk_ops, "", "");
KSYMTAB_FUNC(is_valid_reg, "", "");
KSYMTAB_FUNC(get_all_regnames, "", "");
KSYMTAB_FUNC(clkchk_devapc_dump, "", "");
KSYMTAB_FUNC(clkchk_external_dump, "", "");
KSYMTAB_FUNC(get_all_provider_clks, "_gpl", "");
KSYMTAB_FUNC(clk_chk_lookup, "", "");
KSYMTAB_FUNC(pwr_hw_is_on, "", "");
KSYMTAB_FUNC(clkchk_pvdck_is_on, "", "");
KSYMTAB_FUNC(clkchk_pvdck_is_prepared, "", "");
KSYMTAB_FUNC(clkchk_pvdck_is_enabled, "", "");
KSYMTAB_FUNC(mtk_clk_check_muxes, "_gpl", "");
KSYMTAB_DATA(clk_chk_dev_pm_ops, "", "");
KSYMTAB_FUNC(clkchk_chk_pm_state, "_gpl", "");
KSYMTAB_FUNC(set_clkchk_notify, "", "");
KSYMTAB_FUNC(clkchk_hwv_irq_init, "", "");
KSYMTAB_FUNC(mt_get_fmeter_clks, "", "");
KSYMTAB_FUNC(mt_get_ckgen_freq, "", "");
KSYMTAB_FUNC(mt_get_abist_freq, "", "");
KSYMTAB_FUNC(mt_get_abist2_freq, "", "");
KSYMTAB_FUNC(mt_get_vlpck_freq, "", "");
KSYMTAB_FUNC(mt_get_subsys_freq, "", "");
KSYMTAB_FUNC(mt_get_fmeter_freq, "", "");
KSYMTAB_FUNC(mt_get_fmeter_id, "", "");
KSYMTAB_FUNC(mt_subsys_freq_register, "", "");
KSYMTAB_FUNC(fmeter_set_ops, "", "");
KSYMTAB_FUNC(pdchk_debug_dump, "_gpl", "");
KSYMTAB_FUNC(pdchk_pd_is_on, "_gpl", "");
KSYMTAB_FUNC(is_hwccf_mtcmos_on, "", "");
KSYMTAB_FUNC(pdchk_get_bug_on_stat, "", "");
KSYMTAB_FUNC(pdchk_dump_trace_evt, "", "");
KSYMTAB_DATA(pdchk_dev_pm_ops_no_irq, "", "");
KSYMTAB_DATA(pdchk_dev_pm_ops, "", "");
KSYMTAB_FUNC(pdchk_get_pd_name, "_gpl", "");
KSYMTAB_FUNC(pdchk_common_init, "", "");
KSYMTAB_FUNC(pdchk_get_all_genpd, "", "");
KSYMTAB_FUNC(pdchk_hwv_irq_init, "", "");
KSYMTAB_FUNC(set_pdchk_notify, "", "");
KSYMTAB_FUNC(set_clkdbg_ops, "", "");
KSYMTAB_FUNC(unset_clkdbg_ops, "", "");
KSYMTAB_FUNC(__clk_dbg_lookup, "_gpl", "");
KSYMTAB_FUNC(clkdbg_dev_from_name, "_gpl", "");
KSYMTAB_FUNC(clk_dbg_driver_register, "", "");

SYMBOL_CRC(register_mtk_clk_external_api_cb, 0x2986ced4, "_gpl");
SYMBOL_CRC(set_sp_clk_ops, 0xfb2f31dc, "_gpl");
SYMBOL_CRC(sp_merge_clk_control, 0x5f373827, "_gpl");
SYMBOL_CRC(register_mtk_clk_notifier, 0x96758ade, "_gpl");
SYMBOL_CRC(unregister_mtk_clk_notifier, 0xef8c685e, "_gpl");
SYMBOL_CRC(mtk_clk_notify, 0x907021cb, "_gpl");
SYMBOL_CRC(mtk_clk_register_ipi_callback, 0x1a7acd2c, "_gpl");
SYMBOL_CRC(mtk_clk_get_ipi_cb, 0x8d2ef692, "_gpl");
SYMBOL_CRC(mtk_clk_polling_vcp_ready, 0x92c0772e, "_gpl");
SYMBOL_CRC(mtk_clk_mminfra_hwv_power_ctrl, 0xe64a711c, "_gpl");
SYMBOL_CRC(mtk_clk_mminfra_hwv_power_ctrl_optional, 0xe808d22f, "_gpl");
SYMBOL_CRC(mtk_clk_register_mminfra_hwv_data, 0x16ddae92, "_gpl");
SYMBOL_CRC(mtk_alloc_clk_data, 0x8165f393, "_gpl");
SYMBOL_CRC(mtk_free_clk_data, 0xeeee608f, "_gpl");
SYMBOL_CRC(mtk_clk_register_fixed_clks, 0xa89ccd8d, "_gpl");
SYMBOL_CRC(mtk_clk_register_factors, 0x84776ffc, "_gpl");
SYMBOL_CRC(mtk_clk_register_gates_with_dev, 0x44f14a96, "");
SYMBOL_CRC(mtk_clk_register_gates, 0x07b2f06e, "_gpl");
SYMBOL_CRC(mtk_clk_register_composite, 0x3caf844c, "");
SYMBOL_CRC(mtk_clk_register_composites, 0xcc3a88be, "_gpl");
SYMBOL_CRC(mtk_clk_register_dividers, 0x500f2327, "");
SYMBOL_CRC(mtk_clk_simple_probe, 0xcb54caf6, "");
SYMBOL_CRC(register_fh_set_rate, 0xbc3d2513, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_on, 0x8fb974d4, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_off, 0x347346af, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_is_on, 0x62d71400, "_gpl");
SYMBOL_CRC(mtk_pll_ops, 0xcda908eb, "_gpl");
SYMBOL_CRC(mtk_pll_fenc_ops, 0x51d937ea, "_gpl");
SYMBOL_CRC(mtk_pll_setclr_ops, 0x97e7871c, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_ops, 0x8759af09, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_setclr_ops, 0xbb5cf970, "_gpl");
SYMBOL_CRC(mtk_hwv_pll_no_res_setclr_ops, 0x46ff3103, "_gpl");
SYMBOL_CRC(mtk_clk_register_plls, 0xc08b72e6, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_null, 0xb1cea751, "");
SYMBOL_CRC(mtk_clk_gate_ops_setclr_dummy, 0x8f238263, "");
SYMBOL_CRC(mtk_clk_gate_ops_setclr_dummys, 0xacced2b2, "");
SYMBOL_CRC(mtk_clk_gate_ops_hwv_dummy, 0xcb316c9b, "");
SYMBOL_CRC(mtk_clk_gate_ops_setclr_inv_dummy, 0xefe5abf1, "");
SYMBOL_CRC(mtk_clk_gate_ops_setclr, 0xf80085f7, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_setclr_inv, 0x53838542, "_gpl");
SYMBOL_CRC(mtk_clk_mm_gate_ops_setclr, 0x5117ffb0, "_gpl");
SYMBOL_CRC(mtk_clk_mm_gate_ops_setclr_inv, 0xa6af979a, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_hwv, 0x238c79ef, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_hwv_inv, 0xfcc7ac9d, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_no_setclr, 0xcbc6e8fa, "_gpl");
SYMBOL_CRC(mtk_clk_gate_ops_no_setclr_inv, 0xc3961432, "_gpl");
SYMBOL_CRC(mtk_clk_mm_gate_ops_no_setclr_inv, 0x0a206c7f, "_gpl");
SYMBOL_CRC(mtk_clk_gate_generic_ap_hwv_ops, 0x1f499f40, "_gpl");
SYMBOL_CRC(mtk_clk_gate_generic_ap_hwv_ops_inv, 0xdd425650, "_gpl");
SYMBOL_CRC(mtk_clk_gate_generic_mm_hwv_ops, 0xc70307df, "_gpl");
SYMBOL_CRC(mtk_clk_gate_generic_mm_hwv_ops_inv, 0x49ffb383, "_gpl");
SYMBOL_CRC(mtk_clk_register_gate_hwv, 0x2a8dc713, "_gpl");
SYMBOL_CRC(mtk_clk_register_gate, 0x8957eafc, "_gpl");
SYMBOL_CRC(mtk_mux_set_quick_switch_chk_cb, 0x026c6d74, "");
SYMBOL_CRC(mtk_clk_mux_register_callback, 0xc0e61bae, "_gpl");
SYMBOL_CRC(mtk_mux_ops, 0x4016b581, "_gpl");
SYMBOL_CRC(mtk_mux_clr_set_ops, 0xbdd59856, "_gpl");
SYMBOL_CRC(mtk_mux_clr_set_upd_ops, 0xf55f7567, "_gpl");
SYMBOL_CRC(mtk_mux_clr_set_upd_fenc_delay_ops, 0x29403485, "_gpl");
SYMBOL_CRC(mtk_mux_gate_fenc_clr_set_upd_fenc_delay_ops, 0xde8f4756, "_gpl");
SYMBOL_CRC(mtk_mux_fenc_clr_set_upd_ops, 0xb65a5d76, "_gpl");
SYMBOL_CRC(mtk_mux_gate_ops, 0xabaaab4e, "_gpl");
SYMBOL_CRC(mtk_mux_gate_clr_set_upd_2_ops, 0x5ecbc6ec, "_gpl");
SYMBOL_CRC(mtk_mux_gate_clr_set_upd_ops, 0x0746a94a, "_gpl");
SYMBOL_CRC(mtk_mux_generic_hwv_drate_ops, 0xd0e6cca2, "_gpl");
SYMBOL_CRC(mtk_mux_gate_fenc_clr_set_upd_2_ops, 0x1de197dd, "_gpl");
SYMBOL_CRC(mtk_mux_gate_fenc_clr_set_upd_ops, 0xd6f4ab22, "_gpl");
SYMBOL_CRC(mtk_mux_generic_hwv_ops, 0x1eb7f51a, "_gpl");
SYMBOL_CRC(mtk_mux_generic_hwv_al_ops, 0x5ade9d03, "_gpl");
SYMBOL_CRC(mtk_hwv_mux_fenc_ops, 0x1096f036, "_gpl");
SYMBOL_CRC(mtk_hwv_mux_ops, 0x0ae61263, "_gpl");
SYMBOL_CRC(mtk_hwv_dfs_mux_dummy_ops, 0xe1a87142, "_gpl");
SYMBOL_CRC(mtk_hwv_dfs_mux_fenc_ops, 0x80b3ddc8, "_gpl");
SYMBOL_CRC(mtk_hwv_dfs_mux_ops, 0xa44904c8, "_gpl");
SYMBOL_CRC(mtk_ipi_mux_ops, 0x6edd91ea, "_gpl");
SYMBOL_CRC(mtk_clk_register_muxes, 0x10f7704f, "_gpl");
SYMBOL_CRC(mtk_mux_user_ops, 0xc87852b6, "_gpl");
SYMBOL_CRC(mtk_clk_mux_register_user_clks, 0x2e5fcea3, "_gpl");
SYMBOL_CRC(set_clkchk_ops, 0x264a07f6, "");
SYMBOL_CRC(is_valid_reg, 0xc39b2362, "");
SYMBOL_CRC(get_all_regnames, 0x18eeab37, "");
SYMBOL_CRC(clkchk_devapc_dump, 0x37195017, "");
SYMBOL_CRC(clkchk_external_dump, 0x0b47b8af, "");
SYMBOL_CRC(get_all_provider_clks, 0x7fd73726, "_gpl");
SYMBOL_CRC(clk_chk_lookup, 0x7129d362, "");
SYMBOL_CRC(pwr_hw_is_on, 0x3d44e855, "");
SYMBOL_CRC(clkchk_pvdck_is_on, 0x03332ecb, "");
SYMBOL_CRC(clkchk_pvdck_is_prepared, 0x2be6743f, "");
SYMBOL_CRC(clkchk_pvdck_is_enabled, 0xc5e36e0f, "");
SYMBOL_CRC(mtk_clk_check_muxes, 0x2810e8e4, "_gpl");
SYMBOL_CRC(clk_chk_dev_pm_ops, 0x2fab78da, "");
SYMBOL_CRC(clkchk_chk_pm_state, 0xb82d0338, "_gpl");
SYMBOL_CRC(set_clkchk_notify, 0x46f99cd0, "");
SYMBOL_CRC(clkchk_hwv_irq_init, 0xba5555e8, "");
SYMBOL_CRC(mt_get_fmeter_clks, 0xb279d318, "");
SYMBOL_CRC(mt_get_ckgen_freq, 0x528b5b23, "");
SYMBOL_CRC(mt_get_abist_freq, 0xd088589b, "");
SYMBOL_CRC(mt_get_abist2_freq, 0x2e83afad, "");
SYMBOL_CRC(mt_get_vlpck_freq, 0x6d0a729c, "");
SYMBOL_CRC(mt_get_subsys_freq, 0xd5c09ffa, "");
SYMBOL_CRC(mt_get_fmeter_freq, 0x367365db, "");
SYMBOL_CRC(mt_get_fmeter_id, 0x88959eec, "");
SYMBOL_CRC(mt_subsys_freq_register, 0x0cbbb372, "");
SYMBOL_CRC(fmeter_set_ops, 0x0f55c84a, "");
SYMBOL_CRC(pdchk_debug_dump, 0x4a3c8e94, "_gpl");
SYMBOL_CRC(pdchk_pd_is_on, 0x37c5b7c2, "_gpl");
SYMBOL_CRC(is_hwccf_mtcmos_on, 0x4644e8b4, "");
SYMBOL_CRC(pdchk_get_bug_on_stat, 0x0398250d, "");
SYMBOL_CRC(pdchk_dump_trace_evt, 0x4cb6bfbf, "");
SYMBOL_CRC(pdchk_dev_pm_ops_no_irq, 0x8cd09e48, "");
SYMBOL_CRC(pdchk_dev_pm_ops, 0x4af041d8, "");
SYMBOL_CRC(pdchk_get_pd_name, 0x2e6b28b9, "_gpl");
SYMBOL_CRC(pdchk_common_init, 0x4a834a42, "");
SYMBOL_CRC(pdchk_get_all_genpd, 0x15d0b869, "");
SYMBOL_CRC(pdchk_hwv_irq_init, 0x139437a3, "");
SYMBOL_CRC(set_pdchk_notify, 0x2592dad4, "");
SYMBOL_CRC(set_clkdbg_ops, 0x8b68d05c, "");
SYMBOL_CRC(unset_clkdbg_ops, 0xe52fda01, "");
SYMBOL_CRC(__clk_dbg_lookup, 0x4bca6d43, "_gpl");
SYMBOL_CRC(clkdbg_dev_from_name, 0xa62c5e89, "_gpl");
SYMBOL_CRC(clk_dbg_driver_register, 0xaf98c21c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x83b96232, "atomic_notifier_chain_register" },
	{ 0xc866487b, "atomic_notifier_chain_unregister" },
	{ 0xfba03a3f, "atomic_notifier_call_chain" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x64311477, "regmap_read" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x037a0cba, "kfree" },
	{ 0x65f4e939, "clk_register_fixed_rate" },
	{ 0xb388d800, "clk_register_fixed_factor" },
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0xa1fd40f1, "syscon_regmap_lookup_by_phandle" },
	{ 0x30c17813, "clk_register_composite" },
	{ 0x30145981, "clk_register_divider_table" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x26750717, "of_clk_add_provider" },
	{ 0x7e814de5, "of_clk_src_onecell_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xa7253117, "clk_mux_ops" },
	{ 0x5f0ddbc2, "clk_gate_ops" },
	{ 0xc35fb23b, "clk_divider_ops" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xaba63322, "of_iomap" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6bd60ee2, "clk_hw_get_name" },
	{ 0xdd7ce13c, "clk_register" },
	{ 0x4b121607, "clk_hw_get_parent" },
	{ 0xe14dacce, "clk_hw_is_enabled" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xd63cf393, "__clk_get_hw" },
	{ 0x0d6e2a7f, "clk_hw_get_parent_by_index" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x0dbf9c5a, "clk_hw_get_rate" },
	{ 0xfd7c0a45, "clk_hw_get_parent_index" },
	{ 0x4fa18d90, "__clk_mux_determine_rate_closest" },
	{ 0x695b5f44, "clk_hw_set_parent" },
	{ 0x8c2cf0b0, "clk_hw_round_rate" },
	{ 0xe0eec6c6, "of_find_node_with_property" },
	{ 0xe40c1bbf, "of_clk_get_from_provider" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc718a0d6, "clk_hw_is_prepared" },
	{ 0x5a834013, "clk_notifier_register" },
	{ 0x9e400c59, "platform_get_irq_byname" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x349cba85, "strchr" },
	{ 0x29c37d82, "aee_is_printk_too_much" },
	{ 0xdb976d85, "aee_kernel_warning_api_func" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xc0b18217, "clk_hw_get_num_parents" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa2e459f7, "platform_device_alloc" },
	{ 0x0be5c6cd, "of_genpd_add_device" },
	{ 0x07ba5792, "platform_device_put" },
	{ 0x09674aa9, "dev_pm_genpd_add_notifier" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb4028d67, "proc_create" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5fbf4220, "platform_device_add" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x93540e96, "pm_genpd_add_device" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x99809aec, "pm_genpd_remove_device" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x27ef3d1e, "platform_device_unregister" },
	{ 0x92bc696d, "platform_device_register_full" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x83b96232,
	0xc866487b,
	0xfba03a3f,
	0xeae3dfd6,
	0x64311477,
	0xb4ce05a5,
	0x037a0cba,
	0x65f4e939,
	0xb388d800,
	0xf4b6fbcb,
	0xa1fd40f1,
	0x30c17813,
	0x30145981,
	0x1ed4c5e6,
	0x14fe5355,
	0x26750717,
	0x7e814de5,
	0x34db050b,
	0x6b883e5a,
	0xd35cce70,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0xa7253117,
	0x5f0ddbc2,
	0xc35fb23b,
	0x0f05f001,
	0xefe8a82e,
	0xaba63322,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x6bd60ee2,
	0xdd7ce13c,
	0x4b121607,
	0xe14dacce,
	0x576b05bf,
	0xea23ff02,
	0xd63cf393,
	0x0d6e2a7f,
	0x9e7d6bd0,
	0x0dbf9c5a,
	0xfd7c0a45,
	0x4fa18d90,
	0x695b5f44,
	0x8c2cf0b0,
	0xe0eec6c6,
	0xe40c1bbf,
	0xc569d8ce,
	0xe2d5255a,
	0xc718a0d6,
	0x5a834013,
	0x9e400c59,
	0xaf7cb74b,
	0x349cba85,
	0x29c37d82,
	0xdb976d85,
	0xf5edea2e,
	0xc0b18217,
	0x5a921311,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x92d5838e,
	0x27bbf221,
	0xce2840e7,
	0x656e4a6e,
	0xa2e459f7,
	0x0be5c6cd,
	0x07ba5792,
	0x09674aa9,
	0xd4e81a21,
	0x6b2dc060,
	0xb4028d67,
	0x12db679a,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x5fbf4220,
	0xc8f2ae9d,
	0x93540e96,
	0x4eb4c414,
	0x13269d10,
	0x5c27c40f,
	0x99809aec,
	0x6fc35f2b,
	0x27ef3d1e,
	0x92bc696d,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x85df9b6c,
	0x9166fada,
	0xc6a4a872,
	0x3da016df,
	0x173e2075,
	0x63150e06,
	0x2396c7f0,
	0x76d9b876,
	0x5c3c7387,
	0x476b165a,
	0x3b6c41ea,
	0x88db9f48,
	0x2be0c009,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"atomic_notifier_chain_register\0"
	"atomic_notifier_chain_unregister\0"
	"atomic_notifier_call_chain\0"
	"__const_udelay\0"
	"regmap_read\0"
	"_dev_err\0"
	"kfree\0"
	"clk_register_fixed_rate\0"
	"clk_register_fixed_factor\0"
	"syscon_node_to_regmap\0"
	"syscon_regmap_lookup_by_phandle\0"
	"clk_register_composite\0"
	"clk_register_divider_table\0"
	"of_find_node_by_name\0"
	"of_device_get_match_data\0"
	"of_clk_add_provider\0"
	"of_clk_src_onecell_get\0"
	"_raw_spin_lock_irqsave\0"
	"regmap_write\0"
	"_raw_spin_unlock_irqrestore\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"clk_mux_ops\0"
	"clk_gate_ops\0"
	"clk_divider_ops\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"of_iomap\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"clk_hw_get_name\0"
	"clk_register\0"
	"clk_hw_get_parent\0"
	"clk_hw_is_enabled\0"
	"regmap_update_bits_base\0"
	"devm_clk_get\0"
	"__clk_get_hw\0"
	"clk_hw_get_parent_by_index\0"
	"__udelay\0"
	"clk_hw_get_rate\0"
	"clk_hw_get_parent_index\0"
	"__clk_mux_determine_rate_closest\0"
	"clk_hw_set_parent\0"
	"clk_hw_round_rate\0"
	"of_find_node_with_property\0"
	"of_clk_get_from_provider\0"
	"__clk_get_name\0"
	"strcmp\0"
	"clk_hw_is_prepared\0"
	"clk_notifier_register\0"
	"platform_get_irq_byname\0"
	"of_property_read_string\0"
	"strchr\0"
	"aee_is_printk_too_much\0"
	"aee_kernel_warning_api_func\0"
	"___ratelimit\0"
	"clk_hw_get_num_parents\0"
	"strncmp\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"request_threaded_irq\0"
	"disable_irq_nosync\0"
	"irq_set_irq_wake\0"
	"snprintf\0"
	"platform_device_alloc\0"
	"of_genpd_add_device\0"
	"platform_device_put\0"
	"dev_pm_genpd_add_notifier\0"
	"pm_runtime_enable\0"
	"dump_stack\0"
	"proc_create\0"
	"__platform_driver_register\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"platform_device_add\0"
	"seq_printf\0"
	"pm_genpd_add_device\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"__pm_runtime_disable\0"
	"pm_genpd_remove_device\0"
	"platform_driver_unregister\0"
	"platform_device_unregister\0"
	"platform_device_register_full\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"strsep\0"
	"strncpy\0"
	"__clk_is_enabled\0"
	"seq_putc\0"
	"seq_write\0"
	"clk_get_parent\0"
	"clk_set_parent\0"
	"clk_set_rate\0"
	"kstrtoull\0"
	"sized_strscpy\0"
	"kstrtouint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");


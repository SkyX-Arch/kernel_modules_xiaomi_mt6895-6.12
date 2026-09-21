#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(slbc_sspm_slb_disable, "_gpl", "");
KSYMTAB_FUNC(slbc_sspm_slc_disable, "_gpl", "");
KSYMTAB_FUNC(slbc_sspm_enable, "_gpl", "");
KSYMTAB_FUNC(slbc_force_scmi_cmd, "_gpl", "");
KSYMTAB_FUNC(slbc_mic_num_cmd, "_gpl", "");
KSYMTAB_FUNC(slbc_inner_cmd, "_gpl", "");
KSYMTAB_FUNC(slbc_outer_cmd, "_gpl", "");
KSYMTAB_FUNC(slbc_suspend_resume_notify, "_gpl", "");
KSYMTAB_FUNC(slbc_get_sspm_ver, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_set, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_release, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_get, "_gpl", "");
KSYMTAB_FUNC(slbc_table_idt_set, "_gpl", "");
KSYMTAB_FUNC(slbc_table_idt_release, "_gpl", "");
KSYMTAB_FUNC(slbc_table_idt_get, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_axi_set, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_axi_release, "_gpl", "");
KSYMTAB_FUNC(slbc_table_gid_axi_get, "_gpl", "");
KSYMTAB_FUNC(emi_slb_select, "_gpl", "");
KSYMTAB_FUNC(emi_pmu_counter, "_gpl", "");
KSYMTAB_FUNC(emi_pmu_set_ctrl, "_gpl", "");
KSYMTAB_FUNC(emi_pmu_read_counter, "_gpl", "");
KSYMTAB_FUNC(emi_gid_pmu_counter, "_gpl", "");
KSYMTAB_FUNC(emi_gid_pmu_read_counter, "_gpl", "");
KSYMTAB_FUNC(emi_slc_test_result, "_gpl", "");
KSYMTAB_FUNC(slbc_ctrl_scmi_info, "_gpl", "");
KSYMTAB_FUNC(_slbc_request_cache_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_release_cache_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_buffer_status_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_request_buffer_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_release_buffer_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_ach_scmi, "_gpl", "");
KSYMTAB_FUNC(_slbc_sspm_shared_dram_scmi, "_gpl", "");
KSYMTAB_FUNC(slbc_sspm_sram_update, "_gpl", "");
KSYMTAB_FUNC(slbc_scmi_init, "_gpl", "");
KSYMTAB_FUNC(slbc_register_ipi_ops, "_gpl", "");
KSYMTAB_FUNC(slbc_unregister_ipi_ops, "_gpl", "");
KSYMTAB_FUNC(slbc_all_cache_pmu_test, "_gpl", "");

SYMBOL_CRC(slbc_sspm_slb_disable, 0x23bb5eb8, "_gpl");
SYMBOL_CRC(slbc_sspm_slc_disable, 0xcce9e859, "_gpl");
SYMBOL_CRC(slbc_sspm_enable, 0x28c1e22f, "_gpl");
SYMBOL_CRC(slbc_force_scmi_cmd, 0x9260aa26, "_gpl");
SYMBOL_CRC(slbc_mic_num_cmd, 0xfb11847e, "_gpl");
SYMBOL_CRC(slbc_inner_cmd, 0x9590133e, "_gpl");
SYMBOL_CRC(slbc_outer_cmd, 0xc09f4741, "_gpl");
SYMBOL_CRC(slbc_suspend_resume_notify, 0xf19f838d, "_gpl");
SYMBOL_CRC(slbc_get_sspm_ver, 0xa5c24729, "_gpl");
SYMBOL_CRC(slbc_table_gid_set, 0xdddb1f6a, "_gpl");
SYMBOL_CRC(slbc_table_gid_release, 0x29069e7e, "_gpl");
SYMBOL_CRC(slbc_table_gid_get, 0x1724b2c2, "_gpl");
SYMBOL_CRC(slbc_table_idt_set, 0xb2d5043a, "_gpl");
SYMBOL_CRC(slbc_table_idt_release, 0x2976193e, "_gpl");
SYMBOL_CRC(slbc_table_idt_get, 0xad1a0a09, "_gpl");
SYMBOL_CRC(slbc_table_gid_axi_set, 0x7cdf6168, "_gpl");
SYMBOL_CRC(slbc_table_gid_axi_release, 0x63b02cf3, "_gpl");
SYMBOL_CRC(slbc_table_gid_axi_get, 0x86125d8b, "_gpl");
SYMBOL_CRC(emi_slb_select, 0xed824f51, "_gpl");
SYMBOL_CRC(emi_pmu_counter, 0x885bfe34, "_gpl");
SYMBOL_CRC(emi_pmu_set_ctrl, 0x48b1196e, "_gpl");
SYMBOL_CRC(emi_pmu_read_counter, 0xf6852a9b, "_gpl");
SYMBOL_CRC(emi_gid_pmu_counter, 0x29fae828, "_gpl");
SYMBOL_CRC(emi_gid_pmu_read_counter, 0xcdbc0ab4, "_gpl");
SYMBOL_CRC(emi_slc_test_result, 0x510432e4, "_gpl");
SYMBOL_CRC(slbc_ctrl_scmi_info, 0xb51f2170, "_gpl");
SYMBOL_CRC(_slbc_request_cache_scmi, 0x7446d301, "_gpl");
SYMBOL_CRC(_slbc_release_cache_scmi, 0xef7ac4c1, "_gpl");
SYMBOL_CRC(_slbc_buffer_status_scmi, 0x6a80e1c3, "_gpl");
SYMBOL_CRC(_slbc_request_buffer_scmi, 0x999e94b4, "_gpl");
SYMBOL_CRC(_slbc_release_buffer_scmi, 0x02616a13, "_gpl");
SYMBOL_CRC(_slbc_ach_scmi, 0x31845279, "_gpl");
SYMBOL_CRC(_slbc_sspm_shared_dram_scmi, 0xa6b80fb4, "_gpl");
SYMBOL_CRC(slbc_sspm_sram_update, 0xe70e24eb, "_gpl");
SYMBOL_CRC(slbc_scmi_init, 0xd35e4e5d, "_gpl");
SYMBOL_CRC(slbc_register_ipi_ops, 0x13d9ca50, "_gpl");
SYMBOL_CRC(slbc_unregister_ipi_ops, 0x1048e7d6, "_gpl");
SYMBOL_CRC(slbc_all_cache_pmu_test, 0x698fb2ed, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xd69df2e7, "slbc_sram_write" },
	{ 0x9a2f308f, "scmi_tinysys_slbc_ctrl" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7b5d5538, "slbc_sram_read" },
	{ 0x0d517335, "slbc_trace_rec_write" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0x1271fac9, "scmi_tinysys_register_event_notifier" },
	{ 0x4056037d, "scmi_tinysys_event_notify" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xd5977bfb,
	0xd69df2e7,
	0x9a2f308f,
	0xeae3dfd6,
	0x7b5d5538,
	0x0d517335,
	0xed55cabd,
	0x51fcca8a,
	0x1271fac9,
	0x4056037d,
	0xe136f93c,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mutex_lock\0"
	"slbc_sram_write\0"
	"scmi_tinysys_slbc_ctrl\0"
	"__const_udelay\0"
	"slbc_sram_read\0"
	"slbc_trace_rec_write\0"
	"mutex_unlock\0"
	"get_scmi_tinysys_info\0"
	"scmi_tinysys_register_event_notifier\0"
	"scmi_tinysys_event_notify\0"
	"of_property_read_variable_u32_array\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_slbc,tinysys-scmi,slbc_trace");


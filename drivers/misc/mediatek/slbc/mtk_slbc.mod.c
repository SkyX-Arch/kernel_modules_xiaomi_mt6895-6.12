#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(slbc_enable, "_gpl", "");
KSYMTAB_DATA(slbc_all_cache_mode, "_gpl", "");
KSYMTAB_DATA(slbc_uid_str, "_gpl", "");
KSYMTAB_DATA(slc_ach_uid_str, "_gpl", "");
KSYMTAB_FUNC(popcount, "_gpl", "");
KSYMTAB_FUNC(slbc_sram_read, "_gpl", "");
KSYMTAB_FUNC(slbc_sram_write, "_gpl", "");
KSYMTAB_FUNC(slbc_status, "_gpl", "");
KSYMTAB_FUNC(slbc_request, "_gpl", "");
KSYMTAB_FUNC(slbc_release, "_gpl", "");
KSYMTAB_FUNC(slbc_power_on, "_gpl", "");
KSYMTAB_FUNC(slbc_power_off, "_gpl", "");
KSYMTAB_FUNC(slbc_secure_on, "_gpl", "");
KSYMTAB_FUNC(slbc_secure_off, "_gpl", "");
KSYMTAB_FUNC(slbc_register_activate_ops, "_gpl", "");
KSYMTAB_FUNC(slbc_activate_status, "_gpl", "");
KSYMTAB_FUNC(slbc_update_mm_bw, "_gpl", "");
KSYMTAB_FUNC(slbc_update_mic_num, "_gpl", "");
KSYMTAB_FUNC(slbc_gid_val, "_gpl", "");
KSYMTAB_FUNC(slbc_gid_request, "_gpl", "");
KSYMTAB_FUNC(slbc_gid_release, "_gpl", "");
KSYMTAB_FUNC(slbc_roi_update, "_gpl", "");
KSYMTAB_FUNC(slbc_validate, "_gpl", "");
KSYMTAB_FUNC(slbc_invalidate, "_gpl", "");
KSYMTAB_FUNC(slbc_read_invalidate, "_gpl", "");
KSYMTAB_FUNC(slbc_force_cache, "_gpl", "");
KSYMTAB_FUNC(slbc_force_dynamic_cache, "_gpl", "");
KSYMTAB_FUNC(slbc_force_cache_ratio, "_gpl", "");
KSYMTAB_FUNC(slbc_ceil, "_gpl", "");
KSYMTAB_FUNC(slbc_total_ceil, "_gpl", "");
KSYMTAB_FUNC(slbc_window, "_gpl", "");
KSYMTAB_FUNC(slbc_cg_priority, "_gpl", "");
KSYMTAB_FUNC(slbc_enable_gpu_dynamic_cache, "_gpl", "");
KSYMTAB_FUNC(slbc_disable_dcc, "_gpl", "");
KSYMTAB_FUNC(slbc_disable_slc, "_gpl", "");
KSYMTAB_FUNC(slbc_get_cache_size, "_gpl", "");
KSYMTAB_FUNC(slbc_get_cache_hit_rate, "_gpl", "");
KSYMTAB_FUNC(slbc_get_cache_hit_bw, "_gpl", "");
KSYMTAB_FUNC(slbc_get_cache_usage, "_gpl", "");
KSYMTAB_FUNC(slbc_get_cust_pmu, "_gpl", "");
KSYMTAB_FUNC(slbc_get_gpu_wb, "_gpl", "");
KSYMTAB_FUNC(slbc_register_common_ops, "_gpl", "");
KSYMTAB_FUNC(slbc_unregister_common_ops, "_gpl", "");

SYMBOL_CRC(slbc_enable, 0xeb2fed86, "_gpl");
SYMBOL_CRC(slbc_all_cache_mode, 0xa9cea2fb, "_gpl");
SYMBOL_CRC(slbc_uid_str, 0x225cf4e6, "_gpl");
SYMBOL_CRC(slc_ach_uid_str, 0x8eda8131, "_gpl");
SYMBOL_CRC(popcount, 0x096d3489, "_gpl");
SYMBOL_CRC(slbc_sram_read, 0x7b5d5538, "_gpl");
SYMBOL_CRC(slbc_sram_write, 0xd69df2e7, "_gpl");
SYMBOL_CRC(slbc_status, 0xc2ca87f0, "_gpl");
SYMBOL_CRC(slbc_request, 0xa4234d01, "_gpl");
SYMBOL_CRC(slbc_release, 0x0e12e362, "_gpl");
SYMBOL_CRC(slbc_power_on, 0x2a66c694, "_gpl");
SYMBOL_CRC(slbc_power_off, 0x8877c8c0, "_gpl");
SYMBOL_CRC(slbc_secure_on, 0x5bd2cff6, "_gpl");
SYMBOL_CRC(slbc_secure_off, 0x2bba7cbd, "_gpl");
SYMBOL_CRC(slbc_register_activate_ops, 0x6f403924, "_gpl");
SYMBOL_CRC(slbc_activate_status, 0x6728e615, "_gpl");
SYMBOL_CRC(slbc_update_mm_bw, 0x1f6f1e60, "_gpl");
SYMBOL_CRC(slbc_update_mic_num, 0x40fd692d, "_gpl");
SYMBOL_CRC(slbc_gid_val, 0x71fda007, "_gpl");
SYMBOL_CRC(slbc_gid_request, 0xe06f78c7, "_gpl");
SYMBOL_CRC(slbc_gid_release, 0x4fe5340d, "_gpl");
SYMBOL_CRC(slbc_roi_update, 0x8646b0ba, "_gpl");
SYMBOL_CRC(slbc_validate, 0x803673d2, "_gpl");
SYMBOL_CRC(slbc_invalidate, 0x3b3f2cda, "_gpl");
SYMBOL_CRC(slbc_read_invalidate, 0xd81801d8, "_gpl");
SYMBOL_CRC(slbc_force_cache, 0x4fb33356, "_gpl");
SYMBOL_CRC(slbc_force_dynamic_cache, 0x3c3f0734, "_gpl");
SYMBOL_CRC(slbc_force_cache_ratio, 0xbabec483, "_gpl");
SYMBOL_CRC(slbc_ceil, 0xb5286873, "_gpl");
SYMBOL_CRC(slbc_total_ceil, 0x4f7ee45a, "_gpl");
SYMBOL_CRC(slbc_window, 0xa81f0174, "_gpl");
SYMBOL_CRC(slbc_cg_priority, 0xb7099572, "_gpl");
SYMBOL_CRC(slbc_enable_gpu_dynamic_cache, 0x47aa6d4b, "_gpl");
SYMBOL_CRC(slbc_disable_dcc, 0x8ffdfa58, "_gpl");
SYMBOL_CRC(slbc_disable_slc, 0x8eb64111, "_gpl");
SYMBOL_CRC(slbc_get_cache_size, 0x8c68038e, "_gpl");
SYMBOL_CRC(slbc_get_cache_hit_rate, 0x880a96e5, "_gpl");
SYMBOL_CRC(slbc_get_cache_hit_bw, 0xfdd491c4, "_gpl");
SYMBOL_CRC(slbc_get_cache_usage, 0x8de6973c, "_gpl");
SYMBOL_CRC(slbc_get_cust_pmu, 0xda2ce6d0, "_gpl");
SYMBOL_CRC(slbc_get_gpu_wb, 0x6bed057e, "_gpl");
SYMBOL_CRC(slbc_register_common_ops, 0xa95a6299, "_gpl");
SYMBOL_CRC(slbc_unregister_common_ops, 0x74e100c0, "_gpl");

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


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

KSYMTAB_DATA(ged_get_last_commit_idx_fp, "", "");
KSYMTAB_DATA(ged_get_last_commit_top_idx_fp, "", "");
KSYMTAB_DATA(ged_get_last_commit_stack_idx_fp, "", "");
KSYMTAB_DATA(ged_notify_gpu_fix_opp_fp, "", "");
KSYMTAB_DATA(ged_notify_gpu_fix_freq_volt_fp, "", "");
KSYMTAB_FUNC(gpufreq_bringup, "", "");
KSYMTAB_FUNC(gpufreq_wrapper_ready, "", "");
KSYMTAB_FUNC(gpufreq_power_ctrl_enable, "", "");
KSYMTAB_FUNC(gpufreq_active_sleep_ctrl_enable, "", "");
KSYMTAB_FUNC(gpufreq_get_power_state, "", "");
KSYMTAB_FUNC(gpufreq_get_dvfs_state, "", "");
KSYMTAB_FUNC(gpufreq_get_shader_present, "", "");
KSYMTAB_FUNC(gpufreq_get_segment_id, "", "");
KSYMTAB_FUNC(gpufreq_get_checker_result, "", "");
KSYMTAB_FUNC(gpufreq_dump_infra_status, "", "");
KSYMTAB_FUNC(gpufreq_dump_infra_status_logbuffer, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_freq, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_out_freq, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_avg_freq, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_volt, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_vsram, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_power, "", "");
KSYMTAB_FUNC(gpufreq_get_max_power, "", "");
KSYMTAB_FUNC(gpufreq_get_min_power, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_oppidx, "", "");
KSYMTAB_FUNC(gpufreq_get_opp_num, "", "");
KSYMTAB_FUNC(gpufreq_get_freq_by_idx, "", "");
KSYMTAB_FUNC(gpufreq_get_power_by_idx, "", "");
KSYMTAB_FUNC(gpufreq_get_oppidx_by_freq, "", "");
KSYMTAB_FUNC(gpufreq_get_leakage_power, "", "");
KSYMTAB_FUNC(gpufreq_get_dynamic_power, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_temperature, "", "");
KSYMTAB_FUNC(gpufreq_power_control, "", "");
KSYMTAB_FUNC(gpufreq_active_sleep_control, "", "");
KSYMTAB_FUNC(gpufreq_commit, "", "");
KSYMTAB_FUNC(gpufreq_dual_commit, "", "");
KSYMTAB_FUNC(gpufreq_set_limit, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_limit_idx, "", "");
KSYMTAB_FUNC(gpufreq_get_cur_limiter, "", "");
KSYMTAB_FUNC(gpufreq_get_core_mask_table, "", "");
KSYMTAB_FUNC(gpufreq_get_core_num, "", "");
KSYMTAB_FUNC(gpufreq_pdca_config, "", "");
KSYMTAB_FUNC(gpufreq_fake_mtcmos_control, "", "");
KSYMTAB_FUNC(gpufreq_get_working_table, "", "");
KSYMTAB_FUNC(gpufreq_set_mfgsys_config, "", "");
KSYMTAB_FUNC(gpufreq_register_gpufreq_fp, "", "");
KSYMTAB_FUNC(gpufreq_register_gpuppm_fp, "", "");

SYMBOL_CRC(ged_get_last_commit_idx_fp, 0x1cf2dc32, "");
SYMBOL_CRC(ged_get_last_commit_top_idx_fp, 0x6d43198f, "");
SYMBOL_CRC(ged_get_last_commit_stack_idx_fp, 0x8cda41e8, "");
SYMBOL_CRC(ged_notify_gpu_fix_opp_fp, 0x2f15dfc5, "");
SYMBOL_CRC(ged_notify_gpu_fix_freq_volt_fp, 0xb5ca8483, "");
SYMBOL_CRC(gpufreq_bringup, 0xfb01b4e5, "");
SYMBOL_CRC(gpufreq_wrapper_ready, 0x7021c12f, "");
SYMBOL_CRC(gpufreq_power_ctrl_enable, 0xea926b14, "");
SYMBOL_CRC(gpufreq_active_sleep_ctrl_enable, 0x596376fd, "");
SYMBOL_CRC(gpufreq_get_power_state, 0xdef472f1, "");
SYMBOL_CRC(gpufreq_get_dvfs_state, 0x608e0767, "");
SYMBOL_CRC(gpufreq_get_shader_present, 0x82667f4d, "");
SYMBOL_CRC(gpufreq_get_segment_id, 0x7b5ea0b9, "");
SYMBOL_CRC(gpufreq_get_checker_result, 0x963fa0bf, "");
SYMBOL_CRC(gpufreq_dump_infra_status, 0x665829f8, "");
SYMBOL_CRC(gpufreq_dump_infra_status_logbuffer, 0x7d7da8d1, "");
SYMBOL_CRC(gpufreq_get_cur_freq, 0x0bfda5a8, "");
SYMBOL_CRC(gpufreq_get_cur_out_freq, 0xcff40235, "");
SYMBOL_CRC(gpufreq_get_cur_avg_freq, 0x72e4ff9e, "");
SYMBOL_CRC(gpufreq_get_cur_volt, 0xdffed6fb, "");
SYMBOL_CRC(gpufreq_get_cur_vsram, 0x47c3e483, "");
SYMBOL_CRC(gpufreq_get_cur_power, 0x6fa56380, "");
SYMBOL_CRC(gpufreq_get_max_power, 0xb8e0fe7d, "");
SYMBOL_CRC(gpufreq_get_min_power, 0x7bf30939, "");
SYMBOL_CRC(gpufreq_get_cur_oppidx, 0xc2fa1ae0, "");
SYMBOL_CRC(gpufreq_get_opp_num, 0x484164d5, "");
SYMBOL_CRC(gpufreq_get_freq_by_idx, 0x686d006d, "");
SYMBOL_CRC(gpufreq_get_power_by_idx, 0x170611ee, "");
SYMBOL_CRC(gpufreq_get_oppidx_by_freq, 0xfc97a9d7, "");
SYMBOL_CRC(gpufreq_get_leakage_power, 0x1ce31752, "");
SYMBOL_CRC(gpufreq_get_dynamic_power, 0xd887beae, "");
SYMBOL_CRC(gpufreq_get_cur_temperature, 0x8a7ec7f9, "");
SYMBOL_CRC(gpufreq_power_control, 0xf43c8e9e, "");
SYMBOL_CRC(gpufreq_active_sleep_control, 0xa740380e, "");
SYMBOL_CRC(gpufreq_commit, 0x83a878ce, "");
SYMBOL_CRC(gpufreq_dual_commit, 0x1f6dcb06, "");
SYMBOL_CRC(gpufreq_set_limit, 0xef55c1b7, "");
SYMBOL_CRC(gpufreq_get_cur_limit_idx, 0xd3329da2, "");
SYMBOL_CRC(gpufreq_get_cur_limiter, 0xde236815, "");
SYMBOL_CRC(gpufreq_get_core_mask_table, 0xb886d41f, "");
SYMBOL_CRC(gpufreq_get_core_num, 0x3e1ed8a9, "");
SYMBOL_CRC(gpufreq_pdca_config, 0x05a5e1f2, "");
SYMBOL_CRC(gpufreq_fake_mtcmos_control, 0x6d264fa1, "");
SYMBOL_CRC(gpufreq_get_working_table, 0xd11990b4, "");
SYMBOL_CRC(gpufreq_set_mfgsys_config, 0xdaf0d189, "");
SYMBOL_CRC(gpufreq_register_gpufreq_fp, 0xbb52fad7, "");
SYMBOL_CRC(gpufreq_register_gpuppm_fp, 0x3f7ee0f2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x14501464, "gpueb_dump_status" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe82761d1, "mtk_ipi_send_compl_to_gpueb" },
	{ 0x8124dc40, "register_pbm_gpu_notify" },
	{ 0x418cddcd, "register_devapc_power_callback" },
	{ 0xf1b2f356, "register_devapc_exception_callback" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x6b201699, "of_find_property" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x48b39160, "gpueb_ctrl" },
	{ 0x2fae0e87, "gpueb_get_send_PIN_ID_by_name" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x0fbee3af, "get_gpueb_ipidev" },
	{ 0x8e2e086a, "gpueb_get_gpr_addr" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xbfe1810d, "mtk_get_gpu_limit_index_fp" },
	{ 0xae203d8c, "mtk_get_gpu_limiter_fp" },
	{ 0x494e8318, "mtk_get_gpu_cur_freq_fp" },
	{ 0xd198fa9a, "mtk_get_gpu_cur_oppidx_fp" },
	{ 0x5ce8b943, "g_ghpm_ready" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xaba63322, "of_iomap" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x173e2075, "seq_write" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x14501464,
	0x34db050b,
	0xd35cce70,
	0xe82761d1,
	0x8124dc40,
	0x418cddcd,
	0xf1b2f356,
	0x12db679a,
	0xe136f93c,
	0xf3cdc3c6,
	0x66bcb0f8,
	0x6b201699,
	0x31b65f04,
	0x40863ba1,
	0x48b39160,
	0x2fae0e87,
	0x65bb94f6,
	0x0fbee3af,
	0x8e2e086a,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0x6fc35f2b,
	0xbfe1810d,
	0xae203d8c,
	0x494e8318,
	0xd198fa9a,
	0x5ce8b943,
	0xaf56600a,
	0xaba63322,
	0x502a8c68,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xd5977bfb,
	0xc8f2ae9d,
	0xed55cabd,
	0xbcab6ee6,
	0x222e7ce2,
	0x88db9f48,
	0x2be0c009,
	0x173e2075,
	0x3b6c41ea,
	0x5cf4d4de,
	0x4e870156,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"gpueb_dump_status\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"mtk_ipi_send_compl_to_gpueb\0"
	"register_pbm_gpu_notify\0"
	"register_devapc_power_callback\0"
	"register_devapc_exception_callback\0"
	"__platform_driver_register\0"
	"of_property_read_variable_u32_array\0"
	"of_find_compatible_node\0"
	"of_property_read_u64\0"
	"of_find_property\0"
	"of_property_read_u32_index\0"
	"ioremap_prot\0"
	"gpueb_ctrl\0"
	"gpueb_get_send_PIN_ID_by_name\0"
	"mtk_ipi_register\0"
	"get_gpueb_ipidev\0"
	"gpueb_get_gpr_addr\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"platform_driver_unregister\0"
	"mtk_get_gpu_limit_index_fp\0"
	"mtk_get_gpu_limiter_fp\0"
	"mtk_get_gpu_cur_freq_fp\0"
	"mtk_get_gpu_cur_oppidx_fp\0"
	"g_ghpm_ready\0"
	"arm64_use_ng_mappings\0"
	"of_iomap\0"
	"of_property_match_string\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"mutex_lock\0"
	"seq_printf\0"
	"mutex_unlock\0"
	"sscanf\0"
	"sysfs_streq\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"seq_write\0"
	"kstrtouint\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpueb,mtk_pbm,device-apc-common,mtk_tinysys_ipi,mtk_gpu_hal");

MODULE_ALIAS("of:N*T*Cmediatek,gpufreq_wrapper");
MODULE_ALIAS("of:N*T*Cmediatek,gpufreq_wrapperC*");

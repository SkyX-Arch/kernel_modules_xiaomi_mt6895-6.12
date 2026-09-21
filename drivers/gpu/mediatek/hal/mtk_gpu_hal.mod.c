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

KSYMTAB_DATA(mtk_get_gpu_memory_usage_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_memory_usage, "", "");
KSYMTAB_DATA(mtk_get_gpu_memory_pool_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_memory_pool, "", "");
KSYMTAB_DATA(mtk_get_gpu_loading_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_loading, "", "");
KSYMTAB_DATA(mtk_get_gpu_block_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_block, "", "");
KSYMTAB_DATA(mtk_get_gpu_idle_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_idle, "", "");
KSYMTAB_DATA(mtk_set_bottom_gpu_freq_fp, "", "");
KSYMTAB_FUNC(mtk_set_bottom_gpu_freq, "", "");
KSYMTAB_DATA(mtk_get_bottom_gpu_freq_fp, "", "");
KSYMTAB_FUNC(mtk_get_bottom_gpu_freq, "", "");
KSYMTAB_DATA(mtk_custom_get_gpu_freq_level_count_fp, "", "");
KSYMTAB_FUNC(mtk_custom_get_gpu_freq_level_count, "", "");
KSYMTAB_DATA(mtk_custom_boost_gpu_freq_fp, "", "");
KSYMTAB_FUNC(mtk_custom_boost_gpu_freq, "", "");
KSYMTAB_DATA(mtk_custom_upbound_gpu_freq_fp, "", "");
KSYMTAB_FUNC(mtk_custom_upbound_gpu_freq, "", "");
KSYMTAB_DATA(mtk_dump_gpu_memory_usage_fp, "", "");
KSYMTAB_FUNC(mtk_dump_gpu_memory_usage, "", "");
KSYMTAB_DATA(mtk_get_gpu_bottom_freq_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_bottom_freq, "", "");
KSYMTAB_DATA(mtk_get_gpu_limit_index_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_floor_index, "", "");
KSYMTAB_FUNC(mtk_get_gpu_ceiling_index, "", "");
KSYMTAB_DATA(mtk_get_gpu_limiter_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_floor_limiter, "", "");
KSYMTAB_FUNC(mtk_get_gpu_ceiling_limiter, "", "");
KSYMTAB_DATA(mtk_get_gpu_cur_freq_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_cur_freq, "", "");
KSYMTAB_DATA(mtk_get_gpu_cur_oppidx_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_cur_oppidx, "", "");
KSYMTAB_DATA(mtk_get_gpu_pmu_init_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_pmu_init, "", "");
KSYMTAB_DATA(mtk_get_gpu_pmu_swapnreset_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_pmu_swapnreset, "", "");
KSYMTAB_FUNC(mtk_register_gpu_power_change, "", "");
KSYMTAB_FUNC(mtk_unregister_gpu_power_change, "", "");
KSYMTAB_FUNC(mtk_notify_gpu_power_change, "", "");
KSYMTAB_DATA(mtk_get_gpu_pmu_deinit_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_pmu_deinit, "", "");
KSYMTAB_DATA(mtk_get_gpu_pmu_swapnreset_stop_fp, "", "");
KSYMTAB_FUNC(mtk_get_gpu_pmu_swapnreset_stop, "", "");
KSYMTAB_DATA(mtk_dvfs_margin_value_fp, "", "");
KSYMTAB_FUNC(mtk_dvfs_margin_value, "", "");
KSYMTAB_DATA(mtk_get_dvfs_margin_value_fp, "", "");
KSYMTAB_FUNC(mtk_get_dvfs_margin_value, "", "");
KSYMTAB_DATA(mtk_loading_base_dvfs_step_fp, "", "");
KSYMTAB_FUNC(mtk_loading_base_dvfs_step, "", "");
KSYMTAB_DATA(mtk_get_loading_base_dvfs_step_fp, "", "");
KSYMTAB_FUNC(mtk_get_loading_base_dvfs_step, "", "");
KSYMTAB_DATA(mtk_timer_base_dvfs_margin_fp, "", "");
KSYMTAB_FUNC(mtk_timer_base_dvfs_margin, "", "");
KSYMTAB_DATA(mtk_get_timer_base_dvfs_margin_fp, "", "");
KSYMTAB_FUNC(mtk_get_timer_base_dvfs_margin, "", "");
KSYMTAB_DATA(mtk_dvfs_loading_mode_fp, "", "");
KSYMTAB_FUNC(mtk_dvfs_loading_mode, "", "");
KSYMTAB_DATA(mtk_get_dvfs_loading_mode_fp, "", "");
KSYMTAB_FUNC(mtk_get_dvfs_loading_mode, "", "");
KSYMTAB_DATA(mtk_dvfs_workload_mode_fp, "", "");
KSYMTAB_FUNC(mtk_dvfs_workload_mode, "", "");
KSYMTAB_DATA(mtk_get_dvfs_workload_mode_fp, "", "");
KSYMTAB_FUNC(mtk_get_dvfs_workload_mode, "", "");
KSYMTAB_DATA(mtk_set_fastdvfs_mode_fp, "", "");
KSYMTAB_FUNC(mtk_set_fastdvfs_mode, "", "");
KSYMTAB_DATA(mtk_get_fastdvfs_mode_fp, "", "");
KSYMTAB_FUNC(mtk_get_fastdvfs_mode, "", "");
KSYMTAB_DATA(mtk_ltr_gpu_pmu_start_fp, "", "");
KSYMTAB_FUNC(mtk_ltr_gpu_pmu_start, "", "");
KSYMTAB_DATA(mtk_swpm_gpu_pm_start_fp, "", "");
KSYMTAB_FUNC(mtk_swpm_gpu_pm_start, "", "");
KSYMTAB_DATA(mtk_ltr_gpu_pmu_stop_fp, "", "");
KSYMTAB_FUNC(mtk_ltr_gpu_pmu_stop, "", "");
KSYMTAB_DATA(mtk_set_gpu_idle_fp, "", "");
KSYMTAB_FUNC(mtk_set_gpu_idle, "", "");
KSYMTAB_DATA(mtk_get_system_timer_fp, "", "");
KSYMTAB_FUNC(mtk_get_system_timer, "", "");
KSYMTAB_DATA(mtk_adaptive_power_notify_fp, "", "");
KSYMTAB_FUNC(mtk_adaptive_power_notify, "", "");
KSYMTAB_DATA(mtk_notify_gpu_freq_change_fp, "", "");
KSYMTAB_FUNC(mtk_notify_gpu_freq_change, "", "");
KSYMTAB_DATA(mtk_gpu_fence_debug_dump_fp, "", "");
KSYMTAB_FUNC(mtk_gpu_fence_debug_dump, "", "");

SYMBOL_CRC(mtk_get_gpu_memory_usage_fp, 0x077ea4aa, "");
SYMBOL_CRC(mtk_get_gpu_memory_usage, 0xdf1f2919, "");
SYMBOL_CRC(mtk_get_gpu_memory_pool_fp, 0xd33ce470, "");
SYMBOL_CRC(mtk_get_gpu_memory_pool, 0xeb6e0d35, "");
SYMBOL_CRC(mtk_get_gpu_loading_fp, 0xc9568513, "");
SYMBOL_CRC(mtk_get_gpu_loading, 0x5bc52a09, "");
SYMBOL_CRC(mtk_get_gpu_block_fp, 0xf45a66ac, "");
SYMBOL_CRC(mtk_get_gpu_block, 0xac2fe36d, "");
SYMBOL_CRC(mtk_get_gpu_idle_fp, 0x7ec8fead, "");
SYMBOL_CRC(mtk_get_gpu_idle, 0xb004e4df, "");
SYMBOL_CRC(mtk_set_bottom_gpu_freq_fp, 0x02adb4e4, "");
SYMBOL_CRC(mtk_set_bottom_gpu_freq, 0xa3723568, "");
SYMBOL_CRC(mtk_get_bottom_gpu_freq_fp, 0x89a3b84a, "");
SYMBOL_CRC(mtk_get_bottom_gpu_freq, 0x0530033f, "");
SYMBOL_CRC(mtk_custom_get_gpu_freq_level_count_fp, 0xcbfd0482, "");
SYMBOL_CRC(mtk_custom_get_gpu_freq_level_count, 0xcb1598f4, "");
SYMBOL_CRC(mtk_custom_boost_gpu_freq_fp, 0x6334feef, "");
SYMBOL_CRC(mtk_custom_boost_gpu_freq, 0xfcadd21b, "");
SYMBOL_CRC(mtk_custom_upbound_gpu_freq_fp, 0x6d9b18a1, "");
SYMBOL_CRC(mtk_custom_upbound_gpu_freq, 0xdbc1789a, "");
SYMBOL_CRC(mtk_dump_gpu_memory_usage_fp, 0xd18bb677, "");
SYMBOL_CRC(mtk_dump_gpu_memory_usage, 0xc290c62f, "");
SYMBOL_CRC(mtk_get_gpu_bottom_freq_fp, 0x872e1854, "");
SYMBOL_CRC(mtk_get_gpu_bottom_freq, 0xedd59a63, "");
SYMBOL_CRC(mtk_get_gpu_limit_index_fp, 0xbfe1810d, "");
SYMBOL_CRC(mtk_get_gpu_floor_index, 0x4b4a51fd, "");
SYMBOL_CRC(mtk_get_gpu_ceiling_index, 0xd9d37455, "");
SYMBOL_CRC(mtk_get_gpu_limiter_fp, 0xae203d8c, "");
SYMBOL_CRC(mtk_get_gpu_floor_limiter, 0xd53f6b2e, "");
SYMBOL_CRC(mtk_get_gpu_ceiling_limiter, 0x3c66bf5e, "");
SYMBOL_CRC(mtk_get_gpu_cur_freq_fp, 0x494e8318, "");
SYMBOL_CRC(mtk_get_gpu_cur_freq, 0xab1939c2, "");
SYMBOL_CRC(mtk_get_gpu_cur_oppidx_fp, 0xd198fa9a, "");
SYMBOL_CRC(mtk_get_gpu_cur_oppidx, 0xe687bb7c, "");
SYMBOL_CRC(mtk_get_gpu_pmu_init_fp, 0x4f86ba0f, "");
SYMBOL_CRC(mtk_get_gpu_pmu_init, 0xedbcc342, "");
SYMBOL_CRC(mtk_get_gpu_pmu_swapnreset_fp, 0x48b99f36, "");
SYMBOL_CRC(mtk_get_gpu_pmu_swapnreset, 0xbbd771ba, "");
SYMBOL_CRC(mtk_register_gpu_power_change, 0xd197876c, "");
SYMBOL_CRC(mtk_unregister_gpu_power_change, 0xf95d44ce, "");
SYMBOL_CRC(mtk_notify_gpu_power_change, 0x06a043ba, "");
SYMBOL_CRC(mtk_get_gpu_pmu_deinit_fp, 0xd8d5d4a4, "");
SYMBOL_CRC(mtk_get_gpu_pmu_deinit, 0x2076be89, "");
SYMBOL_CRC(mtk_get_gpu_pmu_swapnreset_stop_fp, 0x577190b7, "");
SYMBOL_CRC(mtk_get_gpu_pmu_swapnreset_stop, 0xb0ecae0d, "");
SYMBOL_CRC(mtk_dvfs_margin_value_fp, 0x4e3844bd, "");
SYMBOL_CRC(mtk_dvfs_margin_value, 0x8f2b1460, "");
SYMBOL_CRC(mtk_get_dvfs_margin_value_fp, 0x39642b13, "");
SYMBOL_CRC(mtk_get_dvfs_margin_value, 0xc1c7417f, "");
SYMBOL_CRC(mtk_loading_base_dvfs_step_fp, 0x62d513cd, "");
SYMBOL_CRC(mtk_loading_base_dvfs_step, 0x837aa15b, "");
SYMBOL_CRC(mtk_get_loading_base_dvfs_step_fp, 0x4526daa5, "");
SYMBOL_CRC(mtk_get_loading_base_dvfs_step, 0xe56161ea, "");
SYMBOL_CRC(mtk_timer_base_dvfs_margin_fp, 0xa8c8588a, "");
SYMBOL_CRC(mtk_timer_base_dvfs_margin, 0x41d6caa8, "");
SYMBOL_CRC(mtk_get_timer_base_dvfs_margin_fp, 0xad5413dd, "");
SYMBOL_CRC(mtk_get_timer_base_dvfs_margin, 0x0090a9e8, "");
SYMBOL_CRC(mtk_dvfs_loading_mode_fp, 0x276fb9c7, "");
SYMBOL_CRC(mtk_dvfs_loading_mode, 0xb1db2696, "");
SYMBOL_CRC(mtk_get_dvfs_loading_mode_fp, 0x89dde4cc, "");
SYMBOL_CRC(mtk_get_dvfs_loading_mode, 0x25f85cbd, "");
SYMBOL_CRC(mtk_dvfs_workload_mode_fp, 0xb59ead2f, "");
SYMBOL_CRC(mtk_dvfs_workload_mode, 0x01fffb8a, "");
SYMBOL_CRC(mtk_get_dvfs_workload_mode_fp, 0x8bdb1b37, "");
SYMBOL_CRC(mtk_get_dvfs_workload_mode, 0x4661f44b, "");
SYMBOL_CRC(mtk_set_fastdvfs_mode_fp, 0x3f8981d2, "");
SYMBOL_CRC(mtk_set_fastdvfs_mode, 0xe920b044, "");
SYMBOL_CRC(mtk_get_fastdvfs_mode_fp, 0x2dfc2aad, "");
SYMBOL_CRC(mtk_get_fastdvfs_mode, 0x1bdbc4b0, "");
SYMBOL_CRC(mtk_ltr_gpu_pmu_start_fp, 0xa9ae58c9, "");
SYMBOL_CRC(mtk_ltr_gpu_pmu_start, 0x5e214817, "");
SYMBOL_CRC(mtk_swpm_gpu_pm_start_fp, 0x4e1cc5c4, "");
SYMBOL_CRC(mtk_swpm_gpu_pm_start, 0x7fcb5eb0, "");
SYMBOL_CRC(mtk_ltr_gpu_pmu_stop_fp, 0x26dbd395, "");
SYMBOL_CRC(mtk_ltr_gpu_pmu_stop, 0xd5637474, "");
SYMBOL_CRC(mtk_set_gpu_idle_fp, 0x3b0da3a7, "");
SYMBOL_CRC(mtk_set_gpu_idle, 0x086c39c4, "");
SYMBOL_CRC(mtk_get_system_timer_fp, 0x46c6ea05, "");
SYMBOL_CRC(mtk_get_system_timer, 0x23d1d62f, "");
SYMBOL_CRC(mtk_adaptive_power_notify_fp, 0x766acd20, "");
SYMBOL_CRC(mtk_adaptive_power_notify, 0x54aee844, "");
SYMBOL_CRC(mtk_notify_gpu_freq_change_fp, 0x3692d973, "");
SYMBOL_CRC(mtk_notify_gpu_freq_change, 0x0279e4f6, "");
SYMBOL_CRC(mtk_gpu_fence_debug_dump_fp, 0xa158b102, "");
SYMBOL_CRC(mtk_gpu_fence_debug_dump, 0x5c0ddd98, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x9166fada, "strncpy" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x5a921311,
	0x037a0cba,
	0xe17134b6,
	0x9166fada,
	0x7e19152a,
	0x9a835040,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"strncmp\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"strncpy\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


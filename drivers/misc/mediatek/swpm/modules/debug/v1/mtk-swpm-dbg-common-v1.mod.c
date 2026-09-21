#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(swpm_status, "", "");
KSYMTAB_DATA(swpm_gpu_debug, "", "");
KSYMTAB_FUNC(swpm_dbg_common_fs_exit, "", "");
KSYMTAB_FUNC(swpm_dbg_common_fs_init, "", "");

SYMBOL_CRC(swpm_status, 0x513f892c, "");
SYMBOL_CRC(swpm_gpu_debug, 0x810c1e68, "");
SYMBOL_CRC(swpm_dbg_common_fs_exit, 0x1f59b080, "");
SYMBOL_CRC(swpm_dbg_common_fs_init, 0x1fc071d0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x57132996, "mtk_swpm_sysfs_entry_func_node_add" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7ac98637, "mtk_gpueb_power_modle_cmd" },
	{ 0x7fcb5eb0, "mtk_swpm_gpu_pm_start" },
	{ 0xd5637474, "mtk_ltr_gpu_pmu_stop" },
	{ 0x5385ff08, "swpm_arm_pmu_get_status" },
	{ 0x6262c539, "swpm_arm_pmu_get_idx" },
	{ 0x4aa4e33a, "swpm_arm_ai_pmu_get" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xc5933b1d, "swpm_arm_pmu_enable_all" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5e22e91d, "swpm_arm_ai_pmu_set" },
	{ 0xd7104bff, "swpm_arm_dsu_pmu_get_status" },
	{ 0xbc350fd1, "swpm_arm_dsu_pmu_get_type" },
	{ 0xc9c97632, "swpm_arm_dsu_pmu_enable" },
	{ 0x0e501568, "swpm_arm_dsu_pmu_set_type" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x57132996,
	0x96848186,
	0x3b6c41ea,
	0x7ac98637,
	0x7fcb5eb0,
	0xd5637474,
	0x5385ff08,
	0x6262c539,
	0x4aa4e33a,
	0x9f46ced8,
	0xc5933b1d,
	0xbcab6ee6,
	0x5e22e91d,
	0xd7104bff,
	0xbc350fd1,
	0xc9c97632,
	0x0e501568,
	0xde7ece30,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_swpm_sysfs_entry_func_node_add\0"
	"scnprintf\0"
	"kstrtouint\0"
	"mtk_gpueb_power_modle_cmd\0"
	"mtk_swpm_gpu_pm_start\0"
	"mtk_ltr_gpu_pmu_stop\0"
	"swpm_arm_pmu_get_status\0"
	"swpm_arm_pmu_get_idx\0"
	"swpm_arm_ai_pmu_get\0"
	"__sw_hweight64\0"
	"swpm_arm_pmu_enable_all\0"
	"sscanf\0"
	"swpm_arm_ai_pmu_set\0"
	"swpm_arm_dsu_pmu_get_status\0"
	"swpm_arm_dsu_pmu_get_type\0"
	"swpm_arm_dsu_pmu_enable\0"
	"swpm_arm_dsu_pmu_set_type\0"
	"__cpu_possible_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-swpm,ged,mtk_gpu_hal,mtk-swpm-perf-arm-pmu");


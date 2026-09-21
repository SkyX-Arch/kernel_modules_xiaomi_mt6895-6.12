#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(cpu_power_ratio_down, "", "");
KSYMTAB_DATA(cpu_power_ratio_up, "", "");
KSYMTAB_DATA(vcore_power_ratio_down, "", "");
KSYMTAB_DATA(vcore_power_ratio_up, "", "");
KSYMTAB_DATA(debounce_times_down_adb, "", "");
KSYMTAB_DATA(debounce_times_up_adb, "", "");
KSYMTAB_FUNC(get_cm_step_num, "_gpl", "");
KSYMTAB_FUNC(get_dsu_perf, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_bw_path, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_bw_path, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_blank_status, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_disable_fb, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_perf_enable, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_perf_force_enable, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_perf_force_enable, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_get, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_set, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_force_down_get, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_local_get, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_local_set, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_force_local_get, "_gpl", "");
KSYMTAB_FUNC(debounce_times_perf_down_force_local_set, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_dram_opp_base, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_dram_opp_base, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_num_perf, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_num_perf, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_get_num_array, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_num_array, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_pdev, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_perf_set_status, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_register_hook, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_unregister_hook, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_judge_perfs_dram_opp, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_dram_opp_ceiling, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_set_dram_opp_floor, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_check_dts_setting, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_update_dram_by_cpu_opp, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_process, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_common_init, "_gpl", "");
KSYMTAB_FUNC(force_use_bcpu_weight, "_gpl", "");
KSYMTAB_FUNC(cm_mgr_common_exit, "_gpl", "");

SYMBOL_CRC(cpu_power_ratio_down, 0x3bb6c77f, "");
SYMBOL_CRC(cpu_power_ratio_up, 0xaacebb27, "");
SYMBOL_CRC(vcore_power_ratio_down, 0x5b96a73c, "");
SYMBOL_CRC(vcore_power_ratio_up, 0xfb45b528, "");
SYMBOL_CRC(debounce_times_down_adb, 0x31664462, "");
SYMBOL_CRC(debounce_times_up_adb, 0x2a0a4edc, "");
SYMBOL_CRC(get_cm_step_num, 0x06668784, "_gpl");
SYMBOL_CRC(get_dsu_perf, 0x30a57f5e, "_gpl");
SYMBOL_CRC(cm_mgr_get_bw_path, 0xbed136a3, "_gpl");
SYMBOL_CRC(cm_mgr_set_bw_path, 0x19b81f57, "_gpl");
SYMBOL_CRC(cm_mgr_get_blank_status, 0x3f5a1448, "_gpl");
SYMBOL_CRC(cm_mgr_get_disable_fb, 0x2074c378, "_gpl");
SYMBOL_CRC(cm_mgr_get_perf_enable, 0xe0c0f71c, "_gpl");
SYMBOL_CRC(cm_mgr_get_perf_force_enable, 0xa957182d, "_gpl");
SYMBOL_CRC(cm_mgr_set_perf_force_enable, 0x80d21b7c, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_get, 0x58d81146, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_set, 0x5548540c, "_gpl");
SYMBOL_CRC(debounce_times_perf_force_down_get, 0x3852e890, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_local_get, 0x4c71307f, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_local_set, 0xdb9edfa7, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_force_local_get, 0x0afda797, "_gpl");
SYMBOL_CRC(debounce_times_perf_down_force_local_set, 0x2f765d7f, "_gpl");
SYMBOL_CRC(cm_mgr_get_dram_opp_base, 0xd83bf87a, "_gpl");
SYMBOL_CRC(cm_mgr_set_dram_opp_base, 0x35ef043f, "_gpl");
SYMBOL_CRC(cm_mgr_get_num_perf, 0x240f5e9a, "_gpl");
SYMBOL_CRC(cm_mgr_set_num_perf, 0xfb3bd632, "_gpl");
SYMBOL_CRC(cm_mgr_get_num_array, 0x5db3cbd4, "_gpl");
SYMBOL_CRC(cm_mgr_set_num_array, 0x6b344e25, "_gpl");
SYMBOL_CRC(cm_mgr_set_pdev, 0x32c2b953, "_gpl");
SYMBOL_CRC(cm_mgr_perf_set_status, 0x538ab51f, "_gpl");
SYMBOL_CRC(cm_mgr_register_hook, 0x7e948ff0, "_gpl");
SYMBOL_CRC(cm_mgr_unregister_hook, 0xe35b87dc, "_gpl");
SYMBOL_CRC(cm_mgr_judge_perfs_dram_opp, 0x28fb73d3, "_gpl");
SYMBOL_CRC(cm_mgr_set_dram_opp_ceiling, 0xf72d16c7, "_gpl");
SYMBOL_CRC(cm_mgr_set_dram_opp_floor, 0x4364623a, "_gpl");
SYMBOL_CRC(cm_mgr_check_dts_setting, 0x3b452af4, "_gpl");
SYMBOL_CRC(cm_mgr_update_dram_by_cpu_opp, 0x634eb2cc, "_gpl");
SYMBOL_CRC(cm_mgr_process, 0x88f4fb22, "_gpl");
SYMBOL_CRC(cm_mgr_common_init, 0xd898679e, "_gpl");
SYMBOL_CRC(force_use_bcpu_weight, 0x66c77bf5, "_gpl");
SYMBOL_CRC(cm_mgr_common_exit, 0x42203369, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x337411b2, "cm_mgr_to_sspm_command" },
	{ 0x374f8976, "platform_get_resource_byname" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x92997ed8, "_printk" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x037a0cba, "kfree" },
	{ 0x95bab132, "icc_set_bw" },
	{ 0x2d405891, "kobject_create_and_add" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x7a5d7a77, "mtk_disp_notifier_register" },
	{ 0x99651810, "mtk_disp_sub_notifier_register" },
	{ 0xf69c8d34, "cm_ipi_init" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7e053d68, "mtk_disp_notifier_unregister" },
	{ 0x660fe3d7, "mtk_disp_sub_notifier_unregister" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x3fbf874d, "cpufreq_table_index_unsorted" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6476afe4, "cm_get_ipi_enable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x337411b2,
	0x374f8976,
	0x9f0ef8fa,
	0x92997ed8,
	0xb088bcfc,
	0xaf7cb74b,
	0xe2d5255a,
	0x037a0cba,
	0x95bab132,
	0x2d405891,
	0x62b33777,
	0x3bd2c4ce,
	0x7a5d7a77,
	0x99651810,
	0xf69c8d34,
	0x10a09bd4,
	0x805e2dd2,
	0xc6f46339,
	0xffeedf6a,
	0x7e053d68,
	0x660fe3d7,
	0xc8c7229e,
	0xe136f93c,
	0x42ad47ad,
	0xf8bd87ca,
	0xcd6f7bae,
	0x3fbf874d,
	0x656e4a6e,
	0x6476afe4,
	0xbcab6ee6,
	0x34db050b,
	0xd35cce70,
	0x7aba1ef6,
	0xce8498d7,
	0x2d3385d3,
	0xde7ece30,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cm_mgr_to_sspm_command\0"
	"platform_get_resource_byname\0"
	"devm_ioremap_resource\0"
	"_printk\0"
	"of_count_phandle_with_args\0"
	"of_property_read_string\0"
	"strcmp\0"
	"kfree\0"
	"icc_set_bw\0"
	"kobject_create_and_add\0"
	"sysfs_create_group\0"
	"kobject_put\0"
	"mtk_disp_notifier_register\0"
	"mtk_disp_sub_notifier_register\0"
	"cm_ipi_init\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"mtk_disp_notifier_unregister\0"
	"mtk_disp_sub_notifier_unregister\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"queue_delayed_work_on\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"cpufreq_table_index_unsorted\0"
	"snprintf\0"
	"cm_get_ipi_enable\0"
	"sscanf\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"tracepoint_probe_unregister\0"
	"kernel_kobj\0"
	"system_wq\0"
	"__cpu_possible_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_cm_ipi_legacy_v1,mtk_disp_notify");


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

KSYMTAB_FUNC(mtk_smi_dbg_dump_single, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_register_force_on_notifier, "_gpl", "");
KSYMTAB_FUNC(smi_larb_force_all_on, "_gpl", "");
KSYMTAB_FUNC(smi_larb_force_all_put, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_register_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_unregister_force_on_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_register_pwr_ctrl_cb, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_unregister_pwr_ctrl_cb, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_cg_status, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_hw_sema_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_set_disp_ops, "_gpl", "");
KSYMTAB_FUNC(smi_ut_dump_get, "_gpl", "");
KSYMTAB_FUNC(smi_monitor_start, "_gpl", "");
KSYMTAB_FUNC(smi_monitor_stop, "_gpl", "");
KSYMTAB_FUNC(smi_larb_monitor_start, "_gpl", "");
KSYMTAB_FUNC(smi_larb_monitor_stop, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_mminfra, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_venc, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_vdec, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_isp_fast, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_disp, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_dump_for_mml, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_hang_detect, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_dbg_hang_detect_force_dump, "_gpl", "");
KSYMTAB_FUNC(mtk_smi_golden_set, "_gpl", "");

SYMBOL_CRC(mtk_smi_dbg_dump_single, 0x46f7c518, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_register_force_on_notifier, 0xf40d61b3, "_gpl");
SYMBOL_CRC(smi_larb_force_all_on, 0x5e56c325, "_gpl");
SYMBOL_CRC(smi_larb_force_all_put, 0x470cb889, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_register_notifier, 0x686fd714, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_unregister_notifier, 0xd113bfa2, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_unregister_force_on_notifier, 0xda709b48, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_register_pwr_ctrl_cb, 0x4089cb21, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_unregister_pwr_ctrl_cb, 0xb7d0e3f9, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_cg_status, 0x18135df6, "_gpl");
SYMBOL_CRC(mtk_smi_set_hw_sema_ops, 0x8be3ea1b, "_gpl");
SYMBOL_CRC(mtk_smi_set_disp_ops, 0x087ddd4b, "_gpl");
SYMBOL_CRC(smi_ut_dump_get, 0x91950adb, "_gpl");
SYMBOL_CRC(smi_monitor_start, 0xe28dfc7c, "_gpl");
SYMBOL_CRC(smi_monitor_stop, 0x9b71629e, "_gpl");
SYMBOL_CRC(smi_larb_monitor_start, 0x51880a15, "_gpl");
SYMBOL_CRC(smi_larb_monitor_stop, 0x6d89246f, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_mminfra, 0x29c0975f, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_venc, 0x2f5ac86e, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_vdec, 0x835eb5e5, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_isp_fast, 0xff44cfe7, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_disp, 0x979fc78c, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_dump_for_mml, 0xecbbce20, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_hang_detect, 0x689f7bde, "_gpl");
SYMBOL_CRC(mtk_smi_dbg_hang_detect_force_dump, 0x8978ee54, "_gpl");
SYMBOL_CRC(mtk_smi_golden_set, 0x1d591fb5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa4f72277, "_dev_notice" },
	{ 0x92997ed8, "_printk" },
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0x07629943, "raw_notifier_chain_unregister" },
	{ 0x037a0cba, "kfree" },
	{ 0x69b88bd8, "mtk_smi_check_larb_ref_cnt" },
	{ 0x54e78467, "mtk_smi_check_comm_ref_cnt" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1313fa7f, "mtk_smi_set_ostdl_type" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92f1ce03, "mtk_smi_larb_ut_result" },
	{ 0x51b8698f, "mtk_emidbg_dump" },
	{ 0xf9a482f9, "msleep" },
	{ 0x401167cc, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x8b67d3c9, "mtk_smi_ctrl_type" },
	{ 0x585e61e7, "mtk_smi_get_if_in_use" },
	{ 0xe4247826, "pm_runtime_get_if_in_use" },
	{ 0x3dc52f97, "mtk_smi_put_if_in_use" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x53262a34, "mtk_smi_larb_enable" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x6b85895c, "mtk_smi_larb_disable" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xfeba6173, "debugfs_lookup" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0x9bf142b5, "dput" },
	{ 0x3e19cd49, "__platform_register_drivers" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x173e2075, "seq_write" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x665e62b5, "generic_file_llseek" },
	{ 0x391b5530, "simple_attr_read" },
	{ 0x0c6a7f0d, "simple_attr_write" },
	{ 0xbf748e79, "simple_attr_release" },
	{ 0x0140f701, "simple_attr_open" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x74ff086a, "mtk_smi_driver_register_notifier" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xfea87247, "of_property_read_u64_index" },
	{ 0x6b201699, "of_find_property" },
	{ 0x2c235092, "of_prop_next_u32" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xdd9998f6, "mtk_smi_dump_last_pd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd36facd9, "smi_lock" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xa4f72277,
	0x92997ed8,
	0x354cf7b5,
	0x34db050b,
	0xcaec9cda,
	0x07629943,
	0x037a0cba,
	0x69b88bd8,
	0x54e78467,
	0xbcab6ee6,
	0x1313fa7f,
	0x8c8569cb,
	0x92f1ce03,
	0x51b8698f,
	0xf9a482f9,
	0x401167cc,
	0x656e4a6e,
	0xe136f93c,
	0x75ca79b5,
	0x476b165a,
	0xa916b694,
	0x8b67d3c9,
	0x585e61e7,
	0xe4247826,
	0x3dc52f97,
	0x13269d10,
	0xd35cce70,
	0x53262a34,
	0x4eb4c414,
	0x6b85895c,
	0x7e19152a,
	0x9a835040,
	0xfeba6173,
	0x5cf4d4de,
	0x4e870156,
	0x9bf142b5,
	0x3e19cd49,
	0x441d0de9,
	0x52c5c991,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0x173e2075,
	0xc8f2ae9d,
	0x665e62b5,
	0x391b5530,
	0x0c6a7f0d,
	0xbf748e79,
	0x0140f701,
	0xe94986d6,
	0xc3055d20,
	0xf3cdc3c6,
	0xa823db6e,
	0x3d0ffa5c,
	0xee73d233,
	0x74ff086a,
	0x31b65f04,
	0xfea87247,
	0x6b201699,
	0x2c235092,
	0x40863ba1,
	0xa079425d,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xdd9998f6,
	0xeae3dfd6,
	0xd36facd9,
	0x92acb4e9,
	0x0f05f001,
	0xaf56600a,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_notice\0"
	"_printk\0"
	"raw_notifier_chain_register\0"
	"_raw_spin_lock_irqsave\0"
	"raw_notifier_call_chain\0"
	"raw_notifier_chain_unregister\0"
	"kfree\0"
	"mtk_smi_check_larb_ref_cnt\0"
	"mtk_smi_check_comm_ref_cnt\0"
	"sscanf\0"
	"mtk_smi_set_ostdl_type\0"
	"kstrtoint\0"
	"mtk_smi_larb_ut_result\0"
	"mtk_emidbg_dump\0"
	"msleep\0"
	"_dev_info\0"
	"snprintf\0"
	"of_property_read_variable_u32_array\0"
	"__fortify_panic\0"
	"sized_strscpy\0"
	"strnlen\0"
	"mtk_smi_ctrl_type\0"
	"mtk_smi_get_if_in_use\0"
	"pm_runtime_get_if_in_use\0"
	"mtk_smi_put_if_in_use\0"
	"__pm_runtime_idle\0"
	"_raw_spin_unlock_irqrestore\0"
	"mtk_smi_larb_enable\0"
	"__pm_runtime_resume\0"
	"mtk_smi_larb_disable\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"debugfs_lookup\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"dput\0"
	"__platform_register_drivers\0"
	"__kmalloc_large_noprof\0"
	"__kmalloc_noprof\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_write\0"
	"seq_printf\0"
	"generic_file_llseek\0"
	"simple_attr_read\0"
	"simple_attr_write\0"
	"simple_attr_release\0"
	"simple_attr_open\0"
	"sched_clock\0"
	"usleep_range_state\0"
	"of_find_compatible_node\0"
	"of_find_device_by_node\0"
	"platform_get_resource\0"
	"devm_ioremap\0"
	"mtk_smi_driver_register_notifier\0"
	"of_property_read_u32_index\0"
	"of_property_read_u64_index\0"
	"of_find_property\0"
	"of_prop_next_u32\0"
	"ioremap_prot\0"
	"of_property_count_elems_of_size\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"mtk_smi_dump_last_pd\0"
	"__const_udelay\0"
	"smi_lock\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"arm64_use_ng_mappings\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-smi,emi");


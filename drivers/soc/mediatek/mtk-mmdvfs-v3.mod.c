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

KSYMTAB_FUNC(mmdvfs_call_ccu_set_fp, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_fmeter_register_notifier, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mmup_base, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_vcp_base, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mmup_sram_enable, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mmup_sram, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mux_cb_sram_enable, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mux_cb_time_sram, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mux_cb_val_sram, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_mmup_enable, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_is_init_done, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_get_ipi_status, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_enable_vcp, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_enable_ccu, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_force_vcore_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_camera_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_genpd_notify, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_set_avs, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_camsv_dc_enable, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_lp_mode_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_rc_enable_set_fp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_get_version, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_force_step_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_v3_set_force_step, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_force_voltage_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_force_rc_clock_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_force_single_clock_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_vote_step_by_vcp, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_v3_set_vote_step, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_vcp_cb_mutex_lock, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_vcp_cb_mutex_unlock, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_vcp_cb_ready_get, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_mux_set_opp, "", "");

SYMBOL_CRC(mmdvfs_call_ccu_set_fp, 0x5ebbc22c, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_fmeter_register_notifier, 0x49d5f312, "_gpl");
SYMBOL_CRC(mmdvfs_get_mmup_base, 0x2b818ff2, "_gpl");
SYMBOL_CRC(mmdvfs_get_vcp_base, 0xb2c02e8d, "_gpl");
SYMBOL_CRC(mmdvfs_get_mmup_sram_enable, 0xe92965b7, "_gpl");
SYMBOL_CRC(mmdvfs_get_mmup_sram, 0x2fb8b85b, "_gpl");
SYMBOL_CRC(mmdvfs_get_mux_cb_sram_enable, 0xe1b2283c, "_gpl");
SYMBOL_CRC(mmdvfs_get_mux_cb_time_sram, 0x04dc2bc9, "_gpl");
SYMBOL_CRC(mmdvfs_get_mux_cb_val_sram, 0x60fae99f, "_gpl");
SYMBOL_CRC(mmdvfs_get_mmup_enable, 0x56979b84, "_gpl");
SYMBOL_CRC(mmdvfs_is_init_done, 0x5a812c96, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_get_ipi_status, 0xe7787e9f, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_enable_vcp, 0x7eb4d0e0, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_enable_ccu, 0xd5d833d2, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_force_vcore_notify, 0x6c1066cd, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_camera_notify, 0x87db6ab0, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_genpd_notify, 0xd3756b8e, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_set_avs, 0xb42c4723, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_camsv_dc_enable, 0x9cddf013, "_gpl");
SYMBOL_CRC(mmdvfs_set_lp_mode_by_vcp, 0x771d5dda, "_gpl");
SYMBOL_CRC(mmdvfs_rc_enable_set_fp, 0xdca51c76, "_gpl");
SYMBOL_CRC(mmdvfs_get_version, 0xc56c09ba, "_gpl");
SYMBOL_CRC(mmdvfs_force_step_by_vcp, 0x2b3e59fd, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_v3_set_force_step, 0xf68df9c6, "_gpl");
SYMBOL_CRC(mmdvfs_force_voltage_by_vcp, 0x62ceb968, "_gpl");
SYMBOL_CRC(mmdvfs_force_rc_clock_by_vcp, 0x718c6e6e, "_gpl");
SYMBOL_CRC(mmdvfs_force_single_clock_by_vcp, 0x19381c81, "_gpl");
SYMBOL_CRC(mmdvfs_vote_step_by_vcp, 0x03247550, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_v3_set_vote_step, 0xd5351405, "_gpl");
SYMBOL_CRC(mmdvfs_vcp_cb_mutex_lock, 0x5ebd2f18, "_gpl");
SYMBOL_CRC(mmdvfs_vcp_cb_mutex_unlock, 0x860795de, "_gpl");
SYMBOL_CRC(mmdvfs_vcp_cb_ready_get, 0xda3ba125, "_gpl");
SYMBOL_CRC(mmdvfs_mux_set_opp, 0x819799e1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x354cf7b5, "raw_notifier_chain_register" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x101529b7, "is_vcp_suspending_ex" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x88b539b6, "vcp_register_feature_ex" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x4e86d8bc, "vcp_deregister_feature_ex" },
	{ 0x92997ed8, "_printk" },
	{ 0xfa27aa25, "rproc_boot" },
	{ 0x69f3da31, "rproc_shutdown" },
	{ 0x037a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb1f33e13, "is_vcp_ready_ex" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x5a921311, "strncmp" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x2477f0b0, "vcp_cmd_ex" },
	{ 0x84072dc8, "vcp_get_ipidev" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0x862b117b, "is_mmup_enable_ex" },
	{ 0x99e11c5a, "mmdebug_is_init_done" },
	{ 0x9c00ff0a, "vcp_get_reserve_mem_phys_ex" },
	{ 0xd3cc3c5d, "iommu_get_domain_for_dev" },
	{ 0xdb3ccf12, "iommu_iova_to_phys" },
	{ 0x885260b9, "vcp_get_reserve_mem_virt_ex" },
	{ 0x8e726dd5, "vcp_A_register_notify_ex" },
	{ 0xf40d61b3, "mtk_smi_dbg_register_force_on_notifier" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x5b9684f1, "vcp_get_sram_virt_ex" },
	{ 0x367365db, "mt_get_fmeter_freq" },
	{ 0xcaec9cda, "raw_notifier_call_chain" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3e19cd49, "__platform_register_drivers" },
	{ 0x8165f393, "mtk_alloc_clk_data" },
	{ 0xa0f6226b, "of_find_node_by_phandle" },
	{ 0x796ead29, "of_get_next_available_child" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0xdd7ce13c, "clk_register" },
	{ 0x26750717, "of_clk_add_provider" },
	{ 0x7e814de5, "of_clk_src_onecell_get" },
	{ 0xeeee608f, "mtk_free_clk_data" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x1a7acd2c, "mtk_clk_register_ipi_callback" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xda09b792, "rproc_get_by_phandle" },
	{ 0xb57f5be6, "of_clk_get" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x2e5fcea3, "mtk_clk_mux_register_user_clks" },
	{ 0xc0e61bae, "mtk_clk_mux_register_callback" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x67064f1d, "of_property_read_variable_u8_array" },
	{ 0x314737eb, "platform_unregister_drivers" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0xe6de52c9, "param_ops_bool" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xc87852b6, "mtk_mux_user_ops" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x354cf7b5,
	0xe94986d6,
	0x101529b7,
	0xd5977bfb,
	0x88b539b6,
	0xed55cabd,
	0x4e86d8bc,
	0x92997ed8,
	0xfa27aa25,
	0x69f3da31,
	0x037a0cba,
	0x656e4a6e,
	0x124bad4d,
	0xbcab6ee6,
	0x76d9b876,
	0xb1f33e13,
	0xeae3dfd6,
	0xba0aee2e,
	0xce5bc4d0,
	0x5a921311,
	0xe17134b6,
	0x52c5c991,
	0xc5b6f236,
	0x6b722180,
	0x0c1a5ee3,
	0x8c8569cb,
	0x3b6c41ea,
	0xc905402b,
	0xfa4d3c24,
	0x4eb4c414,
	0x13269d10,
	0x2477f0b0,
	0x84072dc8,
	0x4a353d20,
	0x3b1b6444,
	0xb318cbab,
	0x862b117b,
	0x99e11c5a,
	0x9c00ff0a,
	0xd3cc3c5d,
	0xdb3ccf12,
	0x885260b9,
	0x8e726dd5,
	0xf40d61b3,
	0xf9a482f9,
	0xf3cdc3c6,
	0xa823db6e,
	0x1fec5304,
	0x5b9684f1,
	0x367365db,
	0xcaec9cda,
	0xc3055d20,
	0x3e19cd49,
	0x8165f393,
	0xa0f6226b,
	0x796ead29,
	0x66bcb0f8,
	0xdd7ce13c,
	0x26750717,
	0x7e814de5,
	0xeeee608f,
	0x6b201699,
	0xeab7088e,
	0xea23ff02,
	0x49cd25ed,
	0x75966ec2,
	0x1a7acd2c,
	0x0be515ae,
	0xd4e81a21,
	0xcd6bda8d,
	0xe136f93c,
	0xda09b792,
	0xb57f5be6,
	0xc569d8ce,
	0x31b65f04,
	0x2e5fcea3,
	0xc0e61bae,
	0x40863ba1,
	0xa079425d,
	0x67064f1d,
	0x314737eb,
	0x92acb4e9,
	0xe6de52c9,
	0x0f05f001,
	0xefe8a82e,
	0xc87852b6,
	0xaf56600a,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"raw_notifier_chain_register\0"
	"sched_clock\0"
	"is_vcp_suspending_ex\0"
	"mutex_lock\0"
	"vcp_register_feature_ex\0"
	"mutex_unlock\0"
	"vcp_deregister_feature_ex\0"
	"_printk\0"
	"rproc_boot\0"
	"rproc_shutdown\0"
	"kfree\0"
	"snprintf\0"
	"kstrtobool\0"
	"sscanf\0"
	"clk_set_rate\0"
	"is_vcp_ready_ex\0"
	"__const_udelay\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"strncmp\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"queue_work_on\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"kstrtoint\0"
	"kstrtouint\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"vcp_cmd_ex\0"
	"vcp_get_ipidev\0"
	"mtk_ipi_send\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"is_mmup_enable_ex\0"
	"mmdebug_is_init_done\0"
	"vcp_get_reserve_mem_phys_ex\0"
	"iommu_get_domain_for_dev\0"
	"iommu_iova_to_phys\0"
	"vcp_get_reserve_mem_virt_ex\0"
	"vcp_A_register_notify_ex\0"
	"mtk_smi_dbg_register_force_on_notifier\0"
	"msleep\0"
	"of_find_compatible_node\0"
	"of_find_device_by_node\0"
	"__of_parse_phandle_with_args\0"
	"vcp_get_sram_virt_ex\0"
	"mt_get_fmeter_freq\0"
	"raw_notifier_call_chain\0"
	"usleep_range_state\0"
	"__platform_register_drivers\0"
	"mtk_alloc_clk_data\0"
	"of_find_node_by_phandle\0"
	"of_get_next_available_child\0"
	"of_property_read_u64\0"
	"clk_register\0"
	"of_clk_add_provider\0"
	"of_clk_src_onecell_get\0"
	"mtk_free_clk_data\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"devm_clk_get\0"
	"alloc_workqueue\0"
	"register_pm_notifier\0"
	"mtk_clk_register_ipi_callback\0"
	"device_link_add\0"
	"pm_runtime_enable\0"
	"of_property_read_string_helper\0"
	"of_property_read_variable_u32_array\0"
	"rproc_get_by_phandle\0"
	"of_clk_get\0"
	"__clk_get_name\0"
	"of_property_read_u32_index\0"
	"mtk_clk_mux_register_user_clks\0"
	"mtk_clk_mux_register_callback\0"
	"ioremap_prot\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u8_array\0"
	"platform_unregister_drivers\0"
	"param_ops_uint\0"
	"param_ops_bool\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"mtk_mux_user_ops\0"
	"arm64_use_ng_mappings\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "vcp_status,mtk_tinysys_ipi,mtk-mmdebug-vcp-stub,mtk-smi-dbg,clk-common");


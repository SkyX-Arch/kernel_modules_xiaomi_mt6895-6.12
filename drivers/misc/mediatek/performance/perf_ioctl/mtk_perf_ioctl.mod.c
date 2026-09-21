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

KSYMTAB_DATA(fpsgo_notify_qudeq_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_connect_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_bqid_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_vsync_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_vsync_period_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_get_cmd_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_swap_buffer_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_acquire_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_buffer_quota_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_get_enable_signal_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_producer_info_fp, "_gpl", "");
KSYMTAB_DATA(power2fpsgo_get_fps_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_get_pid_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_sbe_rescue_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_sbe_policy_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_frame_hint_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_ux_buffer_count_fp, "_gpl", "");
KSYMTAB_DATA(fpsgo_notify_smart_launch_algorithm_fp, "_gpl", "");
KSYMTAB_DATA(perfmgr_root, "", "");
KSYMTAB_DATA(xgff_frame_startend_fp, "", "");
KSYMTAB_DATA(xgff_frame_getdeplist_maxsize_fp, "", "");
KSYMTAB_DATA(xgff_frame_min_cap_fp, "", "");
KSYMTAB_DATA(fpsgo_get_lr_pair_fp, "", "");
KSYMTAB_DATA(fpsgo_set_rl_expected_l2q_us_fp, "", "");
KSYMTAB_DATA(fpsgo_set_rl_l2q_enable_fp, "", "");
KSYMTAB_DATA(fpsgo_get_now_logic_head_fp, "", "");
KSYMTAB_DATA(fpsgo_other2comp_get_render_fw_info_fp, "", "");
KSYMTAB_DATA(fpsgo_other2comp_flush_acquire_table_fp, "", "");
KSYMTAB_DATA(fpsgo_other2fstb_get_app_self_ctrl_time_fp, "", "");
KSYMTAB_DATA(fpsgo_other2fstb_get_fps_info_fp, "", "");
KSYMTAB_DATA(fpsgo_other2xgf_get_critical_tasks_fp, "", "");

SYMBOL_CRC(fpsgo_notify_qudeq_fp, 0xf11fcc52, "_gpl");
SYMBOL_CRC(fpsgo_notify_connect_fp, 0xe5dbe114, "_gpl");
SYMBOL_CRC(fpsgo_notify_bqid_fp, 0xf7cb819f, "_gpl");
SYMBOL_CRC(fpsgo_notify_vsync_fp, 0x43fc37b1, "_gpl");
SYMBOL_CRC(fpsgo_notify_vsync_period_fp, 0x2b8dcd34, "_gpl");
SYMBOL_CRC(fpsgo_get_cmd_fp, 0xebd8412d, "_gpl");
SYMBOL_CRC(fpsgo_notify_swap_buffer_fp, 0x1968478c, "_gpl");
SYMBOL_CRC(fpsgo_notify_acquire_fp, 0xf0f156b6, "_gpl");
SYMBOL_CRC(fpsgo_notify_buffer_quota_fp, 0x815612c6, "_gpl");
SYMBOL_CRC(fpsgo_get_enable_signal_fp, 0x10a28eb0, "_gpl");
SYMBOL_CRC(fpsgo_notify_producer_info_fp, 0xc7b68c5a, "_gpl");
SYMBOL_CRC(power2fpsgo_get_fps_fp, 0xe740d20d, "_gpl");
SYMBOL_CRC(fpsgo_get_pid_fp, 0x42dd7c5a, "_gpl");
SYMBOL_CRC(fpsgo_notify_sbe_rescue_fp, 0x1bfb38fb, "_gpl");
SYMBOL_CRC(fpsgo_notify_sbe_policy_fp, 0xcd89a4fb, "_gpl");
SYMBOL_CRC(fpsgo_notify_frame_hint_fp, 0x447f9d8e, "_gpl");
SYMBOL_CRC(fpsgo_notify_ux_buffer_count_fp, 0x32add59a, "_gpl");
SYMBOL_CRC(fpsgo_notify_smart_launch_algorithm_fp, 0x4fa74750, "_gpl");
SYMBOL_CRC(perfmgr_root, 0x5d274768, "");
SYMBOL_CRC(xgff_frame_startend_fp, 0xa31907cb, "");
SYMBOL_CRC(xgff_frame_getdeplist_maxsize_fp, 0x96a9dd8c, "");
SYMBOL_CRC(xgff_frame_min_cap_fp, 0xd544ac4b, "");
SYMBOL_CRC(fpsgo_get_lr_pair_fp, 0x03522510, "");
SYMBOL_CRC(fpsgo_set_rl_expected_l2q_us_fp, 0x79ae2eb0, "");
SYMBOL_CRC(fpsgo_set_rl_l2q_enable_fp, 0xbfed9edc, "");
SYMBOL_CRC(fpsgo_get_now_logic_head_fp, 0x560fb31e, "");
SYMBOL_CRC(fpsgo_other2comp_get_render_fw_info_fp, 0xbfb92f0e, "");
SYMBOL_CRC(fpsgo_other2comp_flush_acquire_table_fp, 0x33727b59, "");
SYMBOL_CRC(fpsgo_other2fstb_get_app_self_ctrl_time_fp, 0x6e011699, "");
SYMBOL_CRC(fpsgo_other2fstb_get_fps_info_fp, 0x0c7442f0, "");
SYMBOL_CRC(fpsgo_other2xgf_get_critical_tasks_fp, 0x936cc87b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x2be0c009,
	0x88db9f48,
	0x9a85eebb,
	0x037a0cba,
	0x52c5c991,
	0xbee3ddd5,
	0x999e8297,
	0x0f05f001,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"__arch_copy_from_user\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"vzalloc_noprof\0"
	"vfree\0"
	"mem_alloc_profiling_key\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


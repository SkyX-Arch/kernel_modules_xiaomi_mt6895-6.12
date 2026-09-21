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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe71f72e7, "lpm_trace_event_deinit" },
	{ 0xaa50a34c, "lpm_sys_res_stat_deinit" },
	{ 0x116424dd, "unregister_lpm_logger_mbrain_dbg_ops" },
	{ 0x66922fa6, "lpm_dbg_plat_info_set" },
	{ 0x5e4aaffb, "lpm_dbg_plat_ops_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xd819551c, "lpm_spm_fs_init" },
	{ 0x492ab7da, "lpm_ocla_fs_init" },
	{ 0x6c0d290b, "lpm_sys_res_stat_init" },
	{ 0x8944ee18, "register_lpm_logger_mbrain_dbg_ops" },
	{ 0x96848186, "scnprintf" },
	{ 0xaf78edf3, "lpm_dbg_spm_rsc_req_check" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x3af92941, "log_md_sleep_info" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x86fa9be7, "lpm_trace_event_init" },
	{ 0x42337187, "lpm_spm_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe71f72e7,
	0xaa50a34c,
	0x116424dd,
	0x66922fa6,
	0x5e4aaffb,
	0x92997ed8,
	0xd819551c,
	0x492ab7da,
	0x6c0d290b,
	0x8944ee18,
	0x96848186,
	0xaf78edf3,
	0xf93aae46,
	0x3af92941,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x86fa9be7,
	0x42337187,
	0xf0fdf6cb,
	0xdcb764ad,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"lpm_trace_event_deinit\0"
	"lpm_sys_res_stat_deinit\0"
	"unregister_lpm_logger_mbrain_dbg_ops\0"
	"lpm_dbg_plat_info_set\0"
	"lpm_dbg_plat_ops_register\0"
	"_printk\0"
	"lpm_spm_fs_init\0"
	"lpm_ocla_fs_init\0"
	"lpm_sys_res_stat_init\0"
	"register_lpm_logger_mbrain_dbg_ops\0"
	"scnprintf\0"
	"lpm_dbg_spm_rsc_req_check\0"
	"__arm_smccc_smc\0"
	"log_md_sleep_info\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"lpm_trace_event_init\0"
	"lpm_spm_base\0"
	"__stack_chk_fail\0"
	"memset\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-lpm-dbg-common-v2");


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
	{ 0xcdd61926, "exec_ccci_kern_func" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf772582a, "thermal_of_cooling_device_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0x037a0cba, "kfree" },
	{ 0x26ea4bee, "__traceiter_md_mutt_limit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xaf426228, "__traceiter_md_tx_pwr_limit" },
	{ 0xf3c5d269, "__traceiter_md_scg_off" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x62835296, "thermal_cooling_device_unregister" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xc9d0b97e, "__tracepoint_md_mutt_limit" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x3123f345, "__tracepoint_md_tx_pwr_limit" },
	{ 0x5a9a69ec, "__tracepoint_md_scg_off" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x7e704a24, "kstrtoint_from_user" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xcdd61926,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x12db679a,
	0xb4ce05a5,
	0xc8c7229e,
	0x7c7f271f,
	0x656e4a6e,
	0x1e6d26a8,
	0xf772582a,
	0x401167cc,
	0x037a0cba,
	0x26ea4bee,
	0xf70e4a4d,
	0xaf426228,
	0xf3c5d269,
	0x7e19152a,
	0x62835296,
	0x9a835040,
	0x6fc35f2b,
	0xc9d0b97e,
	0xac594e02,
	0x3123f345,
	0x5a9a69ec,
	0x5cf4d4de,
	0x4e870156,
	0xb7c7d237,
	0xe7ce721f,
	0x69cfdbb0,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0xbcab6ee6,
	0x52c5c991,
	0x88db9f48,
	0x2be0c009,
	0x7e704a24,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"exec_ccci_kern_func\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__platform_driver_register\0"
	"_dev_err\0"
	"devm_kmalloc\0"
	"of_get_next_child\0"
	"snprintf\0"
	"strstr\0"
	"thermal_of_cooling_device_register\0"
	"_dev_info\0"
	"kfree\0"
	"__traceiter_md_mutt_limit\0"
	"preempt_schedule_notrace\0"
	"__traceiter_md_tx_pwr_limit\0"
	"__traceiter_md_scg_off\0"
	"__list_add_valid_or_report\0"
	"thermal_cooling_device_unregister\0"
	"__list_del_entry_valid_or_report\0"
	"platform_driver_unregister\0"
	"__tracepoint_md_mutt_limit\0"
	"__cpu_online_mask\0"
	"__tracepoint_md_tx_pwr_limit\0"
	"__tracepoint_md_scg_off\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"debugfs_remove\0"
	"seq_lseek\0"
	"seq_read\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"sscanf\0"
	"__kmalloc_noprof\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"kstrtoint_from_user\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_md_all,thermal_trace");

MODULE_ALIAS("of:N*T*Cmediatek,mt6295-md-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6295-md-coolerC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6297-md-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6297-md-coolerC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6298-md-cooler");
MODULE_ALIAS("of:N*T*Cmediatek,mt6298-md-coolerC*");

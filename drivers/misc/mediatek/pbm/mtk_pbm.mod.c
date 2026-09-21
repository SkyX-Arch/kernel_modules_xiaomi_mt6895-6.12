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

KSYMTAB_FUNC(kicker_pbm_by_md, "", "");
KSYMTAB_FUNC(kicker_pbm_by_cpu, "", "");
KSYMTAB_FUNC(kicker_pbm_by_gpu, "", "");
KSYMTAB_FUNC(kicker_pbm_by_flash, "", "");
KSYMTAB_FUNC(register_pbm_notify, "", "");
KSYMTAB_FUNC(register_pbm_gpu_notify, "", "");

SYMBOL_CRC(kicker_pbm_by_md, 0x37d20ffc, "");
SYMBOL_CRC(kicker_pbm_by_cpu, 0xa7f7a0c1, "");
SYMBOL_CRC(kicker_pbm_by_gpu, 0x4b37424a, "");
SYMBOL_CRC(kicker_pbm_by_flash, 0x01a718fc, "");
SYMBOL_CRC(register_pbm_notify, 0xe2020b8e, "");
SYMBOL_CRC(register_pbm_gpu_notify, 0x8124dc40, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0x1af93d4f, "freq_qos_update_request" },
	{ 0xfdf04ae0, "power_supply_get_by_name" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0xcd6f7bae, "cpufreq_cpu_put" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x10a09bd4, "for_each_kernel_tracepoint" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0x67e404ca, "register_dlpt_notify" },
	{ 0x037a0cba, "kfree" },
	{ 0x18c317c2, "em_cpu_get" },
	{ 0xdb4e2667, "freq_qos_add_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0x173e2075, "seq_write" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd3af17a6, "get_md1_power" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0xfefe2f2f, "freq_qos_remove_request" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xd067d3c5, "system_freezable_power_efficient_wq" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xe2d5255a,
	0xb6e871b8,
	0xf5edea2e,
	0x9e87b2ff,
	0x86a50ae0,
	0x1af93d4f,
	0xfdf04ae0,
	0xf8bd87ca,
	0xcd6f7bae,
	0x7c46233a,
	0x9f46ced8,
	0x12db679a,
	0xf3cdc3c6,
	0xa4f72277,
	0x75966ec2,
	0x725b192d,
	0x10a09bd4,
	0x805e2dd2,
	0x67e404ca,
	0x037a0cba,
	0x18c317c2,
	0xdb4e2667,
	0xc6f46339,
	0xffeedf6a,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0x173e2075,
	0x8c8569cb,
	0x88db9f48,
	0x2be0c009,
	0xc8f2ae9d,
	0xbcab6ee6,
	0xd3af17a6,
	0xd5977bfb,
	0xed55cabd,
	0x7aba1ef6,
	0xe17134b6,
	0x7e19152a,
	0xcec49a87,
	0xfefe2f2f,
	0x9a835040,
	0x6fc35f2b,
	0xd067d3c5,
	0xde7ece30,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"strcmp\0"
	"power_supply_get_property\0"
	"___ratelimit\0"
	"cancel_delayed_work\0"
	"mod_delayed_work_on\0"
	"freq_qos_update_request\0"
	"power_supply_get_by_name\0"
	"cpufreq_cpu_get\0"
	"cpufreq_cpu_put\0"
	"cpufreq_quick_get\0"
	"__sw_hweight64\0"
	"__platform_driver_register\0"
	"of_find_compatible_node\0"
	"_dev_notice\0"
	"register_pm_notifier\0"
	"power_supply_reg_notifier\0"
	"for_each_kernel_tracepoint\0"
	"tracepoint_probe_register\0"
	"register_dlpt_notify\0"
	"kfree\0"
	"em_cpu_get\0"
	"freq_qos_add_request\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_write\0"
	"kstrtoint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"seq_printf\0"
	"sscanf\0"
	"get_md1_power\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"tracepoint_probe_unregister\0"
	"__kmalloc_cache_noprof\0"
	"__list_add_valid_or_report\0"
	"cancel_delayed_work_sync\0"
	"freq_qos_remove_request\0"
	"__list_del_entry_valid_or_report\0"
	"platform_driver_unregister\0"
	"system_freezable_power_efficient_wq\0"
	"__cpu_possible_mask\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_dynamic_loading_throttling,mtk_mdpm");

MODULE_ALIAS("of:N*T*Cmediatek,pbm");
MODULE_ALIAS("of:N*T*Cmediatek,pbmC*");

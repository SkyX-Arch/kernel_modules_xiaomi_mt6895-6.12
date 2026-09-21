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
	{ 0xf553318d, "cpuidle_pause_and_lock" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xcabe04de, "cpuidle_resume_and_unlock" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x690f478a, "get_md_sleep_time" },
	{ 0x822c124d, "lpm_suspend_type_get" },
	{ 0xee638774, "lpm_suspend_registry" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6bcaac61, "cpuidle_get_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4d0015e2, "cpu_hotplug_disable" },
	{ 0xf6c8dc62, "cpu_hotplug_enable" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x16ad39d4, "irq_to_desc" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x256c3603, "before_md_sleep_status" },
	{ 0x632e9e90, "after_md_sleep_status" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf553318d,
	0xf93aae46,
	0xcabe04de,
	0xd273017c,
	0x6c9565df,
	0x92997ed8,
	0x52384e38,
	0x18b48e28,
	0xf3cdc3c6,
	0xaba63322,
	0x017de3d5,
	0xac594e02,
	0x690f478a,
	0x822c124d,
	0xee638774,
	0x75966ec2,
	0x9f46ced8,
	0x6bcaac61,
	0xe2d5255a,
	0x9ec6ca96,
	0x356461c8,
	0x4d0015e2,
	0xf6c8dc62,
	0x7c611278,
	0xce2840e7,
	0x92d5838e,
	0x16ad39d4,
	0xa079425d,
	0xcd6bda8d,
	0x27bbf221,
	0x256c3603,
	0x632e9e90,
	0xc60d0620,
	0xfe5d4bb2,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cpuidle_pause_and_lock\0"
	"__arm_smccc_smc\0"
	"cpuidle_resume_and_unlock\0"
	"cpu_latency_qos_remove_request\0"
	"cpu_latency_qos_update_request\0"
	"_printk\0"
	"cpu_latency_qos_add_request\0"
	"__memset_io\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"nr_cpu_ids\0"
	"__cpu_online_mask\0"
	"get_md_sleep_time\0"
	"lpm_suspend_type_get\0"
	"lpm_suspend_registry\0"
	"register_pm_notifier\0"
	"__sw_hweight64\0"
	"cpuidle_get_driver\0"
	"strcmp\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"cpu_hotplug_disable\0"
	"cpu_hotplug_enable\0"
	"irq_of_parse_and_map\0"
	"irq_set_irq_wake\0"
	"request_threaded_irq\0"
	"irq_to_desc\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_string_helper\0"
	"disable_irq_nosync\0"
	"before_md_sleep_status\0"
	"after_md_sleep_status\0"
	"__num_online_cpus\0"
	"sys_tz\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-lpm-dbg-common-v2,mtk-lpm");


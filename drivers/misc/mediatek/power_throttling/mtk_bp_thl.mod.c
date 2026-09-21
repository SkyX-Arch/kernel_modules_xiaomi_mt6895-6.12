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

KSYMTAB_FUNC(register_bp_thl_notify, "", "");
KSYMTAB_FUNC(register_bp_thl_md_notify, "", "");
KSYMTAB_FUNC(register_bp_thl_md_uisoc_notify, "", "");

SYMBOL_CRC(register_bp_thl_notify, 0x99ae3229, "");
SYMBOL_CRC(register_bp_thl_md_notify, 0x5fc2f90a, "");
SYMBOL_CRC(register_bp_thl_md_uisoc_notify, 0xf2c57170, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0x9a9555f9, "ccci_set_power_throttle_cb" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xe2964344, "__wake_up" },
	{ 0xcdd61926, "exec_ccci_kern_func" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x401167cc, "_dev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x4e8b8def,
	0xd5977bfb,
	0xed55cabd,
	0x05590c04,
	0xb3f7646e,
	0xc5b6f236,
	0x12db679a,
	0x0f314d3e,
	0xba0aee2e,
	0xce5bc4d0,
	0x725b192d,
	0x9a9555f9,
	0xe922b94d,
	0xa4f72277,
	0xc8c7229e,
	0xa079425d,
	0xe136f93c,
	0x6b201699,
	0xe2d5255a,
	0xb6e871b8,
	0xe2964344,
	0xcdd61926,
	0x656e4a6e,
	0xbcab6ee6,
	0x401167cc,
	0x3c3ff9fd,
	0x6fc35f2b,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__pm_stay_awake\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__pm_relax\0"
	"kthread_should_stop\0"
	"queue_work_on\0"
	"__platform_driver_register\0"
	"wakeup_source_register\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"power_supply_reg_notifier\0"
	"ccci_set_power_throttle_cb\0"
	"device_create_file\0"
	"_dev_notice\0"
	"devm_kmalloc\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"strcmp\0"
	"power_supply_get_property\0"
	"__wake_up\0"
	"exec_ccci_kern_func\0"
	"snprintf\0"
	"sscanf\0"
	"_dev_info\0"
	"sprintf\0"
	"platform_driver_unregister\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_md_all");

MODULE_ALIAS("of:N*T*Cmediatek,mtk-bp-thl");
MODULE_ALIAS("of:N*T*Cmediatek,mtk-bp-thlC*");

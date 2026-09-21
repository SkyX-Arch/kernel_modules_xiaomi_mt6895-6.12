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
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x037a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x725b192d, "power_supply_reg_notifier" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x3225e8d9, "lbat_user_register_ext" },
	{ 0xaa643b64, "register_low_battery_notify" },
	{ 0x1c539951, "register_battery_oc_notify" },
	{ 0x5fc2f90a, "register_bp_thl_md_notify" },
	{ 0xf2c57170, "register_bp_thl_md_uisoc_notify" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb6e871b8, "power_supply_get_property" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcdd61926, "exec_ccci_kern_func" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x656e4a6e,
	0xa079425d,
	0x037a0cba,
	0x52c5c991,
	0xe136f93c,
	0x12db679a,
	0x725b192d,
	0xa4f72277,
	0x3225e8d9,
	0xaa643b64,
	0x1c539951,
	0x5fc2f90a,
	0xf2c57170,
	0x1ed4c5e6,
	0xe2d5255a,
	0xb6e871b8,
	0xd5977bfb,
	0xed55cabd,
	0xc5b6f236,
	0xcdd61926,
	0x6fc35f2b,
	0x0f05f001,
	0x2d3385d3,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"snprintf\0"
	"of_property_count_elems_of_size\0"
	"kfree\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"__platform_driver_register\0"
	"power_supply_reg_notifier\0"
	"_dev_notice\0"
	"lbat_user_register_ext\0"
	"register_low_battery_notify\0"
	"register_battery_oc_notify\0"
	"register_bp_thl_md_notify\0"
	"register_bp_thl_md_uisoc_notify\0"
	"of_find_node_by_name\0"
	"strcmp\0"
	"power_supply_get_property\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"queue_work_on\0"
	"exec_ccci_kern_func\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pmic_lbat_service,mtk_low_battery_throttling,mtk_battery_oc_throttling,mtk_bp_thl,ccci_md_all");

MODULE_ALIAS("of:N*T*Cmediatek,md-power-throttling");
MODULE_ALIAS("of:N*T*Cmediatek,md-power-throttlingC*");

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

KSYMTAB_FUNC(et7480_unreg_notifier, "", "");
KSYMTAB_FUNC(et7480_switch_event, "", "");

SYMBOL_CRC(et7480_unreg_notifier, 0x634e06b8, "");
SYMBOL_CRC(et7480_switch_event, 0x5bccfc11, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x64311477, "regmap_read" },
	{ 0x92997ed8, "_printk" },
	{ 0x51327dcc, "i2c_find_device_by_fwnode" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xd9f704be, "tcpc_dev_get_by_name" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0xdeef92c3, "devm_pinctrl_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2044bbfb, "accdet_eint_callback_wrapper" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9dfe9f99, "tcpm_inquire_typec_attach_state" },
	{ 0x6f21f22a, "register_tcp_dev_notifier" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3e54ac69,
	0x64311477,
	0x92997ed8,
	0x51327dcc,
	0xb4ce05a5,
	0x6b883e5a,
	0xc3055d20,
	0x2ff78d9b,
	0xd9f704be,
	0x7df1ce51,
	0x54325131,
	0xa571f6b0,
	0x62b33777,
	0x49cd25ed,
	0xc6f46339,
	0xc38c83b8,
	0x5a6368f5,
	0xc8c7229e,
	0x1205e506,
	0x20dda19c,
	0xdeef92c3,
	0x3c3ff9fd,
	0x5c3c7387,
	0xeae3dfd6,
	0x2044bbfb,
	0xc5b6f236,
	0x9dfe9f99,
	0x6f21f22a,
	0x84dd786f,
	0x15ba50a6,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_unregister\0"
	"regmap_read\0"
	"_printk\0"
	"i2c_find_device_by_fwnode\0"
	"_dev_err\0"
	"regmap_write\0"
	"usleep_range_state\0"
	"i2c_register_driver\0"
	"tcpc_dev_get_by_name\0"
	"__devm_regmap_init_i2c\0"
	"pinctrl_select_state\0"
	"__mutex_init\0"
	"sysfs_create_group\0"
	"alloc_workqueue\0"
	"init_timer_key\0"
	"mod_timer\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"devm_pinctrl_put\0"
	"sprintf\0"
	"kstrtoull\0"
	"__const_udelay\0"
	"accdet_eint_callback_wrapper\0"
	"queue_work_on\0"
	"tcpm_inquire_typec_attach_state\0"
	"register_tcp_dev_notifier\0"
	"i2c_del_driver\0"
	"jiffies\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class,mt6368-accdet");


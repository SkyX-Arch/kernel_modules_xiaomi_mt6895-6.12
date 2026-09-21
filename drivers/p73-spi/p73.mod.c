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
	{ 0x68386af8, "__spi_register_driver" },
	{ 0x84927420, "spi_setup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x25758a2c, "misc_register" },
	{ 0x037a0cba, "kfree" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x56f996ba, "spi_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb077f079, "nfc_ese_pwr" },
	{ 0x234c9de3, "put_device" },
	{ 0x768006df, "bus_find_device" },
	{ 0x8a4ceb38, "device_match_name" },
	{ 0xd49281ca, "mt_spi_enable_master_clk" },
	{ 0x6b8d76eb, "mt_spi_disable_master_clk" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0x3dcf9f06, "spi_bus_type" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x91e3b46a, "i2c_bus_type" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x68386af8,
	0x84927420,
	0xd9a5ea54,
	0xa571f6b0,
	0xaf7cb74b,
	0x25758a2c,
	0x037a0cba,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0xe17134b6,
	0xd5977bfb,
	0xed55cabd,
	0x75ca79b5,
	0x56f996ba,
	0xb43f9365,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0xf9a482f9,
	0xb077f079,
	0x234c9de3,
	0x768006df,
	0x8a4ceb38,
	0xd49281ca,
	0x6b8d76eb,
	0xc3246938,
	0x56e19f9a,
	0x3dcf9f06,
	0x0f05f001,
	0xefe8a82e,
	0x91e3b46a,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__spi_register_driver\0"
	"spi_setup\0"
	"__init_waitqueue_head\0"
	"__mutex_init\0"
	"of_property_read_string\0"
	"misc_register\0"
	"kfree\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"__kmalloc_cache_noprof\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__fortify_panic\0"
	"spi_sync\0"
	"ktime_get\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"msleep\0"
	"nfc_ese_pwr\0"
	"put_device\0"
	"bus_find_device\0"
	"device_match_name\0"
	"mt_spi_enable_master_clk\0"
	"mt_spi_disable_master_clk\0"
	"misc_deregister\0"
	"driver_unregister\0"
	"spi_bus_type\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"i2c_bus_type\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nxp_i2c,spi-mt65xx");

MODULE_ALIAS("spi:p61");

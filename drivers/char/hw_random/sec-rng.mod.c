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
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x50f85302, "__arm_smccc_hvc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xf9180570, "devm_hwrng_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xb4028d67, "proc_create" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x96848186,
	0x9c81ceff,
	0xf93aae46,
	0x50f85302,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0x12db679a,
	0xaf7cb74b,
	0xf9180570,
	0xb4ce05a5,
	0xb4028d67,
	0xc8c7229e,
	0xb7d99956,
	0x6fc35f2b,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"__arm_smccc_smc\0"
	"__arm_smccc_hvc\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__platform_driver_register\0"
	"of_property_read_string\0"
	"devm_hwrng_register\0"
	"_dev_err\0"
	"proc_create\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u16_array\0"
	"platform_driver_unregister\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carm,sec-rng");
MODULE_ALIAS("of:N*T*Carm,sec-rngC*");

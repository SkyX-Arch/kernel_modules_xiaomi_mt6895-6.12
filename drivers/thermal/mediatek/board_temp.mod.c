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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf79a0cc2, "devm_thermal_of_zone_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x401167cc, "_dev_info" },
	{ 0x0c685cad, "iio_read_channel_raw" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0xb4ce05a5,
	0xed856724,
	0x14fe5355,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf79a0cc2,
	0xc8c7229e,
	0xa079425d,
	0xe136f93c,
	0x401167cc,
	0x0c685cad,
	0xf5edea2e,
	0xeae3dfd6,
	0x6b722180,
	0x0c1a5ee3,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_err\0"
	"devm_iio_channel_get\0"
	"of_device_get_match_data\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"devm_thermal_of_zone_register\0"
	"devm_kmalloc\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"_dev_info\0"
	"iio_read_channel_raw\0"
	"___ratelimit\0"
	"__const_udelay\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6685-tia-ntc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6685-tia-ntcC*");
MODULE_ALIAS("of:N*T*Cmediatek,thermal-auxadc-sensor");
MODULE_ALIAS("of:N*T*Cmediatek,thermal-auxadc-sensorC*");

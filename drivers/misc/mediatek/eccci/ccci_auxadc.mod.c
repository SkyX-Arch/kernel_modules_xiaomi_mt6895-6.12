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

KSYMTAB_FUNC(ccci_get_adc_num, "", "");
KSYMTAB_FUNC(ccci_get_adc_val, "", "");
KSYMTAB_FUNC(ccci_get_adc_mV, "", "");

SYMBOL_CRC(ccci_get_adc_num, 0x37dd5de9, "");
SYMBOL_CRC(ccci_get_adc_val, 0x1749211d, "");
SYMBOL_CRC(ccci_get_adc_mV, 0xa7eee324, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x3160c98f, "iio_channel_get" },
	{ 0x0c685cad, "iio_read_channel_raw" },
	{ 0x1bbc0b55, "iio_channel_release" },
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xba637490,
	0x92997ed8,
	0x3160c98f,
	0x0c685cad,
	0x1bbc0b55,
	0xd45c86ea,
	0x12db679a,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ccci_dump_write\0"
	"_printk\0"
	"iio_channel_get\0"
	"iio_read_channel_raw\0"
	"iio_channel_release\0"
	"iio_read_channel_processed\0"
	"__platform_driver_register\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib");


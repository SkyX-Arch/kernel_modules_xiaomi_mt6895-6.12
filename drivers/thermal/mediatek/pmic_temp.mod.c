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
	{ 0xd45c86ea, "iio_read_channel_processed" },
	{ 0x92997ed8, "_printk" },
	{ 0x401167cc, "_dev_info" },
	{ 0x2dbbd3bd, "devm_nvmem_cell_get" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x037a0cba, "kfree" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0x64311477, "regmap_read" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x3f9fdc27, "devm_nvmem_device_get" },
	{ 0x96a91aed, "nvmem_device_read" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xed856724, "devm_iio_channel_get" },
	{ 0xf79a0cc2, "devm_thermal_of_zone_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd45c86ea,
	0x92997ed8,
	0x401167cc,
	0x2dbbd3bd,
	0x99f018c4,
	0x85540ebc,
	0x037a0cba,
	0xa823db6e,
	0x49dc0e6c,
	0x64311477,
	0x1fec5304,
	0x3f9fdc27,
	0x96a91aed,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0x12db679a,
	0x14fe5355,
	0xc8c7229e,
	0xed856724,
	0xf79a0cc2,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"iio_read_channel_processed\0"
	"_printk\0"
	"_dev_info\0"
	"devm_nvmem_cell_get\0"
	"nvmem_cell_read\0"
	"nvmem_cell_put\0"
	"kfree\0"
	"of_find_device_by_node\0"
	"dev_get_regmap\0"
	"regmap_read\0"
	"__of_parse_phandle_with_args\0"
	"devm_nvmem_device_get\0"
	"nvmem_device_read\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"devm_kmalloc\0"
	"devm_iio_channel_get\0"
	"devm_thermal_of_zone_register\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6359-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6363-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6368-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6369-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6369-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6373-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6338-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6338-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-5-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-5-pmic-tempC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-6-pmic-temp");
MODULE_ALIAS("of:N*T*Cmediatek,mt6661-6-pmic-tempC*");

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
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x64311477, "regmap_read" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x1128ec8c, "devm_nvmem_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x92997ed8, "_printk" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1ed4c5e6, "of_find_node_by_name" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x401167cc, "_dev_info" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x49dc0e6c,
	0xb4ce05a5,
	0x14fe5355,
	0x64311477,
	0xa571f6b0,
	0x1128ec8c,
	0xe922b94d,
	0xa4f72277,
	0x92997ed8,
	0xc8c7229e,
	0xd5977bfb,
	0x4dd57aba,
	0x6b883e5a,
	0xeae3dfd6,
	0x33a52b38,
	0xed55cabd,
	0xb43f9365,
	0xc3055d20,
	0x656e4a6e,
	0x98cf60b3,
	0x1ed4c5e6,
	0xaf7cb74b,
	0xe2d5255a,
	0x401167cc,
	0x7c7f271f,
	0xa079425d,
	0xb7d99956,
	0xe136f93c,
	0x6fc35f2b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"dev_get_regmap\0"
	"_dev_err\0"
	"of_device_get_match_data\0"
	"regmap_read\0"
	"__mutex_init\0"
	"devm_nvmem_register\0"
	"device_create_file\0"
	"_dev_notice\0"
	"_printk\0"
	"devm_kmalloc\0"
	"mutex_lock\0"
	"regmap_bulk_write\0"
	"regmap_write\0"
	"__const_udelay\0"
	"regmap_bulk_read\0"
	"mutex_unlock\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"snprintf\0"
	"strlen\0"
	"of_find_node_by_name\0"
	"of_property_read_string\0"
	"strcmp\0"
	"_dev_info\0"
	"of_get_next_child\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u16_array\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


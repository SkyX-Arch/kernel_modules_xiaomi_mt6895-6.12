#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x91cfc2b7, "devm_mbox_controller_register" },
	{ 0x401167cc, "_dev_info" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4d442701, "mbox_chan_received_data" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xa4f72277,
	0xc1cad332,
	0xb4ce05a5,
	0xee73d233,
	0xf7ca28dd,
	0x14fe5355,
	0x91cfc2b7,
	0x401167cc,
	0xc8c7229e,
	0x1fec5304,
	0xe136f93c,
	0xc905402b,
	0xfa4d3c24,
	0x92d5838e,
	0x4d442701,
	0x6b722180,
	0x0c1a5ee3,
	0xf93aae46,
	0xc1514a3b,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"_dev_notice\0"
	"of_address_to_resource\0"
	"_dev_err\0"
	"devm_ioremap\0"
	"platform_get_irq\0"
	"of_device_get_match_data\0"
	"devm_mbox_controller_register\0"
	"_dev_info\0"
	"devm_kmalloc\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"request_threaded_irq\0"
	"mbox_chan_received_data\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__arm_smccc_smc\0"
	"free_irq\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


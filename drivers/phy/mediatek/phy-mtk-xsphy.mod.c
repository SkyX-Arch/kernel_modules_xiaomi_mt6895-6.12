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
	{ 0x401167cc, "_dev_info" },
	{ 0xb088bcfc, "of_count_phandle_with_args" },
	{ 0x8790a642, "devm_of_phy_get_by_index" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0x56e33ef5, "devm_phy_create" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x4094ffc4, "__devm_of_phy_provider_register" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0xfe84e5f9, "device_property_present" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x44033864, "proc_remove" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x173e2075, "seq_write" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe0eec6c6, "of_find_node_with_property" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x5b732ff1, "device_node_to_regmap" },
	{ 0x6b201699, "of_find_property" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf4b6fbcb, "syscon_node_to_regmap" },
	{ 0x64311477, "regmap_read" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcb69cd57, "phy_init" },
	{ 0x91df1baa, "phy_exit" },
	{ 0x6871ad9c, "phy_power_on" },
	{ 0x2077fc84, "of_device_is_compatible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x69e67f21, "phy_power_off" },
	{ 0x8e4cd884, "phy_set_mode_ext" },
	{ 0xdba614e4, "device_property_read_string" },
	{ 0x502a8c68, "of_property_match_string" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xac5fe464, "nvmem_cell_read_u32" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x401167cc,
	0xb088bcfc,
	0x8790a642,
	0x3d0ffa5c,
	0xe2d5255a,
	0x9f0ef8fa,
	0xb4ce05a5,
	0x49cd25ed,
	0x7c7f271f,
	0x56e33ef5,
	0xc1cad332,
	0xee73d233,
	0xea23ff02,
	0x4094ffc4,
	0xc8c7229e,
	0xc40993fe,
	0xfe84e5f9,
	0x3b1b6444,
	0xb318cbab,
	0xd5977bfb,
	0x7518b5f0,
	0xed55cabd,
	0xa2fa95a0,
	0x44033864,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x6b722180,
	0x0c1a5ee3,
	0x3b6c41ea,
	0x88db9f48,
	0x2be0c009,
	0xc905402b,
	0xfa4d3c24,
	0x8c8569cb,
	0xeae3dfd6,
	0x173e2075,
	0x1e6d26a8,
	0xe0eec6c6,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x5b732ff1,
	0x6b201699,
	0x1fec5304,
	0x576b05bf,
	0xb6e6d99d,
	0xf4b6fbcb,
	0x64311477,
	0x6b883e5a,
	0xc5b6f236,
	0xcb69cd57,
	0x91df1baa,
	0x6871ad9c,
	0x2077fc84,
	0xb43f9365,
	0xc3055d20,
	0x69e67f21,
	0x8e4cd884,
	0xdba614e4,
	0x502a8c68,
	0x31b65f04,
	0xac5fe464,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_dev_info\0"
	"of_count_phandle_with_args\0"
	"devm_of_phy_get_by_index\0"
	"platform_get_resource\0"
	"strcmp\0"
	"devm_ioremap_resource\0"
	"_dev_err\0"
	"alloc_workqueue\0"
	"of_get_next_child\0"
	"devm_phy_create\0"
	"of_address_to_resource\0"
	"devm_ioremap\0"
	"devm_clk_get\0"
	"__devm_of_phy_provider_register\0"
	"devm_kmalloc\0"
	"device_property_read_u32_array\0"
	"device_property_present\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"mutex_lock\0"
	"proc_mkdir\0"
	"mutex_unlock\0"
	"proc_create_data\0"
	"proc_remove\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"kstrtouint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"kstrtoint\0"
	"__const_udelay\0"
	"seq_write\0"
	"strstr\0"
	"of_find_node_with_property\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"device_node_to_regmap\0"
	"of_find_property\0"
	"__of_parse_phandle_with_args\0"
	"regmap_update_bits_base\0"
	"clk_disable\0"
	"syscon_node_to_regmap\0"
	"regmap_read\0"
	"regmap_write\0"
	"queue_work_on\0"
	"phy_init\0"
	"phy_exit\0"
	"phy_power_on\0"
	"of_device_is_compatible\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"phy_power_off\0"
	"phy_set_mode_ext\0"
	"device_property_read_string\0"
	"of_property_match_string\0"
	"of_property_read_u32_index\0"
	"nvmem_cell_read_u32\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,xsphy");
MODULE_ALIAS("of:N*T*Cmediatek,xsphyC*");

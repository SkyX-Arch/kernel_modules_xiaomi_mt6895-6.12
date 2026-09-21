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

KSYMTAB_FUNC(clkbuf_srclken_ctrl, "", "");
KSYMTAB_FUNC(clkbuf_xo_ctrl, "", "");

SYMBOL_CRC(clkbuf_srclken_ctrl, 0xbc4c52cd, "");
SYMBOL_CRC(clkbuf_xo_ctrl, 0x090db799, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x34675dcc, "of_match_node" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64311477, "regmap_read" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xf7370f56, "system_state" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xaba63322, "of_iomap" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xc460ce0f, "spmi_dump_pmif_record_reg" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0x62b33777, "sysfs_create_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe2d5255a,
	0x92997ed8,
	0x1b2fa1a9,
	0x999e8297,
	0x12db679a,
	0x34675dcc,
	0x52c5c991,
	0x6fc35f2b,
	0x0f05f001,
	0x7c7f271f,
	0xaf7cb74b,
	0x1fec5304,
	0x656e4a6e,
	0x64311477,
	0x34db050b,
	0x576b05bf,
	0xd35cce70,
	0xd5977bfb,
	0xed55cabd,
	0xeae3dfd6,
	0xa823db6e,
	0x3b1b6444,
	0x31b65f04,
	0xe136f93c,
	0x49dc0e6c,
	0xf7370f56,
	0xb1c3a01a,
	0xaba63322,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xc460ce0f,
	0xa079425d,
	0xcd6bda8d,
	0x62b33777,
	0xbcab6ee6,
	0xce8498d7,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"strcmp\0"
	"_printk\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"__platform_driver_register\0"
	"of_match_node\0"
	"__kmalloc_noprof\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"of_get_next_child\0"
	"of_property_read_string\0"
	"__of_parse_phandle_with_args\0"
	"snprintf\0"
	"regmap_read\0"
	"_raw_spin_lock_irqsave\0"
	"regmap_update_bits_base\0"
	"_raw_spin_unlock_irqrestore\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__const_udelay\0"
	"of_find_device_by_node\0"
	"of_get_property\0"
	"of_property_read_u32_index\0"
	"of_property_read_variable_u32_array\0"
	"dev_get_regmap\0"
	"system_state\0"
	"oops_in_progress\0"
	"of_iomap\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"spmi_dump_pmif_record_reg\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_string_helper\0"
	"sysfs_create_group\0"
	"sscanf\0"
	"kernel_kobj\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "spmi-mtk-pmif");


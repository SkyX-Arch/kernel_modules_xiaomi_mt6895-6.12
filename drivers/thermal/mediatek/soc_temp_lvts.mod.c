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
	{ 0xdc035859, "mfg0_pwr_sta" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x401167cc, "_dev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xdb148a08, "get_apu_temp" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x1051d96a, "__devm_reset_control_get" },
	{ 0x979b55bb, "nvmem_cell_get" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x037a0cba, "kfree" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x7867985a, "set_cold_interrupt_enable_addr" },
	{ 0xf79a0cc2, "devm_thermal_of_zone_register" },
	{ 0x8cf38456, "set_reboot_temperature" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0fd08486, "thermal_csram_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xdc035859,
	0xd5977bfb,
	0xed55cabd,
	0x401167cc,
	0xeae3dfd6,
	0x6b722180,
	0x0c1a5ee3,
	0x656e4a6e,
	0xc905402b,
	0xfa4d3c24,
	0xb4ce05a5,
	0xb43f9365,
	0xc3055d20,
	0xc8c7229e,
	0x92997ed8,
	0xdb148a08,
	0x12db679a,
	0x14fe5355,
	0xa571f6b0,
	0xe136f93c,
	0xea23ff02,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0xf7ca28dd,
	0x1051d96a,
	0x979b55bb,
	0x99f018c4,
	0x85540ebc,
	0x037a0cba,
	0x3b1b6444,
	0xb318cbab,
	0xf9583f23,
	0x7867985a,
	0xf79a0cc2,
	0x8cf38456,
	0xf93aae46,
	0x6fc35f2b,
	0x0fd08486,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mfg0_pwr_sta\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"_dev_info\0"
	"__const_udelay\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"snprintf\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"_dev_err\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"devm_kmalloc\0"
	"_printk\0"
	"get_apu_temp\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"__mutex_init\0"
	"of_property_read_variable_u32_array\0"
	"devm_clk_get\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"platform_get_irq\0"
	"__devm_reset_control_get\0"
	"nvmem_cell_get\0"
	"nvmem_cell_read\0"
	"nvmem_cell_put\0"
	"kfree\0"
	"of_get_property\0"
	"of_find_node_opts_by_path\0"
	"devm_request_threaded_irq\0"
	"set_cold_interrupt_enable_addr\0"
	"devm_thermal_of_zone_register\0"
	"set_reboot_temperature\0"
	"__arm_smccc_smc\0"
	"platform_driver_unregister\0"
	"thermal_csram_base\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpueb,thermal_interface");

MODULE_ALIAS("of:N*T*Cmediatek,mt6873-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6873-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6893-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6983-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6879-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6895-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6855-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-lvtsC*");

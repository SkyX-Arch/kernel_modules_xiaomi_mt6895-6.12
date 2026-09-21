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

KSYMTAB_FUNC(ktf_mtk_kpd_test, "", "");

SYMBOL_CRC(ktf_mtk_kpd_test, 0xdaef981e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a921311, "strncmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x0ea3c74e, "tasklet_kill" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x5f010919, "input_unregister_device" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xee73d233, "devm_ioremap" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x9c9b99d4, "devm_input_allocate_device" },
	{ 0x6ab78205, "input_register_device" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xbede130a, "pm_wakeup_ws_event" },
	{ 0xcc898074, "input_event" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5a921311,
	0x92997ed8,
	0x12db679a,
	0x0ea3c74e,
	0x0288226a,
	0x5f010919,
	0xb6e6d99d,
	0xb077e70a,
	0x6fc35f2b,
	0xea23ff02,
	0x3d0ffa5c,
	0xee73d233,
	0x7c611278,
	0x9c9b99d4,
	0x6ab78205,
	0x0f314d3e,
	0x2364c85a,
	0xc8c7229e,
	0x7c9a7371,
	0x815588a6,
	0xe136f93c,
	0xfcec0987,
	0x6b722180,
	0x0c1a5ee3,
	0xbede130a,
	0xcc898074,
	0xc905402b,
	0xfa4d3c24,
	0x92d5838e,
	0xce2840e7,
	0x27bbf221,
	0x9d2ab8ac,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"strncmp\0"
	"_printk\0"
	"__platform_driver_register\0"
	"tasklet_kill\0"
	"wakeup_source_unregister\0"
	"input_unregister_device\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"platform_driver_unregister\0"
	"devm_clk_get\0"
	"platform_get_resource\0"
	"devm_ioremap\0"
	"irq_of_parse_and_map\0"
	"devm_input_allocate_device\0"
	"input_register_device\0"
	"wakeup_source_register\0"
	"tasklet_init\0"
	"devm_kmalloc\0"
	"clk_prepare\0"
	"clk_enable\0"
	"of_property_read_variable_u32_array\0"
	"enable_irq\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"pm_wakeup_ws_event\0"
	"input_event\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"request_threaded_irq\0"
	"irq_set_irq_wake\0"
	"disable_irq_nosync\0"
	"__tasklet_schedule\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


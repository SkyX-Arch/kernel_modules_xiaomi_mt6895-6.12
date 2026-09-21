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

KSYMTAB_FUNC(swpm_arm_pmu_get_idx, "", "");
KSYMTAB_FUNC(swpm_arm_dsu_pmu_get_status, "", "");
KSYMTAB_FUNC(swpm_arm_pmu_get_status, "", "");
KSYMTAB_FUNC(swpm_arm_dsu_pmu_get_type, "", "");
KSYMTAB_FUNC(swpm_arm_dsu_pmu_set_type, "", "");
KSYMTAB_FUNC(swpm_arm_dsu_pmu_enable, "", "");
KSYMTAB_FUNC(swpm_arm_ai_pmu_get, "", "");
KSYMTAB_FUNC(swpm_arm_ai_pmu_set, "", "");
KSYMTAB_FUNC(swpm_arm_pmu_enable_all, "", "");
KSYMTAB_FUNC(swpm_pmu_get_count, "", "");

SYMBOL_CRC(swpm_arm_pmu_get_idx, 0x6262c539, "");
SYMBOL_CRC(swpm_arm_dsu_pmu_get_status, 0xd7104bff, "");
SYMBOL_CRC(swpm_arm_pmu_get_status, 0x5385ff08, "");
SYMBOL_CRC(swpm_arm_dsu_pmu_get_type, 0xbc350fd1, "");
SYMBOL_CRC(swpm_arm_dsu_pmu_set_type, 0x0e501568, "");
SYMBOL_CRC(swpm_arm_dsu_pmu_enable, 0xc9c97632, "");
SYMBOL_CRC(swpm_arm_ai_pmu_get, 0x4aa4e33a, "");
SYMBOL_CRC(swpm_arm_ai_pmu_set, 0x5e22e91d, "");
SYMBOL_CRC(swpm_arm_pmu_enable_all, 0xc5933b1d, "");
SYMBOL_CRC(swpm_pmu_get_count, 0x66e58504, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x173a86aa, "perf_event_read_local" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x0c78be04, "perf_event_create_kernel_counter" },
	{ 0x27d28863, "perf_event_release_kernel" },
	{ 0xfa9b0394, "perf_event_enable" },
	{ 0x5e4dd101, "perf_event_disable" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x173a86aa,
	0xf3cdc3c6,
	0x92997ed8,
	0x31b65f04,
	0x0c78be04,
	0x27d28863,
	0xfa9b0394,
	0x5e4dd101,
	0x9f46ced8,
	0x280f9f14,
	0xde7ece30,
	0xac594e02,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"perf_event_read_local\0"
	"of_find_compatible_node\0"
	"_printk\0"
	"of_property_read_u32_index\0"
	"perf_event_create_kernel_counter\0"
	"perf_event_release_kernel\0"
	"perf_event_enable\0"
	"perf_event_disable\0"
	"__sw_hweight64\0"
	"__per_cpu_offset\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


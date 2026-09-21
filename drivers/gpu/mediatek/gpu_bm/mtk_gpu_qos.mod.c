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

KSYMTAB_FUNC(MTKGPUQoS_mode, "", "");
KSYMTAB_FUNC(MTKGPUQoS_mode_ratio, "", "");
KSYMTAB_FUNC(MTKGPUQoS_setup, "", "");
KSYMTAB_FUNC(MTKGPUQoS_is_inited, "", "");
KSYMTAB_FUNC(MTKGPUQoS_getBW, "", "");

SYMBOL_CRC(MTKGPUQoS_mode, 0x50d37958, "");
SYMBOL_CRC(MTKGPUQoS_mode_ratio, 0x38da0bff, "");
SYMBOL_CRC(MTKGPUQoS_setup, 0x2cdce23b, "");
SYMBOL_CRC(MTKGPUQoS_is_inited, 0xea4a9bf5, "");
SYMBOL_CRC(MTKGPUQoS_getBW, 0xf1994f73, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5bc52a09, "mtk_get_gpu_loading" },
	{ 0xcff40235, "gpufreq_get_cur_out_freq" },
	{ 0xc2fa1ae0, "gpufreq_get_cur_oppidx" },
	{ 0x484164d5, "gpufreq_get_opp_num" },
	{ 0x686d006d, "gpufreq_get_freq_by_idx" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xd197876c, "mtk_register_gpu_power_change" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x6b201699, "of_find_property" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x173e2075, "seq_write" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe9d29479, "qos_ipi_to_sspm_scmi_command" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5bc52a09,
	0xcff40235,
	0xc2fa1ae0,
	0x484164d5,
	0x686d006d,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0xd197876c,
	0xf3cdc3c6,
	0x6b201699,
	0xe136f93c,
	0x7518b5f0,
	0xb4028d67,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x6b722180,
	0x0c1a5ee3,
	0x173e2075,
	0x8c8569cb,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x42ad47ad,
	0xffeedf6a,
	0xe9d29479,
	0x2d3385d3,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_get_gpu_loading\0"
	"gpufreq_get_cur_out_freq\0"
	"gpufreq_get_cur_oppidx\0"
	"gpufreq_get_opp_num\0"
	"gpufreq_get_freq_by_idx\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"mtk_register_gpu_power_change\0"
	"of_find_compatible_node\0"
	"of_find_property\0"
	"of_property_read_variable_u32_array\0"
	"proc_mkdir\0"
	"proc_create\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"seq_write\0"
	"kstrtoint\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"queue_delayed_work_on\0"
	"delayed_work_timer_fn\0"
	"qos_ipi_to_sspm_scmi_command\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_gpu_hal,mtk_gpufreq_wrapper,mtk_qos");


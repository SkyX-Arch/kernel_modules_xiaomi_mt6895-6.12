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
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x9260aa26, "slbc_force_scmi_cmd" },
	{ 0xfb11847e, "slbc_mic_num_cmd" },
	{ 0x9590133e, "slbc_inner_cmd" },
	{ 0xc09f4741, "slbc_outer_cmd" },
	{ 0x3e62a3d6, "platform_device_register" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x999e94b4, "_slbc_request_buffer_scmi" },
	{ 0x7446d301, "_slbc_request_cache_scmi" },
	{ 0x02616a13, "_slbc_release_buffer_scmi" },
	{ 0xef7ac4c1, "_slbc_release_cache_scmi" },
	{ 0x00148653, "vsnprintf" },
	{ 0x6bcaac61, "cpuidle_get_driver" },
	{ 0xd35e4e5d, "slbc_scmi_init" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd715f65c, "devm_memremap" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x13d9ca50, "slbc_register_ipi_ops" },
	{ 0xa95a6299, "slbc_register_common_ops" },
	{ 0x28c1e22f, "slbc_sspm_enable" },
	{ 0xa5c24729, "slbc_get_sspm_ver" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x3f72e5f3, "single_release" },
	{ 0x8b9c34da, "single_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x23bb5eb8, "slbc_sspm_slb_disable" },
	{ 0xcce9e859, "slbc_sspm_slc_disable" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0x1048e7d6, "slbc_unregister_ipi_ops" },
	{ 0x74e100c0, "slbc_unregister_common_ops" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xf19f838d, "slbc_suspend_resume_notify" },
	{ 0xeb2fed86, "slbc_enable" },
	{ 0x225cf4e6, "slbc_uid_str" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd5977bfb,
	0xed55cabd,
	0x92997ed8,
	0x9260aa26,
	0xfb11847e,
	0x9590133e,
	0xc09f4741,
	0x3e62a3d6,
	0x12db679a,
	0x6b722180,
	0x0c1a5ee3,
	0xc905402b,
	0xfa4d3c24,
	0xb43f9365,
	0x999e94b4,
	0x7446d301,
	0x02616a13,
	0xef7ac4c1,
	0x00148653,
	0x6bcaac61,
	0xd35e4e5d,
	0xf3cdc3c6,
	0xaf7cb74b,
	0xe2d5255a,
	0xd715f65c,
	0xa4f72277,
	0x0f314d3e,
	0x52384e38,
	0x13d9ca50,
	0xa95a6299,
	0x28c1e22f,
	0xa5c24729,
	0xc8c7229e,
	0xe136f93c,
	0x7518b5f0,
	0xa2fa95a0,
	0x69cfdbb0,
	0xe7ce721f,
	0x3f72e5f3,
	0x8b9c34da,
	0xc8f2ae9d,
	0x3da016df,
	0x173e2075,
	0xccf69887,
	0xbcab6ee6,
	0x23bb5eb8,
	0xcce9e859,
	0x167c5967,
	0x4302d0eb,
	0x88db9f48,
	0x2be0c009,
	0xa0eae826,
	0x1048e7d6,
	0x74e100c0,
	0x5a6368f5,
	0xf19f838d,
	0xeb2fed86,
	0x225cf4e6,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mutex_lock\0"
	"mutex_unlock\0"
	"_printk\0"
	"slbc_force_scmi_cmd\0"
	"slbc_mic_num_cmd\0"
	"slbc_inner_cmd\0"
	"slbc_outer_cmd\0"
	"platform_device_register\0"
	"__platform_driver_register\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"ktime_get\0"
	"_slbc_request_buffer_scmi\0"
	"_slbc_request_cache_scmi\0"
	"_slbc_release_buffer_scmi\0"
	"_slbc_release_cache_scmi\0"
	"vsnprintf\0"
	"cpuidle_get_driver\0"
	"slbc_scmi_init\0"
	"of_find_compatible_node\0"
	"of_property_read_string\0"
	"strcmp\0"
	"devm_memremap\0"
	"_dev_notice\0"
	"wakeup_source_register\0"
	"cpu_latency_qos_add_request\0"
	"slbc_register_ipi_ops\0"
	"slbc_register_common_ops\0"
	"slbc_sspm_enable\0"
	"slbc_get_sspm_ver\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"proc_mkdir\0"
	"proc_create_data\0"
	"seq_read\0"
	"seq_lseek\0"
	"single_release\0"
	"single_open\0"
	"seq_printf\0"
	"seq_putc\0"
	"seq_write\0"
	"get_free_pages_noprof\0"
	"sscanf\0"
	"slbc_sspm_slb_disable\0"
	"slbc_sspm_slc_disable\0"
	"print_hex_dump\0"
	"free_pages\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"smp_call_function\0"
	"slbc_unregister_ipi_ops\0"
	"slbc_unregister_common_ops\0"
	"devm_kfree\0"
	"slbc_suspend_resume_notify\0"
	"slbc_enable\0"
	"slbc_uid_str\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "slbc_ipi,mtk_slbc");


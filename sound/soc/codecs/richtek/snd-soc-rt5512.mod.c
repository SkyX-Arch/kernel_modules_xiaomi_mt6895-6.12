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

KSYMTAB_FUNC(rt5512_i2c_probe, "", "");
KSYMTAB_FUNC(rt5512_i2c_remove, "", "");

SYMBOL_CRC(rt5512_i2c_probe, 0xe60295af, "");
SYMBOL_CRC(rt5512_i2c_remove, 0x59400d04, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x401167cc, "_dev_info" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x7df1ce51, "__devm_regmap_init_i2c" },
	{ 0x5c6a5e82, "devm_kasprintf" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x53bb1cae, "mtk_spk_set_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x0e4e1ee2, "i2c_smbus_write_i2c_block_data" },
	{ 0x4a364ecc, "i2c_smbus_read_i2c_block_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfeba6173, "debugfs_lookup" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x148e265b, "debugfs_create_u16" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xb7c7d237, "debugfs_remove" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xe7ce721f, "seq_lseek" },
	{ 0x69cfdbb0, "seq_read" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8b9c34da, "single_open" },
	{ 0xdb15f288, "simple_open" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x3da016df, "seq_putc" },
	{ 0x173e2075, "seq_write" },
	{ 0x3f72e5f3, "single_release" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0x79a8bd40, "devm_snd_soc_register_component" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0x2ce2b5e3, "snd_ctl_boolean_mono_info" },
	{ 0x664e41de, "snd_soc_get_volsw" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x6c0a0d8d, "snd_soc_put_volsw" },
	{ 0xe41bbfbc, "snd_soc_component_read" },
	{ 0x78202da6, "snd_soc_component_update_bits" },
	{ 0x182e3cfb, "snd_soc_info_enum_double" },
	{ 0xfb508160, "snd_soc_dapm_get_enum_double" },
	{ 0x5b3abae3, "snd_soc_dapm_put_enum_double" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0xcec49a87, "cancel_delayed_work_sync" },
	{ 0x64311477, "regmap_read" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0xc5674f36, "snd_soc_component_init_regmap" },
	{ 0x5637e816, "richtek_spm_classdev_register" },
	{ 0x0e2b7ac5, "snd_soc_component_write" },
	{ 0x5dcf720e, "richtek_spm_classdev_unregister" },
	{ 0xcd6d4524, "snd_soc_component_exit_regmap" },
	{ 0x99bbf698, "snd_soc_dapm_enable_pin" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x33470e95, "snd_soc_dapm_disable_pin" },
	{ 0x9940d82f, "snd_soc_dapm_sync" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0xa571f6b0,
	0xb4ce05a5,
	0x7df1ce51,
	0x5c6a5e82,
	0xd4e81a21,
	0xba860d3c,
	0x52384e38,
	0x53bb1cae,
	0xc6f46339,
	0xffeedf6a,
	0xc8c7229e,
	0x0e4e1ee2,
	0x4a364ecc,
	0xeae3dfd6,
	0xfeba6173,
	0x5cf4d4de,
	0x148e265b,
	0x4e870156,
	0xb7c7d237,
	0x037a0cba,
	0xe17134b6,
	0xe7ce721f,
	0x69cfdbb0,
	0x85df9b6c,
	0x6a6e05bf,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0x8b9c34da,
	0xdb15f288,
	0xc8f2ae9d,
	0x3da016df,
	0x173e2075,
	0x3f72e5f3,
	0xd5977bfb,
	0xed55cabd,
	0x656e4a6e,
	0x9c81ceff,
	0xa916b694,
	0x19b76060,
	0x146a11fc,
	0x79a8bd40,
	0x6e295f94,
	0x2ce2b5e3,
	0x664e41de,
	0x4eb4c414,
	0x13269d10,
	0x6c0a0d8d,
	0xe41bbfbc,
	0x78202da6,
	0x182e3cfb,
	0xfb508160,
	0x5b3abae3,
	0x6c9565df,
	0xcec49a87,
	0x64311477,
	0x42ad47ad,
	0xc5674f36,
	0x5637e816,
	0x0e2b7ac5,
	0x5dcf720e,
	0xcd6d4524,
	0x99bbf698,
	0x68a24153,
	0xe56a9336,
	0x33470e95,
	0x9940d82f,
	0x576b05bf,
	0x5c27c40f,
	0x2ff78d9b,
	0xc3055d20,
	0x84dd786f,
	0x0f05f001,
	0xefe8a82e,
	0x2d3385d3,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"__mutex_init\0"
	"_dev_err\0"
	"__devm_regmap_init_i2c\0"
	"devm_kasprintf\0"
	"pm_runtime_enable\0"
	"dev_set_name\0"
	"cpu_latency_qos_add_request\0"
	"mtk_spk_set_type\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_kmalloc\0"
	"i2c_smbus_write_i2c_block_data\0"
	"i2c_smbus_read_i2c_block_data\0"
	"__const_udelay\0"
	"debugfs_lookup\0"
	"debugfs_create_dir\0"
	"debugfs_create_u16\0"
	"debugfs_create_file\0"
	"debugfs_remove\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"seq_lseek\0"
	"seq_read\0"
	"strsep\0"
	"kstrtou8\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"single_open\0"
	"simple_open\0"
	"seq_printf\0"
	"seq_putc\0"
	"seq_write\0"
	"single_release\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"snprintf\0"
	"simple_read_from_buffer\0"
	"strnlen\0"
	"kstrtouint_from_user\0"
	"__pm_runtime_set_status\0"
	"devm_snd_soc_register_component\0"
	"snd_soc_info_volsw\0"
	"snd_ctl_boolean_mono_info\0"
	"snd_soc_get_volsw\0"
	"__pm_runtime_resume\0"
	"__pm_runtime_idle\0"
	"snd_soc_put_volsw\0"
	"snd_soc_component_read\0"
	"snd_soc_component_update_bits\0"
	"snd_soc_info_enum_double\0"
	"snd_soc_dapm_get_enum_double\0"
	"snd_soc_dapm_put_enum_double\0"
	"cpu_latency_qos_update_request\0"
	"cancel_delayed_work_sync\0"
	"regmap_read\0"
	"queue_delayed_work_on\0"
	"snd_soc_component_init_regmap\0"
	"richtek_spm_classdev_register\0"
	"snd_soc_component_write\0"
	"richtek_spm_classdev_unregister\0"
	"snd_soc_component_exit_regmap\0"
	"snd_soc_dapm_enable_pin\0"
	"snd_pcm_format_physical_width\0"
	"snd_pcm_format_width\0"
	"snd_soc_dapm_disable_pin\0"
	"snd_soc_dapm_sync\0"
	"regmap_update_bits_base\0"
	"__pm_runtime_disable\0"
	"i2c_register_driver\0"
	"usleep_range_state\0"
	"i2c_del_driver\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"system_wq\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-sp-spk-amp,richtek_spm_cls");

MODULE_ALIAS("of:N*T*Crichtek,rt5512");
MODULE_ALIAS("of:N*T*Crichtek,rt5512C*");
MODULE_ALIAS("i2c:rt5512");

MODULE_INFO(srcversion, "75CB192375A5393D5115490");

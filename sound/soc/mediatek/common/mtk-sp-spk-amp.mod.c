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

KSYMTAB_FUNC(mtk_spk_get_type, "", "");
KSYMTAB_FUNC(mtk_spk_set_type, "", "");
KSYMTAB_FUNC(mtk_spk_get_i2s_out_type, "", "");
KSYMTAB_FUNC(mtk_spk_get_i2s_in_type, "", "");
KSYMTAB_FUNC(mtk_ext_spk_get_status, "", "");
KSYMTAB_FUNC(mtk_ext_spk_enable, "", "");
KSYMTAB_FUNC(mtk_spk_update_info, "", "");
KSYMTAB_FUNC(mtk_spk_send_ipi_buf_to_dsp, "", "");
KSYMTAB_FUNC(mtk_spk_recv_ipi_buf_from_dsp, "", "");

SYMBOL_CRC(mtk_spk_get_type, 0x3c4989b8, "");
SYMBOL_CRC(mtk_spk_set_type, 0x53bb1cae, "");
SYMBOL_CRC(mtk_spk_get_i2s_out_type, 0x4bd92e79, "");
SYMBOL_CRC(mtk_spk_get_i2s_in_type, 0xcec4f420, "");
SYMBOL_CRC(mtk_ext_spk_get_status, 0x5fd505c1, "");
SYMBOL_CRC(mtk_ext_spk_enable, 0x97e2444a, "");
SYMBOL_CRC(mtk_spk_update_info, 0xd8f2dc36, "");
SYMBOL_CRC(mtk_spk_send_ipi_buf_to_dsp, 0x1085e486, "");
SYMBOL_CRC(mtk_spk_recv_ipi_buf_from_dsp, 0x2e43b272, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x401167cc, "_dev_info" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2418f7e9, "mtk_get_ipi_buf_scene_adsp" },
	{ 0xd04d732f, "audio_send_ipi_buf_to_dsp" },
	{ 0xa8d0aa80, "audio_recv_ipi_buf_from_dsp" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xeb0ca82f, "i2c_client_get_device_id" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0xb4ce05a5,
	0xe2d5255a,
	0x2418f7e9,
	0xd04d732f,
	0xa8d0aa80,
	0xe136f93c,
	0x2ff78d9b,
	0xeb0ca82f,
	0x84dd786f,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"_dev_err\0"
	"strcmp\0"
	"mtk_get_ipi_buf_scene_adsp\0"
	"audio_send_ipi_buf_to_dsp\0"
	"audio_recv_ipi_buf_from_dsp\0"
	"of_property_read_variable_u32_array\0"
	"i2c_register_driver\0"
	"i2c_client_get_device_id\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "snd-soc-audiodsp-common,audio_ipi");

MODULE_ALIAS("of:N*T*Cmediatek,speaker_amp");
MODULE_ALIAS("of:N*T*Cmediatek,speaker_ampC*");
MODULE_ALIAS("i2c:speaker_amp");

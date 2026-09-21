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
	{ 0x92997ed8, "_printk" },
	{ 0xb66e9d63, "mtk_dcm_get_chipid" },
	{ 0x8d937c9f, "mt_dcm_array_register" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xdb1c636e, "is_dcm_initialized" },
	{ 0xb5052784, "mt_dcm_common_init" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0xb66e9d63,
	0x8d937c9f,
	0xf3cdc3c6,
	0xaba63322,
	0x6b722180,
	0x0c1a5ee3,
	0xf93aae46,
	0xdb1c636e,
	0xb5052784,
	0xc905402b,
	0xfa4d3c24,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mtk_dcm_get_chipid\0"
	"mt_dcm_array_register\0"
	"of_find_compatible_node\0"
	"of_iomap\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__arm_smccc_smc\0"
	"is_dcm_initialized\0"
	"mt_dcm_common_init\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_dcm");


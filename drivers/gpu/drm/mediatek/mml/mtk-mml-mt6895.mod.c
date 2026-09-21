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
	{ 0x9364a812, "mml_topology_register_ip" },
	{ 0x97844d01, "mml_racing_enable" },
	{ 0xa72ad834, "mml_topology_get_cache" },
	{ 0x92997ed8, "_printk" },
	{ 0x8810d83a, "mml_save_log_record" },
	{ 0xf95cc9b1, "cmdq_util_error_save" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3df92418, "mml_dev_get_comp_by_id" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x224d976d, "mml_topology_unregister_ip" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x70ce1254, "mml_dc" },
	{ 0x0360a9c1, "mml_log_rec" },
	{ 0x38e6f699, "mml_cmdq_err" },
	{ 0x7148f48d, "mtk_mml_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x9364a812,
	0x97844d01,
	0xa72ad834,
	0x92997ed8,
	0x8810d83a,
	0xf95cc9b1,
	0x65929cae,
	0xc4f0da12,
	0x3df92418,
	0x656e4a6e,
	0x224d976d,
	0xb2fb935e,
	0x70ce1254,
	0x0360a9c1,
	0x38e6f699,
	0x7148f48d,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mml_topology_register_ip\0"
	"mml_racing_enable\0"
	"mml_topology_get_cache\0"
	"_printk\0"
	"mml_save_log_record\0"
	"cmdq_util_error_save\0"
	"ns_to_timespec64\0"
	"ktime_get_with_offset\0"
	"mml_dev_get_comp_by_id\0"
	"snprintf\0"
	"mml_topology_unregister_ip\0"
	"param_ops_int\0"
	"mml_dc\0"
	"mml_log_rec\0"
	"mml_cmdq_err\0"
	"mtk_mml_msg\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mml,mtk-cmdq-drv-ext");


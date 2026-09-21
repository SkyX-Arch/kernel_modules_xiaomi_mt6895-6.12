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
	{ 0x3b1b6444, "of_get_property" },
	{ 0x1128ec8c, "devm_nvmem_register" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x3b1b6444,
	0x1128ec8c,
	0xb318cbab,
	0xc8c7229e,
	0x12db679a,
	0x6fc35f2b,
	0x4829a47e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"of_get_property\0"
	"devm_nvmem_register\0"
	"of_find_node_opts_by_path\0"
	"devm_kmalloc\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"memcpy\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,devinfo");
MODULE_ALIAS("of:N*T*Cmediatek,devinfoC*");

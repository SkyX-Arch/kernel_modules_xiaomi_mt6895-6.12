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
	{ 0xe7c4419c, "class_for_each_device" },
	{ 0xc4fca1be, "tcpc_class_complete_work" },
	{ 0x99593597, "tcpc_class" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe7c4419c,
	0xc4fca1be,
	0x99593597,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"class_for_each_device\0"
	"tcpc_class_complete_work\0"
	"tcpc_class\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tcpc_class");


MODULE_INFO(srcversion, "2CCC7B1C88E9E771A973461");

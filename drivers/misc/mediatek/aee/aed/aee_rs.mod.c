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
	{ 0x25758a2c, "misc_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2aed337, "aee_get_mode" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0x5a921311, "strncmp" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x25758a2c,
	0x92997ed8,
	0xa2aed337,
	0x6bd0e573,
	0xcf2a6966,
	0x5a921311,
	0xc3246938,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"misc_register\0"
	"_printk\0"
	"aee_get_mode\0"
	"down_interruptible\0"
	"up\0"
	"strncmp\0"
	"misc_deregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed");


#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_i3c_dev_find_i2c_dev_by_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_new_client_device, "_gpl", "");
KSYMTAB_FUNC(i3c_i2c_transfer, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_get_info, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_set_info, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_disec, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_enec, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_entdaa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_defslvs, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_get_free_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_add_i3c_dev, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_do_daa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_do_setdasa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_entasx, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_rstdaa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_setmwl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_setmrl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_enttm, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_setdasa, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_setnewda, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getmwl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getmrl, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getpid, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getbcr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getdcr, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_getmxds, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_gethdrcap, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_device_change_i3c_speed, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_driver_register, "_gpl", "");
KSYMTAB_FUNC(mtk_i3c_i2c_driver_unregister, "_gpl", "");

SYMBOL_CRC(mtk_i3c_dev_find_i2c_dev_by_addr, 0xe5eb05d0, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_new_client_device, 0x1cf9a4ac, "_gpl");
SYMBOL_CRC(i3c_i2c_transfer, 0x0359d43b, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_get_info, 0x86faf565, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_set_info, 0xe4446a11, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_disec, 0xdd51266f, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_enec, 0x96198e28, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_entdaa, 0x69135f7d, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_defslvs, 0x35fd678c, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_get_free_addr, 0x95896731, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_add_i3c_dev, 0x26a620df, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_do_daa, 0xf464d2b6, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_do_setdasa, 0xc3397e14, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_entasx, 0x816d3bd3, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_rstdaa, 0xf7e263aa, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_setmwl, 0xf9e2c3a1, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_setmrl, 0x32db32dd, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_enttm, 0xbd91ae31, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_setdasa, 0x62c9ebc0, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_setnewda, 0xcbf50d43, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getmwl, 0x4ded1c4d, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getmrl, 0xa13c34ac, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getpid, 0xb438111e, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getbcr, 0xf3252d44, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getdcr, 0x699b2fc0, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_getmxds, 0xa2b9e655, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_gethdrcap, 0x614323f9, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_device_change_i3c_speed, 0x0059a591, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_driver_register, 0x60531593, "_gpl");
SYMBOL_CRC(mtk_i3c_i2c_driver_unregister, 0x978dbb5c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51e815df, "i2c_new_client_device" },
	{ 0x343098a1, "i3c_device_do_priv_xfers" },
	{ 0x037a0cba, "kfree" },
	{ 0xe3fa5191, "i2c_transfer" },
	{ 0x3b77a7e6, "i3c_device_get_info" },
	{ 0xbe95427c, "i3c_master_set_info" },
	{ 0x28ed2847, "down_write" },
	{ 0xa3ec33aa, "i3c_master_disec_locked" },
	{ 0x20d81059, "up_write" },
	{ 0xb6f0c2a4, "i3c_master_enec_locked" },
	{ 0xdc821338, "i3c_master_entdaa_locked" },
	{ 0x36fd50c6, "i3c_master_defslvs_locked" },
	{ 0x24715bda, "i3c_master_get_free_addr" },
	{ 0x52a045fb, "i3c_master_add_i3c_dev_locked" },
	{ 0x07a7a11a, "i3c_master_do_daa" },
	{ 0x91afab5c, "i3c_device_do_setdasa" },
	{ 0x98d5988e, "mtk_i3c_master_entasx" },
	{ 0x42101294, "mtk_i3c_master_rstdaa" },
	{ 0x391868f9, "mtk_i3c_master_setmwl" },
	{ 0x3e21bead, "mtk_i3c_master_setmrl" },
	{ 0x0aa4f563, "mtk_i3c_master_enttm" },
	{ 0xd45527ab, "mtk_i3c_master_setdasa" },
	{ 0x95df6d89, "mtk_i3c_master_setnewda" },
	{ 0x6f95c4db, "mtk_i3c_master_getmwl" },
	{ 0x5c3bf423, "mtk_i3c_master_getmrl" },
	{ 0xc51fb831, "mtk_i3c_master_getpid" },
	{ 0xf7ae3eb4, "mtk_i3c_master_getbcr" },
	{ 0x9ce7a49f, "mtk_i3c_master_getdcr" },
	{ 0x559ff4f7, "mtk_i3c_master_getmxds" },
	{ 0xf0d08ed5, "mtk_i3c_master_gethdrcap" },
	{ 0xf3a907ee, "mtk_i3c_master_change_i3c_speed" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xcb327e68, "i3c_driver_register_with_owner" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf2abd399, "i3c_driver_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x656e4a6e,
	0x51e815df,
	0x343098a1,
	0x037a0cba,
	0xe3fa5191,
	0x3b77a7e6,
	0xbe95427c,
	0x28ed2847,
	0xa3ec33aa,
	0x20d81059,
	0xb6f0c2a4,
	0xdc821338,
	0x36fd50c6,
	0x24715bda,
	0x52a045fb,
	0x07a7a11a,
	0x91afab5c,
	0x98d5988e,
	0x42101294,
	0x391868f9,
	0x3e21bead,
	0x0aa4f563,
	0xd45527ab,
	0x95df6d89,
	0x6f95c4db,
	0x5c3bf423,
	0xc51fb831,
	0xf7ae3eb4,
	0x9ce7a49f,
	0x559ff4f7,
	0xf0d08ed5,
	0xf3a907ee,
	0x2ff78d9b,
	0xcb327e68,
	0x84dd786f,
	0xf2abd399,
	0x52c5c991,
	0x0f05f001,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"snprintf\0"
	"i2c_new_client_device\0"
	"i3c_device_do_priv_xfers\0"
	"kfree\0"
	"i2c_transfer\0"
	"i3c_device_get_info\0"
	"i3c_master_set_info\0"
	"down_write\0"
	"i3c_master_disec_locked\0"
	"up_write\0"
	"i3c_master_enec_locked\0"
	"i3c_master_entdaa_locked\0"
	"i3c_master_defslvs_locked\0"
	"i3c_master_get_free_addr\0"
	"i3c_master_add_i3c_dev_locked\0"
	"i3c_master_do_daa\0"
	"i3c_device_do_setdasa\0"
	"mtk_i3c_master_entasx\0"
	"mtk_i3c_master_rstdaa\0"
	"mtk_i3c_master_setmwl\0"
	"mtk_i3c_master_setmrl\0"
	"mtk_i3c_master_enttm\0"
	"mtk_i3c_master_setdasa\0"
	"mtk_i3c_master_setnewda\0"
	"mtk_i3c_master_getmwl\0"
	"mtk_i3c_master_getmrl\0"
	"mtk_i3c_master_getpid\0"
	"mtk_i3c_master_getbcr\0"
	"mtk_i3c_master_getdcr\0"
	"mtk_i3c_master_getmxds\0"
	"mtk_i3c_master_gethdrcap\0"
	"mtk_i3c_master_change_i3c_speed\0"
	"i2c_register_driver\0"
	"i3c_driver_register_with_owner\0"
	"i2c_del_driver\0"
	"i3c_driver_unregister\0"
	"__kmalloc_noprof\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-i3c-master-mt69xx");


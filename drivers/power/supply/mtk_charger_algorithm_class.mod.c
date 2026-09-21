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

KSYMTAB_FUNC(chg_alg_init_algo, "", "");
KSYMTAB_FUNC(chg_alg_is_algo_ready, "", "");
KSYMTAB_FUNC(chg_alg_is_algo_running, "", "");
KSYMTAB_FUNC(chg_alg_start_algo, "", "");
KSYMTAB_FUNC(chg_alg_get_prop, "", "");
KSYMTAB_FUNC(chg_alg_set_prop, "", "");
KSYMTAB_FUNC(chg_alg_plugout_reset, "", "");
KSYMTAB_FUNC(chg_alg_stop_algo, "", "");
KSYMTAB_FUNC(chg_alg_notifier_call, "", "");
KSYMTAB_FUNC(chg_alg_set_current_limit, "", "");
KSYMTAB_FUNC(chg_alg_state_to_str, "", "");
KSYMTAB_FUNC(chg_alg_notify_evt_tostring, "", "");
KSYMTAB_FUNC(register_chg_alg_notifier, "", "");
KSYMTAB_FUNC(unregister_chg_alg_notifier, "", "");
KSYMTAB_FUNC(chg_alg_device_register, "", "");
KSYMTAB_FUNC(chg_alg_device_unregister, "", "");
KSYMTAB_FUNC(get_chg_alg_by_name, "", "");

SYMBOL_CRC(chg_alg_init_algo, 0x66c473de, "");
SYMBOL_CRC(chg_alg_is_algo_ready, 0x5743a373, "");
SYMBOL_CRC(chg_alg_is_algo_running, 0xf1ba7eeb, "");
SYMBOL_CRC(chg_alg_start_algo, 0xb9476403, "");
SYMBOL_CRC(chg_alg_get_prop, 0x35f9aafe, "");
SYMBOL_CRC(chg_alg_set_prop, 0x1b48c7ed, "");
SYMBOL_CRC(chg_alg_plugout_reset, 0x853989b3, "");
SYMBOL_CRC(chg_alg_stop_algo, 0xeaab25e8, "");
SYMBOL_CRC(chg_alg_notifier_call, 0xc322f0d9, "");
SYMBOL_CRC(chg_alg_set_current_limit, 0x96a8276a, "");
SYMBOL_CRC(chg_alg_state_to_str, 0x9f0fef1e, "");
SYMBOL_CRC(chg_alg_notify_evt_tostring, 0xdd541345, "");
SYMBOL_CRC(register_chg_alg_notifier, 0xc92a1fe3, "");
SYMBOL_CRC(unregister_chg_alg_notifier, 0xc65700a9, "");
SYMBOL_CRC(chg_alg_device_register, 0xac304f53, "");
SYMBOL_CRC(chg_alg_device_unregister, 0x5774fe01, "");
SYMBOL_CRC(get_chg_alg_by_name, 0xb3374f88, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5038c782, "srcu_notifier_chain_register" },
	{ 0xa1a0fdd2, "srcu_notifier_chain_unregister" },
	{ 0x852ccf53, "srcu_init_notifier_head" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x037a0cba, "kfree" },
	{ 0x4d8597ff, "device_register" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0xf9874213, "class_find_device" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5038c782,
	0xa1a0fdd2,
	0x852ccf53,
	0xa571f6b0,
	0xfb384d37,
	0xba860d3c,
	0x037a0cba,
	0x4d8597ff,
	0xd5977bfb,
	0xed55cabd,
	0xcc1420a0,
	0xf9874213,
	0xe17134b6,
	0xe2d5255a,
	0x6fe9dcd4,
	0xef27af6b,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"srcu_notifier_chain_register\0"
	"srcu_notifier_chain_unregister\0"
	"srcu_init_notifier_head\0"
	"__mutex_init\0"
	"kasprintf\0"
	"dev_set_name\0"
	"kfree\0"
	"device_register\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"device_unregister\0"
	"class_find_device\0"
	"__kmalloc_cache_noprof\0"
	"strcmp\0"
	"class_create\0"
	"class_destroy\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5707A2D8DA65837187389A6");

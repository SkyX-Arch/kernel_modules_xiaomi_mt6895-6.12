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

KSYMTAB_FUNC(mtk_leds_register_notifier, "_gpl", "");
KSYMTAB_FUNC(mtk_leds_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(mt_leds_call_notifier, "_gpl", "");
KSYMTAB_FUNC(mt_leds_notify_brightness_hw_changed, "_gpl", "");
KSYMTAB_FUNC(mtk_leds_brightness_set, "", "");
KSYMTAB_FUNC(setMaxBrightness, "", "");
KSYMTAB_FUNC(mt_leds_parse_dt, "_gpl", "");
KSYMTAB_FUNC(mt_leds_classdev_register, "_gpl", "");
KSYMTAB_FUNC(mt_leds_classdev_unregister, "_gpl", "");

SYMBOL_CRC(mtk_leds_register_notifier, 0x41e3079d, "_gpl");
SYMBOL_CRC(mtk_leds_unregister_notifier, 0xbd8167f8, "_gpl");
SYMBOL_CRC(mt_leds_call_notifier, 0x0f6d4527, "_gpl");
SYMBOL_CRC(mt_leds_notify_brightness_hw_changed, 0xffe371ca, "_gpl");
SYMBOL_CRC(mtk_leds_brightness_set, 0xb18f62f3, "");
SYMBOL_CRC(setMaxBrightness, 0x7ac81130, "");
SYMBOL_CRC(mt_leds_parse_dt, 0xb4f357ef, "_gpl");
SYMBOL_CRC(mt_leds_classdev_register, 0xdf452e47, "_gpl");
SYMBOL_CRC(mt_leds_classdev_unregister, 0x09f5c4f7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xcdbf39eb, "fwnode_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x863a9dc6, "devm_led_classdev_unregister" },
	{ 0x16aca18d, "kernfs_notify" },
	{ 0x48ddb484, "fwnode_property_read_u32_array" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc64cd75f, "devm_led_classdev_register_ext" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0xdd8caec8, "kernfs_find_and_get_ns" },
	{ 0xc45abff7, "kernfs_put" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0x482d47c8,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x1e6d26a8,
	0xcdbf39eb,
	0x5a921311,
	0x847188e8,
	0xa571f6b0,
	0x656e4a6e,
	0x863a9dc6,
	0x16aca18d,
	0x48ddb484,
	0x476b165a,
	0x98cf60b3,
	0x75ca79b5,
	0xa916b694,
	0xe94986d6,
	0x3c3ff9fd,
	0x5c3c7387,
	0xc64cd75f,
	0xe922b94d,
	0x11d6167b,
	0xdd8caec8,
	0xc45abff7,
	0xe17134b6,
	0x037a0cba,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"blocking_notifier_call_chain\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"strstr\0"
	"fwnode_property_read_string\0"
	"strncmp\0"
	"krealloc_noprof\0"
	"__mutex_init\0"
	"snprintf\0"
	"devm_led_classdev_unregister\0"
	"kernfs_notify\0"
	"fwnode_property_read_u32_array\0"
	"sized_strscpy\0"
	"strlen\0"
	"__fortify_panic\0"
	"strnlen\0"
	"sched_clock\0"
	"sprintf\0"
	"kstrtoull\0"
	"devm_led_classdev_register_ext\0"
	"device_create_file\0"
	"device_remove_file\0"
	"kernfs_find_and_get_ns\0"
	"kernfs_put\0"
	"__kmalloc_cache_noprof\0"
	"kfree\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


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
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x805e2dd2, "tracepoint_probe_register" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfe84f7b7, "shrink_slab" },
	{ 0xf8bd87ca, "cpufreq_cpu_get" },
	{ 0x24f00fda, "set_cpus_allowed_ptr" },
	{ 0x7aba1ef6, "tracepoint_probe_unregister" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0x0c676a8a, "__tracepoint_android_vh_shrink_slab_bypass" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0x92997ed8,
	0x805e2dd2,
	0xe2964344,
	0x9e61bb05,
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xfe84f7b7,
	0xf8bd87ca,
	0x24f00fda,
	0x7aba1ef6,
	0xb39378cc,
	0x0c676a8a,
	0x15ba50a6,
	0xde7ece30,
	0xac594e02,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"_printk\0"
	"tracepoint_probe_register\0"
	"__wake_up\0"
	"set_freezable\0"
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"shrink_slab\0"
	"cpufreq_cpu_get\0"
	"set_cpus_allowed_ptr\0"
	"tracepoint_probe_unregister\0"
	"kthread_stop\0"
	"__tracepoint_android_vh_shrink_slab_bypass\0"
	"jiffies\0"
	"__cpu_possible_mask\0"
	"__cpu_online_mask\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


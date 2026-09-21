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
	{ 0xea82d349, "hrtimer_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xb4028d67, "proc_create" },
	{ 0xa2fa95a0, "proc_create_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c81ceff, "simple_read_from_buffer" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x19b76060, "kstrtouint_from_user" },
	{ 0x1cc7f053, "scmi_tinysys_common_set" },
	{ 0x2155f701, "hrtimer_try_to_cancel" },
	{ 0x69601fbf, "scmi_tinysys_common_get" },
	{ 0x720bd81e, "sspm_sbuf_get" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x51fcca8a, "get_scmi_tinysys_info" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x037a0cba, "kfree" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x330c0b0f, "remove_proc_entry" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xea82d349,
	0x49cd25ed,
	0x92997ed8,
	0xc6f46339,
	0xffeedf6a,
	0xf3cdc3c6,
	0x31b65f04,
	0x52c5c991,
	0x7518b5f0,
	0xb4028d67,
	0xa2fa95a0,
	0x656e4a6e,
	0x96848186,
	0x9c81ceff,
	0x75ca79b5,
	0xa916b694,
	0x19b76060,
	0x1cc7f053,
	0x2155f701,
	0x69601fbf,
	0x720bd81e,
	0xc0b7c197,
	0x42ad47ad,
	0x51fcca8a,
	0xe136f93c,
	0x135bb7ec,
	0x037a0cba,
	0x9166fc03,
	0x8c03d20c,
	0x330c0b0f,
	0x0f05f001,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"hrtimer_init\0"
	"alloc_workqueue\0"
	"_printk\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"of_find_compatible_node\0"
	"of_property_read_u32_index\0"
	"__kmalloc_noprof\0"
	"proc_mkdir\0"
	"proc_create\0"
	"proc_create_data\0"
	"snprintf\0"
	"scnprintf\0"
	"simple_read_from_buffer\0"
	"__fortify_panic\0"
	"strnlen\0"
	"kstrtouint_from_user\0"
	"scmi_tinysys_common_set\0"
	"hrtimer_try_to_cancel\0"
	"scmi_tinysys_common_get\0"
	"sspm_sbuf_get\0"
	"hrtimer_start_range_ns\0"
	"queue_delayed_work_on\0"
	"get_scmi_tinysys_info\0"
	"of_property_read_variable_u32_array\0"
	"hrtimer_forward\0"
	"kfree\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"remove_proc_entry\0"
	"mem_alloc_profiling_key\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "tinysys-scmi,sspm_v3");


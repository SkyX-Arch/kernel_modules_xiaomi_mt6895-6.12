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
	{ 0xf21e1f9b, "disable_percpu_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x5a862714, "gz_trusty_enqueue_nop" },
	{ 0x92997ed8, "_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x401167cc, "_dev_info" },
	{ 0x335c570f, "enable_percpu_irq" },
	{ 0x5ade91e2, "pcpu_alloc_noprof" },
	{ 0xf8d836b7, "gz_trusty_call_notifier_register" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x0f9a2a8f, "gz_trusty_call_notifier_unregister" },
	{ 0xfce5a203, "free_percpu" },
	{ 0x037a0cba, "kfree" },
	{ 0x6db0e361, "of_irq_find_parent" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb90a7bc4, "gz_trusty_fast_call32" },
	{ 0xacb58177, "get_smcnr_dev" },
	{ 0x6726e103, "irq_create_of_mapping" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0x1c548672, "irq_find_matching_fwspec" },
	{ 0xf8b9b956, "__request_percpu_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe5e55228, "__cpuhp_state_add_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7a6b169c, "free_percpu_irq" },
	{ 0x18245177, "__cpuhp_state_remove_instance" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf21e1f9b,
	0x27bbf221,
	0x5a862714,
	0x92997ed8,
	0xba8fbd64,
	0xb5b54b34,
	0x12db679a,
	0x6fc35f2b,
	0xb66eb73f,
	0x401167cc,
	0x335c570f,
	0x5ade91e2,
	0xf8d836b7,
	0x34db050b,
	0x0f9a2a8f,
	0xfce5a203,
	0x037a0cba,
	0x6db0e361,
	0x1fec5304,
	0xe136f93c,
	0xe17134b6,
	0xfcec0987,
	0xb90a7bc4,
	0xacb58177,
	0x6726e103,
	0x1fef36c1,
	0x1c548672,
	0xf8b9b956,
	0x92d5838e,
	0xe5e55228,
	0xd35cce70,
	0xc1514a3b,
	0x7a6b169c,
	0x18245177,
	0xaab744b7,
	0x0f05f001,
	0xefe8a82e,
	0xde7ece30,
	0x280f9f14,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"disable_percpu_irq\0"
	"disable_irq_nosync\0"
	"gz_trusty_enqueue_nop\0"
	"_printk\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__platform_driver_register\0"
	"platform_driver_unregister\0"
	"__cpuhp_setup_state\0"
	"_dev_info\0"
	"enable_percpu_irq\0"
	"pcpu_alloc_noprof\0"
	"gz_trusty_call_notifier_register\0"
	"_raw_spin_lock_irqsave\0"
	"gz_trusty_call_notifier_unregister\0"
	"free_percpu\0"
	"kfree\0"
	"of_irq_find_parent\0"
	"__of_parse_phandle_with_args\0"
	"of_property_read_variable_u32_array\0"
	"__kmalloc_cache_noprof\0"
	"enable_irq\0"
	"gz_trusty_fast_call32\0"
	"get_smcnr_dev\0"
	"irq_create_of_mapping\0"
	"__irq_resolve_mapping\0"
	"irq_find_matching_fwspec\0"
	"__request_percpu_irq\0"
	"request_threaded_irq\0"
	"__cpuhp_state_add_instance\0"
	"_raw_spin_unlock_irqrestore\0"
	"free_irq\0"
	"free_percpu_irq\0"
	"__cpuhp_state_remove_instance\0"
	"__cpuhp_remove_state\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__cpu_possible_mask\0"
	"__per_cpu_offset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "gz_trusty_mod");


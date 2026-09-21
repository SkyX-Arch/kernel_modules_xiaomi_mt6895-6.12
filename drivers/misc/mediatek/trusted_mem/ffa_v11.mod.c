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

KSYMTAB_DATA(ffa_bus_type, "_gpl", "");
KSYMTAB_FUNC(ffa_driver_register, "_gpl", "");
KSYMTAB_FUNC(ffa_driver_unregister, "_gpl", "");
KSYMTAB_FUNC(ffa_device_register, "_gpl", "");
KSYMTAB_FUNC(ffa_device_unregister, "_gpl", "");

SYMBOL_CRC(ffa_bus_type, 0x65c7c3e3, "_gpl");
SYMBOL_CRC(ffa_driver_register, 0x7a8e1e50, "_gpl");
SYMBOL_CRC(ffa_driver_unregister, 0x3a77c23b, "_gpl");
SYMBOL_CRC(ffa_device_register, 0xaec6cb9b, "_gpl");
SYMBOL_CRC(ffa_device_unregister, 0x2d116452, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc063a775, "driver_register" },
	{ 0x56e19f9a, "driver_unregister" },
	{ 0x234c9de3, "put_device" },
	{ 0xe1ef42dd, "ida_free" },
	{ 0xba860d3c, "dev_set_name" },
	{ 0x4d8597ff, "device_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xcc1420a0, "device_unregister" },
	{ 0x588ca7bc, "bus_register" },
	{ 0x12e1f7c0, "bus_unregister" },
	{ 0x20a5ab84, "ida_destroy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x768006df, "bus_find_device" },
	{ 0x01313de7, "device_match_any" },
	{ 0x89d256b7, "ida_alloc_range" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x037a0cba, "kfree" },
	{ 0xc5089d9d, "bus_for_each_dev" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x0896c3e8, "alloc_pages_exact_noprof" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x6726e103, "irq_create_of_mapping" },
	{ 0x5ade91e2, "pcpu_alloc_noprof" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf8b9b956, "__request_percpu_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x46c25534, "xa_load" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x335c570f, "enable_percpu_irq" },
	{ 0xf21e1f9b, "disable_percpu_irq" },
	{ 0x240e0924, "bus_register_notifier" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc3f4e641, "__xa_insert" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x0b954976, "xa_find" },
	{ 0x79bc1bfb, "xa_erase" },
	{ 0x71a5f4c1, "xa_find_after" },
	{ 0xa5b23f05, "xa_destroy" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7a6b169c, "free_percpu_irq" },
	{ 0xfce5a203, "free_percpu" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xb3055449, "__cpu_present_mask" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe98f55f2, "arm_smccc_get_version" },
	{ 0x6d467b08, "arm_smccc_1_1_get_conduit" },
	{ 0x3e79fb00, "arm_smccc_1_2_smc" },
	{ 0xea1c3e3a, "arm_smccc_1_2_hvc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc063a775,
	0x56e19f9a,
	0x234c9de3,
	0xe1ef42dd,
	0xba860d3c,
	0x4d8597ff,
	0xb4ce05a5,
	0xcc1420a0,
	0x588ca7bc,
	0x12e1f7c0,
	0x20a5ab84,
	0x3c3ff9fd,
	0xe783e261,
	0x75ca79b5,
	0x9c6febfc,
	0x768006df,
	0x01313de7,
	0x89d256b7,
	0xe17134b6,
	0x037a0cba,
	0xc5089d9d,
	0x6dcf857f,
	0x0f05f001,
	0xefe8a82e,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x52c5c991,
	0x0896c3e8,
	0xa571f6b0,
	0xeb44339a,
	0xf3cdc3c6,
	0x6726e103,
	0x5ade91e2,
	0x49cd25ed,
	0xf8b9b956,
	0xc5b6f236,
	0x46c25534,
	0xfe8c61f0,
	0xdd4d55b6,
	0xb66eb73f,
	0x335c570f,
	0xf21e1f9b,
	0x240e0924,
	0xb67fec0e,
	0xc3055d20,
	0xdf9734a7,
	0xfbe215e4,
	0xc3f4e641,
	0xba8fbd64,
	0xb5b54b34,
	0x0b954976,
	0x79bc1bfb,
	0x71a5f4c1,
	0xa5b23f05,
	0xe68efe41,
	0x40235c98,
	0x6228c21f,
	0x8c03d20c,
	0x7a6b169c,
	0xfce5a203,
	0xaab744b7,
	0x2c7db649,
	0x9688de8b,
	0xe4bbc1dd,
	0x017de3d5,
	0xb3055449,
	0x280f9f14,
	0xe98f55f2,
	0x6d467b08,
	0x3e79fb00,
	0xea1c3e3a,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"driver_register\0"
	"driver_unregister\0"
	"put_device\0"
	"ida_free\0"
	"dev_set_name\0"
	"device_register\0"
	"_dev_err\0"
	"device_unregister\0"
	"bus_register\0"
	"bus_unregister\0"
	"ida_destroy\0"
	"sprintf\0"
	"sysfs_emit\0"
	"__fortify_panic\0"
	"add_uevent_var\0"
	"bus_find_device\0"
	"device_match_any\0"
	"ida_alloc_range\0"
	"__kmalloc_cache_noprof\0"
	"kfree\0"
	"bus_for_each_dev\0"
	"uuid_null\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__kmalloc_noprof\0"
	"alloc_pages_exact_noprof\0"
	"__mutex_init\0"
	"free_pages_exact\0"
	"of_find_compatible_node\0"
	"irq_create_of_mapping\0"
	"pcpu_alloc_noprof\0"
	"alloc_workqueue\0"
	"__request_percpu_irq\0"
	"queue_work_on\0"
	"xa_load\0"
	"_raw_read_lock\0"
	"_raw_read_unlock\0"
	"__cpuhp_setup_state\0"
	"enable_percpu_irq\0"
	"disable_percpu_irq\0"
	"bus_register_notifier\0"
	"uuid_parse\0"
	"usleep_range_state\0"
	"sg_nents\0"
	"sg_next\0"
	"__xa_insert\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"xa_find\0"
	"xa_erase\0"
	"xa_find_after\0"
	"xa_destroy\0"
	"_raw_write_lock\0"
	"_raw_write_unlock\0"
	"smp_call_function_single\0"
	"destroy_workqueue\0"
	"free_percpu_irq\0"
	"free_percpu\0"
	"__cpuhp_remove_state\0"
	"irq_dispose_mapping\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"nr_cpu_ids\0"
	"__cpu_present_mask\0"
	"__per_cpu_offset\0"
	"arm_smccc_get_version\0"
	"arm_smccc_1_1_get_conduit\0"
	"arm_smccc_1_2_smc\0"
	"arm_smccc_1_2_hvc\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


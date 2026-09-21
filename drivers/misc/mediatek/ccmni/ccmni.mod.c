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

KSYMTAB_DATA(ccmni_ctl_blk, "", "");
KSYMTAB_FUNC(ccmni_set_init_rps, "", "");
KSYMTAB_FUNC(set_ccmni_rps, "", "");
KSYMTAB_FUNC(ccmni_set_cur_speed, "", "");
KSYMTAB_DATA(ccmni_ops, "", "");

SYMBOL_CRC(ccmni_ctl_blk, 0x861f45b1, "");
SYMBOL_CRC(ccmni_set_init_rps, 0x4d768812, "");
SYMBOL_CRC(set_ccmni_rps, 0xe357c0cc, "");
SYMBOL_CRC(ccmni_set_cur_speed, 0x5ccfc658, "");
SYMBOL_CRC(ccmni_ops, 0x991f0960, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x5e509e16, "set_rps_map" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba95b4d5, "dev_kfree_skb_any_reason" },
	{ 0x0c3690fc, "_raw_spin_lock_bh" },
	{ 0xb1dfd41a, "napi_gro_flush" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb9d90f25, "netif_receive_skb" },
	{ 0xce46b2d6, "napi_gro_receive" },
	{ 0xc60fd4e1, "netif_rx" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdb1a1602, "netif_carrier_off" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x0b23bf21, "netdev_info" },
	{ 0xe8503409, "dev_get_stats" },
	{ 0xc2e19e50, "ipv6_skip_exthdr" },
	{ 0x064f9fa1, "netif_tx_wake_queue" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x9a6484d0, "netdev_err" },
	{ 0x5b3a70d6, "alloc_etherdev_mqs" },
	{ 0x96848186, "scnprintf" },
	{ 0x7ba4acc7, "register_netdev" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xaf487750, "free_netdev" },
	{ 0xb70854f9, "unregister_netdev" },
	{ 0x037a0cba, "kfree" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xd1394d00, "netif_carrier_on" },
	{ 0xdf2bfd5f, "napi_enable" },
	{ 0xe6d79a08, "napi_schedule_prep" },
	{ 0x3282aed1, "__napi_schedule" },
	{ 0x42ad47ad, "queue_delayed_work_on" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x598dfa08, "flush_delayed_work" },
	{ 0xa6501ca1, "napi_disable" },
	{ 0x97dd4ec0, "consume_skb" },
	{ 0x5a921311, "strncmp" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe2703d83, "dev_addr_mod" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x404f8cb9, "netif_napi_add_weight" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x91f63087, "__netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x263c3152, "bcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x5e509e16,
	0x34db050b,
	0xba95b4d5,
	0x0c3690fc,
	0xb1dfd41a,
	0x6b8bf149,
	0xe46021ca,
	0xb9d90f25,
	0xce46b2d6,
	0xc60fd4e1,
	0xd35cce70,
	0xdb1a1602,
	0xba8fbd64,
	0xb5b54b34,
	0x3c3fce39,
	0x0b23bf21,
	0xe8503409,
	0xc2e19e50,
	0x064f9fa1,
	0xe94986d6,
	0x9a6484d0,
	0x5b3a70d6,
	0x96848186,
	0x7ba4acc7,
	0x0f314d3e,
	0xaf487750,
	0xb70854f9,
	0x037a0cba,
	0xf3cdc3c6,
	0xe136f93c,
	0xe17134b6,
	0xd1394d00,
	0xdf2bfd5f,
	0xe6d79a08,
	0x3282aed1,
	0x42ad47ad,
	0x9e87b2ff,
	0x598dfa08,
	0xa6501ca1,
	0x97dd4ec0,
	0x5a921311,
	0x2be0c009,
	0x75ca79b5,
	0x41ed3709,
	0xe2703d83,
	0xc6f46339,
	0x404f8cb9,
	0x49cd25ed,
	0xffeedf6a,
	0x3bd45f5c,
	0x3eca0c01,
	0x8c03d20c,
	0x91f63087,
	0x609f1c7e,
	0x263c3152,
	0x15ba50a6,
	0x0f05f001,
	0xefe8a82e,
	0xa65c6def,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"set_rps_map\0"
	"_raw_spin_lock_irqsave\0"
	"dev_kfree_skb_any_reason\0"
	"_raw_spin_lock_bh\0"
	"napi_gro_flush\0"
	"netif_receive_skb_list\0"
	"_raw_spin_unlock_bh\0"
	"netif_receive_skb\0"
	"napi_gro_receive\0"
	"netif_rx\0"
	"_raw_spin_unlock_irqrestore\0"
	"netif_carrier_off\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__local_bh_enable_ip\0"
	"netdev_info\0"
	"dev_get_stats\0"
	"ipv6_skip_exthdr\0"
	"netif_tx_wake_queue\0"
	"sched_clock\0"
	"netdev_err\0"
	"alloc_etherdev_mqs\0"
	"scnprintf\0"
	"register_netdev\0"
	"wakeup_source_register\0"
	"free_netdev\0"
	"unregister_netdev\0"
	"kfree\0"
	"of_find_compatible_node\0"
	"of_property_read_variable_u32_array\0"
	"__kmalloc_cache_noprof\0"
	"netif_carrier_on\0"
	"napi_enable\0"
	"napi_schedule_prep\0"
	"__napi_schedule\0"
	"queue_delayed_work_on\0"
	"cancel_delayed_work\0"
	"flush_delayed_work\0"
	"napi_disable\0"
	"consume_skb\0"
	"strncmp\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"get_random_bytes\0"
	"dev_addr_mod\0"
	"init_timer_key\0"
	"netif_napi_add_weight\0"
	"alloc_workqueue\0"
	"delayed_work_timer_fn\0"
	"register_sysctl_sz\0"
	"proc_dointvec_minmax\0"
	"destroy_workqueue\0"
	"__netif_napi_del\0"
	"synchronize_net\0"
	"bcmp\0"
	"jiffies\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "rps_perf");


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

KSYMTAB_FUNC(mddp_drv_attach, "", "");
KSYMTAB_FUNC(mddp_drv_detach, "", "");
KSYMTAB_FUNC(mddp_check_subfeature, "", "");

SYMBOL_CRC(mddp_drv_attach, 0x76537e58, "");
SYMBOL_CRC(mddp_drv_detach, 0xe1b43244, "");
SYMBOL_CRC(mddp_check_subfeature, 0x36881941, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5ad93446, "register_netdevice_notifier" },
	{ 0x2f5e56a0, "unregister_netdevice_notifier" },
	{ 0x92997ed8, "_printk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xa6257a2f, "complete" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96848186, "scnprintf" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25758a2c, "misc_register" },
	{ 0xc3246938, "misc_deregister" },
	{ 0x037a0cba, "kfree" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ba29c19, "mtk_ccci_send_data" },
	{ 0x13275205, "get_smem_start_addr" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xd79924f3, "mtk_ccci_release_port" },
	{ 0x3cf16eda, "send_sig" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xad14b49d, "mtk_ccci_request_port" },
	{ 0xe3982125, "mtk_ccci_open_port" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb24ba354, "mtk_ccci_read_data" },
	{ 0xc0374d9c, "kernel_sigaction" },
	{ 0xcdd61926, "exec_ccci_kern_func" },
	{ 0x1e1b8b8c, "register_pernet_subsys" },
	{ 0xe9d1ccd7, "unregister_pernet_subsys" },
	{ 0xecf29858, "nf_register_net_hooks" },
	{ 0x30d30c09, "kmem_cache_alloc_noprof" },
	{ 0x461e85df, "kmem_cache_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x97dd4ec0, "consume_skb" },
	{ 0xe8165471, "__netdev_alloc_skb" },
	{ 0x343393f8, "neigh_lookup" },
	{ 0x97dd176a, "neigh_destroy" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0xccf1f61a, "nf_unregister_net_hooks" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2e19e50, "ipv6_skip_exthdr" },
	{ 0x064f9fa1, "netif_tx_wake_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x3daad512, "__kmem_cache_create_args" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1d179fbf, "kmem_cache_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f311d5a, "arp_tbl" },
	{ 0x8f347e0f, "nd_tbl" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x07058737, "dev_get_by_name" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1e93e6e1, "init_net" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5ad93446,
	0x2f5e56a0,
	0x92997ed8,
	0x25974000,
	0x476b165a,
	0x75ca79b5,
	0xa916b694,
	0x608741b5,
	0x609f1c7e,
	0x656e4a6e,
	0xa571f6b0,
	0xa6257a2f,
	0xd5977bfb,
	0xed55cabd,
	0x4a3ad70e,
	0xe17134b6,
	0x34db050b,
	0xd35cce70,
	0x0f05f001,
	0xefe8a82e,
	0xc5b6f236,
	0xf9a482f9,
	0x96848186,
	0x2d3385d3,
	0xd9a5ea54,
	0x25758a2c,
	0xc3246938,
	0x037a0cba,
	0x9ec6ca96,
	0x356461c8,
	0xad73041f,
	0x5102a30b,
	0x8427cc7b,
	0x9a835040,
	0x4b750f53,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0x5c3c7387,
	0x85df9b6c,
	0x8c8569cb,
	0x52c5c991,
	0x2773c485,
	0xba8fbd64,
	0xb5b54b34,
	0x3ba29c19,
	0x13275205,
	0xba0aee2e,
	0xce5bc4d0,
	0xd79924f3,
	0x3cf16eda,
	0xb39378cc,
	0xad14b49d,
	0xe3982125,
	0xb3f7646e,
	0xb24ba354,
	0xc0374d9c,
	0xcdd61926,
	0x1e1b8b8c,
	0xe9d1ccd7,
	0xecf29858,
	0x30d30c09,
	0x461e85df,
	0xc6f46339,
	0x24d273d1,
	0x7e19152a,
	0xe2964344,
	0xc38c83b8,
	0x97dd4ec0,
	0xe8165471,
	0x343393f8,
	0x97dd176a,
	0x0296695f,
	0xccf1f61a,
	0x3c3fce39,
	0xc2e19e50,
	0x064f9fa1,
	0x41ed3709,
	0x1b2fa1a9,
	0x3daad512,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x1d179fbf,
	0x999e8297,
	0x15ba50a6,
	0x7f311d5a,
	0x8f347e0f,
	0xe2d5255a,
	0x07058737,
	0xf70e4a4d,
	0x1e93e6e1,
	0xdcb764ad,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"register_netdevice_notifier\0"
	"unregister_netdevice_notifier\0"
	"_printk\0"
	"wait_for_completion\0"
	"sized_strscpy\0"
	"__fortify_panic\0"
	"strnlen\0"
	"__init_swait_queue_head\0"
	"synchronize_net\0"
	"snprintf\0"
	"__mutex_init\0"
	"complete\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"wait_for_completion_timeout\0"
	"__kmalloc_cache_noprof\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"queue_work_on\0"
	"msleep\0"
	"scnprintf\0"
	"system_wq\0"
	"__init_waitqueue_head\0"
	"misc_register\0"
	"misc_deregister\0"
	"kfree\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"autoremove_wake_function\0"
	"do_wait_intr_irq\0"
	"_raw_spin_lock_irq\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irq\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"kstrtoull\0"
	"strsep\0"
	"kstrtoint\0"
	"__kmalloc_noprof\0"
	"__wake_up_locked\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"mtk_ccci_send_data\0"
	"get_smem_start_addr\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"mtk_ccci_release_port\0"
	"send_sig\0"
	"kthread_stop\0"
	"mtk_ccci_request_port\0"
	"mtk_ccci_open_port\0"
	"kthread_should_stop\0"
	"mtk_ccci_read_data\0"
	"kernel_sigaction\0"
	"exec_ccci_kern_func\0"
	"register_pernet_subsys\0"
	"unregister_pernet_subsys\0"
	"nf_register_net_hooks\0"
	"kmem_cache_alloc_noprof\0"
	"kmem_cache_free\0"
	"init_timer_key\0"
	"add_timer\0"
	"__list_add_valid_or_report\0"
	"__wake_up\0"
	"mod_timer\0"
	"consume_skb\0"
	"__netdev_alloc_skb\0"
	"neigh_lookup\0"
	"neigh_destroy\0"
	"refcount_warn_saturate\0"
	"nf_unregister_net_hooks\0"
	"__local_bh_enable_ip\0"
	"ipv6_skip_exthdr\0"
	"netif_tx_wake_queue\0"
	"get_random_bytes\0"
	"vmalloc_noprof\0"
	"__kmem_cache_create_args\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"kmem_cache_destroy\0"
	"vfree\0"
	"jiffies\0"
	"arp_tbl\0"
	"nd_tbl\0"
	"strcmp\0"
	"dev_get_by_name\0"
	"preempt_schedule_notrace\0"
	"init_net\0"
	"memset\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_md_all");


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

KSYMTAB_DATA(rndis_test_last_msg_id, "_gpl", "");
KSYMTAB_DATA(rndis_test_reset_msg_cnt, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_setup_name, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_setup_name_default, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_register_netdev, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_set_gadget, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_set_dev_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_dev_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_set_host_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_host_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_host_addr_cdc, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_host_addr_u8, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_set_qmult, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_qmult, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_get_ifname, "_gpl", "");
KSYMTAB_FUNC(gether_update_dl_max_xfer_size, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_cleanup, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_connect, "_gpl", "");
KSYMTAB_FUNC(mtk_gether_disconnect, "_gpl", "");

SYMBOL_CRC(rndis_test_last_msg_id, 0x5855fc1d, "_gpl");
SYMBOL_CRC(rndis_test_reset_msg_cnt, 0xc4e69a85, "_gpl");
SYMBOL_CRC(mtk_gether_setup_name, 0x9672de2d, "_gpl");
SYMBOL_CRC(mtk_gether_setup_name_default, 0x004a008c, "_gpl");
SYMBOL_CRC(mtk_gether_register_netdev, 0x012ad16a, "_gpl");
SYMBOL_CRC(mtk_gether_set_gadget, 0x1396265a, "_gpl");
SYMBOL_CRC(mtk_gether_set_dev_addr, 0xcc8b0c63, "_gpl");
SYMBOL_CRC(mtk_gether_get_dev_addr, 0x2b224eb6, "_gpl");
SYMBOL_CRC(mtk_gether_set_host_addr, 0x9028f577, "_gpl");
SYMBOL_CRC(mtk_gether_get_host_addr, 0x642233a5, "_gpl");
SYMBOL_CRC(mtk_gether_get_host_addr_cdc, 0xf349a49c, "_gpl");
SYMBOL_CRC(mtk_gether_get_host_addr_u8, 0xd284aa37, "_gpl");
SYMBOL_CRC(mtk_gether_set_qmult, 0xc26ba83c, "_gpl");
SYMBOL_CRC(mtk_gether_get_qmult, 0x0d3542dd, "_gpl");
SYMBOL_CRC(mtk_gether_get_ifname, 0xb3f92dfd, "_gpl");
SYMBOL_CRC(gether_update_dl_max_xfer_size, 0x1f4a7b2e, "_gpl");
SYMBOL_CRC(mtk_gether_cleanup, 0xf3ca5637, "_gpl");
SYMBOL_CRC(mtk_gether_connect, 0x20ee4bc1, "_gpl");
SYMBOL_CRC(mtk_gether_disconnect, 0x518381ee, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5b3a70d6, "alloc_etherdev_mqs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x401167cc, "_dev_info" },
	{ 0x7ba4acc7, "register_netdev" },
	{ 0xaf487750, "free_netdev" },
	{ 0x92997ed8, "_printk" },
	{ 0xdb1a1602, "netif_carrier_off" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb70854f9, "unregister_netdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xeffacdad, "usb_ep_enable" },
	{ 0xd1394d00, "netif_carrier_on" },
	{ 0xc6792d17, "usb_ep_disable" },
	{ 0x037a0cba, "kfree" },
	{ 0xf6c3e5d4, "usb_ep_free_request" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6cda142, "usb_ep_queue" },
	{ 0xf4b23bfd, "__alloc_skb" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x31bd8d07, "skb_dequeue" },
	{ 0x17819d26, "eth_type_trans" },
	{ 0xc60fd4e1, "netif_rx" },
	{ 0x5e509e16, "set_rps_map" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xe2703d83, "dev_addr_mod" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x7ab439ad, "eth_mac_addr" },
	{ 0x291d666c, "eth_validate_addr" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x0a15e232, "ethtool_op_get_link" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x349cba85, "strchr" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf9434585, "usb_ep_alloc_request" },
	{ 0x064f9fa1, "netif_tx_wake_queue" },
	{ 0x7594d536, "skb_put" },
	{ 0xe3176987, "skb_queue_tail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba95b4d5, "dev_kfree_skb_any_reason" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x3e92c0ab, "param_ops_charp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x11089ac7, "_ctype" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x34db050b,
	0x5b3a70d6,
	0x656e4a6e,
	0x401167cc,
	0x7ba4acc7,
	0xaf487750,
	0x92997ed8,
	0xdb1a1602,
	0xc7a4fbed,
	0x6e720ff2,
	0xb70854f9,
	0x2f2c95c4,
	0xeffacdad,
	0xd1394d00,
	0xc6792d17,
	0x037a0cba,
	0xf6c3e5d4,
	0x9a835040,
	0xd35cce70,
	0xa6cda142,
	0xf4b23bfd,
	0x7e19152a,
	0xc5b6f236,
	0x31bd8d07,
	0x17819d26,
	0xc60fd4e1,
	0x5e509e16,
	0xab6d5b3b,
	0xe2703d83,
	0x75ca79b5,
	0x7ab439ad,
	0x291d666c,
	0x8427cc7b,
	0x4b750f53,
	0xf5edea2e,
	0xb43f9365,
	0x0a15e232,
	0x41ed3709,
	0x98cf60b3,
	0xa916b694,
	0x476b165a,
	0x349cba85,
	0xe17134b6,
	0x52c5c991,
	0xf9434585,
	0x064f9fa1,
	0x7594d536,
	0xe3176987,
	0xba8fbd64,
	0xb5b54b34,
	0xba95b4d5,
	0x49cd25ed,
	0x8c03d20c,
	0x92acb4e9,
	0x3e92c0ab,
	0x2d3385d3,
	0xa6f6226c,
	0x11089ac7,
	0x0f05f001,
	0xefe8a82e,
	0x15ba50a6,
	0xa65c6def,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_lock_irqsave\0"
	"alloc_etherdev_mqs\0"
	"snprintf\0"
	"_dev_info\0"
	"register_netdev\0"
	"free_netdev\0"
	"_printk\0"
	"netif_carrier_off\0"
	"rtnl_lock\0"
	"rtnl_unlock\0"
	"unregister_netdev\0"
	"flush_work\0"
	"usb_ep_enable\0"
	"netif_carrier_on\0"
	"usb_ep_disable\0"
	"kfree\0"
	"usb_ep_free_request\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"usb_ep_queue\0"
	"__alloc_skb\0"
	"__list_add_valid_or_report\0"
	"queue_work_on\0"
	"skb_dequeue\0"
	"eth_type_trans\0"
	"netif_rx\0"
	"set_rps_map\0"
	"hex_to_bin\0"
	"dev_addr_mod\0"
	"__fortify_panic\0"
	"eth_mac_addr\0"
	"eth_validate_addr\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"___ratelimit\0"
	"ktime_get\0"
	"ethtool_op_get_link\0"
	"get_random_bytes\0"
	"strlen\0"
	"strnlen\0"
	"sized_strscpy\0"
	"strchr\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"usb_ep_alloc_request\0"
	"netif_tx_wake_queue\0"
	"skb_put\0"
	"skb_queue_tail\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"dev_kfree_skb_any_reason\0"
	"alloc_workqueue\0"
	"destroy_workqueue\0"
	"param_ops_uint\0"
	"param_ops_charp\0"
	"system_wq\0"
	"kasan_flag_enabled\0"
	"_ctype\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"jiffies\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "rps_perf");


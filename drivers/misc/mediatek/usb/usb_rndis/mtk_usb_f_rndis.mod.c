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

KSYMTAB_FUNC(mtk_rndis_borrow_net, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_signal_connect, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_signal_disconnect, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_uninit, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_set_host_mac, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_msg_parser, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_register, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_deregister, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_set_param_dev, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_set_param_vendor, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_set_param_medium, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_add_hdr, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_free_response, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_get_next_response, "_gpl", "");
KSYMTAB_FUNC(mtk_rndis_rm_hdr, "_gpl", "");

SYMBOL_CRC(mtk_rndis_borrow_net, 0xeb308c4b, "_gpl");
SYMBOL_CRC(mtk_rndis_signal_connect, 0xed6ca294, "_gpl");
SYMBOL_CRC(mtk_rndis_signal_disconnect, 0x796ef815, "_gpl");
SYMBOL_CRC(mtk_rndis_uninit, 0x3e150271, "_gpl");
SYMBOL_CRC(mtk_rndis_set_host_mac, 0x41afdf4d, "_gpl");
SYMBOL_CRC(mtk_rndis_msg_parser, 0x8ce903eb, "_gpl");
SYMBOL_CRC(mtk_rndis_register, 0x2a06e26f, "_gpl");
SYMBOL_CRC(mtk_rndis_deregister, 0x57107ce9, "_gpl");
SYMBOL_CRC(mtk_rndis_set_param_dev, 0x5d3a5ce6, "_gpl");
SYMBOL_CRC(mtk_rndis_set_param_vendor, 0x4688061f, "_gpl");
SYMBOL_CRC(mtk_rndis_set_param_medium, 0x26ea3990, "_gpl");
SYMBOL_CRC(mtk_rndis_add_hdr, 0x7ed0431e, "_gpl");
SYMBOL_CRC(mtk_rndis_free_response, 0x95f95919, "_gpl");
SYMBOL_CRC(mtk_rndis_get_next_response, 0xc72176d0, "_gpl");
SYMBOL_CRC(mtk_rndis_rm_hdr, 0x233d83e1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf3ca5637, "mtk_gether_cleanup" },
	{ 0xaf487750, "free_netdev" },
	{ 0xff599125, "usb_function_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x004a008c, "mtk_gether_setup_name_default" },
	{ 0x037a0cba, "kfree" },
	{ 0x54935b09, "config_group_init_type_name" },
	{ 0x32ef55ca, "usb_os_desc_prepare_interf_dir" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x1b6b8717, "usb_put_function_instance" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x2b224eb6, "mtk_gether_get_dev_addr" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xcc8b0c63, "mtk_gether_set_dev_addr" },
	{ 0x642233a5, "mtk_gether_get_host_addr" },
	{ 0x9028f577, "mtk_gether_set_host_addr" },
	{ 0x0d3542dd, "mtk_gether_get_qmult" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xc26ba83c, "mtk_gether_set_qmult" },
	{ 0xb3f92dfd, "mtk_gether_get_ifname" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd284aa37, "mtk_gether_get_host_addr_u8" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b873b0c, "skb_realloc_headroom" },
	{ 0x97dd4ec0, "consume_skb" },
	{ 0x1396265a, "mtk_gether_set_gadget" },
	{ 0x012ad16a, "mtk_gether_register_netdev" },
	{ 0x0efcd3aa, "usb_gstrings_attach" },
	{ 0x2640d5cd, "usb_interface_id" },
	{ 0x073a4752, "usb_ep_autoconfig" },
	{ 0xf9434585, "usb_ep_alloc_request" },
	{ 0x010d8a97, "usb_assign_descriptors" },
	{ 0x401167cc, "_dev_info" },
	{ 0x84332121, "usb_free_all_descriptors" },
	{ 0xf6c3e5d4, "usb_ep_free_request" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xa6cda142, "usb_ep_queue" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc6792d17, "usb_ep_disable" },
	{ 0xce21417d, "config_ep_by_speed" },
	{ 0xeffacdad, "usb_ep_enable" },
	{ 0x518381ee, "mtk_gether_disconnect" },
	{ 0x20ee4bc1, "mtk_gether_connect" },
	{ 0x1f4a7b2e, "gether_update_dl_max_xfer_size" },
	{ 0x171152f5, "usb_function_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xdb1a1602, "netif_carrier_off" },
	{ 0x095bcefe, "skb_push" },
	{ 0x3bee7bd2, "skb_pull" },
	{ 0x9743fb5c, "skb_trim" },
	{ 0xd883ddd8, "skb_clone" },
	{ 0xe3176987, "skb_queue_tail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xe8503409, "dev_get_stats" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd1394d00, "netif_carrier_on" },
	{ 0x064f9fa1, "netif_tx_wake_queue" },
	{ 0x89d256b7, "ida_alloc_range" },
	{ 0xe1ef42dd, "ida_free" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xba95b4d5, "dev_kfree_skb_any_reason" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x5855fc1d, "rndis_test_last_msg_id" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc4e69a85, "rndis_test_reset_msg_cnt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf3ca5637,
	0xaf487750,
	0xff599125,
	0xa571f6b0,
	0x004a008c,
	0x037a0cba,
	0x54935b09,
	0x32ef55ca,
	0xe17134b6,
	0x1b6b8717,
	0xd5977bfb,
	0x2b224eb6,
	0xed55cabd,
	0xcc8b0c63,
	0x642233a5,
	0x9028f577,
	0x0d3542dd,
	0x3c3ff9fd,
	0x6a6e05bf,
	0xc26ba83c,
	0xb3f92dfd,
	0xbcab6ee6,
	0xd284aa37,
	0x92997ed8,
	0x8b873b0c,
	0x97dd4ec0,
	0x1396265a,
	0x012ad16a,
	0x0efcd3aa,
	0x2640d5cd,
	0x073a4752,
	0xf9434585,
	0x010d8a97,
	0x401167cc,
	0x84332121,
	0xf6c3e5d4,
	0xb4ce05a5,
	0xa6cda142,
	0xba8fbd64,
	0xb5b54b34,
	0x34db050b,
	0xd35cce70,
	0xc6792d17,
	0xce21417d,
	0xeffacdad,
	0x518381ee,
	0x20ee4bc1,
	0x1f4a7b2e,
	0x171152f5,
	0x92acb4e9,
	0x0f05f001,
	0xefe8a82e,
	0xdb1a1602,
	0x095bcefe,
	0x3bee7bd2,
	0x9743fb5c,
	0xd883ddd8,
	0xe3176987,
	0x52c5c991,
	0x7e19152a,
	0xe8503409,
	0x98cf60b3,
	0xd1394d00,
	0x064f9fa1,
	0x89d256b7,
	0xe1ef42dd,
	0x9a835040,
	0xba95b4d5,
	0xb2fb935e,
	0x5855fc1d,
	0x15ba50a6,
	0xc4e69a85,
	0xf0fdf6cb,
	0x4829a47e,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mtk_gether_cleanup\0"
	"free_netdev\0"
	"usb_function_register\0"
	"__mutex_init\0"
	"mtk_gether_setup_name_default\0"
	"kfree\0"
	"config_group_init_type_name\0"
	"usb_os_desc_prepare_interf_dir\0"
	"__kmalloc_cache_noprof\0"
	"usb_put_function_instance\0"
	"mutex_lock\0"
	"mtk_gether_get_dev_addr\0"
	"mutex_unlock\0"
	"mtk_gether_set_dev_addr\0"
	"mtk_gether_get_host_addr\0"
	"mtk_gether_set_host_addr\0"
	"mtk_gether_get_qmult\0"
	"sprintf\0"
	"kstrtou8\0"
	"mtk_gether_set_qmult\0"
	"mtk_gether_get_ifname\0"
	"sscanf\0"
	"mtk_gether_get_host_addr_u8\0"
	"_printk\0"
	"skb_realloc_headroom\0"
	"consume_skb\0"
	"mtk_gether_set_gadget\0"
	"mtk_gether_register_netdev\0"
	"usb_gstrings_attach\0"
	"usb_interface_id\0"
	"usb_ep_autoconfig\0"
	"usb_ep_alloc_request\0"
	"usb_assign_descriptors\0"
	"_dev_info\0"
	"usb_free_all_descriptors\0"
	"usb_ep_free_request\0"
	"_dev_err\0"
	"usb_ep_queue\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"usb_ep_disable\0"
	"config_ep_by_speed\0"
	"usb_ep_enable\0"
	"mtk_gether_disconnect\0"
	"mtk_gether_connect\0"
	"gether_update_dl_max_xfer_size\0"
	"usb_function_unregister\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"netif_carrier_off\0"
	"skb_push\0"
	"skb_pull\0"
	"skb_trim\0"
	"skb_clone\0"
	"skb_queue_tail\0"
	"__kmalloc_noprof\0"
	"__list_add_valid_or_report\0"
	"dev_get_stats\0"
	"strlen\0"
	"netif_carrier_on\0"
	"netif_tx_wake_queue\0"
	"ida_alloc_range\0"
	"ida_free\0"
	"__list_del_entry_valid_or_report\0"
	"dev_kfree_skb_any_reason\0"
	"param_ops_int\0"
	"rndis_test_last_msg_id\0"
	"jiffies\0"
	"rndis_test_reset_msg_cnt\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_u_ether");


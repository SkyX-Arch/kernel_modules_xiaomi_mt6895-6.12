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
	{ 0x766f1ee7, "cmdq_get_hw_flags" },
	{ 0x1f26d82a, "cmdq_pkt_write_indriect" },
	{ 0xeadb5444, "cmdq_pkt_poll_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0xc5ab6171, "cmdq_sec_pkt_set_data" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0x543f6990, "cmdq_pkt_poll" },
	{ 0xd357a756, "cmdq_pkt_poll_sleep" },
	{ 0xd843cd45, "cmdq_pkt_set_event" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xe9c0c46d, "cmdq_pkt_flush_async" },
	{ 0x322d0022, "cmdq_pkt_wait_complete" },
	{ 0x561e5b97, "cmdq_pkt_dump_buf" },
	{ 0x22df72c1, "cmdq_pkt_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa6a55170, "cmdq_sec_pkt_set_mtee" },
	{ 0xacf6ee93, "cmdq_pkt_flush_threaded" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x641247a0, "cmdq_dump_pkt" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xaba63322, "of_iomap" },
	{ 0xc1cad332, "of_address_to_resource" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0xfeba6173, "debugfs_lookup" },
	{ 0x5cf4d4de, "debugfs_create_dir" },
	{ 0x4e870156, "debugfs_create_file" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0x79bb07e9, "cmdq_sec_mbox_enable" },
	{ 0x9905a4c2, "cmdq_util_test_set_ostd" },
	{ 0xcfe411c7, "cmdq_sec_mbox_disable" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0x66c78613, "cmdq_thread_timeout_backup" },
	{ 0xe3c30054, "cmdq_thread_timeout_restore" },
	{ 0x0cc0c39c, "cmdq_pkt_write" },
	{ 0x8f1cac91, "cmdq_pkt_flush" },
	{ 0x4aaa4dc7, "cmdq_mbox_buf_alloc" },
	{ 0xc0d9c483, "cmdq_pkt_mem_move" },
	{ 0xbb0497d8, "cmdq_pkt_jump" },
	{ 0xfee451c3, "cmdq_pkt_write_value_addr" },
	{ 0x5d6d21aa, "cmdq_pkt_read_addr" },
	{ 0xdb8d6bd8, "cmdq_pkt_write_reg_addr" },
	{ 0xbf592a78, "cmdq_mbox_buf_free" },
	{ 0x4f11972d, "cmdq_pkt_clear_event" },
	{ 0x23daec08, "cmdq_pkt_logic_command" },
	{ 0x0f491c39, "cmdq_pkt_sleep" },
	{ 0x0cac54c3, "cmdq_pkt_finalize_loop" },
	{ 0xc3d83563, "cmdq_mbox_stop" },
	{ 0x17fb2d1c, "cmdq_pkt_copy" },
	{ 0xb9ccd5be, "cmdq_pkt_assign_command" },
	{ 0xeca02049, "cmdq_pkt_finalize" },
	{ 0xc9cc8982, "cmdq_clear_event" },
	{ 0xf3c051fe, "cmdq_thread_dump" },
	{ 0x239ca61d, "cmdq_set_event" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x484e9ead, "cmdq_mbox_get_base_pa" },
	{ 0xe36792eb, "cmdq_pkt_handshake_event" },
	{ 0x2d580448, "cmdq_util_test_get_subsys_list" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x80e38994, "cmdq_pkt_read" },
	{ 0xf51bea3d, "cmdq_mbox_channel_stop" },
	{ 0x8bd20a76, "cmdq_get_event" },
	{ 0xae1fa283, "cmdq_pkt_write_value_addr_reuse" },
	{ 0x512ee865, "cmdq_pkt_reuse_buf_va" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x1248aaa7, "cmdq_pkt_get_curr_buf_va" },
	{ 0x900ff898, "cmdq_pkt_cond_jump" },
	{ 0x78d44fc3, "cmdq_reg_shift_addr" },
	{ 0xf3c3ed2c, "cmdq_sec_mbox_stop" },
	{ 0x85292f1d, "cmdq_get_vcp_buf" },
	{ 0x50309be5, "cmdq_vcp_enable" },
	{ 0xea999344, "cmdq_pkt_readback" },
	{ 0x7ed3c651, "cmdq_pkt_get_va_by_offset" },
	{ 0x470b446f, "cmdq_pkt_vcp_reuse_val" },
	{ 0x0f8c20fc, "cmdq_pkt_reuse_poll" },
	{ 0x12b6f595, "cmdq_pkt_refinalize" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43c4b7b5, "cmdq_pkt_write_reg_indriect" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x8e9e427a, "cmdq_mbox_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xde2fadca, "mtk_cmdq_log" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x766f1ee7,
	0x1f26d82a,
	0xeadb5444,
	0x92997ed8,
	0xdfcaaee7,
	0xc5ab6171,
	0x9f6801a4,
	0x543f6990,
	0xd357a756,
	0xd843cd45,
	0xe94986d6,
	0xe9c0c46d,
	0x322d0022,
	0x561e5b97,
	0x22df72c1,
	0xc6f46339,
	0xc38c83b8,
	0xa6a55170,
	0xacf6ee93,
	0xcc5005fe,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xc905402b,
	0xfa4d3c24,
	0x6b722180,
	0x0c1a5ee3,
	0xb6e6d99d,
	0x641247a0,
	0xdc0e4855,
	0x12db679a,
	0xa571f6b0,
	0xa823db6e,
	0xaba63322,
	0xc1cad332,
	0xea23ff02,
	0x22ae5020,
	0xfeba6173,
	0x5cf4d4de,
	0x4e870156,
	0xc8c7229e,
	0x1fec5304,
	0xa079425d,
	0xe136f93c,
	0xb7d99956,
	0xbcab6ee6,
	0xd5977bfb,
	0xed55cabd,
	0x88db9f48,
	0x2be0c009,
	0x75ca79b5,
	0xfc102d94,
	0x79bb07e9,
	0x9905a4c2,
	0xcfe411c7,
	0xe1d5b76c,
	0x66c78613,
	0xe3c30054,
	0x0cc0c39c,
	0x8f1cac91,
	0x4aaa4dc7,
	0xc0d9c483,
	0xbb0497d8,
	0xfee451c3,
	0x5d6d21aa,
	0xdb8d6bd8,
	0xbf592a78,
	0x4f11972d,
	0x23daec08,
	0x0f491c39,
	0x0cac54c3,
	0xc3d83563,
	0x17fb2d1c,
	0xb9ccd5be,
	0xeca02049,
	0xc9cc8982,
	0xf3c051fe,
	0x239ca61d,
	0x4a3ad70e,
	0x608741b5,
	0xa6257a2f,
	0x484e9ead,
	0xe36792eb,
	0x2d580448,
	0x40863ba1,
	0x80e38994,
	0xf51bea3d,
	0x8bd20a76,
	0xae1fa283,
	0x512ee865,
	0xe17134b6,
	0x1248aaa7,
	0x900ff898,
	0x78d44fc3,
	0xf3c3ed2c,
	0x85292f1d,
	0x50309be5,
	0xea999344,
	0x7ed3c651,
	0x470b446f,
	0x0f8c20fc,
	0x12b6f595,
	0xf9a482f9,
	0x43c4b7b5,
	0xba0aee2e,
	0xce5bc4d0,
	0x8e9e427a,
	0x6fc35f2b,
	0x15ba50a6,
	0xde2fadca,
	0xaf56600a,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"cmdq_get_hw_flags\0"
	"cmdq_pkt_write_indriect\0"
	"cmdq_pkt_poll_timeout\0"
	"_printk\0"
	"cmdq_pkt_create\0"
	"cmdq_sec_pkt_set_data\0"
	"cmdq_pkt_wfe\0"
	"cmdq_pkt_poll\0"
	"cmdq_pkt_poll_sleep\0"
	"cmdq_pkt_set_event\0"
	"sched_clock\0"
	"cmdq_pkt_flush_async\0"
	"cmdq_pkt_wait_complete\0"
	"cmdq_pkt_dump_buf\0"
	"cmdq_pkt_destroy\0"
	"init_timer_key\0"
	"mod_timer\0"
	"cmdq_sec_pkt_set_mtee\0"
	"cmdq_pkt_flush_threaded\0"
	"msleep_interruptible\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"clk_disable\0"
	"cmdq_dump_pkt\0"
	"timer_delete\0"
	"__platform_driver_register\0"
	"__mutex_init\0"
	"of_find_device_by_node\0"
	"of_iomap\0"
	"of_address_to_resource\0"
	"devm_clk_get\0"
	"cmdq_mbox_create\0"
	"debugfs_lookup\0"
	"debugfs_create_dir\0"
	"debugfs_create_file\0"
	"devm_kmalloc\0"
	"__of_parse_phandle_with_args\0"
	"of_property_count_elems_of_size\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_variable_u16_array\0"
	"sscanf\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"cmdq_mbox_enable\0"
	"cmdq_sec_mbox_enable\0"
	"cmdq_util_test_set_ostd\0"
	"cmdq_sec_mbox_disable\0"
	"cmdq_mbox_disable\0"
	"cmdq_thread_timeout_backup\0"
	"cmdq_thread_timeout_restore\0"
	"cmdq_pkt_write\0"
	"cmdq_pkt_flush\0"
	"cmdq_mbox_buf_alloc\0"
	"cmdq_pkt_mem_move\0"
	"cmdq_pkt_jump\0"
	"cmdq_pkt_write_value_addr\0"
	"cmdq_pkt_read_addr\0"
	"cmdq_pkt_write_reg_addr\0"
	"cmdq_mbox_buf_free\0"
	"cmdq_pkt_clear_event\0"
	"cmdq_pkt_logic_command\0"
	"cmdq_pkt_sleep\0"
	"cmdq_pkt_finalize_loop\0"
	"cmdq_mbox_stop\0"
	"cmdq_pkt_copy\0"
	"cmdq_pkt_assign_command\0"
	"cmdq_pkt_finalize\0"
	"cmdq_clear_event\0"
	"cmdq_thread_dump\0"
	"cmdq_set_event\0"
	"wait_for_completion_timeout\0"
	"__init_swait_queue_head\0"
	"complete\0"
	"cmdq_mbox_get_base_pa\0"
	"cmdq_pkt_handshake_event\0"
	"cmdq_util_test_get_subsys_list\0"
	"ioremap_prot\0"
	"cmdq_pkt_read\0"
	"cmdq_mbox_channel_stop\0"
	"cmdq_get_event\0"
	"cmdq_pkt_write_value_addr_reuse\0"
	"cmdq_pkt_reuse_buf_va\0"
	"__kmalloc_cache_noprof\0"
	"cmdq_pkt_get_curr_buf_va\0"
	"cmdq_pkt_cond_jump\0"
	"cmdq_reg_shift_addr\0"
	"cmdq_sec_mbox_stop\0"
	"cmdq_get_vcp_buf\0"
	"cmdq_vcp_enable\0"
	"cmdq_pkt_readback\0"
	"cmdq_pkt_get_va_by_offset\0"
	"cmdq_pkt_vcp_reuse_val\0"
	"cmdq_pkt_reuse_poll\0"
	"cmdq_pkt_refinalize\0"
	"msleep\0"
	"cmdq_pkt_write_reg_indriect\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"cmdq_mbox_destroy\0"
	"platform_driver_unregister\0"
	"jiffies\0"
	"mtk_cmdq_log\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-cmdq-drv-ext,cmdq-sec-drv");

MODULE_ALIAS("of:N*T*Cmediatek,cmdq-test");
MODULE_ALIAS("of:N*T*Cmediatek,cmdq-testC*");

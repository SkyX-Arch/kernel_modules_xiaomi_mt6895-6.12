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
	{ 0x92997ed8, "_printk" },
	{ 0x689f7bde, "mtk_smi_dbg_hang_detect" },
	{ 0x79146c3e, "mtk_iommu_register_fault_callback" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x188e924c, "cmdq_util_prebuilt_dump" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0xaba63322, "of_iomap" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8b808b7f, "cdev_alloc" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x8647f4a4, "cmdq_register_device" },
	{ 0x22ae5020, "cmdq_mbox_create" },
	{ 0xb8d43efc, "cmdq_get_usage_cb" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x75966ec2, "register_pm_notifier" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x0be515ae, "device_link_add" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xdfcaaee7, "cmdq_pkt_create" },
	{ 0xe1d5b76c, "cmdq_mbox_disable" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x22df72c1, "cmdq_pkt_destroy" },
	{ 0xe9c0c46d, "cmdq_pkt_flush_async" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x5d6d21aa, "cmdq_pkt_read_addr" },
	{ 0x0cc0c39c, "cmdq_pkt_write" },
	{ 0xb9ccd5be, "cmdq_pkt_assign_command" },
	{ 0x85178254, "cmdq_pkt_poll_addr" },
	{ 0x9f6801a4, "cmdq_pkt_wfe" },
	{ 0xd843cd45, "cmdq_pkt_set_event" },
	{ 0x4f11972d, "cmdq_pkt_clear_event" },
	{ 0xcf2a6966, "up" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x322d0022, "cmdq_pkt_wait_complete" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xb7d99956, "of_property_read_variable_u16_array" },
	{ 0xfc102d94, "cmdq_mbox_enable" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x169f5b1f, "device_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x0fca7d66, "of_clk_get_by_name" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x941a2387, "cmdq_util_prebuilt_init" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x166667b7, "dev_pm_opp_get_opp_count" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x1f0a95af, "of_mtk_icc_get" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x6d25698b, "mtk_icc_set_bw" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0xe70e1ef3, "dma_buf_map_attachment_unlocked" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0xf1e3c830, "dma_buf_unmap_attachment_unlocked" },
	{ 0xaaae9064, "dma_buf_get" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x25758a2c, "misc_register" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0x621ae253, "fput" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x037a0cba, "kfree" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbbda18c4, "dma_fence_free" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x60bbb124, "dma_fence_signal_locked" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xff2cba95, "__get_task_comm" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x689f7bde,
	0x79146c3e,
	0xc5b6f236,
	0x188e924c,
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0xaf7cb74b,
	0x3d0ffa5c,
	0xaba63322,
	0xe3ec2f2b,
	0x8b808b7f,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0x31b65f04,
	0x8647f4a4,
	0x22ae5020,
	0xb8d43efc,
	0xa571f6b0,
	0x49cd25ed,
	0x75966ec2,
	0xa823db6e,
	0x0be515ae,
	0xef27af6b,
	0x28ba7b6c,
	0x6091b333,
	0xc8c7229e,
	0xd5977bfb,
	0xed55cabd,
	0xdfcaaee7,
	0xe1d5b76c,
	0x9ec6ca96,
	0x22df72c1,
	0xe9c0c46d,
	0x2be0c009,
	0x75ca79b5,
	0xc3055d20,
	0xe9ffc063,
	0x5d6d21aa,
	0x0cc0c39c,
	0xb9ccd5be,
	0x85178254,
	0x9f6801a4,
	0xd843cd45,
	0x4f11972d,
	0xcf2a6966,
	0x9a85eebb,
	0x322d0022,
	0xe136f93c,
	0xb7d99956,
	0xfc102d94,
	0x365acda7,
	0x1fec5304,
	0x5be9ce07,
	0xea6f49c8,
	0x9166fc03,
	0x8c03d20c,
	0x169f5b1f,
	0x6fc35f2b,
	0xb2fb935e,
	0x0fca7d66,
	0xd4e81a21,
	0x941a2387,
	0xcd6bb6eb,
	0x2ccea269,
	0x166667b7,
	0xc2a5a5eb,
	0xb3bceb42,
	0x1f0a95af,
	0xf644e56a,
	0x2220455c,
	0x6d25698b,
	0x4eb4c414,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x13269d10,
	0xfff4bd7c,
	0xe70e1ef3,
	0xecbe3c62,
	0xf1e3c830,
	0xaaae9064,
	0x2b3df576,
	0x14605535,
	0x25758a2c,
	0xe17134b6,
	0x476b165a,
	0xa916b694,
	0xa843805a,
	0xf61b1f04,
	0x621ae253,
	0x0f013cdc,
	0x3f4547a7,
	0xdeb99119,
	0x037a0cba,
	0xa5526619,
	0xca9360b5,
	0x0296695f,
	0x197d5b60,
	0x34db050b,
	0x4d9b652b,
	0xbbda18c4,
	0x9a835040,
	0xd35cce70,
	0x656e4a6e,
	0x8427cc7b,
	0x60bbb124,
	0x7e19152a,
	0x4b750f53,
	0xe123f3d9,
	0xff2cba95,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0xa65c6def,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mtk_smi_dbg_hang_detect\0"
	"mtk_iommu_register_fault_callback\0"
	"queue_work_on\0"
	"cmdq_util_prebuilt_dump\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"of_property_read_string\0"
	"platform_get_resource\0"
	"of_iomap\0"
	"alloc_chrdev_region\0"
	"cdev_alloc\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"of_property_read_u32_index\0"
	"cmdq_register_device\0"
	"cmdq_mbox_create\0"
	"cmdq_get_usage_cb\0"
	"__mutex_init\0"
	"alloc_workqueue\0"
	"register_pm_notifier\0"
	"of_find_device_by_node\0"
	"device_link_add\0"
	"class_destroy\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"devm_kmalloc\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"cmdq_pkt_create\0"
	"cmdq_mbox_disable\0"
	"ktime_get_real_ts64\0"
	"cmdq_pkt_destroy\0"
	"cmdq_pkt_flush_async\0"
	"__arch_copy_from_user\0"
	"__fortify_panic\0"
	"usleep_range_state\0"
	"down_trylock\0"
	"cmdq_pkt_read_addr\0"
	"cmdq_pkt_write\0"
	"cmdq_pkt_assign_command\0"
	"cmdq_pkt_poll_addr\0"
	"cmdq_pkt_wfe\0"
	"cmdq_pkt_set_event\0"
	"cmdq_pkt_clear_event\0"
	"up\0"
	"__arch_copy_to_user\0"
	"cmdq_pkt_wait_complete\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_variable_u16_array\0"
	"cmdq_mbox_enable\0"
	"set_normalized_timespec64\0"
	"__of_parse_phandle_with_args\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"__flush_workqueue\0"
	"destroy_workqueue\0"
	"device_destroy\0"
	"platform_driver_unregister\0"
	"param_ops_int\0"
	"of_clk_get_by_name\0"
	"pm_runtime_enable\0"
	"cmdq_util_prebuilt_init\0"
	"dev_pm_opp_of_add_table\0"
	"devm_regulator_get_optional\0"
	"dev_pm_opp_get_opp_count\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_put\0"
	"of_mtk_icc_get\0"
	"dev_pm_opp_get_voltage\0"
	"regulator_set_voltage\0"
	"mtk_icc_set_bw\0"
	"__pm_runtime_resume\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"__pm_runtime_idle\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment_unlocked\0"
	"dma_buf_detach\0"
	"dma_buf_unmap_attachment_unlocked\0"
	"dma_buf_get\0"
	"dma_buf_put\0"
	"dma_fence_context_alloc\0"
	"misc_register\0"
	"__kmalloc_cache_noprof\0"
	"sized_strscpy\0"
	"strnlen\0"
	"get_unused_fd_flags\0"
	"sync_file_create\0"
	"fput\0"
	"fd_install\0"
	"put_unused_fd\0"
	"dma_fence_init\0"
	"kfree\0"
	"rb_insert_color\0"
	"rb_next\0"
	"refcount_warn_saturate\0"
	"dma_fence_default_wait\0"
	"_raw_spin_lock_irqsave\0"
	"rb_erase\0"
	"dma_fence_free\0"
	"__list_del_entry_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"snprintf\0"
	"_raw_spin_lock_irq\0"
	"dma_fence_signal_locked\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irq\0"
	"dma_fence_release\0"
	"__get_task_comm\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-smi-dbg,iommu_debug,mtk-cmdq-drv-ext,mtk-icc-core");


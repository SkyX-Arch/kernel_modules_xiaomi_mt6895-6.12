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

KSYMTAB_FUNC(fs_sync_frame, "", "");

SYMBOL_CRC(fs_sync_frame, 0x04bf761a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x401167cc, "_dev_info" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdeef92c3, "devm_pinctrl_put" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x101eb6b2, "of_graph_get_next_endpoint" },
	{ 0x56b4c13e, "v4l2_fwnode_endpoint_parse" },
	{ 0xc18d788e, "v4l2_i2c_subdev_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x11a0b893, "media_entity_pads_init" },
	{ 0x716d059c, "__v4l2_async_register_subdev" },
	{ 0xf79a0cc2, "devm_thermal_of_zone_register" },
	{ 0xe922b94d, "device_create_file" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0x6823b9fe, "v4l2_ctrl_handler_free" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x2562af67, "__v4l2_ctrl_modify_range" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x7929cc56, "__v4l2_subdev_state_get_format" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x7a4c4057, "thermal_zone_device_priv" },
	{ 0xb4ee8f82, "of_graph_get_remote_node" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x037a0cba, "kfree" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xdbe78cfe, "v4l2_async_unregister_subdev" },
	{ 0x0288226a, "wakeup_source_unregister" },
	{ 0x11d6167b, "device_remove_file" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xe3fa5191, "i2c_transfer" },
	{ 0x1b00f04b, "v4l2_ctrl_handler_init_class" },
	{ 0x1f9923b3, "v4l2_ctrl_new_std" },
	{ 0x77287511, "v4l2_ctrl_new_custom" },
	{ 0x323c7d6b, "v4l2_ctrl_new_std_menu_items" },
	{ 0xe4247826, "pm_runtime_get_if_in_use" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x13269d10, "__pm_runtime_idle" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0xb39378cc, "kthread_stop" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xda09b792, "rproc_get_by_phandle" },
	{ 0xfa27aa25, "rproc_boot" },
	{ 0x69f3da31, "rproc_shutdown" },
	{ 0x2827a256, "mtk_ccu_rproc_ipc_send" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0xa0f6226b, "of_find_node_by_phandle" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0x3df40974, "query_external_subdrv_entry" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x4e8b8def,
	0x401167cc,
	0xb4ce05a5,
	0xeae3dfd6,
	0xdeef92c3,
	0x05590c04,
	0xea23ff02,
	0x2ccea269,
	0x1205e506,
	0x20dda19c,
	0x2396c7f0,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x2220455c,
	0x57d5e131,
	0x031dffa4,
	0x54325131,
	0x2ff78d9b,
	0xa571f6b0,
	0x101eb6b2,
	0x56b4c13e,
	0xc18d788e,
	0x656e4a6e,
	0xbcab6ee6,
	0x47a915f1,
	0x11a0b893,
	0x716d059c,
	0xf79a0cc2,
	0xe922b94d,
	0x0f314d3e,
	0x6823b9fe,
	0xc8c7229e,
	0xaf7cb74b,
	0xe2d5255a,
	0xcd6bda8d,
	0xe136f93c,
	0x75ca79b5,
	0x2562af67,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0x7929cc56,
	0xe2822320,
	0x7a4c4057,
	0xb4ee8f82,
	0x85df9b6c,
	0x3b6c41ea,
	0x037a0cba,
	0xe17134b6,
	0x52c5c991,
	0x98cf60b3,
	0xa916b694,
	0xdbe78cfe,
	0x0288226a,
	0x11d6167b,
	0x84dd786f,
	0x92acb4e9,
	0x0f05f001,
	0xefe8a82e,
	0xe3fa5191,
	0x1b00f04b,
	0x1f9923b3,
	0x77287511,
	0x323c7d6b,
	0xe4247826,
	0x88db9f48,
	0x2be0c009,
	0xc4f0da12,
	0xb43f9365,
	0x13269d10,
	0x9a85eebb,
	0xe2964344,
	0xd9a5ea54,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xba0aee2e,
	0xce5bc4d0,
	0xb39378cc,
	0xb3f7646e,
	0x74c134b9,
	0xda09b792,
	0xfa27aa25,
	0x69f3da31,
	0x2827a256,
	0xf3cdc3c6,
	0xa0f6226b,
	0xa823db6e,
	0x3df40974,
	0x4a068d70,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__pm_stay_awake\0"
	"_dev_info\0"
	"_dev_err\0"
	"__const_udelay\0"
	"devm_pinctrl_put\0"
	"__pm_relax\0"
	"devm_clk_get\0"
	"devm_regulator_get_optional\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"clk_set_parent\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"regulator_set_voltage\0"
	"regulator_enable\0"
	"regulator_disable\0"
	"pinctrl_select_state\0"
	"i2c_register_driver\0"
	"__mutex_init\0"
	"of_graph_get_next_endpoint\0"
	"v4l2_fwnode_endpoint_parse\0"
	"v4l2_i2c_subdev_init\0"
	"snprintf\0"
	"sscanf\0"
	"_dev_warn\0"
	"media_entity_pads_init\0"
	"__v4l2_async_register_subdev\0"
	"devm_thermal_of_zone_register\0"
	"device_create_file\0"
	"wakeup_source_register\0"
	"v4l2_ctrl_handler_free\0"
	"devm_kmalloc\0"
	"of_property_read_string\0"
	"strcmp\0"
	"of_property_read_string_helper\0"
	"of_property_read_variable_u32_array\0"
	"__fortify_panic\0"
	"__v4l2_ctrl_modify_range\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"__v4l2_subdev_state_get_format\0"
	"__v4l2_find_nearest_size\0"
	"thermal_zone_device_priv\0"
	"of_graph_get_remote_node\0"
	"strsep\0"
	"kstrtouint\0"
	"kfree\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"strlen\0"
	"strnlen\0"
	"v4l2_async_unregister_subdev\0"
	"wakeup_source_unregister\0"
	"device_remove_file\0"
	"i2c_del_driver\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"i2c_transfer\0"
	"v4l2_ctrl_handler_init_class\0"
	"v4l2_ctrl_new_std\0"
	"v4l2_ctrl_new_custom\0"
	"v4l2_ctrl_new_std_menu_items\0"
	"pm_runtime_get_if_in_use\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"ktime_get_with_offset\0"
	"ktime_get\0"
	"__pm_runtime_idle\0"
	"__arch_copy_to_user\0"
	"__wake_up\0"
	"__init_waitqueue_head\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"kthread_stop\0"
	"kthread_should_stop\0"
	"__sw_hweight32\0"
	"rproc_get_by_phandle\0"
	"rproc_boot\0"
	"rproc_shutdown\0"
	"mtk_ccu_rproc_ipc_send\0"
	"of_find_compatible_node\0"
	"of_find_node_by_phandle\0"
	"of_find_device_by_node\0"
	"query_external_subdrv_entry\0"
	"i2c_transfer_buffer_flags\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_ccu,imgsensor-glue");

MODULE_ALIAS("of:N*T*Cmediatek,imgsensor0");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor0C*");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor1");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor1C*");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor2");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor2C*");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor3");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor3C*");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor4");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor4C*");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor5");
MODULE_ALIAS("of:N*T*Cmediatek,imgsensor5C*");
MODULE_ALIAS("i2c:imgsensor");

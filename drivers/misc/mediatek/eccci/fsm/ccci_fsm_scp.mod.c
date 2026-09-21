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
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xba637490, "ccci_dump_write" },
	{ 0x92997ed8, "_printk" },
	{ 0x710d2d97, "ccci_md_get_smem_by_user_id" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x3b31bb5b, "ccci_fsm_get_md_state" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb92dd0be, "ccci_skb_queue_init" },
	{ 0x65bb94f6, "mtk_ipi_register" },
	{ 0x9cb5d1d2, "scp_A_register_notify" },
	{ 0xafa7d906, "register_ccci_sys_call_back" },
	{ 0xa60386f1, "get_modem_is_enabled" },
	{ 0xac93498d, "ccci_register_md_state_receiver" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x4a353d20, "mtk_ipi_send" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x08a54426, "fsm_get_entity" },
	{ 0xc678f1c6, "ccci_skb_dequeue" },
	{ 0xa398699b, "ccci_port_send_msg_to_md" },
	{ 0x228a686e, "ccci_free_skb" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x937c158a, "ccci_alloc_skb" },
	{ 0x7594d536, "skb_put" },
	{ 0x36e7ce2d, "ccci_skb_enqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xaba63322, "of_iomap" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf79e3c4, "ccci_fsm_get_md_state_for_user" },
	{ 0xa0e7e691, "ccci_get_per_md_data" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xcd709e2e, "scp_ipidev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf93aae46,
	0xba637490,
	0x92997ed8,
	0x710d2d97,
	0x18b48e28,
	0x3b31bb5b,
	0xa571f6b0,
	0xd9a5ea54,
	0xb92dd0be,
	0x65bb94f6,
	0x9cb5d1d2,
	0xafa7d906,
	0xa60386f1,
	0xac93498d,
	0xd5977bfb,
	0x4a353d20,
	0xed55cabd,
	0x08a54426,
	0xc678f1c6,
	0xa398699b,
	0x228a686e,
	0xc905402b,
	0xfa4d3c24,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x937c158a,
	0x7594d536,
	0x36e7ce2d,
	0xc5b6f236,
	0xaba63322,
	0xe136f93c,
	0xea23ff02,
	0xf3cdc3c6,
	0x31b65f04,
	0xa079425d,
	0x52c5c991,
	0xf9a482f9,
	0xbf79e3c4,
	0xa0e7e691,
	0x12db679a,
	0xcd709e2e,
	0x2d3385d3,
	0x0f05f001,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__arm_smccc_smc\0"
	"ccci_dump_write\0"
	"_printk\0"
	"ccci_md_get_smem_by_user_id\0"
	"__memset_io\0"
	"ccci_fsm_get_md_state\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"ccci_skb_queue_init\0"
	"mtk_ipi_register\0"
	"scp_A_register_notify\0"
	"register_ccci_sys_call_back\0"
	"get_modem_is_enabled\0"
	"ccci_register_md_state_receiver\0"
	"mutex_lock\0"
	"mtk_ipi_send\0"
	"mutex_unlock\0"
	"fsm_get_entity\0"
	"ccci_skb_dequeue\0"
	"ccci_port_send_msg_to_md\0"
	"ccci_free_skb\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"ccci_alloc_skb\0"
	"skb_put\0"
	"ccci_skb_enqueue\0"
	"queue_work_on\0"
	"of_iomap\0"
	"of_property_read_variable_u32_array\0"
	"devm_clk_get\0"
	"of_find_compatible_node\0"
	"of_property_read_u32_index\0"
	"of_property_count_elems_of_size\0"
	"__kmalloc_noprof\0"
	"msleep\0"
	"ccci_fsm_get_md_state_for_user\0"
	"ccci_get_per_md_data\0"
	"__platform_driver_register\0"
	"scp_ipidev\0"
	"system_wq\0"
	"mem_alloc_profiling_key\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "ccci_util_lib,ccci_md_all,mtk_tinysys_ipi,scp");


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

KSYMTAB_FUNC(mmdvfs_debug_record_opp_set_fp, "_gpl", "");
KSYMTAB_FUNC(register_mmdvfs_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_mmdvfs_notifier, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_ap_ccf_enable_notifier_set_fp, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_ccf_enable_mutex, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_vcp_cb_ready, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_ap_ccf_enable, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_lp_mode, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_dbg_clk_set, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_force_step, "_gpl", "");
KSYMTAB_FUNC(mmdvfs_set_vote_step, "_gpl", "");
KSYMTAB_FUNC(mtk_mmdvfs_aov_enable, "_gpl", "");

SYMBOL_CRC(mmdvfs_debug_record_opp_set_fp, 0x48b553fe, "_gpl");
SYMBOL_CRC(register_mmdvfs_notifier, 0xadacaa18, "_gpl");
SYMBOL_CRC(unregister_mmdvfs_notifier, 0x88f68e11, "_gpl");
SYMBOL_CRC(mmdvfs_ap_ccf_enable_notifier_set_fp, 0x2bac5166, "_gpl");
SYMBOL_CRC(mmdvfs_set_ccf_enable_mutex, 0xbf56497f, "_gpl");
SYMBOL_CRC(mmdvfs_set_vcp_cb_ready, 0x0076db22, "_gpl");
SYMBOL_CRC(mmdvfs_ap_ccf_enable, 0xc20c04f2, "_gpl");
SYMBOL_CRC(mmdvfs_set_lp_mode, 0x2df41765, "_gpl");
SYMBOL_CRC(mmdvfs_dbg_clk_set, 0x73eca761, "_gpl");
SYMBOL_CRC(mmdvfs_set_force_step, 0xa8cd08ee, "_gpl");
SYMBOL_CRC(mmdvfs_set_vote_step, 0x84175fc6, "_gpl");
SYMBOL_CRC(mtk_mmdvfs_aov_enable, 0xc210be27, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9051672, "blocking_notifier_chain_register" },
	{ 0x3e54ac69, "blocking_notifier_chain_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0xac3f2a9a, "devm_regulator_register_notifier" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x0ba6cfb6, "devm_regulator_unregister_notifier" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x482d47c8, "blocking_notifier_call_chain" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd77d7c9c, "mmprofile_log_ex" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5a921311, "strncmp" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x899ea9dc, "mmprofile_enable" },
	{ 0x7ffb1903, "mmprofile_register_event" },
	{ 0x560a0e63, "mmprofile_enable_event_recursive" },
	{ 0xda38583a, "mmprofile_start" },
	{ 0x6b201699, "of_find_property" },
	{ 0xeab7088e, "of_prop_next_string" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x2c235092, "of_prop_next_u32" },
	{ 0xcd6bb6eb, "dev_pm_opp_of_add_table" },
	{ 0xc2a5a5eb, "dev_pm_opp_find_freq_ceil" },
	{ 0xf644e56a, "dev_pm_opp_get_voltage" },
	{ 0xb3bceb42, "dev_pm_opp_put" },
	{ 0x9a807c66, "devm_regulator_get" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0x03b28b1f, "regulator_get" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x686fd714, "mtk_smi_dbg_register_notifier" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x92acb4e9, "param_ops_uint" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd9051672,
	0x3e54ac69,
	0x92997ed8,
	0xd5977bfb,
	0xed55cabd,
	0xac3f2a9a,
	0x2220455c,
	0x0ba6cfb6,
	0xa06ad99d,
	0x656e4a6e,
	0x482d47c8,
	0xb43f9365,
	0xd77d7c9c,
	0x76d9b876,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0xb6e6d99d,
	0x5a921311,
	0x2396c7f0,
	0x8c8569cb,
	0x12db679a,
	0x899ea9dc,
	0x7ffb1903,
	0x560a0e63,
	0xda38583a,
	0x6b201699,
	0xeab7088e,
	0xea23ff02,
	0x2c235092,
	0xcd6bb6eb,
	0xc2a5a5eb,
	0xf644e56a,
	0xb3bceb42,
	0x9a807c66,
	0xa4f72277,
	0x03b28b1f,
	0xa571f6b0,
	0x686fd714,
	0xc8c7229e,
	0xe136f93c,
	0xe17134b6,
	0x1fec5304,
	0x6fc35f2b,
	0x92acb4e9,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"blocking_notifier_chain_register\0"
	"blocking_notifier_chain_unregister\0"
	"_printk\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"devm_regulator_register_notifier\0"
	"regulator_set_voltage\0"
	"devm_regulator_unregister_notifier\0"
	"regulator_get_voltage\0"
	"snprintf\0"
	"blocking_notifier_call_chain\0"
	"ktime_get\0"
	"mmprofile_log_ex\0"
	"clk_set_rate\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"strncmp\0"
	"clk_set_parent\0"
	"kstrtoint\0"
	"__platform_driver_register\0"
	"mmprofile_enable\0"
	"mmprofile_register_event\0"
	"mmprofile_enable_event_recursive\0"
	"mmprofile_start\0"
	"of_find_property\0"
	"of_prop_next_string\0"
	"devm_clk_get\0"
	"of_prop_next_u32\0"
	"dev_pm_opp_of_add_table\0"
	"dev_pm_opp_find_freq_ceil\0"
	"dev_pm_opp_get_voltage\0"
	"dev_pm_opp_put\0"
	"devm_regulator_get\0"
	"_dev_notice\0"
	"regulator_get\0"
	"__mutex_init\0"
	"mtk_smi_dbg_register_notifier\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"__kmalloc_cache_noprof\0"
	"__of_parse_phandle_with_args\0"
	"platform_driver_unregister\0"
	"param_ops_uint\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mmprofile,mtk-smi-dbg");


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
	{ 0x63655034, "mmc_detect_change" },
	{ 0xd20513d6, "mmc_hw_reset" },
	{ 0x401167cc, "_dev_info" },
	{ 0x678bfcca, "mmc_regulator_set_ocr" },
	{ 0x031dffa4, "regulator_disable" },
	{ 0x2b7da94e, "mmc_gpio_get_cd" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x29f44de5, "mmc_alloc_host" },
	{ 0x20a0ddff, "mmc_of_parse" },
	{ 0x329da95b, "devm_platform_ioremap_resource" },
	{ 0x3d0ffa5c, "platform_get_resource" },
	{ 0x9f0ef8fa, "devm_ioremap_resource" },
	{ 0x75586391, "mmc_regulator_get_supply" },
	{ 0xf7ca28dd, "platform_get_irq" },
	{ 0x1205e506, "devm_pinctrl_get" },
	{ 0x20dda19c, "pinctrl_lookup_state" },
	{ 0x54325131, "pinctrl_select_state" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3f7bd487, "mmc_can_gpio_cd" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0x2220455c, "regulator_set_voltage" },
	{ 0x52384e38, "cpu_latency_qos_add_request" },
	{ 0x8ad898b0, "pm_runtime_set_autosuspend_delay" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x5ed9e92c, "mmc_add_host" },
	{ 0xed9640ab, "mmc_dbg_register" },
	{ 0xf14c3168, "mmc_rpmb_register" },
	{ 0xd273017c, "cpu_latency_qos_remove_request" },
	{ 0xdeef92c3, "devm_pinctrl_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x302c34fc, "mmc_free_host" },
	{ 0xc40993fe, "device_property_read_u32_array" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xea23ff02, "devm_clk_get" },
	{ 0x32df1fff, "devm_clk_get_optional" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x66b972b0, "devm_clk_bulk_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1051d96a, "__devm_reset_control_get" },
	{ 0x2ccea269, "devm_regulator_get_optional" },
	{ 0x49eaeb64, "of_icc_get" },
	{ 0x5c3524de, "dvfsrc_get_required_opp_peak_bw" },
	{ 0xaf7cb74b, "of_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b201699, "of_find_property" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb318cbab, "of_find_node_opts_by_path" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x64eae64a, "mmc_gpio_get_ro" },
	{ 0xc6970ad9, "dma_unmap_sg_attrs" },
	{ 0xe5960168, "dma_map_sg_attrs" },
	{ 0xd180567c, "mmc_mtk_biolog_send_command" },
	{ 0x6954a460, "mmc_mtk_biolog_check" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86a50ae0, "mod_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e87b2ff, "cancel_delayed_work" },
	{ 0x892b2faa, "mmc_mtk_biolog_transfer_req_compl" },
	{ 0xa0efe88d, "mmc_request_done" },
	{ 0xa0ed6889, "sdio_signal_irq" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xac3f2a9a, "devm_regulator_register_notifier" },
	{ 0x57d5e131, "regulator_enable" },
	{ 0x0ba6cfb6, "devm_regulator_unregister_notifier" },
	{ 0x5d37f189, "gpio_dump_regs_range" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc671da0e, "mmc_regulator_set_vqmmc" },
	{ 0xa06ad99d, "regulator_get_voltage" },
	{ 0x896aae41, "mmc_send_tuning" },
	{ 0x66cf86e1, "mmc_get_ext_csd" },
	{ 0x037a0cba, "kfree" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x5a9cfed6, "dma_alloc_attrs" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x0ae3545d, "msdc_dump_info" },
	{ 0x22ce85b5, "cqhci_irq" },
	{ 0x51786ad8, "__irq_apply_affinity_hint" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xe5e55228, "__cpuhp_state_add_instance" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x95585423, "devm_gpiod_get_index" },
	{ 0x7ec9701a, "gpiod_to_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x146a11fc, "__pm_runtime_set_status" },
	{ 0xfd074c74, "__pm_runtime_use_autosuspend" },
	{ 0x5c27c40f, "__pm_runtime_disable" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x78cf2345, "dma_free_attrs" },
	{ 0x65f23c35, "mmc_remove_host" },
	{ 0xb917c850, "mmc_mtk_biolog_exit" },
	{ 0x4eb4c414, "__pm_runtime_resume" },
	{ 0x18245177, "__cpuhp_state_remove_instance" },
	{ 0xf432f7e7, "pm_runtime_force_suspend" },
	{ 0xf7316ea6, "pm_runtime_force_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x1b456e2e, "set_mmc_perf_mode" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x017de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x63655034,
	0xd20513d6,
	0x401167cc,
	0x678bfcca,
	0x031dffa4,
	0x2b7da94e,
	0x6b722180,
	0x0c1a5ee3,
	0x12db679a,
	0xb4ce05a5,
	0x29f44de5,
	0x20a0ddff,
	0x329da95b,
	0x3d0ffa5c,
	0x9f0ef8fa,
	0x75586391,
	0xf7ca28dd,
	0x1205e506,
	0x20dda19c,
	0x54325131,
	0x14fe5355,
	0x556e4390,
	0x3f7bd487,
	0xea6f49c8,
	0xc6f46339,
	0xffeedf6a,
	0xf9583f23,
	0x2220455c,
	0x52384e38,
	0x8ad898b0,
	0xd4e81a21,
	0x5ed9e92c,
	0xed9640ab,
	0xf14c3168,
	0xd273017c,
	0xdeef92c3,
	0xedc03953,
	0x302c34fc,
	0xc40993fe,
	0x3b1b6444,
	0x1fec5304,
	0xea23ff02,
	0x32df1fff,
	0x2396c7f0,
	0x66b972b0,
	0x7c9a7371,
	0x815588a6,
	0xb077e70a,
	0x1051d96a,
	0x2ccea269,
	0x49eaeb64,
	0x5c3524de,
	0xaf7cb74b,
	0x5a921311,
	0xe136f93c,
	0x6b201699,
	0x1e6d26a8,
	0xb318cbab,
	0xc5b6f236,
	0x64eae64a,
	0xc6970ad9,
	0xe5960168,
	0xd180567c,
	0x6954a460,
	0x34db050b,
	0x86a50ae0,
	0xeae3dfd6,
	0x9e87b2ff,
	0x892b2faa,
	0xa0efe88d,
	0xa0ed6889,
	0xfbe215e4,
	0xc905402b,
	0xfa4d3c24,
	0xb43f9365,
	0xc3055d20,
	0xd35cce70,
	0xe94986d6,
	0x13d0adf7,
	0xf23fcb99,
	0xac3f2a9a,
	0x57d5e131,
	0x0ba6cfb6,
	0x5d37f189,
	0x63150e06,
	0xb6e6d99d,
	0xc671da0e,
	0xa06ad99d,
	0x896aae41,
	0x66cf86e1,
	0x037a0cba,
	0x40863ba1,
	0x5a9cfed6,
	0xead5c8e5,
	0xc7a7e770,
	0x63c08029,
	0x6c4b6684,
	0xb2210d64,
	0xba8fbd64,
	0xb5b54b34,
	0x0ae3545d,
	0x22ce85b5,
	0x51786ad8,
	0xb66eb73f,
	0xe5e55228,
	0xaab744b7,
	0x95585423,
	0x7ec9701a,
	0x7522f3ba,
	0x27bbf221,
	0xce2840e7,
	0x146a11fc,
	0xfd074c74,
	0x5c27c40f,
	0x479f7d4b,
	0x78cf2345,
	0x65f23c35,
	0xb917c850,
	0x4eb4c414,
	0x18245177,
	0xf432f7e7,
	0xf7316ea6,
	0xfcec0987,
	0x6c9565df,
	0x1b456e2e,
	0xf93aae46,
	0x6fc35f2b,
	0x2d3385d3,
	0x15ba50a6,
	0xaf56600a,
	0x62ad2053,
	0x017de3d5,
	0xdcb764ad,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"mmc_detect_change\0"
	"mmc_hw_reset\0"
	"_dev_info\0"
	"mmc_regulator_set_ocr\0"
	"regulator_disable\0"
	"mmc_gpio_get_cd\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"__platform_driver_register\0"
	"_dev_err\0"
	"mmc_alloc_host\0"
	"mmc_of_parse\0"
	"devm_platform_ioremap_resource\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"mmc_regulator_get_supply\0"
	"platform_get_irq\0"
	"devm_pinctrl_get\0"
	"pinctrl_lookup_state\0"
	"pinctrl_select_state\0"
	"of_device_get_match_data\0"
	"clk_get_rate\0"
	"mmc_can_gpio_cd\0"
	"dma_set_coherent_mask\0"
	"init_timer_key\0"
	"delayed_work_timer_fn\0"
	"devm_request_threaded_irq\0"
	"regulator_set_voltage\0"
	"cpu_latency_qos_add_request\0"
	"pm_runtime_set_autosuspend_delay\0"
	"pm_runtime_enable\0"
	"mmc_add_host\0"
	"mmc_dbg_register\0"
	"mmc_rpmb_register\0"
	"cpu_latency_qos_remove_request\0"
	"devm_pinctrl_put\0"
	"iounmap\0"
	"mmc_free_host\0"
	"device_property_read_u32_array\0"
	"of_get_property\0"
	"__of_parse_phandle_with_args\0"
	"devm_clk_get\0"
	"devm_clk_get_optional\0"
	"clk_set_parent\0"
	"devm_clk_bulk_get_optional\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_unprepare\0"
	"__devm_reset_control_get\0"
	"devm_regulator_get_optional\0"
	"of_icc_get\0"
	"dvfsrc_get_required_opp_peak_bw\0"
	"of_property_read_string\0"
	"strncmp\0"
	"of_property_read_variable_u32_array\0"
	"of_find_property\0"
	"strstr\0"
	"of_find_node_opts_by_path\0"
	"queue_work_on\0"
	"mmc_gpio_get_ro\0"
	"dma_unmap_sg_attrs\0"
	"dma_map_sg_attrs\0"
	"mmc_mtk_biolog_send_command\0"
	"mmc_mtk_biolog_check\0"
	"_raw_spin_lock_irqsave\0"
	"mod_delayed_work_on\0"
	"__const_udelay\0"
	"cancel_delayed_work\0"
	"mmc_mtk_biolog_transfer_req_compl\0"
	"mmc_request_done\0"
	"sdio_signal_irq\0"
	"sg_next\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"ktime_get\0"
	"usleep_range_state\0"
	"_raw_spin_unlock_irqrestore\0"
	"sched_clock\0"
	"__kfifo_out\0"
	"__kfifo_in\0"
	"devm_regulator_register_notifier\0"
	"regulator_enable\0"
	"devm_regulator_unregister_notifier\0"
	"gpio_dump_regs_range\0"
	"clk_get_parent\0"
	"clk_disable\0"
	"mmc_regulator_set_vqmmc\0"
	"regulator_get_voltage\0"
	"mmc_send_tuning\0"
	"mmc_get_ext_csd\0"
	"kfree\0"
	"ioremap_prot\0"
	"dma_alloc_attrs\0"
	"clk_bulk_prepare\0"
	"clk_bulk_enable\0"
	"clk_bulk_unprepare\0"
	"reset_control_assert\0"
	"reset_control_deassert\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"msdc_dump_info\0"
	"cqhci_irq\0"
	"__irq_apply_affinity_hint\0"
	"__cpuhp_setup_state\0"
	"__cpuhp_state_add_instance\0"
	"__cpuhp_remove_state\0"
	"devm_gpiod_get_index\0"
	"gpiod_to_irq\0"
	"irq_modify_status\0"
	"disable_irq_nosync\0"
	"irq_set_irq_wake\0"
	"__pm_runtime_set_status\0"
	"__pm_runtime_use_autosuspend\0"
	"__pm_runtime_disable\0"
	"clk_bulk_disable\0"
	"dma_free_attrs\0"
	"mmc_remove_host\0"
	"mmc_mtk_biolog_exit\0"
	"__pm_runtime_resume\0"
	"__cpuhp_state_remove_instance\0"
	"pm_runtime_force_suspend\0"
	"pm_runtime_force_resume\0"
	"enable_irq\0"
	"cpu_latency_qos_update_request\0"
	"set_mmc_perf_mode\0"
	"__arm_smccc_smc\0"
	"platform_driver_unregister\0"
	"system_wq\0"
	"jiffies\0"
	"arm64_use_ng_mappings\0"
	"cpu_bit_bitmap\0"
	"nr_cpu_ids\0"
	"memset\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-mmc-dbg,rpmb-mtk,mtk-dvfsrc,blocktag,pinctrl-mtk-common-v2_debug,cqhci");

MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6761-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6768-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6877-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,common-mmc-v2");
MODULE_ALIAS("of:N*T*Cmediatek,common-mmc-v2C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6886-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6897-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6989-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6991-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6833-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6789-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6853-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6781-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6993-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6858-mmcC*");

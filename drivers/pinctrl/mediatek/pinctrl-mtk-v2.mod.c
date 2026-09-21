#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_eint_v2_do_suspend, "_gpl", "");
KSYMTAB_FUNC(mtk_eint_v2_do_resume, "_gpl", "");
KSYMTAB_FUNC(mtk_eint_v2_set_debounce, "_gpl", "");
KSYMTAB_FUNC(mtk_eint_v2_find_irq, "_gpl", "");
KSYMTAB_FUNC(dump_eint_pin_status, "_gpl", "");
KSYMTAB_FUNC(mtk_eint_v2_do_init, "_gpl", "");
KSYMTAB_FUNC(mtk_hw_set_value, "_gpl", "");
KSYMTAB_FUNC(mtk_hw_get_value, "_gpl", "");
KSYMTAB_FUNC(mtk_eh_ctrl, "_gpl", "");
KSYMTAB_FUNC(mtk_is_virt_gpio, "_gpl", "");
KSYMTAB_FUNC(mtk_build_eint, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_disable_set, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_disable_get, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_set, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_get, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_disable_set_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_disable_get_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_set_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_get_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_set_combo, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_bias_get_combo, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_set, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_get, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_set_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_get_rev1, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_set_raw, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_drive_get_raw, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_pull_set, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_pull_get, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_drive_set, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_drive_get, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_drive_set_raw, "_gpl", "");
KSYMTAB_FUNC(mtk_pinconf_adv_drive_get_raw, "_gpl", "");
KSYMTAB_FUNC(mtk_pctrl_show_one_pin, "_gpl", "");
KSYMTAB_FUNC(mtk_paris_pinctrl_probe, "_gpl", "");
KSYMTAB_DATA(mtk_paris_pinctrl_pm_ops, "_gpl", "");
KSYMTAB_FUNC(mt63xx_hw_set_value, "_gpl", "");
KSYMTAB_FUNC(mt63xx_pinctrl_probe, "_gpl", "");

SYMBOL_CRC(mtk_eint_v2_do_suspend, 0x5ab4bf18, "_gpl");
SYMBOL_CRC(mtk_eint_v2_do_resume, 0xd5273777, "_gpl");
SYMBOL_CRC(mtk_eint_v2_set_debounce, 0xddf64658, "_gpl");
SYMBOL_CRC(mtk_eint_v2_find_irq, 0x3adf8d30, "_gpl");
SYMBOL_CRC(dump_eint_pin_status, 0x0edba7aa, "_gpl");
SYMBOL_CRC(mtk_eint_v2_do_init, 0x6326c8d6, "_gpl");
SYMBOL_CRC(mtk_hw_set_value, 0xb5c3e6c8, "_gpl");
SYMBOL_CRC(mtk_hw_get_value, 0x686f0092, "_gpl");
SYMBOL_CRC(mtk_eh_ctrl, 0x5b41773b, "_gpl");
SYMBOL_CRC(mtk_is_virt_gpio, 0xa9eea16f, "_gpl");
SYMBOL_CRC(mtk_build_eint, 0x0d05e300, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_disable_set, 0x616ce92b, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_disable_get, 0x767e1985, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_set, 0x2dfa890b, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_get, 0xf619a8c4, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_disable_set_rev1, 0xc5eab5de, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_disable_get_rev1, 0x2f615e6d, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_set_rev1, 0x473e1e92, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_get_rev1, 0xce3855bc, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_set_combo, 0x5414c237, "_gpl");
SYMBOL_CRC(mtk_pinconf_bias_get_combo, 0x329c50b9, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_set, 0x051436e1, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_get, 0xc50c4ea2, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_set_rev1, 0xf14dbc93, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_get_rev1, 0x92c7db27, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_set_raw, 0x6b94e2d7, "_gpl");
SYMBOL_CRC(mtk_pinconf_drive_get_raw, 0x3acd3602, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_pull_set, 0xfc64e8ff, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_pull_get, 0x64aaed58, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_drive_set, 0xd83dd58f, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_drive_get, 0xb7662302, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_drive_set_raw, 0xa7ed3d9c, "_gpl");
SYMBOL_CRC(mtk_pinconf_adv_drive_get_raw, 0x8f3be692, "_gpl");
SYMBOL_CRC(mtk_pctrl_show_one_pin, 0x100b3e08, "_gpl");
SYMBOL_CRC(mtk_paris_pinctrl_probe, 0x9fba2a16, "_gpl");
SYMBOL_CRC(mtk_paris_pinctrl_pm_ops, 0x78300635, "_gpl");
SYMBOL_CRC(mt63xx_hw_set_value, 0x09bf9f5c, "_gpl");
SYMBOL_CRC(mt63xx_pinctrl_probe, 0x99029abd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x7726dda9, "irq_get_irq_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0xa0f6226b, "of_find_node_by_phandle" },
	{ 0x401167cc, "_dev_info" },
	{ 0xaba63322, "of_iomap" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x7c611278, "irq_of_parse_and_map" },
	{ 0x1b9dd860, "handle_level_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x0d587571, "irq_set_chained_handler_and_data" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xcd6bda8d, "of_property_read_string_helper" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0x8b262a92, "irq_domain_instantiate" },
	{ 0xb6f0610b, "irq_create_mapping_affinity" },
	{ 0x9b294a8f, "irq_set_chip_and_handler_name" },
	{ 0x46ecb7bc, "gpiochip_lock_as_irq" },
	{ 0x2e635f4d, "gpiochip_unlock_as_irq" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x06e9d756, "irq_domain_simple_ops" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa4f72277, "_dev_notice" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b201699, "of_find_property" },
	{ 0x90000450, "device_get_match_data" },
	{ 0x59560bc2, "devm_pinctrl_register_and_init" },
	{ 0x64e6a686, "pinctrl_enable" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x49dc0e6c, "dev_get_regmap" },
	{ 0xd6c9961b, "pinctrl_utils_free_map" },
	{ 0xf2fcabe1, "pinctrl_dev_get_drvdata" },
	{ 0xc8f2ae9d, "seq_printf" },
	{ 0x7c7f271f, "of_get_next_child" },
	{ 0xf277e371, "pinconf_generic_parse_dt_config" },
	{ 0x2332cd67, "pinctrl_utils_reserve_map" },
	{ 0xecd8a936, "pinctrl_utils_add_map_configs" },
	{ 0x037a0cba, "kfree" },
	{ 0xf90b955d, "gpiochip_generic_request" },
	{ 0x1d29eab1, "gpiochip_generic_free" },
	{ 0x0c6efa1b, "gpiochip_add_data_with_key" },
	{ 0x0f44df38, "gpiochip_get_data" },
	{ 0x5ba0bdfa, "pinctrl_gpio_direction_input" },
	{ 0xfdbdfbda, "pinctrl_gpio_direction_output" },
	{ 0x576b05bf, "regmap_update_bits_base" },
	{ 0x64311477, "regmap_read" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb4ce05a5,
	0x7726dda9,
	0xeae3dfd6,
	0x656e4a6e,
	0x3b1b6444,
	0xa0f6226b,
	0x401167cc,
	0xaba63322,
	0x31b65f04,
	0x7c611278,
	0x1b9dd860,
	0x20a789ac,
	0x0d587571,
	0x6a19ccfc,
	0xc905402b,
	0xfa4d3c24,
	0x1fef36c1,
	0x6b722180,
	0x0c1a5ee3,
	0xe136f93c,
	0xc8c7229e,
	0xcd6bda8d,
	0xa079425d,
	0x8b262a92,
	0xb6f0610b,
	0x9b294a8f,
	0x46ecb7bc,
	0x2e635f4d,
	0x7ceaf0d5,
	0x98cf60b3,
	0x3b6c41ea,
	0x06e9d756,
	0x34db050b,
	0xa4f72277,
	0xd35cce70,
	0x6b201699,
	0x90000450,
	0x59560bc2,
	0x64e6a686,
	0x47a915f1,
	0x3c3ff9fd,
	0x49dc0e6c,
	0xd6c9961b,
	0xf2fcabe1,
	0xc8f2ae9d,
	0x7c7f271f,
	0xf277e371,
	0x2332cd67,
	0xecd8a936,
	0x037a0cba,
	0xf90b955d,
	0x1d29eab1,
	0x0c6efa1b,
	0x0f44df38,
	0x5ba0bdfa,
	0xfdbdfbda,
	0x576b05bf,
	0x64311477,
	0xe17134b6,
	0x0f05f001,
	0xefe8a82e,
	0xf0fdf6cb,
	0x4829a47e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_err\0"
	"irq_get_irq_data\0"
	"__const_udelay\0"
	"snprintf\0"
	"of_get_property\0"
	"of_find_node_by_phandle\0"
	"_dev_info\0"
	"of_iomap\0"
	"of_property_read_u32_index\0"
	"irq_of_parse_and_map\0"
	"handle_level_irq\0"
	"irq_set_chip_data\0"
	"irq_set_chained_handler_and_data\0"
	"driver_create_file\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"__irq_resolve_mapping\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"of_property_read_variable_u32_array\0"
	"devm_kmalloc\0"
	"of_property_read_string_helper\0"
	"of_property_count_elems_of_size\0"
	"irq_domain_instantiate\0"
	"irq_create_mapping_affinity\0"
	"irq_set_chip_and_handler_name\0"
	"gpiochip_lock_as_irq\0"
	"gpiochip_unlock_as_irq\0"
	"generic_handle_irq\0"
	"strlen\0"
	"kstrtouint\0"
	"irq_domain_simple_ops\0"
	"_raw_spin_lock_irqsave\0"
	"_dev_notice\0"
	"_raw_spin_unlock_irqrestore\0"
	"of_find_property\0"
	"device_get_match_data\0"
	"devm_pinctrl_register_and_init\0"
	"pinctrl_enable\0"
	"_dev_warn\0"
	"sprintf\0"
	"dev_get_regmap\0"
	"pinctrl_utils_free_map\0"
	"pinctrl_dev_get_drvdata\0"
	"seq_printf\0"
	"of_get_next_child\0"
	"pinconf_generic_parse_dt_config\0"
	"pinctrl_utils_reserve_map\0"
	"pinctrl_utils_add_map_configs\0"
	"kfree\0"
	"gpiochip_generic_request\0"
	"gpiochip_generic_free\0"
	"gpiochip_add_data_with_key\0"
	"gpiochip_get_data\0"
	"pinctrl_gpio_direction_input\0"
	"pinctrl_gpio_direction_output\0"
	"regmap_update_bits_base\0"
	"regmap_read\0"
	"__kmalloc_cache_noprof\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


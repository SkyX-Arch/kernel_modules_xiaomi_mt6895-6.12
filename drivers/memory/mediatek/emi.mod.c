#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mtk_emicen_get_ch_cnt, "", "");
KSYMTAB_FUNC(mtk_emicen_get_rk_cnt, "", "");
KSYMTAB_FUNC(mtk_emicen_get_rk_size, "", "");
KSYMTAB_FUNC(mtk_emicen_addr2dram, "", "");
KSYMTAB_FUNC(mtk_emiisu_record_off, "", "");
KSYMTAB_FUNC(mtk_emiisu_record_on, "", "");
KSYMTAB_FUNC(get_emi_total_bw, "", "");
KSYMTAB_FUNC(mtk_emidbg_dump, "", "");

SYMBOL_CRC(mtk_emicen_get_ch_cnt, 0xd702d989, "");
SYMBOL_CRC(mtk_emicen_get_rk_cnt, 0x8e301cff, "");
SYMBOL_CRC(mtk_emicen_get_rk_size, 0x0a55c4ab, "");
SYMBOL_CRC(mtk_emicen_addr2dram, 0x54c2ec9a, "");
SYMBOL_CRC(mtk_emiisu_record_off, 0x4bc2042c, "");
SYMBOL_CRC(mtk_emiisu_record_on, 0x4e9bb07e, "");
SYMBOL_CRC(get_emi_total_bw, 0x76a9029e, "");
SYMBOL_CRC(mtk_emidbg_dump, 0x51b8698f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x6a19ccfc, "driver_create_file" },
	{ 0x401167cc, "_dev_info" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0x9dbbc41f, "of_find_node_by_type" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x6b201699, "of_find_property" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xa079425d, "of_property_count_elems_of_size" },
	{ 0xaba63322, "of_iomap" },
	{ 0x31b65f04, "of_property_read_u32_index" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6b279ab4, "of_property_read_variable_u64_array" },
	{ 0x6b722180, "log_read_mmio" },
	{ 0x0c1a5ee3, "log_post_read_mmio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xc905402b, "log_write_mmio" },
	{ 0xfa4d3c24, "log_post_write_mmio" },
	{ 0x66bcb0f8, "of_property_read_u64" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x9a1ddf64, "sysfs_create_bin_file" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xfd2c5a12, "sysfs_remove_bin_file" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x037a0cba, "kfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x9166fada, "strncpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x92997ed8,
	0x12db679a,
	0x6a19ccfc,
	0x401167cc,
	0x14fe5355,
	0x9dbbc41f,
	0xb4ce05a5,
	0x6b201699,
	0x5a6368f5,
	0xa079425d,
	0xaba63322,
	0x31b65f04,
	0x1fec5304,
	0xc8c7229e,
	0xe136f93c,
	0x6b279ab4,
	0x6b722180,
	0x0c1a5ee3,
	0x656e4a6e,
	0x5c3c7387,
	0x6b2dc060,
	0xc38c83b8,
	0xe94986d6,
	0xc905402b,
	0xfa4d3c24,
	0x66bcb0f8,
	0x40863ba1,
	0x9a1ddf64,
	0xc6f46339,
	0x65e0d6d7,
	0xfd2c5a12,
	0xdc0e4855,
	0x85df9b6c,
	0xd5977bfb,
	0xed55cabd,
	0x037a0cba,
	0x98cf60b3,
	0xe17134b6,
	0x9166fada,
	0x15ba50a6,
	0xaf56600a,
	0x0f05f001,
	0xefe8a82e,
	0x34db050b,
	0xf93aae46,
	0xd35cce70,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"__platform_driver_register\0"
	"driver_create_file\0"
	"_dev_info\0"
	"of_device_get_match_data\0"
	"of_find_node_by_type\0"
	"_dev_err\0"
	"of_find_property\0"
	"devm_kfree\0"
	"of_property_count_elems_of_size\0"
	"of_iomap\0"
	"of_property_read_u32_index\0"
	"__of_parse_phandle_with_args\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"of_property_read_variable_u64_array\0"
	"log_read_mmio\0"
	"log_post_read_mmio\0"
	"snprintf\0"
	"kstrtoull\0"
	"dump_stack\0"
	"mod_timer\0"
	"sched_clock\0"
	"log_write_mmio\0"
	"log_post_write_mmio\0"
	"of_property_read_u64\0"
	"ioremap_prot\0"
	"sysfs_create_bin_file\0"
	"init_timer_key\0"
	"memory_read_from_buffer\0"
	"sysfs_remove_bin_file\0"
	"timer_delete\0"
	"strsep\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"kfree\0"
	"strlen\0"
	"__kmalloc_cache_noprof\0"
	"strncpy\0"
	"jiffies\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"_raw_spin_lock_irqsave\0"
	"__arm_smccc_smc\0"
	"_raw_spin_unlock_irqrestore\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


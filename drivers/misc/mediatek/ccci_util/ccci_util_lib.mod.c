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

KSYMTAB_FUNC(get_nc_smem_region_info, "", "");
KSYMTAB_FUNC(ccci_map_phy_addr, "", "");
KSYMTAB_FUNC(get_mtee_is_enabled, "", "");
KSYMTAB_FUNC(get_md_resv_ccb_info, "", "");
KSYMTAB_FUNC(get_md_resv_udc_info, "", "");
KSYMTAB_FUNC(get_md_resv_phy_cap_size, "", "");
KSYMTAB_FUNC(get_md_resv_sib_size, "", "");
KSYMTAB_FUNC(get_md_smem_dfd_size, "", "");
KSYMTAB_FUNC(get_smem_amms_pos_size, "", "");
KSYMTAB_FUNC(get_smem_align_padding_size, "", "");
KSYMTAB_FUNC(get_md_smem_cachable_offset, "", "");
KSYMTAB_FUNC(get_md_resv_csmem_info, "", "");
KSYMTAB_FUNC(get_md_cache_region_info, "", "");
KSYMTAB_FUNC(get_md_sib_mem_info, "", "");
KSYMTAB_FUNC(get_md_resv_mem_info, "_gpl", "");
KSYMTAB_FUNC(get_modem_is_enabled, "", "");
KSYMTAB_FUNC(get_md_img_type, "", "");
KSYMTAB_FUNC(ccci_get_md_info_str, "", "");
KSYMTAB_FUNC(ccci_get_md_check_hdr_inf, "", "");
KSYMTAB_FUNC(ccci_sysfs_add_modem, "", "");
KSYMTAB_FUNC(ccci_dump_write, "", "");
KSYMTAB_FUNC(ccci_util_mem_dump, "", "");
KSYMTAB_FUNC(ccci_util_cmpt_mem_dump, "", "");
KSYMTAB_FUNC(ccci_event_log, "", "");
KSYMTAB_FUNC(inject_md_status_event, "", "");
KSYMTAB_FUNC(inject_pin_status_event, "", "");
KSYMTAB_FUNC(vmap_reserved_mem, "", "");
KSYMTAB_FUNC(free_reserved_memory_ccci, "", "");
KSYMTAB_FUNC(mtk_ccci_get_md_img_cap, "", "");
KSYMTAB_FUNC(get_md_bin_capability, "", "");
KSYMTAB_FUNC(check_rat_at_md_img, "", "");
KSYMTAB_FUNC(set_soc_md_rt_rat, "", "");
KSYMTAB_FUNC(get_soc_md_rt_rat, "", "");
KSYMTAB_FUNC(get_soc_md_rt_rat_idx, "", "");
KSYMTAB_FUNC(check_rat_at_rt_setting, "", "");
KSYMTAB_FUNC(set_soc_md_rt_rat_by_idx, "", "");
KSYMTAB_FUNC(set_soc_md_rt_rat_str, "", "");
KSYMTAB_FUNC(mtk_ccci_find_args_val, "", "");
KSYMTAB_FUNC(mtk_ccci_add_new_args, "", "");
KSYMTAB_FUNC(mtk_ccci_get_smem_by_id, "", "");
KSYMTAB_FUNC(mtk_ccci_get_smem_start_addr, "", "");
KSYMTAB_FUNC(mtk_ccci_get_smem_phy_start_addr, "", "");
KSYMTAB_FUNC(mtk_ccci_get_md_nc_smem_inf, "", "");
KSYMTAB_FUNC(mtk_ccci_get_md_c_smem_inf, "", "");

SYMBOL_CRC(get_nc_smem_region_info, 0x3e4c1051, "");
SYMBOL_CRC(ccci_map_phy_addr, 0xa122b79a, "");
SYMBOL_CRC(get_mtee_is_enabled, 0x51939dcb, "");
SYMBOL_CRC(get_md_resv_ccb_info, 0xd767d2cf, "");
SYMBOL_CRC(get_md_resv_udc_info, 0x08eb1085, "");
SYMBOL_CRC(get_md_resv_phy_cap_size, 0x26d966fd, "");
SYMBOL_CRC(get_md_resv_sib_size, 0x8bd51a07, "");
SYMBOL_CRC(get_md_smem_dfd_size, 0x204036fe, "");
SYMBOL_CRC(get_smem_amms_pos_size, 0xb4196514, "");
SYMBOL_CRC(get_smem_align_padding_size, 0x0668fd33, "");
SYMBOL_CRC(get_md_smem_cachable_offset, 0x18c331d7, "");
SYMBOL_CRC(get_md_resv_csmem_info, 0x53c6d267, "");
SYMBOL_CRC(get_md_cache_region_info, 0xdb033c0a, "");
SYMBOL_CRC(get_md_sib_mem_info, 0xdccf1550, "");
SYMBOL_CRC(get_md_resv_mem_info, 0xcab9bc76, "_gpl");
SYMBOL_CRC(get_modem_is_enabled, 0xa60386f1, "");
SYMBOL_CRC(get_md_img_type, 0x55714f75, "");
SYMBOL_CRC(ccci_get_md_info_str, 0x4b922029, "");
SYMBOL_CRC(ccci_get_md_check_hdr_inf, 0x7d606fd7, "");
SYMBOL_CRC(ccci_sysfs_add_modem, 0xbe8f1358, "");
SYMBOL_CRC(ccci_dump_write, 0xba637490, "");
SYMBOL_CRC(ccci_util_mem_dump, 0x1966c223, "");
SYMBOL_CRC(ccci_util_cmpt_mem_dump, 0x8b76fae3, "");
SYMBOL_CRC(ccci_event_log, 0xe8837d03, "");
SYMBOL_CRC(inject_md_status_event, 0x145226de, "");
SYMBOL_CRC(inject_pin_status_event, 0xb472de60, "");
SYMBOL_CRC(vmap_reserved_mem, 0x6c4ab9ba, "");
SYMBOL_CRC(free_reserved_memory_ccci, 0xddaab9ab, "");
SYMBOL_CRC(mtk_ccci_get_md_img_cap, 0x01a729ea, "");
SYMBOL_CRC(get_md_bin_capability, 0x5aa36892, "");
SYMBOL_CRC(check_rat_at_md_img, 0x6cc60406, "");
SYMBOL_CRC(set_soc_md_rt_rat, 0x43a3b0dd, "");
SYMBOL_CRC(get_soc_md_rt_rat, 0xa0612e94, "");
SYMBOL_CRC(get_soc_md_rt_rat_idx, 0x023fc232, "");
SYMBOL_CRC(check_rat_at_rt_setting, 0xa4f4d318, "");
SYMBOL_CRC(set_soc_md_rt_rat_by_idx, 0xa0e55e02, "");
SYMBOL_CRC(set_soc_md_rt_rat_str, 0x6bfc0e5c, "");
SYMBOL_CRC(mtk_ccci_find_args_val, 0x0df2b26a, "");
SYMBOL_CRC(mtk_ccci_add_new_args, 0xbf3b6f59, "");
SYMBOL_CRC(mtk_ccci_get_smem_by_id, 0x419a5ba1, "");
SYMBOL_CRC(mtk_ccci_get_smem_start_addr, 0x3eb67891, "");
SYMBOL_CRC(mtk_ccci_get_smem_phy_start_addr, 0xc031b981, "");
SYMBOL_CRC(mtk_ccci_get_md_nc_smem_inf, 0x64957f22, "");
SYMBOL_CRC(mtk_ccci_get_md_c_smem_inf, 0xf909b421, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x96848186, "scnprintf" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x3b1b6444, "of_get_property" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xedc03953, "iounmap" },
	{ 0x92997ed8, "_printk" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x037a0cba, "kfree" },
	{ 0x5a921311, "strncmp" },
	{ 0x6961e6ba, "aed_md_exception_api" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfdd0214d, "kobject_init_and_add" },
	{ 0x3bd2c4ce, "kobject_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xce8498d7, "kernel_kobj" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x00148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xb4028d67, "proc_create" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0xdd115996, "mrdump_mini_add_extra_file" },
	{ 0x6ac61a02, "nonseekable_open" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x9b1faacb, "device_create" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7ee25d67, "vmap" },
	{ 0x999e8297, "vfree" },
	{ 0x0b46b444, "free_reserved_page" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5d112304,
	0x96848186,
	0x6da467cb,
	0x40863ba1,
	0xf3cdc3c6,
	0x75ca79b5,
	0x3b1b6444,
	0x18b48e28,
	0xedc03953,
	0x92997ed8,
	0xe17134b6,
	0x52c5c991,
	0xe136f93c,
	0xaf56600a,
	0x0f05f001,
	0xefe8a82e,
	0x037a0cba,
	0x5a921311,
	0x6961e6ba,
	0x656e4a6e,
	0xfdd0214d,
	0x3bd2c4ce,
	0x98cf60b3,
	0xa916b694,
	0xce8498d7,
	0x43b0c9c3,
	0x00148653,
	0x34db050b,
	0xe2964344,
	0x9ec6ca96,
	0x356461c8,
	0xb4028d67,
	0xd9a5ea54,
	0xe94986d6,
	0xd35cce70,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0x88db9f48,
	0x9a85eebb,
	0xdd115996,
	0x6ac61a02,
	0x2be0c009,
	0xf9a482f9,
	0x1b2fa1a9,
	0xfe5d4bb2,
	0x9688de8b,
	0xe4bbc1dd,
	0x5e515be6,
	0x6fe9dcd4,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x9b1faacb,
	0x28ba7b6c,
	0x6091b333,
	0xba8fbd64,
	0xb5b54b34,
	0x7e19152a,
	0x9a835040,
	0x7ee25d67,
	0x999e8297,
	0x0b46b444,
	0xf0fdf6cb,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__memcpy_fromio\0"
	"scnprintf\0"
	"pfn_is_map_memory\0"
	"ioremap_prot\0"
	"of_find_compatible_node\0"
	"__fortify_panic\0"
	"of_get_property\0"
	"__memset_io\0"
	"iounmap\0"
	"_printk\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"of_property_read_variable_u32_array\0"
	"arm64_use_ng_mappings\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"kfree\0"
	"strncmp\0"
	"aed_md_exception_api\0"
	"snprintf\0"
	"kobject_init_and_add\0"
	"kobject_put\0"
	"strlen\0"
	"strnlen\0"
	"kernel_kobj\0"
	"preempt_schedule\0"
	"vsnprintf\0"
	"_raw_spin_lock_irqsave\0"
	"__wake_up\0"
	"ktime_get_real_ts64\0"
	"rtc_time64_to_tm\0"
	"proc_create\0"
	"__init_waitqueue_head\0"
	"sched_clock\0"
	"_raw_spin_unlock_irqrestore\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"mrdump_mini_add_extra_file\0"
	"nonseekable_open\0"
	"__arch_copy_from_user\0"
	"msleep\0"
	"vmalloc_noprof\0"
	"sys_tz\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"ktime_get_ts64\0"
	"class_create\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"device_create\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"__list_add_valid_or_report\0"
	"__list_del_entry_valid_or_report\0"
	"vmap\0"
	"vfree\0"
	"free_reserved_page\0"
	"__stack_chk_fail\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,mrdump");


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

KSYMTAB_FUNC(mtk_hcp_kernel_db_write, "", "");
KSYMTAB_FUNC(mtk_hcp_register, "", "");
KSYMTAB_FUNC(mtk_hcp_unregister, "", "");
KSYMTAB_FUNC(mtk_hcp_get_current_task, "", "");
KSYMTAB_FUNC(mtk_hcp_send, "", "");
KSYMTAB_FUNC(mtk_hcp_send_async, "", "");
KSYMTAB_FUNC(mtk_hcp_set_apu_dc, "_gpl", "");
KSYMTAB_FUNC(mtk_hcp_get_plat_device, "", "");
KSYMTAB_FUNC(mtk_hcp_get_reserve_mem_phys, "", "");
KSYMTAB_FUNC(mtk_hcp_set_reserve_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_reserve_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_reserve_mem_dma, "", "");
KSYMTAB_FUNC(mtk_hcp_get_reserve_mem_size, "", "");
KSYMTAB_FUNC(mtk_hcp_set_reserve_mem_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_reserve_mem_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_gce_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_wpe_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_wpe_mem_cq_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_wpe_mem_tdr_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_dip_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_dip_mem_cq_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_dip_mem_tdr_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_traw_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_traw_mem_cq_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_traw_mem_tdr_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_pqdip_mem_virt, "", "");
KSYMTAB_FUNC(mtk_hcp_get_pqdip_mem_cq_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_pqdip_mem_tdr_fd, "", "");
KSYMTAB_FUNC(mtk_hcp_get_gce_buffer, "", "");
KSYMTAB_FUNC(mtk_hcp_put_gce_buffer, "", "");
KSYMTAB_FUNC(mtk_hcp_get_hwid_mem_virt, "", "");
KSYMTAB_FUNC(allocate_working_buffer_helper, "", "");
KSYMTAB_FUNC(release_working_buffer_helper, "", "");
KSYMTAB_FUNC(mtk_hcp_allocate_working_buffer, "", "");
KSYMTAB_FUNC(mtk_hcp_release_working_buffer, "", "");
KSYMTAB_FUNC(mtk_hcp_get_init_info, "", "");
KSYMTAB_FUNC(mtk_hcp_purge_msg, "", "");
KSYMTAB_FUNC(mtk_hcp_partial_flush, "", "");
KSYMTAB_FUNC(isp71_get_reserve_mem_phys, "", "");
KSYMTAB_FUNC(isp71_get_reserve_mem_virt, "", "");
KSYMTAB_FUNC(isp71_get_reserve_mem_dma, "", "");
KSYMTAB_FUNC(isp71_get_reserve_mem_size, "", "");
KSYMTAB_FUNC(isp71_get_reserve_mem_fd, "", "");
KSYMTAB_FUNC(isp71_get_gce_virt, "", "");
KSYMTAB_FUNC(isp71_get_hwid_virt, "", "");
KSYMTAB_FUNC(isp71_allocate_working_buffer, "", "");
KSYMTAB_FUNC(isp71_release_working_buffer, "", "");
KSYMTAB_FUNC(isp71_get_wpe_virt, "", "");
KSYMTAB_FUNC(isp71_get_wpe_cq_fd, "", "");
KSYMTAB_FUNC(isp71_get_wpe_tdr_fd, "", "");
KSYMTAB_FUNC(isp71_get_dip_virt, "", "");
KSYMTAB_FUNC(isp71_get_dip_cq_fd, "", "");
KSYMTAB_FUNC(isp71_get_dip_tdr_fd, "", "");
KSYMTAB_FUNC(isp71_get_traw_virt, "", "");
KSYMTAB_FUNC(isp71_get_traw_cq_fd, "", "");
KSYMTAB_FUNC(isp71_get_traw_tdr_fd, "", "");
KSYMTAB_FUNC(isp71_get_pqdip_virt, "", "");
KSYMTAB_FUNC(isp71_get_pqdip_cq_fd, "", "");
KSYMTAB_FUNC(isp71_get_pqdip_tdr_fd, "", "");
KSYMTAB_FUNC(isp7s_get_reserve_mem_phys, "", "");
KSYMTAB_FUNC(isp7s_get_reserve_mem_virt, "", "");
KSYMTAB_FUNC(isp7s_get_reserve_mem_dma, "", "");
KSYMTAB_FUNC(isp7s_get_reserve_mem_size, "", "");
KSYMTAB_FUNC(isp7s_get_reserve_mem_fd, "", "");
KSYMTAB_FUNC(isp7s_get_gce_virt, "", "");
KSYMTAB_FUNC(isp7s_get_wpe_virt, "", "");
KSYMTAB_FUNC(isp7s_get_wpe_cq_fd, "", "");
KSYMTAB_FUNC(isp7s_get_wpe_tdr_fd, "", "");
KSYMTAB_FUNC(isp7s_get_dip_virt, "", "");
KSYMTAB_FUNC(isp7s_get_dip_cq_fd, "", "");
KSYMTAB_FUNC(isp7s_get_dip_tdr_fd, "", "");
KSYMTAB_FUNC(isp7s_get_traw_virt, "", "");
KSYMTAB_FUNC(isp7s_get_traw_cq_fd, "", "");
KSYMTAB_FUNC(isp7s_get_traw_tdr_fd, "", "");
KSYMTAB_FUNC(isp7s_get_pqdip_virt, "", "");
KSYMTAB_FUNC(isp7s_get_pqdip_cq_fd, "", "");
KSYMTAB_FUNC(isp7s_get_pqdip_tdr_fd, "", "");
KSYMTAB_FUNC(isp7s_get_hwid_virt, "", "");
KSYMTAB_FUNC(isp7s_allocate_working_buffer, "", "");
KSYMTAB_FUNC(isp7s_release_working_buffer, "", "");
KSYMTAB_FUNC(mtk_hcp_set_KernelFence, "", "");
KSYMTAB_FUNC(mtk_hcp_init_KernelFence, "", "");
KSYMTAB_FUNC(mtk_hcp_uninit_KernelFence, "", "");
KSYMTAB_FUNC(isp7sp_get_reserve_mem_phys, "", "");
KSYMTAB_FUNC(isp7sp_get_reserve_mem_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_reserve_mem_dma, "", "");
KSYMTAB_FUNC(isp7sp_get_reserve_mem_size, "", "");
KSYMTAB_FUNC(isp7sp_get_reserve_mem_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_gce_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_wpe_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_wpe_cq_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_wpe_tdr_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_dip_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_dip_cq_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_dip_tdr_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_traw_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_traw_cq_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_traw_tdr_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_pqdip_virt, "", "");
KSYMTAB_FUNC(isp7sp_get_pqdip_cq_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_pqdip_tdr_fd, "", "");
KSYMTAB_FUNC(isp7sp_get_hwid_virt, "", "");
KSYMTAB_FUNC(isp7sp_allocate_working_buffer, "", "");
KSYMTAB_FUNC(isp7sp_release_working_buffer, "", "");

SYMBOL_CRC(mtk_hcp_kernel_db_write, 0x51871263, "");
SYMBOL_CRC(mtk_hcp_register, 0x479d4718, "");
SYMBOL_CRC(mtk_hcp_unregister, 0x348919a1, "");
SYMBOL_CRC(mtk_hcp_get_current_task, 0x5a9efd0d, "");
SYMBOL_CRC(mtk_hcp_send, 0x7b98a6b2, "");
SYMBOL_CRC(mtk_hcp_send_async, 0xdaa98fcf, "");
SYMBOL_CRC(mtk_hcp_set_apu_dc, 0x7fc423b8, "_gpl");
SYMBOL_CRC(mtk_hcp_get_plat_device, 0x9fda2919, "");
SYMBOL_CRC(mtk_hcp_get_reserve_mem_phys, 0x8f7c3063, "");
SYMBOL_CRC(mtk_hcp_set_reserve_mem_virt, 0xdfcf7b70, "");
SYMBOL_CRC(mtk_hcp_get_reserve_mem_virt, 0xe47aaa01, "");
SYMBOL_CRC(mtk_hcp_get_reserve_mem_dma, 0x222bc9fc, "");
SYMBOL_CRC(mtk_hcp_get_reserve_mem_size, 0x08e9636e, "");
SYMBOL_CRC(mtk_hcp_set_reserve_mem_fd, 0x417d519f, "");
SYMBOL_CRC(mtk_hcp_get_reserve_mem_fd, 0x2a7df3d0, "");
SYMBOL_CRC(mtk_hcp_get_gce_mem_virt, 0x2a15a118, "");
SYMBOL_CRC(mtk_hcp_get_wpe_mem_virt, 0x529dc174, "");
SYMBOL_CRC(mtk_hcp_get_wpe_mem_cq_fd, 0x67640dd9, "");
SYMBOL_CRC(mtk_hcp_get_wpe_mem_tdr_fd, 0xdb5105df, "");
SYMBOL_CRC(mtk_hcp_get_dip_mem_virt, 0xabfe5adb, "");
SYMBOL_CRC(mtk_hcp_get_dip_mem_cq_fd, 0x21f4d03b, "");
SYMBOL_CRC(mtk_hcp_get_dip_mem_tdr_fd, 0x95131656, "");
SYMBOL_CRC(mtk_hcp_get_traw_mem_virt, 0x348de9fd, "");
SYMBOL_CRC(mtk_hcp_get_traw_mem_cq_fd, 0x79bd136a, "");
SYMBOL_CRC(mtk_hcp_get_traw_mem_tdr_fd, 0x89273ef7, "");
SYMBOL_CRC(mtk_hcp_get_pqdip_mem_virt, 0xc9d61387, "");
SYMBOL_CRC(mtk_hcp_get_pqdip_mem_cq_fd, 0x44120672, "");
SYMBOL_CRC(mtk_hcp_get_pqdip_mem_tdr_fd, 0x9a7609b4, "");
SYMBOL_CRC(mtk_hcp_get_gce_buffer, 0xdaf4d918, "");
SYMBOL_CRC(mtk_hcp_put_gce_buffer, 0xc7a9a051, "");
SYMBOL_CRC(mtk_hcp_get_hwid_mem_virt, 0xc7f526f9, "");
SYMBOL_CRC(allocate_working_buffer_helper, 0x1795e3d2, "");
SYMBOL_CRC(release_working_buffer_helper, 0x1fe95518, "");
SYMBOL_CRC(mtk_hcp_allocate_working_buffer, 0xb55f1cb2, "");
SYMBOL_CRC(mtk_hcp_release_working_buffer, 0x19f39fce, "");
SYMBOL_CRC(mtk_hcp_get_init_info, 0x834ced82, "");
SYMBOL_CRC(mtk_hcp_purge_msg, 0x0c21e6c2, "");
SYMBOL_CRC(mtk_hcp_partial_flush, 0xad88ecb0, "");
SYMBOL_CRC(isp71_get_reserve_mem_phys, 0x97fe2e22, "");
SYMBOL_CRC(isp71_get_reserve_mem_virt, 0x9a6f4eb2, "");
SYMBOL_CRC(isp71_get_reserve_mem_dma, 0x1772ff2b, "");
SYMBOL_CRC(isp71_get_reserve_mem_size, 0x106b7d2f, "");
SYMBOL_CRC(isp71_get_reserve_mem_fd, 0x6dd6a625, "");
SYMBOL_CRC(isp71_get_gce_virt, 0xf9d4cd21, "");
SYMBOL_CRC(isp71_get_hwid_virt, 0x6a1a0aed, "");
SYMBOL_CRC(isp71_allocate_working_buffer, 0x33036c0d, "");
SYMBOL_CRC(isp71_release_working_buffer, 0x5342737b, "");
SYMBOL_CRC(isp71_get_wpe_virt, 0x93bc53c0, "");
SYMBOL_CRC(isp71_get_wpe_cq_fd, 0x4759e023, "");
SYMBOL_CRC(isp71_get_wpe_tdr_fd, 0x7a03b2fe, "");
SYMBOL_CRC(isp71_get_dip_virt, 0xbd002c92, "");
SYMBOL_CRC(isp71_get_dip_cq_fd, 0xc2126c84, "");
SYMBOL_CRC(isp71_get_dip_tdr_fd, 0x3234cf39, "");
SYMBOL_CRC(isp71_get_traw_virt, 0x54948595, "");
SYMBOL_CRC(isp71_get_traw_cq_fd, 0xc88129a6, "");
SYMBOL_CRC(isp71_get_traw_tdr_fd, 0xe75e1d98, "");
SYMBOL_CRC(isp71_get_pqdip_virt, 0x38155754, "");
SYMBOL_CRC(isp71_get_pqdip_cq_fd, 0x11afecec, "");
SYMBOL_CRC(isp71_get_pqdip_tdr_fd, 0x718e9bd3, "");
SYMBOL_CRC(isp7s_get_reserve_mem_phys, 0x77780f97, "");
SYMBOL_CRC(isp7s_get_reserve_mem_virt, 0x7ae96f07, "");
SYMBOL_CRC(isp7s_get_reserve_mem_dma, 0x44ba5421, "");
SYMBOL_CRC(isp7s_get_reserve_mem_size, 0xf0ed5c9a, "");
SYMBOL_CRC(isp7s_get_reserve_mem_fd, 0x16ee9cd7, "");
SYMBOL_CRC(isp7s_get_gce_virt, 0x0633fb9b, "");
SYMBOL_CRC(isp7s_get_wpe_virt, 0x6c5b657a, "");
SYMBOL_CRC(isp7s_get_wpe_cq_fd, 0x6c125d87, "");
SYMBOL_CRC(isp7s_get_wpe_tdr_fd, 0xab939eb2, "");
SYMBOL_CRC(isp7s_get_dip_virt, 0x42e71a28, "");
SYMBOL_CRC(isp7s_get_dip_cq_fd, 0xe959d120, "");
SYMBOL_CRC(isp7s_get_dip_tdr_fd, 0xe3a4e375, "");
SYMBOL_CRC(isp7s_get_traw_virt, 0x7fdf3831, "");
SYMBOL_CRC(isp7s_get_traw_cq_fd, 0x191105ea, "");
SYMBOL_CRC(isp7s_get_traw_tdr_fd, 0x98e5800f, "");
SYMBOL_CRC(isp7s_get_pqdip_virt, 0xe9857b18, "");
SYMBOL_CRC(isp7s_get_pqdip_cq_fd, 0x6e14717b, "");
SYMBOL_CRC(isp7s_get_pqdip_tdr_fd, 0x1f9a26a9, "");
SYMBOL_CRC(isp7s_get_hwid_virt, 0x4151b749, "");
SYMBOL_CRC(isp7s_allocate_working_buffer, 0xbaeb6b2a, "");
SYMBOL_CRC(isp7s_release_working_buffer, 0x043036fd, "");
SYMBOL_CRC(mtk_hcp_set_KernelFence, 0xba6882a1, "");
SYMBOL_CRC(mtk_hcp_init_KernelFence, 0x90bf0c88, "");
SYMBOL_CRC(mtk_hcp_uninit_KernelFence, 0xe537c831, "");
SYMBOL_CRC(isp7sp_get_reserve_mem_phys, 0xbd44e755, "");
SYMBOL_CRC(isp7sp_get_reserve_mem_virt, 0x9d6b17e0, "");
SYMBOL_CRC(isp7sp_get_reserve_mem_dma, 0xc2901cd0, "");
SYMBOL_CRC(isp7sp_get_reserve_mem_size, 0x3ad1b458, "");
SYMBOL_CRC(isp7sp_get_reserve_mem_fd, 0x3240b447, "");
SYMBOL_CRC(isp7sp_get_gce_virt, 0x4043cc0c, "");
SYMBOL_CRC(isp7sp_get_wpe_virt, 0x2a2b52ed, "");
SYMBOL_CRC(isp7sp_get_wpe_cq_fd, 0x96216f7f, "");
SYMBOL_CRC(isp7sp_get_wpe_tdr_fd, 0x180fd7ae, "");
SYMBOL_CRC(isp7sp_get_dip_virt, 0x04972dbf, "");
SYMBOL_CRC(isp7sp_get_dip_cq_fd, 0x136ae3d8, "");
SYMBOL_CRC(isp7sp_get_dip_tdr_fd, 0x5038aa69, "");
SYMBOL_CRC(isp7sp_get_traw_virt, 0x11f24ee1, "");
SYMBOL_CRC(isp7sp_get_traw_cq_fd, 0xaa8d4cf6, "");
SYMBOL_CRC(isp7sp_get_traw_tdr_fd, 0x8c574009, "");
SYMBOL_CRC(isp7sp_get_pqdip_virt, 0x6f3884ba, "");
SYMBOL_CRC(isp7sp_get_pqdip_cq_fd, 0x7aa6b17d, "");
SYMBOL_CRC(isp7sp_get_pqdip_tdr_fd, 0xf6ed315c, "");
SYMBOL_CRC(isp7sp_get_hwid_virt, 0x2f7cc199, "");
SYMBOL_CRC(isp7sp_allocate_working_buffer, 0x082d2770, "");
SYMBOL_CRC(isp7sp_release_working_buffer, 0x8c673cd8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x401167cc, "_dev_info" },
	{ 0xff058995, "try_module_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xe89013ef, "module_put" },
	{ 0xbc532593, "mutex_lock_killable" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7518b5f0, "proc_mkdir" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xb4028d67, "proc_create" },
	{ 0xb4f43232, "proc_set_user" },
	{ 0x44033864, "proc_remove" },
	{ 0xa4234d01, "slbc_request" },
	{ 0x0e12e362, "slbc_release" },
	{ 0xa823db6e, "of_find_device_by_node" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xe49fbbe6, "dma_heap_buffer_alloc" },
	{ 0x0904e8ad, "mtk_dma_buf_set_name" },
	{ 0xfff4bd7c, "dma_buf_attach" },
	{ 0x86de4a10, "dma_buf_map_attachment" },
	{ 0xecbe3c62, "dma_buf_detach" },
	{ 0x1ed60c86, "dma_buf_vmap" },
	{ 0xc5b6a5d2, "dma_buf_fd" },
	{ 0xcec1d8ff, "dma_buf_vunmap" },
	{ 0x8fc545b9, "dma_buf_unmap_attachment" },
	{ 0x2b3df576, "dma_buf_put" },
	{ 0x037a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1fec5304, "__of_parse_phandle_with_args" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9a835040, "__list_del_entry_valid_or_report" },
	{ 0x7e19152a, "__list_add_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x14fe5355, "of_device_get_match_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa302b90d, "cdev_init" },
	{ 0xcfc099c4, "cdev_add" },
	{ 0x6fe9dcd4, "class_create" },
	{ 0x9b1faacb, "device_create" },
	{ 0xef27af6b, "class_destroy" },
	{ 0x28ba7b6c, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5a6368f5, "devm_kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xf3cdc3c6, "of_find_compatible_node" },
	{ 0x5be9ce07, "dma_set_mask" },
	{ 0xea6f49c8, "dma_set_coherent_mask" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x2cca8e1e, "vb2_dma_contig_memops" },
	{ 0x2e2980cc, "dma_buf_begin_cpu_access" },
	{ 0x0296695f, "refcount_warn_saturate" },
	{ 0x27929ba7, "dma_buf_end_cpu_access" },
	{ 0xc0af0c3c, "dma_buf_end_cpu_access_partial" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xf61b1f04, "sync_file_create" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x0f013cdc, "fd_install" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0xb2fb935e, "param_ops_int" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x401167cc,
	0xff058995,
	0xe2d5255a,
	0x92997ed8,
	0xe89013ef,
	0xbc532593,
	0xed55cabd,
	0x56470118,
	0x7518b5f0,
	0xa571f6b0,
	0xb4028d67,
	0xb4f43232,
	0x44033864,
	0xa4234d01,
	0x0e12e362,
	0xa823db6e,
	0xeff75c0b,
	0xe49fbbe6,
	0x0904e8ad,
	0xfff4bd7c,
	0x86de4a10,
	0xecbe3c62,
	0x1ed60c86,
	0xc5b6a5d2,
	0xcec1d8ff,
	0x8fc545b9,
	0x2b3df576,
	0x037a0cba,
	0x34db050b,
	0x88db9f48,
	0x9a85eebb,
	0x2be0c009,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0xe2964344,
	0x1fec5304,
	0xe17134b6,
	0x52c5c991,
	0x9a835040,
	0x7e19152a,
	0xd35cce70,
	0x12db679a,
	0x14fe5355,
	0xd9a5ea54,
	0x49cd25ed,
	0xe3ec2f2b,
	0xa302b90d,
	0xcfc099c4,
	0x6fe9dcd4,
	0x9b1faacb,
	0xef27af6b,
	0x28ba7b6c,
	0x6091b333,
	0x8c03d20c,
	0x5a6368f5,
	0xc8c7229e,
	0xf3cdc3c6,
	0x5be9ce07,
	0xea6f49c8,
	0x9166fc03,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x9688de8b,
	0xe4bbc1dd,
	0x2cca8e1e,
	0x2e2980cc,
	0x0296695f,
	0x27929ba7,
	0xc0af0c3c,
	0xd5977bfb,
	0xdeb99119,
	0xf61b1f04,
	0xa843805a,
	0x0f013cdc,
	0x656e4a6e,
	0x197d5b60,
	0xb2fb935e,
	0x4829a47e,
	0xdcb764ad,
	0xa65c6def,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_info\0"
	"try_module_get\0"
	"strcmp\0"
	"_printk\0"
	"module_put\0"
	"mutex_lock_killable\0"
	"mutex_unlock\0"
	"__warn_printk\0"
	"proc_mkdir\0"
	"__mutex_init\0"
	"proc_create\0"
	"proc_set_user\0"
	"proc_remove\0"
	"slbc_request\0"
	"slbc_release\0"
	"of_find_device_by_node\0"
	"dma_heap_find\0"
	"dma_heap_buffer_alloc\0"
	"mtk_dma_buf_set_name\0"
	"dma_buf_attach\0"
	"dma_buf_map_attachment\0"
	"dma_buf_detach\0"
	"dma_buf_vmap\0"
	"dma_buf_fd\0"
	"dma_buf_vunmap\0"
	"dma_buf_unmap_attachment\0"
	"dma_buf_put\0"
	"kfree\0"
	"_raw_spin_lock_irqsave\0"
	"__check_object_size\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__wake_up\0"
	"__of_parse_phandle_with_args\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"__list_del_entry_valid_or_report\0"
	"__list_add_valid_or_report\0"
	"_raw_spin_unlock_irqrestore\0"
	"__platform_driver_register\0"
	"of_device_get_match_data\0"
	"__init_waitqueue_head\0"
	"alloc_workqueue\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"class_create\0"
	"device_create\0"
	"class_destroy\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"destroy_workqueue\0"
	"devm_kfree\0"
	"devm_kmalloc\0"
	"of_find_compatible_node\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"__flush_workqueue\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"memstart_addr\0"
	"kimage_voffset\0"
	"vb2_dma_contig_memops\0"
	"dma_buf_begin_cpu_access\0"
	"refcount_warn_saturate\0"
	"dma_buf_end_cpu_access\0"
	"dma_buf_end_cpu_access_partial\0"
	"mutex_lock\0"
	"dma_fence_init\0"
	"sync_file_create\0"
	"get_unused_fd_flags\0"
	"fd_install\0"
	"snprintf\0"
	"dma_fence_default_wait\0"
	"param_ops_int\0"
	"memcpy\0"
	"memset\0"
	"alt_cb_patch_nops\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk_slbc,system_heap");

MODULE_ALIAS("of:N*T*Cmediatek,hcp");
MODULE_ALIAS("of:N*T*Cmediatek,hcpC*");
MODULE_ALIAS("of:N*T*Cmediatek,hcp7s");
MODULE_ALIAS("of:N*T*Cmediatek,hcp7sC*");
MODULE_ALIAS("of:N*T*Cmediatek,hcp7sp");
MODULE_ALIAS("of:N*T*Cmediatek,hcp7spC*");

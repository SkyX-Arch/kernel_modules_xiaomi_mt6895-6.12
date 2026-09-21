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

KSYMTAB_FUNC(RingBuf_getDataCount, "", "");
KSYMTAB_FUNC(RingBuf_getFreeSpace, "", "");
KSYMTAB_FUNC(RingBuf_update_writeptr, "", "");
KSYMTAB_FUNC(RingBuf_Bridge_update_writeptr, "", "");
KSYMTAB_FUNC(dump_audio_dsp_dram, "", "");
KSYMTAB_FUNC(RingBuf_copyFromUserLinear, "", "");
KSYMTAB_FUNC(RingBuf_Reset, "", "");
KSYMTAB_FUNC(RingBuf_Clear, "", "");
KSYMTAB_FUNC(clear_audiobuffer_hw, "", "");
KSYMTAB_FUNC(set_audiobuffer_hw, "", "");
KSYMTAB_FUNC(set_audiobuffer_memorytype, "", "");
KSYMTAB_FUNC(sync_ringbuf_readidx, "", "");
KSYMTAB_FUNC(dump_rbuf_s, "", "");
KSYMTAB_FUNC(dump_audio_hwbuffer, "", "");
KSYMTAB_FUNC(audio_set_dsp_afe, "_gpl", "");
KSYMTAB_FUNC(get_dsp_base, "", "");
KSYMTAB_FUNC(update_pcm_cpu_qos, "", "");
KSYMTAB_FUNC(update_memif_cpu_qos, "", "");
KSYMTAB_FUNC(get_ipi_recv_private, "", "");
KSYMTAB_FUNC(mtk_scp_ipi_send, "", "");
KSYMTAB_FUNC(get_dspscene_by_dspdaiid, "", "");
KSYMTAB_FUNC(get_dspdaiid_by_dspscene, "", "");
KSYMTAB_FUNC(get_dsp_task_attr, "_gpl", "");
KSYMTAB_FUNC(get_dsp_task_id_from_str, "_gpl", "");
KSYMTAB_FUNC(get_str_by_dsp_dai_id, "_gpl", "");
KSYMTAB_FUNC(afe_pcm_ipi_to_dsp, "_gpl", "");
KSYMTAB_FUNC(mtk_get_ipi_buf_scene_adsp, "", "");
KSYMTAB_FUNC(hook_has_video_cb, "", "");
KSYMTAB_FUNC(hook_vp_sync_cb, "", "");
KSYMTAB_DATA(mtk_dsp_pcm_platform, "_gpl", "");
KSYMTAB_FUNC(is_adsp_genpool_addr_valid, "", "");
KSYMTAB_FUNC(mtk_adsp_genpool_allocate_sharemem_ring, "", "");
KSYMTAB_FUNC(mtk_adsp_genpool_free_sharemem_ring, "", "");
KSYMTAB_FUNC(mtk_adsp_allocate_mem, "_gpl", "");
KSYMTAB_FUNC(mtk_adsp_free_mem, "_gpl", "");
KSYMTAB_FUNC(get_task_attr, "_gpl", "");
KSYMTAB_FUNC(mtk_get_adsp_dram_gen_pool, "", "");
KSYMTAB_FUNC(adsp_task_get_latency_support, "_gpl", "");

SYMBOL_CRC(RingBuf_getDataCount, 0xfc41cedb, "");
SYMBOL_CRC(RingBuf_getFreeSpace, 0xfddb6c8d, "");
SYMBOL_CRC(RingBuf_update_writeptr, 0x1f13c252, "");
SYMBOL_CRC(RingBuf_Bridge_update_writeptr, 0xe797699b, "");
SYMBOL_CRC(dump_audio_dsp_dram, 0x50b4b01b, "");
SYMBOL_CRC(RingBuf_copyFromUserLinear, 0x2220af5a, "");
SYMBOL_CRC(RingBuf_Reset, 0x1470f6d6, "");
SYMBOL_CRC(RingBuf_Clear, 0xc500654e, "");
SYMBOL_CRC(clear_audiobuffer_hw, 0xec3754bc, "");
SYMBOL_CRC(set_audiobuffer_hw, 0x1eff0e35, "");
SYMBOL_CRC(set_audiobuffer_memorytype, 0x84326ec2, "");
SYMBOL_CRC(sync_ringbuf_readidx, 0x8120c4d9, "");
SYMBOL_CRC(dump_rbuf_s, 0x9bc5fa37, "");
SYMBOL_CRC(dump_audio_hwbuffer, 0x6786b1de, "");
SYMBOL_CRC(audio_set_dsp_afe, 0xb922334f, "_gpl");
SYMBOL_CRC(get_dsp_base, 0xa3664331, "");
SYMBOL_CRC(update_pcm_cpu_qos, 0x4bd88e36, "");
SYMBOL_CRC(update_memif_cpu_qos, 0x88fd5172, "");
SYMBOL_CRC(get_ipi_recv_private, 0x801f7a52, "");
SYMBOL_CRC(mtk_scp_ipi_send, 0x61dba3b7, "");
SYMBOL_CRC(get_dspscene_by_dspdaiid, 0xa1e07ba3, "");
SYMBOL_CRC(get_dspdaiid_by_dspscene, 0x395d33f4, "");
SYMBOL_CRC(get_dsp_task_attr, 0x6b060912, "_gpl");
SYMBOL_CRC(get_dsp_task_id_from_str, 0x35152e34, "_gpl");
SYMBOL_CRC(get_str_by_dsp_dai_id, 0xe02a7df3, "_gpl");
SYMBOL_CRC(afe_pcm_ipi_to_dsp, 0xdf889105, "_gpl");
SYMBOL_CRC(mtk_get_ipi_buf_scene_adsp, 0x2418f7e9, "");
SYMBOL_CRC(hook_has_video_cb, 0x186ae00c, "");
SYMBOL_CRC(hook_vp_sync_cb, 0xcab20417, "");
SYMBOL_CRC(mtk_dsp_pcm_platform, 0x3089d5f5, "_gpl");
SYMBOL_CRC(is_adsp_genpool_addr_valid, 0x8f475b34, "");
SYMBOL_CRC(mtk_adsp_genpool_allocate_sharemem_ring, 0xe0327f69, "");
SYMBOL_CRC(mtk_adsp_genpool_free_sharemem_ring, 0x5e2a965a, "");
SYMBOL_CRC(mtk_adsp_allocate_mem, 0x217c7829, "_gpl");
SYMBOL_CRC(mtk_adsp_free_mem, 0x72519cba, "_gpl");
SYMBOL_CRC(get_task_attr, 0xd664d9be, "_gpl");
SYMBOL_CRC(mtk_get_adsp_dram_gen_pool, 0x5fe7c438, "");
SYMBOL_CRC(adsp_task_get_latency_support, 0x01f2df8c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x45b60059, "aee_kernel_exception_api_func" },
	{ 0x92997ed8, "_printk" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x59ff91c4, "_copy_to_iter" },
	{ 0x401167cc, "_dev_info" },
	{ 0x463f4239, "snd_soc_new_compress" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0xd4e81a21, "pm_runtime_enable" },
	{ 0x6676a1b8, "snd_soc_register_component" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe136f93c, "of_property_read_variable_u32_array" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x6c9565df, "cpu_latency_qos_update_request" },
	{ 0x25486d23, "is_audio_task_dsp_ready" },
	{ 0x4862e694, "audio_send_ipi_msg" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc2283c34, "adsp_register_feature" },
	{ 0xbaea5c8b, "adsp_deregister_feature" },
	{ 0xd82032f9, "is_adsp_ready" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x34bba055, "adsp_register_notify" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7410fdaf, "get_feature_register" },
	{ 0xaf86099f, "adsp_send_vp_irq" },
	{ 0x61915ca2, "register_vp_audio_notifier" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe0da6e4a, "trace_event_reg" },
	{ 0x57c959d2, "trace_event_raw_init" },
	{ 0x1f1f4d4f, "get_adsp_core_total" },
	{ 0x5f0ee176, "get_adsp_semaphore" },
	{ 0xb3db4910, "release_adsp_semaphore" },
	{ 0x29eba14a, "trace_event_buffer_reserve" },
	{ 0x2fc1082e, "trace_event_buffer_commit" },
	{ 0x0fd10466, "__trace_trigger_soft_disabled" },
	{ 0xb8021609, "trace_raw_output_prep" },
	{ 0x798b791d, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc61f330d, "perf_trace_run_bpf_submit" },
	{ 0x881d741f, "bpf_trace_run3" },
	{ 0xe3c00b45, "bpf_trace_run5" },
	{ 0x1c7a01a8, "bpf_trace_run4" },
	{ 0xa3783864, "bpf_trace_run2" },
	{ 0xe80494d6, "bpf_trace_run1" },
	{ 0x9220bf82, "snd_soc_rtdcom_lookup" },
	{ 0x64311477, "regmap_read" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x239ab530, "snd_pcm_period_elapsed" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0x8fca6f04, "audio_task_register_callback" },
	{ 0x13f601eb, "adsp_threaded_irq_registration" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0x03c6adfb, "get_adsp_type" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x05590c04, "__pm_relax" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x69154b0e, "_copy_from_iter" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0x47a915f1, "_dev_warn" },
	{ 0x1f557414, "gen_pool_has_addr" },
	{ 0xee7d7deb, "gen_pool_dma_zalloc" },
	{ 0x037a0cba, "kfree" },
	{ 0x14bff320, "adsp_get_reserve_mem_phys" },
	{ 0x9b6ae0ff, "adsp_get_reserve_mem_virt" },
	{ 0xe4e1ac4c, "adsp_get_reserve_mem_size" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x96e5d30f, "gen_pool_set_algo" },
	{ 0xb737b185, "gen_pool_best_fit" },
	{ 0x2464da17, "gen_pool_size" },
	{ 0xd0d3f0a4, "gen_pool_avail" },
	{ 0x5ef6a672, "gen_pool_for_each_chunk" },
	{ 0x060ba97c, "gen_pool_free_owner" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6b2dc060,
	0xf5edea2e,
	0x45b60059,
	0x92997ed8,
	0x88db9f48,
	0x2be0c009,
	0x59ff91c4,
	0x401167cc,
	0x463f4239,
	0x12db679a,
	0xd4e81a21,
	0x6676a1b8,
	0xc8c7229e,
	0xe136f93c,
	0x6fc35f2b,
	0x6c9565df,
	0x25486d23,
	0x4862e694,
	0x1e6d26a8,
	0xc2283c34,
	0xbaea5c8b,
	0xd82032f9,
	0xfe487975,
	0x8c26d495,
	0x8ddd8aad,
	0x92540fbf,
	0x34bba055,
	0xd9a5ea54,
	0x7410fdaf,
	0xaf86099f,
	0x61915ca2,
	0xe2964344,
	0xe0da6e4a,
	0x57c959d2,
	0x1f1f4d4f,
	0x5f0ee176,
	0xb3db4910,
	0x29eba14a,
	0x2fc1082e,
	0x0fd10466,
	0xb8021609,
	0x798b791d,
	0x85d120e3,
	0x2d2c902f,
	0xc61f330d,
	0x881d741f,
	0xe3c00b45,
	0x1c7a01a8,
	0xa3783864,
	0xe80494d6,
	0x9220bf82,
	0x64311477,
	0xb4ce05a5,
	0x34db050b,
	0x68a24153,
	0xd35cce70,
	0x239ab530,
	0xf70e4a4d,
	0x0f314d3e,
	0xedd46fc9,
	0x8fca6f04,
	0x13f601eb,
	0x6e295f94,
	0x03c6adfb,
	0xd5977bfb,
	0x05590c04,
	0x4e8b8def,
	0xed55cabd,
	0x1b2fa1a9,
	0x999e8297,
	0x69154b0e,
	0xac594e02,
	0x0f05f001,
	0x47a915f1,
	0x1f557414,
	0xee7d7deb,
	0x037a0cba,
	0x14bff320,
	0x9b6ae0ff,
	0xe4e1ac4c,
	0xced0f4d4,
	0x96e5d30f,
	0xb737b185,
	0x2464da17,
	0xd0d3f0a4,
	0x5ef6a672,
	0x060ba97c,
	0xe17134b6,
	0xbefa51a3,
	0xefe8a82e,
	0x4829a47e,
	0xdcb764ad,
	0xf0fdf6cb,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"dump_stack\0"
	"___ratelimit\0"
	"aee_kernel_exception_api_func\0"
	"_printk\0"
	"__check_object_size\0"
	"__arch_copy_from_user\0"
	"_copy_to_iter\0"
	"_dev_info\0"
	"snd_soc_new_compress\0"
	"__platform_driver_register\0"
	"pm_runtime_enable\0"
	"snd_soc_register_component\0"
	"devm_kmalloc\0"
	"of_property_read_variable_u32_array\0"
	"platform_driver_unregister\0"
	"cpu_latency_qos_update_request\0"
	"is_audio_task_dsp_ready\0"
	"audio_send_ipi_msg\0"
	"strstr\0"
	"adsp_register_feature\0"
	"adsp_deregister_feature\0"
	"is_adsp_ready\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"adsp_register_notify\0"
	"__init_waitqueue_head\0"
	"get_feature_register\0"
	"adsp_send_vp_irq\0"
	"register_vp_audio_notifier\0"
	"__wake_up\0"
	"trace_event_reg\0"
	"trace_event_raw_init\0"
	"get_adsp_core_total\0"
	"get_adsp_semaphore\0"
	"release_adsp_semaphore\0"
	"trace_event_buffer_reserve\0"
	"trace_event_buffer_commit\0"
	"__trace_trigger_soft_disabled\0"
	"trace_raw_output_prep\0"
	"trace_event_printf\0"
	"trace_handle_return\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"bpf_trace_run3\0"
	"bpf_trace_run5\0"
	"bpf_trace_run4\0"
	"bpf_trace_run2\0"
	"bpf_trace_run1\0"
	"snd_soc_rtdcom_lookup\0"
	"regmap_read\0"
	"_dev_err\0"
	"_raw_spin_lock_irqsave\0"
	"snd_pcm_format_physical_width\0"
	"_raw_spin_unlock_irqrestore\0"
	"snd_pcm_period_elapsed\0"
	"preempt_schedule_notrace\0"
	"wakeup_source_register\0"
	"snd_soc_add_component_controls\0"
	"audio_task_register_callback\0"
	"adsp_threaded_irq_registration\0"
	"snd_soc_info_volsw\0"
	"get_adsp_type\0"
	"mutex_lock\0"
	"__pm_relax\0"
	"__pm_stay_awake\0"
	"mutex_unlock\0"
	"vmalloc_noprof\0"
	"vfree\0"
	"_copy_from_iter\0"
	"__cpu_online_mask\0"
	"mem_alloc_profiling_key\0"
	"_dev_warn\0"
	"gen_pool_has_addr\0"
	"gen_pool_dma_zalloc\0"
	"kfree\0"
	"adsp_get_reserve_mem_phys\0"
	"adsp_get_reserve_mem_virt\0"
	"adsp_get_reserve_mem_size\0"
	"gen_pool_create\0"
	"gen_pool_set_algo\0"
	"gen_pool_best_fit\0"
	"gen_pool_size\0"
	"gen_pool_avail\0"
	"gen_pool_for_each_chunk\0"
	"gen_pool_free_owner\0"
	"__kmalloc_cache_noprof\0"
	"gen_pool_add_owner\0"
	"kmalloc_caches\0"
	"memcpy\0"
	"memset\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "aee_aed,audio_ipi,adsp,mtk-afe-external");

MODULE_ALIAS("of:N*T*Cmediatek,snd-audio-dsp");
MODULE_ALIAS("of:N*T*Cmediatek,snd-audio-dspC*");

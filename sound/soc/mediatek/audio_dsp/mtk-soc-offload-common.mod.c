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
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x01000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7e8fa89, "notify_vb_audio_control" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4e8b8def, "__pm_stay_awake" },
	{ 0x05590c04, "__pm_relax" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfddb6c8d, "RingBuf_getFreeSpace" },
	{ 0x2220af5a, "RingBuf_copyFromUserLinear" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe797699b, "RingBuf_Bridge_update_writeptr" },
	{ 0x61dba3b7, "mtk_scp_ipi_send" },
	{ 0xa1e07ba3, "get_dspscene_by_dspdaiid" },
	{ 0xfc41cedb, "RingBuf_getDataCount" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x0f314d3e, "wakeup_source_register" },
	{ 0xa3664331, "get_dsp_base" },
	{ 0x6676a1b8, "snd_soc_register_component" },
	{ 0x401167cc, "_dev_info" },
	{ 0x186ae00c, "hook_has_video_cb" },
	{ 0xcab20417, "hook_vp_sync_cb" },
	{ 0xedd46fc9, "snd_soc_add_component_controls" },
	{ 0xa73e125d, "snd_soc_bytes_info_ext" },
	{ 0xfadf598a, "snd_soc_bytes_tlv_callback" },
	{ 0x6e295f94, "snd_soc_info_volsw" },
	{ 0x9a85eebb, "__arch_copy_to_user" },
	{ 0x2be0c009, "__arch_copy_from_user" },
	{ 0x5fe7c438, "mtk_get_adsp_dram_gen_pool" },
	{ 0xe0327f69, "mtk_adsp_genpool_allocate_sharemem_ring" },
	{ 0x01f2df8c, "adsp_task_get_latency_support" },
	{ 0x5e2a965a, "mtk_adsp_genpool_free_sharemem_ring" },
	{ 0x8fca6f04, "audio_task_register_callback" },
	{ 0x50b4b01b, "dump_audio_dsp_dram" },
	{ 0x1eff0e35, "set_audiobuffer_hw" },
	{ 0x84326ec2, "set_audiobuffer_memorytype" },
	{ 0x6786b1de, "dump_audio_hwbuffer" },
	{ 0x801f7a52, "get_ipi_recv_private" },
	{ 0x395d33f4, "get_dspdaiid_by_dspscene" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x8120c4d9, "sync_ringbuf_readidx" },
	{ 0xec3754bc, "clear_audiobuffer_hw" },
	{ 0x1470f6d6, "RingBuf_Reset" },
	{ 0x1f13c252, "RingBuf_update_writeptr" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba0aee2e, "kthread_create_on_node" },
	{ 0xce5bc4d0, "wake_up_process" },
	{ 0x3e348d3d, "wakeup_source_destroy" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb3f7646e,
	0xfe487975,
	0x8c26d495,
	0x01000e51,
	0x92540fbf,
	0xd7e8fa89,
	0x92997ed8,
	0xe2964344,
	0x4e8b8def,
	0x05590c04,
	0xba8fbd64,
	0xb5b54b34,
	0xfddb6c8d,
	0x2220af5a,
	0x34db050b,
	0xe797699b,
	0x61dba3b7,
	0xa1e07ba3,
	0xfc41cedb,
	0xd35cce70,
	0x75ca79b5,
	0x12db679a,
	0x0f314d3e,
	0xa3664331,
	0x6676a1b8,
	0x401167cc,
	0x186ae00c,
	0xcab20417,
	0xedd46fc9,
	0xa73e125d,
	0xfadf598a,
	0x6e295f94,
	0x9a85eebb,
	0x2be0c009,
	0x5fe7c438,
	0xe0327f69,
	0x01f2df8c,
	0x5e2a965a,
	0x8fca6f04,
	0x50b4b01b,
	0x1eff0e35,
	0x84326ec2,
	0x6786b1de,
	0x801f7a52,
	0x395d33f4,
	0xb43f9365,
	0xd5977bfb,
	0xed55cabd,
	0x8120c4d9,
	0xec3754bc,
	0x1470f6d6,
	0x1f13c252,
	0x8ddd8aad,
	0xa571f6b0,
	0xd9a5ea54,
	0xba0aee2e,
	0xce5bc4d0,
	0x3e348d3d,
	0x6fc35f2b,
	0xf0fdf6cb,
	0xdcb764ad,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kthread_should_stop\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule\0"
	"finish_wait\0"
	"notify_vb_audio_control\0"
	"_printk\0"
	"__wake_up\0"
	"__pm_stay_awake\0"
	"__pm_relax\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"RingBuf_getFreeSpace\0"
	"RingBuf_copyFromUserLinear\0"
	"_raw_spin_lock_irqsave\0"
	"RingBuf_Bridge_update_writeptr\0"
	"mtk_scp_ipi_send\0"
	"get_dspscene_by_dspdaiid\0"
	"RingBuf_getDataCount\0"
	"_raw_spin_unlock_irqrestore\0"
	"__fortify_panic\0"
	"__platform_driver_register\0"
	"wakeup_source_register\0"
	"get_dsp_base\0"
	"snd_soc_register_component\0"
	"_dev_info\0"
	"hook_has_video_cb\0"
	"hook_vp_sync_cb\0"
	"snd_soc_add_component_controls\0"
	"snd_soc_bytes_info_ext\0"
	"snd_soc_bytes_tlv_callback\0"
	"snd_soc_info_volsw\0"
	"__arch_copy_to_user\0"
	"__arch_copy_from_user\0"
	"mtk_get_adsp_dram_gen_pool\0"
	"mtk_adsp_genpool_allocate_sharemem_ring\0"
	"adsp_task_get_latency_support\0"
	"mtk_adsp_genpool_free_sharemem_ring\0"
	"audio_task_register_callback\0"
	"dump_audio_dsp_dram\0"
	"set_audiobuffer_hw\0"
	"set_audiobuffer_memorytype\0"
	"dump_audio_hwbuffer\0"
	"get_ipi_recv_private\0"
	"get_dspdaiid_by_dspscene\0"
	"ktime_get\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"sync_ringbuf_readidx\0"
	"clear_audiobuffer_hw\0"
	"RingBuf_Reset\0"
	"RingBuf_update_writeptr\0"
	"schedule_timeout\0"
	"__mutex_init\0"
	"__init_waitqueue_head\0"
	"kthread_create_on_node\0"
	"wake_up_process\0"
	"wakeup_source_destroy\0"
	"platform_driver_unregister\0"
	"__stack_chk_fail\0"
	"memset\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mtk-afe-external,snd-soc-audiodsp-common,audio_ipi");

MODULE_ALIAS("of:N*T*Cmediatek,mt-soc-offload-common");
MODULE_ALIAS("of:N*T*Cmediatek,mt-soc-offload-commonC*");

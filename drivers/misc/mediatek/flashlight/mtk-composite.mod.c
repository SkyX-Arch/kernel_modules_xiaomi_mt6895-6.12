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
	{ 0x12db679a, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a794ef1, "video_device_alloc" },
	{ 0x21915b17, "media_device_init" },
	{ 0x5c0df92b, "__media_device_register" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0x11a0b893, "media_entity_pads_init" },
	{ 0x0bd17e97, "v4l2_device_register" },
	{ 0xf73ca7bb, "v4l2_async_nf_init" },
	{ 0x97a1e43f, "v4l2_async_nf_register" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x037a0cba, "kfree" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0xe17134b6, "__kmalloc_cache_noprof" },
	{ 0x101eb6b2, "of_graph_get_next_endpoint" },
	{ 0xb69b1b91, "of_graph_get_remote_port_parent" },
	{ 0x13d14ec7, "__v4l2_async_nf_add_fwnode" },
	{ 0xb14c72d6, "v4l2_device_unregister" },
	{ 0xbd5e6904, "__v4l2_device_register_subdev_nodes" },
	{ 0xb4040866, "v4l2_async_nf_unregister" },
	{ 0x552de076, "v4l2_async_nf_cleanup" },
	{ 0x76cdabfa, "media_device_unregister" },
	{ 0x6fc35f2b, "platform_driver_unregister" },
	{ 0x0f05f001, "mem_alloc_profiling_key" },
	{ 0xefe8a82e, "kmalloc_caches" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x12db679a,
	0x92997ed8,
	0x4a794ef1,
	0x21915b17,
	0x5c0df92b,
	0xa571f6b0,
	0x11a0b893,
	0x0bd17e97,
	0xf73ca7bb,
	0x97a1e43f,
	0xd0760fc0,
	0x037a0cba,
	0xc8c7229e,
	0xe17134b6,
	0x101eb6b2,
	0xb69b1b91,
	0x13d14ec7,
	0xb14c72d6,
	0xbd5e6904,
	0xb4040866,
	0x552de076,
	0x76cdabfa,
	0x6fc35f2b,
	0x0f05f001,
	0xefe8a82e,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__platform_driver_register\0"
	"_printk\0"
	"video_device_alloc\0"
	"media_device_init\0"
	"__media_device_register\0"
	"__mutex_init\0"
	"media_entity_pads_init\0"
	"v4l2_device_register\0"
	"v4l2_async_nf_init\0"
	"v4l2_async_nf_register\0"
	"kfree_sensitive\0"
	"kfree\0"
	"devm_kmalloc\0"
	"__kmalloc_cache_noprof\0"
	"of_graph_get_next_endpoint\0"
	"of_graph_get_remote_port_parent\0"
	"__v4l2_async_nf_add_fwnode\0"
	"v4l2_device_unregister\0"
	"__v4l2_device_register_subdev_nodes\0"
	"v4l2_async_nf_unregister\0"
	"v4l2_async_nf_cleanup\0"
	"media_device_unregister\0"
	"platform_driver_unregister\0"
	"mem_alloc_profiling_key\0"
	"kmalloc_caches\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mtk_composite_v4l2_1");
MODULE_ALIAS("of:N*T*Cmediatek,mtk_composite_v4l2_1C*");

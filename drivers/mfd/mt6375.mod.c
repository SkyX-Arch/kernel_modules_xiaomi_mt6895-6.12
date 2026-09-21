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
	{ 0x2ff78d9b, "i2c_register_driver" },
	{ 0xa571f6b0, "__mutex_init" },
	{ 0xe218d0f9, "devm_i2c_new_dummy_device" },
	{ 0xb4ce05a5, "_dev_err" },
	{ 0x96a71dd8, "__devm_regmap_init" },
	{ 0x1dce7694, "devm_of_platform_populate" },
	{ 0xc8c7229e, "devm_kmalloc" },
	{ 0x401167cc, "_dev_info" },
	{ 0x0e4e1ee2, "i2c_smbus_write_i2c_block_data" },
	{ 0x4a068d70, "i2c_transfer_buffer_flags" },
	{ 0xe3fa5191, "i2c_transfer" },
	{ 0x4a364ecc, "i2c_smbus_read_i2c_block_data" },
	{ 0x64311477, "regmap_read" },
	{ 0x4dd57aba, "regmap_bulk_write" },
	{ 0xf9583f23, "devm_request_threaded_irq" },
	{ 0xd12566de, "irq_domain_remove" },
	{ 0xd5977bfb, "mutex_lock" },
	{ 0x6b883e5a, "regmap_write" },
	{ 0xed55cabd, "mutex_unlock" },
	{ 0x8b262a92, "irq_domain_instantiate" },
	{ 0xc2610736, "irq_domain_xlate_onetwocell" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xb7253caf, "handle_simple_irq" },
	{ 0xfadf798a, "irq_set_chip" },
	{ 0xdc6596fa, "irq_set_parent" },
	{ 0x9b294a8f, "irq_set_chip_and_handler_name" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x1fef36c1, "__irq_resolve_mapping" },
	{ 0x33a52b38, "regmap_bulk_read" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x84dd786f, "i2c_del_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x21d0f8b0, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x2ff78d9b,
	0xa571f6b0,
	0xe218d0f9,
	0xb4ce05a5,
	0x96a71dd8,
	0x1dce7694,
	0xc8c7229e,
	0x401167cc,
	0x0e4e1ee2,
	0x4a068d70,
	0xe3fa5191,
	0x4a364ecc,
	0x64311477,
	0x4dd57aba,
	0xf9583f23,
	0xd12566de,
	0xd5977bfb,
	0x6b883e5a,
	0xed55cabd,
	0x8b262a92,
	0xc2610736,
	0x20a789ac,
	0xb7253caf,
	0xfadf798a,
	0xdc6596fa,
	0x9b294a8f,
	0x7522f3ba,
	0x7ceaf0d5,
	0x1fef36c1,
	0x33a52b38,
	0x549525ef,
	0x2c7db649,
	0x3ce4ca6f,
	0xce2840e7,
	0xfcec0987,
	0x84dd786f,
	0xf0fdf6cb,
	0xa65c6def,
	0x21d0f8b0,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_register_driver\0"
	"__mutex_init\0"
	"devm_i2c_new_dummy_device\0"
	"_dev_err\0"
	"__devm_regmap_init\0"
	"devm_of_platform_populate\0"
	"devm_kmalloc\0"
	"_dev_info\0"
	"i2c_smbus_write_i2c_block_data\0"
	"i2c_transfer_buffer_flags\0"
	"i2c_transfer\0"
	"i2c_smbus_read_i2c_block_data\0"
	"regmap_read\0"
	"regmap_bulk_write\0"
	"devm_request_threaded_irq\0"
	"irq_domain_remove\0"
	"mutex_lock\0"
	"regmap_write\0"
	"mutex_unlock\0"
	"irq_domain_instantiate\0"
	"irq_domain_xlate_onetwocell\0"
	"irq_set_chip_data\0"
	"handle_simple_irq\0"
	"irq_set_chip\0"
	"irq_set_parent\0"
	"irq_set_chip_and_handler_name\0"
	"irq_modify_status\0"
	"generic_handle_irq\0"
	"__irq_resolve_mapping\0"
	"regmap_bulk_read\0"
	"handle_nested_irq\0"
	"irq_dispose_mapping\0"
	"disable_irq\0"
	"irq_set_irq_wake\0"
	"enable_irq\0"
	"i2c_del_driver\0"
	"__stack_chk_fail\0"
	"alt_cb_patch_nops\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6375");
MODULE_ALIAS("of:N*T*Cmediatek,mt6375C*");

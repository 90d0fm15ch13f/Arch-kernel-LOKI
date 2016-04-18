#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf1a0dc52, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5389b649, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5de6c78c, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x6cf15f3d, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0xb4fbbd7, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0xd4b524f3, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0xd5df4dc2, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0x55835250, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25063");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
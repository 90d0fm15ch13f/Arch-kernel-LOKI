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
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8824503a, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xdc01bc0b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xac0deda2, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x93780674, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xc92cb278, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8034b72d, __VMLINUX_SYMBOL_STR(ad_dpot_probe) },
	{ 0x25766048, __VMLINUX_SYMBOL_STR(ad_dpot_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad525x_dpot";

MODULE_ALIAS("i2c:ad5258");
MODULE_ALIAS("i2c:ad5259");
MODULE_ALIAS("i2c:ad5251");
MODULE_ALIAS("i2c:ad5252");
MODULE_ALIAS("i2c:ad5253");
MODULE_ALIAS("i2c:ad5254");
MODULE_ALIAS("i2c:ad5255");
MODULE_ALIAS("i2c:ad5241");
MODULE_ALIAS("i2c:ad5242");
MODULE_ALIAS("i2c:ad5243");
MODULE_ALIAS("i2c:ad5245");
MODULE_ALIAS("i2c:ad5246");
MODULE_ALIAS("i2c:ad5247");
MODULE_ALIAS("i2c:ad5248");
MODULE_ALIAS("i2c:ad5280");
MODULE_ALIAS("i2c:ad5282");
MODULE_ALIAS("i2c:adn2860");
MODULE_ALIAS("i2c:ad5273");
MODULE_ALIAS("i2c:ad5161");
MODULE_ALIAS("i2c:ad5171");
MODULE_ALIAS("i2c:ad5170");
MODULE_ALIAS("i2c:ad5172");
MODULE_ALIAS("i2c:ad5173");
MODULE_ALIAS("i2c:ad5272");
MODULE_ALIAS("i2c:ad5274");

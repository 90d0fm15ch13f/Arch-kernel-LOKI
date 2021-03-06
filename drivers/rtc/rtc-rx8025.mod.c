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
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x43d14dcd, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x6f0b3fc0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xb7839ace, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xba546d6, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x93780674, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:rv8803");

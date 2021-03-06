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
	{ 0x764a006a, __VMLINUX_SYMBOL_STR(cyttsp_i2c_read_block_data) },
	{ 0x51c0d9dd, __VMLINUX_SYMBOL_STR(cyttsp_i2c_write_block_data) },
	{ 0xc9aef645, __VMLINUX_SYMBOL_STR(cyttsp4_pm_ops) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x55d23d89, __VMLINUX_SYMBOL_STR(cyttsp4_probe) },
	{ 0x4249e04b, __VMLINUX_SYMBOL_STR(cyttsp4_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cyttsp_i2c_common,cyttsp4_core";

MODULE_ALIAS("i2c:cyttsp4_i2c_adapter");

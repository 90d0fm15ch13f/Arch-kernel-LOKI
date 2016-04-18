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
	{ 0x57db4679, __VMLINUX_SYMBOL_STR(arizona_pm_ops) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x327c80ff, __VMLINUX_SYMBOL_STR(wm5102_i2c_regmap) },
	{ 0xf17fcdbb, __VMLINUX_SYMBOL_STR(arizona_dev_init) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcf2fd4c2, __VMLINUX_SYMBOL_STR(wm5110_i2c_regmap) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x35a00040, __VMLINUX_SYMBOL_STR(arizona_dev_exit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

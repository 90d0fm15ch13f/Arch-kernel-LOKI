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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb93877d8, __VMLINUX_SYMBOL_STR(hmc5843_common_resume) },
	{ 0xc80a479f, __VMLINUX_SYMBOL_STR(hmc5843_common_suspend) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xa265ab83, __VMLINUX_SYMBOL_STR(hmc5843_common_probe) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x9eb13a86, __VMLINUX_SYMBOL_STR(hmc5843_common_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hmc5843_core";

MODULE_ALIAS("of:N*T*Choneywell,hmc5843");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883l");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983");
MODULE_ALIAS("i2c:hmc5843");
MODULE_ALIAS("i2c:hmc5883");
MODULE_ALIAS("i2c:hmc5883l");
MODULE_ALIAS("i2c:hmc5983");

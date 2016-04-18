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
	{ 0x39bed217, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xc270b5b3, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x787e0d36, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x587c929f, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0xa7cb690e, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x57906fe, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x2a494894, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4017f8ae, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xbdd58ede, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x18c9c0d6, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x3c391668, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:0000000000000111110000010011????");

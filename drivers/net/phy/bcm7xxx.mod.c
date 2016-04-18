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
	{ 0xa7cb690e, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x57906fe, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc270b5b3, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa35f7ccb, __VMLINUX_SYMBOL_STR(bcm_phy_enable_apd) },
	{ 0xcd4d47ae, __VMLINUX_SYMBOL_STR(bcm_phy_enable_eee) },
	{ 0x8405475b, __VMLINUX_SYMBOL_STR(bcm_phy_write_misc) },
	{ 0xbdd58ede, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x8f0d38, __VMLINUX_SYMBOL_STR(bcm_phy_write_exp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4017f8ae, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,bcm-phy-lib";

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");

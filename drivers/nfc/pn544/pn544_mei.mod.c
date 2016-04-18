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
	{ 0x9e382052, __VMLINUX_SYMBOL_STR(nfc_mei_phy_free) },
	{ 0xc1f60586, __VMLINUX_SYMBOL_STR(mei_cldev_get_drvdata) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9f382b11, __VMLINUX_SYMBOL_STR(mei_phy_ops) },
	{ 0xbac300bb, __VMLINUX_SYMBOL_STR(__mei_cldev_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5943a8c, __VMLINUX_SYMBOL_STR(pn544_hci_remove) },
	{ 0xf2f4b4b0, __VMLINUX_SYMBOL_STR(mei_cldev_driver_unregister) },
	{ 0x6e51d70a, __VMLINUX_SYMBOL_STR(nfc_mei_phy_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x11ed40a2, __VMLINUX_SYMBOL_STR(pn544_hci_probe) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mei_phy,mei,pn544";

MODULE_ALIAS("mei:pn544:0bb17a78-2a8e-4c50-94d4-50266723775c:*:*");

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
	{ 0x95bf9d22, __VMLINUX_SYMBOL_STR(usb_hcd_pci_pm_ops) },
	{ 0x3c00c219, __VMLINUX_SYMBOL_STR(usb_hcd_pci_shutdown) },
	{ 0xb1e4ae44, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x2f359fd6, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4706826b, __VMLINUX_SYMBOL_STR(ohci_resume) },
	{ 0xdef288cb, __VMLINUX_SYMBOL_STR(ohci_suspend) },
	{ 0x2a459651, __VMLINUX_SYMBOL_STR(ohci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xe8fa44fc, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf35476fd, __VMLINUX_SYMBOL_STR(ohci_restart) },
	{ 0x7fe11ad1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd87fc0a0, __VMLINUX_SYMBOL_STR(usb_amd_prefetch_quirk) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0x9177db14, __VMLINUX_SYMBOL_STR(ohci_setup) },
	{ 0xbc5426e8, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ohci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");

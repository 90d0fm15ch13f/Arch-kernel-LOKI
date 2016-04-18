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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x62a7f929, __VMLINUX_SYMBOL_STR(ehci_suspend) },
	{ 0x56dff28b, __VMLINUX_SYMBOL_STR(ehci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28c9fdba, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x33832c7, __VMLINUX_SYMBOL_STR(usb_amd_hang_symptom_quirk) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xcb779ad5, __VMLINUX_SYMBOL_STR(ehci_setup) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x406800c0, __VMLINUX_SYMBOL_STR(ehci_resume) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x14da90c8, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0x2f359fd6, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0xbc5426e8, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ehci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");
MODULE_ALIAS("pci:v0000104Ad0000CC00sv*sd*bc*sc*i*");

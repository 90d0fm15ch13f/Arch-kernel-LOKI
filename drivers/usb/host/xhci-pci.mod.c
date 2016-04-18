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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6632f920, __VMLINUX_SYMBOL_STR(xhci_init_driver) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x14da90c8, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xc5bbadae, __VMLINUX_SYMBOL_STR(xhci_gen_setup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0xc54cc9b2, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xcc9006bb, __VMLINUX_SYMBOL_STR(usb_create_shared_hcd) },
	{ 0x2f359fd6, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0xa2a95ba5, __VMLINUX_SYMBOL_STR(xhci_dbg_trace) },
	{ 0x17c48b94, __VMLINUX_SYMBOL_STR(xhci_suspend) },
	{ 0x5abecd03, __VMLINUX_SYMBOL_STR(usb_enable_intel_xhci_ports) },
	{ 0xa5b3e70f, __VMLINUX_SYMBOL_STR(xhci_resume) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb1e4ae44, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0xb2da8e0a, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xec5ad261, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x2055333b, __VMLINUX_SYMBOL_STR(usb_hcd_is_primary_hcd) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x34a8da5f, __VMLINUX_SYMBOL_STR(__tracepoint_xhci_dbg_quirks) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,xhci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

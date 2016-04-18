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
	{ 0xabd103b8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0x9adc6c96, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x4a13f885, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0x26091a8e, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x24ac5fd9, __VMLINUX_SYMBOL_STR(labpc_common_detach) },
	{ 0x13c528f2, __VMLINUX_SYMBOL_STR(labpc_common_attach) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,ni_labpc_common";

MODULE_ALIAS("pci:v00001093d00000161sv*sd*bc*sc*i*");

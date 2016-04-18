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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xabd103b8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0x9adc6c96, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x4a13f885, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0x26091a8e, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi";

MODULE_ALIAS("pci:v00001093d00001710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007088sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071C5sv*sd*bc*sc*i*");

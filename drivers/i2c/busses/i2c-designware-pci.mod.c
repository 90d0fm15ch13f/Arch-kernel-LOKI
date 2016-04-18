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
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x884b2611, __VMLINUX_SYMBOL_STR(i2c_dw_probe) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x3cbedc87, __VMLINUX_SYMBOL_STR(set_primary_fwnode) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4a62a897, __VMLINUX_SYMBOL_STR(i2c_dw_disable) },
	{ 0x27e06c47, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x2d1b2c3c, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x981c0899, __VMLINUX_SYMBOL_STR(i2c_dw_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-designware-core";

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");

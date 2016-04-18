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
	{ 0x227bc80f, __VMLINUX_SYMBOL_STR(stmmac_dvr_probe) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x166fa0ff, __VMLINUX_SYMBOL_STR(stmmac_resume) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x70c1f93, __VMLINUX_SYMBOL_STR(stmmac_dvr_remove) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb18047d1, __VMLINUX_SYMBOL_STR(stmmac_suspend) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=stmmac";

MODULE_ALIAS("pci:v00000700d00001108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");

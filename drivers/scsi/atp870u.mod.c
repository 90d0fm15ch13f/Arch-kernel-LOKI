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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7fae394c, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001191d0000808Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008060sv*sd*bc*sc*i*");
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
	{ 0xad31fb19, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x530a7215, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x15b8c52e, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xd6bedc57, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x4bae2460, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x21eaef8d, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x6c1f0c6b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x8dfbd6fa, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x412e3d13, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0x71e68002, __VMLINUX_SYMBOL_STR(ata_pci_device_resume) },
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xe123f051, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0x2869b285, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x4adb771d, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x40af0dec, __VMLINUX_SYMBOL_STR(ata_xfer_mode2mask) },
	{ 0x43f56e82, __VMLINUX_SYMBOL_STR(ata_xfer_mode2shift) },
	{ 0x707ff1bb, __VMLINUX_SYMBOL_STR(ata_xfer_mask2mode) },
	{ 0x858d015a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xc48b7ccf, __VMLINUX_SYMBOL_STR(ata_mode_string) },
	{ 0xf9ca3160, __VMLINUX_SYMBOL_STR(ata_id_xfermask) },
	{ 0x813497a5, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001042d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009412d00006565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000886Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000673Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00003388d00008013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001045d0000C558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016CAd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "31299D553C1274E39FAADC4");

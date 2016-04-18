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
	{ 0xc977390d, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0xda02e5ab, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0x412e3d13, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0x8dfbd6fa, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x176fdccd, __VMLINUX_SYMBOL_STR(ata_cable_ignore) },
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0xbe7e15c4, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0xf45839c, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x4adb771d, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xe123f051, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0xe3f1bb5a, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x5f628933, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x813497a5, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0x8cff4c8c, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x743a165e, __VMLINUX_SYMBOL_STR(ata_pack_xfermask) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c849255, __VMLINUX_SYMBOL_STR(ata_acpi_gtm_xfermask) },
	{ 0xcce86ab3, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x47ac9b8f, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001022d00007401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007441sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007469sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000265sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000056Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000209Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79B46DCC1D4E260923F02C1");

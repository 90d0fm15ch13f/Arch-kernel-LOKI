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
	{ 0xeb48f5fa, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0xfb894731, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer32) },
	{ 0xda02e5ab, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0x71e68002, __VMLINUX_SYMBOL_STR(ata_pci_device_resume) },
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1bd93240, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x670fa053, __VMLINUX_SYMBOL_STR(ata_pio_need_iordy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x3a4f6a32, __VMLINUX_SYMBOL_STR(ata_sff_interrupt) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0x9597f28a, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x12256e61, __VMLINUX_SYMBOL_STR(devm_ioport_map) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x54e1762b, __VMLINUX_SYMBOL_STR(ata_host_alloc) },
	{ 0xcce86ab3, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x47ac9b8f, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00008086d00001234sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F5BF511FA3C08D27D85324C");

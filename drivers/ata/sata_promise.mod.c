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
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2869b285, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x4d06585a, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x7edb48b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x1bd93240, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xd22e0242, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xa0aad662, __VMLINUX_SYMBOL_STR(ata_sff_softreset) },
	{ 0xa82d3f62, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x72cfcf11, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7d60899d, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x9555d3c6, __VMLINUX_SYMBOL_STR(sata_scr_valid) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc0e6a27f, __VMLINUX_SYMBOL_STR(ata_sff_tf_load) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4af6ca4, __VMLINUX_SYMBOL_STR(ata_sff_exec_command) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v0000105Ad00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D73sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D17sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006629sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8548C379640295152C72F78");

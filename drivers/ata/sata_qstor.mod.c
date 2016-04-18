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
	{ 0x1bd93240, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x4d06585a, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x7edb48b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xcce86ab3, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x72cfcf11, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xd22e0242, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3145430b, __VMLINUX_SYMBOL_STR(ata_sff_port_intr) },
	{ 0x6b26f7f, __VMLINUX_SYMBOL_STR(ata_sff_check_status) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000015E9d00002068sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5DEA803F9343181CD11524D");

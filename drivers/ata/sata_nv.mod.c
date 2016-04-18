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
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xad31fb19, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x530a7215, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x15b8c52e, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xd6bedc57, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x21eaef8d, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x6c1f0c6b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x8dfbd6fa, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xaac508f6, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xe722e14f, __VMLINUX_SYMBOL_STR(ata_pci_sff_activate_host) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xdd3dc8ea, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfe7212a, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_prep) },
	{ 0x2fcfbc6a, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7d60899d, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x75a20463, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xedb3fb65, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x8872594f, __VMLINUX_SYMBOL_STR(sata_link_resume) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xb5038663, __VMLINUX_SYMBOL_STR(ata_bmdma_post_internal_cmd) },
	{ 0x7a361ecf, __VMLINUX_SYMBOL_STR(ata_sff_tf_read) },
	{ 0xc8ec7efa, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xe3d92c92, __VMLINUX_SYMBOL_STR(__ata_ehi_push_desc) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x77774e02, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xc24033f, __VMLINUX_SYMBOL_STR(blk_queue_segment_boundary) },
	{ 0x55efcea8, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8cff4c8c, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x41a49e0a, __VMLINUX_SYMBOL_STR(ata_bmdma_error_handler) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x757d04e9, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x81a9100c, __VMLINUX_SYMBOL_STR(sata_scr_write) },
	{ 0x862ea370, __VMLINUX_SYMBOL_STR(sata_scr_read) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x6b26f7f, __VMLINUX_SYMBOL_STR(ata_sff_check_status) },
	{ 0xe36166a4, __VMLINUX_SYMBOL_STR(ata_bmdma_port_intr) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x60b1ce37, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x858d015a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xb77a2d29, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0x4bae2460, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xe3f1bb5a, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x5f628933, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E3E84C40FAA67E26BF2D69");

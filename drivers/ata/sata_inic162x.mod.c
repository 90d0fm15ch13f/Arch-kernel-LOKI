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
	{ 0xa7f6e48, __VMLINUX_SYMBOL_STR(sata_port_ops) },
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe0ecde65, __VMLINUX_SYMBOL_STR(pci_set_dma_max_seg_size) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x4d06585a, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x7edb48b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x17e59cc8, __VMLINUX_SYMBOL_STR(dev_alert) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xea418e0f, __VMLINUX_SYMBOL_STR(atapi_cmd_type) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xedb3fb65, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xa5cd9dfc, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xc3267f0e, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0x8872594f, __VMLINUX_SYMBOL_STR(sata_link_resume) },
	{ 0x6e6d1132, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x782841f2, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xe3d92c92, __VMLINUX_SYMBOL_STR(__ata_ehi_push_desc) },
	{ 0x8cff4c8c, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xd22e0242, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe3f1bb5a, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x5f628933, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "187E2C92DCD9E42152A4B3D");

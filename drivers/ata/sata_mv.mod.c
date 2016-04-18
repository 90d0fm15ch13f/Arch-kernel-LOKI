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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xad31fb19, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x530a7215, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x15b8c52e, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xb77a2d29, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xd6bedc57, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x4bae2460, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x21eaef8d, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x6c1f0c6b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xeb48f5fa, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0x8dfbd6fa, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x65604d64, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xaad66d76, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa279b885, __VMLINUX_SYMBOL_STR(ata_sff_queue_pio_task) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x2fcfbc6a, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xedb3fb65, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xcb9c3b3b, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x9222e2f, __VMLINUX_SYMBOL_STR(ata_link_offline) },
	{ 0xe36166a4, __VMLINUX_SYMBOL_STR(ata_bmdma_port_intr) },
	{ 0x8cf7e46a, __VMLINUX_SYMBOL_STR(sata_scr_write_flush) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb4f57e63, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x8cff4c8c, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xa0aad662, __VMLINUX_SYMBOL_STR(ata_sff_softreset) },
	{ 0xa82d3f62, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x862ea370, __VMLINUX_SYMBOL_STR(sata_scr_read) },
	{ 0x75a20463, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x2869b285, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x3164a20b, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x4d06585a, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x5f628933, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc49fb481, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7705f972, __VMLINUX_SYMBOL_STR(phy_power_on) },
	{ 0xfde4541e, __VMLINUX_SYMBOL_STR(devm_phy_optional_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xb4546cd9, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x9e55446e, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7edb48b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa3e99d8c, __VMLINUX_SYMBOL_STR(dmam_pool_create) },
	{ 0x858d015a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xbe67e353, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x2a5dbf0c, __VMLINUX_SYMBOL_STR(ata_eh_analyze_ncq_error) },
	{ 0x3da7303c, __VMLINUX_SYMBOL_STR(ata_sff_dma_pause) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x757d04e9, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x3786b3f0, __VMLINUX_SYMBOL_STR(phy_power_off) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdc497aab, __VMLINUX_SYMBOL_STR(ata_host_detach) },
	{ 0x47a24099, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xe3f1bb5a, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD7FD903CFF2406E08B557D");

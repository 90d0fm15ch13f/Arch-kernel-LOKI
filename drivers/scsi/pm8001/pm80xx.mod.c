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
	{ 0x675352a2, __VMLINUX_SYMBOL_STR(sas_change_queue_depth) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x89eab1e, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xad6236e4, __VMLINUX_SYMBOL_STR(sas_drain_work) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb5deee41, __VMLINUX_SYMBOL_STR(sas_ssp_task_response) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x17be6e15, __VMLINUX_SYMBOL_STR(sas_suspend_ha) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xff2f953f, __VMLINUX_SYMBOL_STR(sas_phy_reset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5583a5af, __VMLINUX_SYMBOL_STR(sas_get_local_phy) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xc23d8ea4, __VMLINUX_SYMBOL_STR(sas_target_alloc) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb4f04469, __VMLINUX_SYMBOL_STR(sas_eh_bus_reset_handler) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x49a2c32b, __VMLINUX_SYMBOL_STR(sas_ioctl) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xdcc928b, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x90bfc7fb, __VMLINUX_SYMBOL_STR(sas_unregister_ha) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x476cd98e, __VMLINUX_SYMBOL_STR(sas_register_ha) },
	{ 0x48da5b78, __VMLINUX_SYMBOL_STR(sas_alloc_slow_task) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x2cd3ffd, __VMLINUX_SYMBOL_STR(sas_resume_ha) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3be956ad, __VMLINUX_SYMBOL_STR(sas_target_destroy) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xbfcf2fdc, __VMLINUX_SYMBOL_STR(sas_eh_device_reset_handler) },
	{ 0xda935f, __VMLINUX_SYMBOL_STR(sas_queuecommand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x453c8403, __VMLINUX_SYMBOL_STR(pci_msi_enabled) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd090fc5c, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x91426d2c, __VMLINUX_SYMBOL_STR(sas_bios_param) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xb1baecf0, __VMLINUX_SYMBOL_STR(sas_free_task) },
	{ 0xd35d6d0d, __VMLINUX_SYMBOL_STR(sas_prep_resume_ha) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe3b6d8f4, __VMLINUX_SYMBOL_STR(sas_slave_configure) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb86f39ff, __VMLINUX_SYMBOL_STR(sas_domain_attach_transport) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v000011F8d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000404bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000070bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000071bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000072bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000073bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000080bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000081bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000082bc*sc*i*");

MODULE_INFO(srcversion, "EECBAAE28975A3CDA60A1F6");

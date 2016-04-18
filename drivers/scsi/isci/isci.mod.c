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
	{ 0x89eab1e, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xad6236e4, __VMLINUX_SYMBOL_STR(sas_drain_work) },
	{ 0xb5deee41, __VMLINUX_SYMBOL_STR(sas_ssp_task_response) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x17be6e15, __VMLINUX_SYMBOL_STR(sas_suspend_ha) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6aa4638, __VMLINUX_SYMBOL_STR(sas_task_abort) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb3396286, __VMLINUX_SYMBOL_STR(pci_biosrom_size) },
	{ 0xff2f953f, __VMLINUX_SYMBOL_STR(sas_phy_reset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5583a5af, __VMLINUX_SYMBOL_STR(sas_get_local_phy) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8a87e724, __VMLINUX_SYMBOL_STR(try_test_sas_gpio_gp_bit) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc23d8ea4, __VMLINUX_SYMBOL_STR(sas_target_alloc) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb4f04469, __VMLINUX_SYMBOL_STR(sas_eh_bus_reset_handler) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x49a2c32b, __VMLINUX_SYMBOL_STR(sas_ioctl) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x8723ded6, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x90bfc7fb, __VMLINUX_SYMBOL_STR(sas_unregister_ha) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x476cd98e, __VMLINUX_SYMBOL_STR(sas_register_ha) },
	{ 0xad4e5735, __VMLINUX_SYMBOL_STR(pci_map_biosrom) },
	{ 0xb896feed, __VMLINUX_SYMBOL_STR(sas_eh_abort_handler) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2cd3ffd, __VMLINUX_SYMBOL_STR(sas_resume_ha) },
	{ 0x1a354fb8, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3be956ad, __VMLINUX_SYMBOL_STR(sas_target_destroy) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbfcf2fdc, __VMLINUX_SYMBOL_STR(sas_eh_device_reset_handler) },
	{ 0xda935f, __VMLINUX_SYMBOL_STR(sas_queuecommand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7dc579d0, __VMLINUX_SYMBOL_STR(sas_ata_schedule_reset) },
	{ 0xd090fc5c, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xbbad9800, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x91426d2c, __VMLINUX_SYMBOL_STR(sas_bios_param) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd35d6d0d, __VMLINUX_SYMBOL_STR(sas_prep_resume_ha) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x326425ca, __VMLINUX_SYMBOL_STR(pci_unmap_biosrom) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6947cf01, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xe3b6d8f4, __VMLINUX_SYMBOL_STR(sas_slave_configure) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb86f39ff, __VMLINUX_SYMBOL_STR(sas_domain_attach_transport) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F6B7449CB2CE945411E732B");

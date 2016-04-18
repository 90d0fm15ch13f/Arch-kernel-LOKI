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
	{ 0x3d87dea7, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xc2b9228d, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x738e2fcd, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x7e1113e2, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0xfe3e3a5b, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x925899c4, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x8545371b, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x19098d97, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x2230e154, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0xde2de332, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x6dccca96, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6b0c47d, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x78951c69, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x2a4a29e1, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0xb56ac97c, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x2ede65dd, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xc86c4ab6, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x36021792, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xa14b4757, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0xe199e2df, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x35755b57, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0xb138eda2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xb3421b7d, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x177681ef, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0xba712aa2, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x4f3ada87, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x547050e9, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x9ddc85eb, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x7e8c8acc, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x37ac2ec5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x62d9cd59, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x2c20a443, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x94450f76, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x37e95c93, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x4d8f8c31, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x64fd2525, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0x5d10297f, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0x47582814, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x7840036, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xde0a3fcf, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x7a51185b, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x90783989, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "88D15396D280106CDA69BCA");

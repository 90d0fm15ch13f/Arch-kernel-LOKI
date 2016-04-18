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
	{ 0x35755b57, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x7e8c8acc, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x2230e154, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0xde2de332, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x4d8f8c31, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x6dccca96, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe05bdd3c, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x78951c69, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x2a4a29e1, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0xb56ac97c, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x2ede65dd, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xc86c4ab6, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x36021792, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x3898b00f, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x94450f76, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x177681ef, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x9ddc85eb, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x19098d97, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x8545371b, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x925899c4, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0xfe3e3a5b, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x90783989, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0xba712aa2, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x75a9b127, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c5192be, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0x69ecc8e2, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x332e8c6, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{ 0x547050e9, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd7480967, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_fc,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "81F9334711F90F7F05D12B9");

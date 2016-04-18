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
	{ 0xfe3e3a5b, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x8545371b, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x19098d97, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x2230e154, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x4d8f8c31, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x6dccca96, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x89eab1e, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x78951c69, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x2a4a29e1, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0xb56ac97c, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x2ede65dd, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xc86c4ab6, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x36021792, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xc6b5ea1b, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xf739294c, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0x9ddc85eb, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0xcdeb1770, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x246bde64, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0x6a207331, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x64dceed6, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0xf0dc658d, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0xc10c5692, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0xe9463caf, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x2c20a443, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0xb138eda2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x7e8c8acc, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0xca88538, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0x86eac651, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xb7cd8ba, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x4d7a90e8, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x177681ef, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x8c1531bb, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5b148c7f, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0xe44a1fc3, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x6e26e8f7, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xace88f34, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x672b66e0, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0x874399fb, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x1c51c620, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xb8441e44, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0xf5a7a64f, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x20cd2142, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0xba712aa2, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xbbf7c01f, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x7d09a450, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0x547050e9, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0xd090fc5c, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0x55f790e4, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5d31000f, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0xc236f8f4, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x17016d9f, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x1fbd6ca3, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7536b652, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6833be52, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x47582814, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xde0a3fcf, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x7a51185b, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x84713264, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0xa07efb97, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0xc3c3499b, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x289d731d, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0xf7c9a9cb, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x90783989, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x62d9cd59, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xe199e2df, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37e95c93, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56A20F16D5E18551AB59388");

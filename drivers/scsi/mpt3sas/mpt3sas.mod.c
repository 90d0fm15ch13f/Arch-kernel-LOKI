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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x40463733, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x89eab1e, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x89b5432b, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x548a8589, __VMLINUX_SYMBOL_STR(sas_is_tlr_enabled) },
	{ 0x67eb1b3c, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device_locked) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x874399fb, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x9e117a6c, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xb52151, __VMLINUX_SYMBOL_STR(sas_disable_tlr) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf5a7a64f, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf7c9a9cb, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xdbc732bd, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0xc3c3499b, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0x20cd2142, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xbbf7c01f, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xad5d47d4, __VMLINUX_SYMBOL_STR(dma_get_required_mask) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xba3658c, __VMLINUX_SYMBOL_STR(raid_class_release) },
	{ 0xc6b5ea1b, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xa084749a, __VMLINUX_SYMBOL_STR(__bitmap_or) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xf688ef82, __VMLINUX_SYMBOL_STR(scsi_internal_device_block) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcb264420, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb8441e44, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xca88538, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x289d731d, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x549db71f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xb138eda2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdcc928b, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xace88f34, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2c8ad292, __VMLINUX_SYMBOL_STR(raid_class_attach) },
	{ 0xe7216340, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x3f8bb11a, __VMLINUX_SYMBOL_STR(attribute_container_find_class_device) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xd1f3e652, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x6e26e8f7, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x86eac651, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x14a95ba1, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x8c1531bb, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x7536b652, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1fbd6ca3, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1c51c620, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd090fc5c, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0x62d9cd59, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x93242c03, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x672b66e0, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x3332859, __VMLINUX_SYMBOL_STR(scsi_internal_device_unblock) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb624ce9f, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x6947cf01, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x2c5f3905, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x60079dc7, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xbef58e14, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x3275457, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x52cfb587, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x5f6406cb, __VMLINUX_SYMBOL_STR(sas_enable_tlr) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x1a94c209, __VMLINUX_SYMBOL_STR(param_ops_ullong) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_sas,raid_class";

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "67D1F9678EE585D3B1C3E74");

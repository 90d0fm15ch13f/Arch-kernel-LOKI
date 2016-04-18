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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xc35b0095, __VMLINUX_SYMBOL_STR(iscsi_eh_session_reset) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x75f74986, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x66e356d0, __VMLINUX_SYMBOL_STR(iscsi_boot_create_target) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xab3697e4, __VMLINUX_SYMBOL_STR(irq_poll_init) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xd4047ee0, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xb633f115, __VMLINUX_SYMBOL_STR(irq_poll_enable) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x554ae3a4, __VMLINUX_SYMBOL_STR(irq_poll_sched) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf6d569e7, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9f2af072, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x363f38eb, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x86836355, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x78ea4261, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x7f7f7bb4, __VMLINUX_SYMBOL_STR(irq_poll_disable) },
	{ 0xb4eff19b, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcb264420, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x4a826ddc, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xbaa600cf, __VMLINUX_SYMBOL_STR(iscsi_boot_create_ethernet) },
	{ 0x15204dac, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xaa88e751, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xf7fa6630, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0x41db3322, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xafcc62b6, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x180b5bc4, __VMLINUX_SYMBOL_STR(iscsi_complete_scsi_task) },
	{ 0x90dd9dc6, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x77728f6e, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x9f9c5ac8, __VMLINUX_SYMBOL_STR(iscsi_boot_create_host_kset) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xbdd49557, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xb6224fd5, __VMLINUX_SYMBOL_STR(iscsi_session_failure) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x7d8183fc, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x14a95ba1, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x29062889, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x8ec42f92, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd7d280ad, __VMLINUX_SYMBOL_STR(irq_poll_complete) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x54d3743a, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x14809fca, __VMLINUX_SYMBOL_STR(iscsi_destroy_iface) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x52019b63, __VMLINUX_SYMBOL_STR(iscsi_suspend_queue) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x93242c03, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x34f700d5, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x5c12e8a0, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe28baa13, __VMLINUX_SYMBOL_STR(iscsi_create_iface) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xbe9a9d29, __VMLINUX_SYMBOL_STR(iscsi_boot_create_initiator) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xadbd63fa, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2abb9f13, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x31b2ee9a, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xcb50f837, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0x48c82973, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x9dbd9539, __VMLINUX_SYMBOL_STR(iscsi_get_port_speed_name) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf841e0b4, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xd7661d53, __VMLINUX_SYMBOL_STR(bsg_job_done) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xa07bf9cb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa587866e, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x52cfb587, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe4ff8962, __VMLINUX_SYMBOL_STR(iscsi_host_for_each_session) },
	{ 0x32ec6c2c, __VMLINUX_SYMBOL_STR(iscsi_get_port_state_name) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x4aeed1b1, __VMLINUX_SYMBOL_STR(iscsi_boot_destroy_kset) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,iscsi_boot_sysfs,scsi_transport_iscsi";

MODULE_ALIAS("pci:v000019A2d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000222sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000722sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A75404C081340A1010A9A26");
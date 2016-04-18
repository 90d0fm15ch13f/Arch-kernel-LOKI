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
	{ 0xb23e20c5, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x4224e61e, __VMLINUX_SYMBOL_STR(vmbus_are_subchannels_present) },
	{ 0xcebb2774, __VMLINUX_SYMBOL_STR(vmbus_sendpacket_mpb_desc) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xe9463caf, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x7b18f320, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x1487a4e2, __VMLINUX_SYMBOL_STR(vmbus_set_sc_create_callback) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x24d2b40e, __VMLINUX_SYMBOL_STR(blk_queue_virt_boundary) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa0200215, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x46a417ca, __VMLINUX_SYMBOL_STR(vmbus_proto_version) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc36c7100, __VMLINUX_SYMBOL_STR(vmbus_get_outgoing_channel) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x82343ab5, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xb7cd8ba, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xe05bdd3c, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x55efcea8, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x86eac651, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x7d8183fc, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4d7a90e8, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0xe805a81, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe2d70083, __VMLINUX_SYMBOL_STR(vmbus_recvpacket) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcebc16d2, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x62d9cd59, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc0ee179b, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0xd7480967, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf841e0b4, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3898b00f, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0x841c01d9, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
	{ 0x51336b7f, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,scsi_mod,scsi_transport_fc";

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

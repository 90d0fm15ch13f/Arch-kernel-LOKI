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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x3129ff5e, __VMLINUX_SYMBOL_STR(fcoe_start_io) },
	{ 0xeee63d92, __VMLINUX_SYMBOL_STR(fc_exch_init) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xea992482, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv_flogi) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1356c294, __VMLINUX_SYMBOL_STR(fcoe_ctlr_els_send) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x48bf792c, __VMLINUX_SYMBOL_STR(fcoe_transport_detach) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf02935b8, __VMLINUX_SYMBOL_STR(fc_lport_bsg_request) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xa5fd0c62, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x75a9b127, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe987f4f7, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_up) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x72c70177, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x374c1e1c, __VMLINUX_SYMBOL_STR(fcoe_wwn_from_mac) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28c1c73f, __VMLINUX_SYMBOL_STR(libfc_vport_create) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7e6e8f02, __VMLINUX_SYMBOL_STR(fcoe_get_lesb) },
	{ 0xdff88e8b, __VMLINUX_SYMBOL_STR(fcoe_clean_pending_queue) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xdec090ee, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb3cc3082, __VMLINUX_SYMBOL_STR(fc_disc_config) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x36602464, __VMLINUX_SYMBOL_STR(fc_lport_flogi_resp) },
	{ 0xecc4b595, __VMLINUX_SYMBOL_STR(fc_exch_mgr_free) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1389093, __VMLINUX_SYMBOL_STR(fc_lport_destroy) },
	{ 0x1496afe4, __VMLINUX_SYMBOL_STR(fc_elsct_init) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x545b8e4f, __VMLINUX_SYMBOL_STR(fc_vport_id_lookup) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x2aa555bd, __VMLINUX_SYMBOL_STR(fc_slave_alloc) },
	{ 0xc3985e11, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3ab2eae5, __VMLINUX_SYMBOL_STR(fcoe_get_wwn) },
	{ 0xbc3c67a1, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_down) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xfb51275, __VMLINUX_SYMBOL_STR(fcoe_queue_timer) },
	{ 0x1790d4f0, __VMLINUX_SYMBOL_STR(fc_set_mfs) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xda056f34, __VMLINUX_SYMBOL_STR(fc_exch_recv) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x5a714f52, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0xfaf4c411, __VMLINUX_SYMBOL_STR(fc_get_host_stats) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x47f52b69, __VMLINUX_SYMBOL_STR(fc_set_rport_loss_tmo) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x636af174, __VMLINUX_SYMBOL_STR(cnic_unregister_driver) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa81e3595, __VMLINUX_SYMBOL_STR(fc_fabric_logoff) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6e77f79c, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0xbac92210, __VMLINUX_SYMBOL_STR(fc_elsct_send) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x84b3d915, __VMLINUX_SYMBOL_STR(fcoe_wwn_to_str) },
	{ 0x59595303, __VMLINUX_SYMBOL_STR(fc_rport_terminate_io) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x8bf1836, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0xb94fa0b9, __VMLINUX_SYMBOL_STR(fc_get_host_speed) },
	{ 0x80db242a, __VMLINUX_SYMBOL_STR(fc_lport_logo_resp) },
	{ 0x2421b136, __VMLINUX_SYMBOL_STR(fc_lport_reset) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x9290b321, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0xff37f9d8, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x1cb6313d, __VMLINUX_SYMBOL_STR(__dev_remove_pack) },
	{ 0xe05bdd3c, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x47a58459, __VMLINUX_SYMBOL_STR(fcoe_validate_vport_create) },
	{ 0xc5bdfa0c, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_add) },
	{ 0x8940993b, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_delete) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd163f54e, __VMLINUX_SYMBOL_STR(fcoe_transport_attach) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xacc330cf, __VMLINUX_SYMBOL_STR(cnic_register_driver) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xddde23e4, __VMLINUX_SYMBOL_STR(fcoe_ctlr_destroy) },
	{ 0xad00881e, __VMLINUX_SYMBOL_STR(fc_block_scsi_eh) },
	{ 0x1cb6d16f, __VMLINUX_SYMBOL_STR(fcoe_fc_crc) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe787935e, __VMLINUX_SYMBOL_STR(fc_disc_init) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf586ec2e, __VMLINUX_SYMBOL_STR(fcoe_fcf_get_selected) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x875beec7, __VMLINUX_SYMBOL_STR(fc_lport_config) },
	{ 0xdfd86158, __VMLINUX_SYMBOL_STR(fcoe_check_wait_queue) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x8ef864d, __VMLINUX_SYMBOL_STR(fc_exch_mgr_alloc) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xcaaea5c7, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xa98f5c25, __VMLINUX_SYMBOL_STR(fc_vport_setlink) },
	{ 0xd7480967, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x61679d21, __VMLINUX_SYMBOL_STR(fc_exch_mgr_list_clone) },
	{ 0x45b45b3c, __VMLINUX_SYMBOL_STR(fc_rport_init) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xa3279cbd, __VMLINUX_SYMBOL_STR(fc_fabric_login) },
	{ 0xf6ec089a, __VMLINUX_SYMBOL_STR(fc_eh_host_reset) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x95513d84, __VMLINUX_SYMBOL_STR(fc_get_host_port_state) },
	{ 0x78654f92, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x47e9309b, __VMLINUX_SYMBOL_STR(fc_lport_init) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xce77604, __VMLINUX_SYMBOL_STR(fcoe_ctlr_get_lesb) },
	{ 0x3898b00f, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf4178161, __VMLINUX_SYMBOL_STR(fcoe_link_speed_update) },
	{ 0x40f6b16f, __VMLINUX_SYMBOL_STR(fcoe_get_paged_crc_eof) },
	{ 0x5874294, __VMLINUX_SYMBOL_STR(fcoe_ctlr_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfcoe,libfc,scsi_mod,scsi_transport_fc,cnic";


MODULE_INFO(srcversion, "AADE2A760E3323886134376");

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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa4ca16d0, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x75f74986, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xab720a6, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0x9a7a6027, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0xa48703ac, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9f2af072, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x363f38eb, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7c24b620, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x86836355, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x78ea4261, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xb4eff19b, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0xc3dcfc1b, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x17eb9578, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xdc41b5b5, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xafcc62b6, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xcb133ed7, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x77728f6e, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0x46ef8f77, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x9290b321, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0x85f4cd1c, __VMLINUX_SYMBOL_STR(ipv6_dev_get_saddr) },
	{ 0xbdd49557, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6a1cba13, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x29062889, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xc8954e5b, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xc388e32a, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0xdfd174aa, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x54d3743a, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xd3c2b3d0, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x34f700d5, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x130cc43f, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xadbd63fa, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x2abb9f13, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x31b2ee9a, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xa3041318, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_segment_is_hdr) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi,scsi_mod";


MODULE_INFO(srcversion, "626BCEEE6791B690A7FD10F");

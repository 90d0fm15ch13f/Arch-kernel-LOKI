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
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4b630dac, __VMLINUX_SYMBOL_STR(vmci_get_context_id) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x722d488a, __VMLINUX_SYMBOL_STR(vmci_event_unsubscribe) },
	{ 0xc38ab1ed, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xcb9ff0ab, __VMLINUX_SYMBOL_STR(vmci_qpair_enquev) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x85c5beac, __VMLINUX_SYMBOL_STR(vsock_add_pending) },
	{ 0xbfba342b, __VMLINUX_SYMBOL_STR(vmci_qpair_dequev) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x612df9ae, __VMLINUX_SYMBOL_STR(vmci_qpair_detach) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa1f27062, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0x234b44e0, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0xa3a31726, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x3ef56cd5, __VMLINUX_SYMBOL_STR(vmci_qpair_alloc) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x1175eff9, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x13aa5a5d, __VMLINUX_SYMBOL_STR(vmci_datagram_create_handle) },
	{ 0x677c36d0, __VMLINUX_SYMBOL_STR(vmci_is_context_owner) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x305804d7, __VMLINUX_SYMBOL_STR(vmci_qpair_peekv) },
	{ 0x7d540b50, __VMLINUX_SYMBOL_STR(vmci_qpair_consume_free_space) },
	{ 0x2663cb64, __VMLINUX_SYMBOL_STR(vsock_addr_equals_addr) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdac94780, __VMLINUX_SYMBOL_STR(vmci_qpair_get_consume_indexes) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd0f699d, __VMLINUX_SYMBOL_STR(vsock_addr_bound) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7c3c17c5, __VMLINUX_SYMBOL_STR(vsock_remove_pending) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x970b77bc, __VMLINUX_SYMBOL_STR(vsock_pending_work) },
	{ 0x1872c7af, __VMLINUX_SYMBOL_STR(vmci_qpair_produce_free_space) },
	{ 0x20cd0bad, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0x3d41554b, __VMLINUX_SYMBOL_STR(vsock_remove_connected) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9624c58c, __VMLINUX_SYMBOL_STR(vmci_datagram_send) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xac859661, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xcf5ed7ef, __VMLINUX_SYMBOL_STR(vmci_event_subscribe) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6680ea, __VMLINUX_SYMBOL_STR(vmci_qpair_produce_buf_ready) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x69ef87ff, __VMLINUX_SYMBOL_STR(vmci_datagram_destroy_handle) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x74077155, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9973b9b2, __VMLINUX_SYMBOL_STR(vmci_qpair_consume_buf_ready) },
	{ 0x1152e318, __VMLINUX_SYMBOL_STR(vmci_qpair_get_produce_indexes) },
	{ 0x5991d29b, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x1a195863, __VMLINUX_SYMBOL_STR(vmci_context_get_priv_flags) },
	{ 0x6cc1a5f7, __VMLINUX_SYMBOL_STR(vmci_datagram_create_handle_priv) },
	{ 0x106367b5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x42e9774f, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vmci,vsock";


MODULE_INFO(srcversion, "68D2F69892B1BBFB20B43AA");

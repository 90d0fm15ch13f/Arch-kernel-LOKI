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
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x28e06682, __VMLINUX_SYMBOL_STR(pn_sock_unhash) },
	{ 0x465caa70, __VMLINUX_SYMBOL_STR(sk_stream_wait_connect) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x23aa74d0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x1278ea1, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x7ee6e863, __VMLINUX_SYMBOL_STR(pn_sock_hash) },
	{ 0xe0f7dae1, __VMLINUX_SYMBOL_STR(phonet_proto_register) },
	{ 0x17bf7965, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x65173dc9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfdbd1f15, __VMLINUX_SYMBOL_STR(pn_sock_get_port) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x8c9ed7af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xff7084f8, __VMLINUX_SYMBOL_STR(phonet_proto_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xac859661, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4c08c8f9, __VMLINUX_SYMBOL_STR(pn_skb_send) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x6b4bce21, __VMLINUX_SYMBOL_STR(phonet_stream_ops) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x106367b5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phonet";


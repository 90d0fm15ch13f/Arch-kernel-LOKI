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
	{ 0x2b71f763, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xeab98c2f, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x4f622264, __VMLINUX_SYMBOL_STR(compat_ipv6_getsockopt) },
	{ 0xb58d5e08, __VMLINUX_SYMBOL_STR(compat_ipv6_setsockopt) },
	{ 0x17a32d83, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x58109262, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x2a900ade, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe8cfa45d, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xf808098, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x2097a95f, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0x9a9372bb, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0xff81a72a, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x8f5e27aa, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xaf77c9c9, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x8e8a5d29, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x92324f8e, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xca1639b7, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x3a2d4101, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xa83d2df6, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xc137e0c6, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x2b383a69, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x7e2c2962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe22fa5bf, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x73435c6f, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x6af4f237, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xac859661, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x41adf462, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd4b87b0e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf01908a4, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x5838e7d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x4ac005ab, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x77da680d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xcc902fed, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x23aa74d0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x65173dc9, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x9b5991a6, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf455d438, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x7182c5aa, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x5eab7ded, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xbcdcb35c, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0xcefbef84, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x252cf803, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x6ecc1e74, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa6a06eb7, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xa48703ac, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x5e9c6372, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xb7c7c44d, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x57a9396c, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e283608, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x2da44997, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xd6eb956, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x663fb837, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x106367b5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "3ED4011930843704A62F2FD");

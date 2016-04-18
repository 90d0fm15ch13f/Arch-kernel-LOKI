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
	{ 0x45d2e94c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x90c61868, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x444f6cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xa48703ac, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xaa62ba03, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x641e97bb, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xc6352d62, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xcc58718e, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x550b1139, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6e8608c5, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x696df9fb, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x242e41fa, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xc939e253, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xa8cf26a1, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0xeaff5638, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac159d3f, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2a7c5822, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb544ef4b, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x30545952, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x3eb0a019, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x953744d9, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x7fce79e2, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xea7393d0, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3e8591eb, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x666b4280, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5791f9c0, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x97b89980, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x82f1103b, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd3c2b3d0, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xbc63af62, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x22ee2222, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1c569290, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xb3110ae, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xe8d79b1b, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7af152a4, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0x40bf513c, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7fce79e2, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x242e41fa, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x444f6cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x90c61868, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xe8d79b1b, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x2a7c5822, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xea7393d0, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xac159d3f, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x67e6936c, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x22ee2222, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x3ee43de5, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x45d2e94c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x97b89980, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x3eb0a019, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x40bf513c, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x41adf462, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1c569290, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x5791f9c0, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc6352d62, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcc58718e, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x953744d9, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6e8608c5, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x82f1103b, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3e8591eb, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x696df9fb, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xeaff5638, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x666b4280, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xb3110ae, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


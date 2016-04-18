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
	{ 0x7fce79e2, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x242e41fa, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x444f6cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x90c61868, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xe8d79b1b, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x2a7c5822, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xea7393d0, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xac159d3f, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x630ef521, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x22ee2222, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1cf496c9, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x45d2e94c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x97b89980, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x3eb0a019, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x9d0a3982, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x41adf462, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xc6352d62, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x1ee7bc68, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x5791f9c0, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x56670ac1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xcc58718e, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x953744d9, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xa36d795e, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa48703ac, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa8621e7e, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x6e9e79e1, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3e8591eb, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x696df9fb, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xeaff5638, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x666b4280, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";


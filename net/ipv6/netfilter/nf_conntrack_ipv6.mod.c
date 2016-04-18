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
	{ 0x520779d6, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x5a16de9e, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x3d077f32, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xf54aa4cc, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc9c4ddf0, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf389aa39, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xd0005fac, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2f42f9ce, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x96705871, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x673a4ce3, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xff6e97e1, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x109d401a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xbb01aa20, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x692b1857, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x5bf2362d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x979ae5d3, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x3804954a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xd7d5ab29, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4eb97a9f, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x5c173ac7, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x7a8de5c5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x4f087b9b, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x2dc31ae0, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xf422655b, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xce82b519, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xd73bccb4, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xcdd7df22, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6";


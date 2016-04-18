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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xf196b82f, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x373de4c8, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x83686ef, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_put) },
	{ 0x2840d505, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_get) },
	{ 0xbb31c94f, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_put) },
	{ 0x115d25c7, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_get) },
	{ 0xddf15889, __VMLINUX_SYMBOL_STR(nft_reject_icmp_code) },
	{ 0x49d8c975, __VMLINUX_SYMBOL_STR(nft_bridge_ip6hdr_validate) },
	{ 0xe8cdab4e, __VMLINUX_SYMBOL_STR(nft_reject_icmpv6_code) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x776040d6, __VMLINUX_SYMBOL_STR(nf_reject_ip6hdr_put) },
	{ 0xf422655b, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x692b1857, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8c8fa2d5, __VMLINUX_SYMBOL_STR(br_deliver) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb3f36741, __VMLINUX_SYMBOL_STR(nf_reject_iphdr_put) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x795c5182, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x6093f4b9, __VMLINUX_SYMBOL_STR(nft_bridge_iphdr_validate) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5778f241, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,nf_tables_bridge,bridge";


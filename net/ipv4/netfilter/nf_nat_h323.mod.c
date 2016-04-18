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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x1c8b6233, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x7a3564b7, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xdefe3ba7, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x4e9f6e13, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xacdcce96, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0x61596a9, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x68dddd9c, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x5cbba34, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xce01fe44, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x7a84b4a0, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xa74e503f, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1b81be96, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xa1ffe0a1, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf2ae1cfd, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x52f3794c, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x231f9b15, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x22bca0e7, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa25fccdf, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


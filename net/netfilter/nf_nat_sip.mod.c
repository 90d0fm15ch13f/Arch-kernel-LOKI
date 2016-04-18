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
	{ 0x7a3564b7, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x1c8b6233, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xaeb10a0d, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xaf549d76, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x1570e7e2, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0xa6f5de58, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x314e20aa, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xf5c87ade, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x4a46a961, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x6465990, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xa1ffe0a1, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf2ae1cfd, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8d2e087c, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x25470209, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x52f3794c, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x231f9b15, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa25fccdf, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


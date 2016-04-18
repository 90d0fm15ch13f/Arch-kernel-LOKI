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
	{ 0xe249bfab, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_expectfn) },
	{ 0x1a336dfb, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_exp_gre) },
	{ 0x342dc691, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_inbound) },
	{ 0x69aaf004, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_outbound) },
	{ 0x636b12c8, __VMLINUX_SYMBOL_STR(nf_nat_need_gre) },
	{ 0x827cc6a1, __VMLINUX_SYMBOL_STR(pptp_msg_name) },
	{ 0x52f3794c, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa25fccdf, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xf8811a21, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xa1ffe0a1, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x88e6f956, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


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
	{ 0xa24491d1, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x3852dae0, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0xe2bf37f9, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x88f474cb, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x94de0e1a, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdd3e0143, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0xf7be213e, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x30cef244, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv6";


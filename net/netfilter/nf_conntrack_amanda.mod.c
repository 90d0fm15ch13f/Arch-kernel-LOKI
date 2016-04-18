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
	{ 0x32973cd4, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x5a16de9e, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xa952f38b, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x7e217a49, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xa8e89a05, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x9ac98b06, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf8811a21, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x24cfb55c, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xf2ae1cfd, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6465990, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcab5b844, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


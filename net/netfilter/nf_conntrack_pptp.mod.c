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
	{ 0xa1ffe0a1, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x32973cd4, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1631147c, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xa952f38b, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7e217a49, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x88e6f956, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xf8811a21, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x24cfb55c, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xf2ae1cfd, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x19383a26, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xd73bccb4, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";

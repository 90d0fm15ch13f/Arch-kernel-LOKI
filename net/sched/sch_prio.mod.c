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
	{ 0xd7fb2f2f, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x70fac1af, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xcf597181, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x19b9cbe5, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x2713a25f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xdf171e9f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x6a853703, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7c5f63fa, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6e7973e, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd66fc2e9, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xa806a8d, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x67101a1b, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x59380a70, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


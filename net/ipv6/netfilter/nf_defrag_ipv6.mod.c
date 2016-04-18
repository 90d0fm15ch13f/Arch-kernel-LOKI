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
	{ 0x6cc42aee, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x3cffcfac, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x66d804b1, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x837e64e5, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x6f060a41, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x36d42640, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xf737bdc5, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x7afcc054, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbb01aa20, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x79d1ceee, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x48bd25e2, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb905c66, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5e80ea1, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x5c173ac7, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xe12782a0, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf71d80ec, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2c82810, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0xec694645, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
	{ 0x85e1f1, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


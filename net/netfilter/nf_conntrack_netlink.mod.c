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
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x183b0c78, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xe661e37, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x745bb48f, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc0c74c51, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xf32af322, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xa67e80d0, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xad2c1c53, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x7bebddcc, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x8993e023, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0xcd26e8, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4289b80c, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x1497885b, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf418c23f, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xf2ae1cfd, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x1212fcb4, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x24cfb55c, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x5168a886, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0xe4236314, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xdfe7dbc7, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x97e05a3b, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd73bccb4, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xbf481c91, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6a18dc58, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x88e6f956, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xa448132c, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaa8339, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0xf0206bc0, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x675276eb, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcc7c2e4d, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc85d80be, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x245abe14, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3ff6fa9a, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x4df66596, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xef9155c5, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcdd7df22, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x635a33d9, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x4bf80032, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf8811a21, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xf8761293, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


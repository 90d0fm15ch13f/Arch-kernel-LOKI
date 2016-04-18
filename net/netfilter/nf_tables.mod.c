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
	{ 0xc85d80be, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x546a42eb, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x4841bdee, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe661e37, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xcc7c2e4d, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc939e253, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5982af8a, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x35f5563d, __VMLINUX_SYMBOL_STR(skb_store_bits) },
	{ 0x9ac02f5c, __VMLINUX_SYMBOL_STR(nf_log_trace) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xd8da2537, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8774075e, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x745bb48f, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6b640864, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0x675276eb, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xaf549d76, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x44a8ae9b, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xedbaee5e, __VMLINUX_SYMBOL_STR(nla_strcmp) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xa448132c, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


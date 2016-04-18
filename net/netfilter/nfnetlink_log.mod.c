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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3d314da4, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xf39a2880, __VMLINUX_SYMBOL_STR(nf_log_bind_pf) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb1db0095, __VMLINUX_SYMBOL_STR(proc_set_user) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xcc642a4, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe661e37, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1f63ee74, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0x5b75a5c4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7171121c, __VMLINUX_SYMBOL_STR(overflowgid) },
	{ 0x5280ea5f, __VMLINUX_SYMBOL_STR(nf_log_unbind_pf) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbd74c149, __VMLINUX_SYMBOL_STR(nfnetlink_alloc_skb) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7e927f92, __VMLINUX_SYMBOL_STR(call_rcu_bh) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x745bb48f, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf21176dd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x877291a, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0xbe98810, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x183b0c78, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


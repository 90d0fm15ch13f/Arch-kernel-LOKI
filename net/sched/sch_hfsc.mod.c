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
	{ 0x178fc438, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf0adef22, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x6e7973e, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x6a853703, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7c5f63fa, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0xc706f44f, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x3b7e95c5, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0x2713a25f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x5fb86256, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0xdf171e9f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xb751159f, __VMLINUX_SYMBOL_STR(qdisc_warn_nonwc) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xd20107e3, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xaa263d82, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0xd66fc2e9, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xcf597181, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x19b9cbe5, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xa806a8d, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xbc4f0b48, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x67101a1b, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x59380a70, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


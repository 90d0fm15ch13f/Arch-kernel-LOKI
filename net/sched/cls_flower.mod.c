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
	{ 0x9338bf3a, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0xd96742b, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x79987d48, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe301f8de, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0x1d84b357, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0xd34ba30f, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0xb3432539, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x6b640864, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x2ff1909e, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x9f7c1be8, __VMLINUX_SYMBOL_STR(skb_flow_dissector_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x313b9e27, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x2987fe33, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x94cae146, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8df92f66, __VMLINUX_SYMBOL_STR(memchr_inv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5bd6bf7c, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x855e1cac, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x33a7f0c9, __VMLINUX_SYMBOL_STR(rhashtable_destroy) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe8214184, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


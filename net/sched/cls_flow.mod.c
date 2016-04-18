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
	{ 0x855e1cac, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0xd8da2537, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x5bd6bf7c, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0xe133dbbd, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x32507b6c, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd34ba30f, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2ff1909e, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0xb1bf0e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe8214184, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x313b9e27, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x2987fe33, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


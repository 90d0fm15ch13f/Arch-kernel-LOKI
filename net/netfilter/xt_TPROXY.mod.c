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
	{ 0x56860d4, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xd4d4fe5e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x4e8579f9, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x940c2246, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xe61ca356, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xf7be213e, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7831561d, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0xe5173623, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x5204fa0c, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x37876d78, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xd92e2dca, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xb671e527, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc8ab778e, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x2d532d, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";


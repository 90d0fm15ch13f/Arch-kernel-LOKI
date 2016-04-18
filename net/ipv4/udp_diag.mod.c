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
	{ 0xf0c9650, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x1a5f320, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xc449f1bc, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3b6f6cd2, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xf764868a, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb1f4a3c, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf7ee02e, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x76d5f50f, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0xfc9805a2, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


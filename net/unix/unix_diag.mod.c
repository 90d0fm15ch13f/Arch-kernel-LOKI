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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7874b5ec, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0xa4422158, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0xe9774c5e, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0x870be8ab, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x539e4da2, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x87489bbb, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42b99564, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x76d5f50f, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x66a76cb7, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0x6a907b85, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x44a8ae9b, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xa448132c, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


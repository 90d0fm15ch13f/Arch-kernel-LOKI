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
	{ 0xd4b87b0e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0x710d1457, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x5838e7d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xe282104, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xb612c27f, __VMLINUX_SYMBOL_STR(l2tp_session_find_by_ifname) },
	{ 0x6a543894, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x37f0870e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xbfff6852, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1a9e78a7, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x58d654ed, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x18f061db, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x540d3095, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "AB471E71960A5C0C8807CA6");

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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x45d2e94c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x710d1457, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xdacec2ed, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe282104, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x5df4e8b, __VMLINUX_SYMBOL_STR(inet6_offloads) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8e940153, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x3ca0e1db, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0x92f27904, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_del_ops) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xac159d3f, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd8da2537, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x9af67c8d, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x303041c6, __VMLINUX_SYMBOL_STR(udp_flow_hashrnd) },
	{ 0x82f1103b, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xf54bf8f, __VMLINUX_SYMBOL_STR(inet_offloads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c2498af, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x58d654ed, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x96ac7c40, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xba50ad9e, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x23c691d0, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_add_ops) },
	{ 0x7af152a4, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_udp_tunnel,udp_tunnel,ip_tunnel";


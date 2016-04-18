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
	{ 0xfde69765, __VMLINUX_SYMBOL_STR(lwtunnel_encap_del_ops) },
	{ 0x97d516e7, __VMLINUX_SYMBOL_STR(lwtunnel_encap_add_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf67d707a, __VMLINUX_SYMBOL_STR(nla_get_labels) },
	{ 0xf26a8d44, __VMLINUX_SYMBOL_STR(lwtunnel_state_alloc) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x9591c01, __VMLINUX_SYMBOL_STR(neigh_xmit) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe54a0f81, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x72bfe12f, __VMLINUX_SYMBOL_STR(mpls_pkt_too_big) },
	{ 0xee5f9135, __VMLINUX_SYMBOL_STR(mpls_dev_mtu) },
	{ 0x204f0e7a, __VMLINUX_SYMBOL_STR(mpls_output_possible) },
	{ 0x797d9e21, __VMLINUX_SYMBOL_STR(nla_put_labels) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mpls_router";


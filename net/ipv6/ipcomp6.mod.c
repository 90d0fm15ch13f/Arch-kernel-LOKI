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
	{ 0x2cf78be6, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xd2aa8b55, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x2e9c57c, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x102bcae5, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xe512d748, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x9148f379, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xdf6802c2, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd70aca79, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb090909f, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xd96da134, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xd5dce054, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xb3ba8edc, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xb01bc4b5, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x304a8f7c, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xa4269d9c, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x76ac2b36, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x1ee7bc68, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xfcb39dde, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x56670ac1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";


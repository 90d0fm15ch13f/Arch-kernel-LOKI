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
	{ 0xe512d748, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x9148f379, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xdf6802c2, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd70aca79, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xb090909f, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd7482804, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x27769b37, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x68a86f5d, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xe6226cce, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd3b2495c, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb1f2e941, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xe80f64e7, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe6d9c379, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x76ac2b36, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x1ee7bc68, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xfcb39dde, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x56670ac1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";


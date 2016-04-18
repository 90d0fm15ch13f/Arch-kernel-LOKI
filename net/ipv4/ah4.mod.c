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
	{ 0x9d0a3982, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x571d51ea, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x630ef521, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xdf6802c2, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x1cf496c9, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xb090909f, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x28ed414e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x2cc50ed9, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe6226cce, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3ac104dd, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x5bbeb938, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe80f64e7, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe6d9c379, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6352d62, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x1ee7bc68, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x5791f9c0, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x56670ac1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";


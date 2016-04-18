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
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x42220bb3, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x4227e88a, __VMLINUX_SYMBOL_STR(ccp_enqueue_cmd) },
	{ 0x4773b60, __VMLINUX_SYMBOL_STR(ccp_present) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x86fc301a, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf5621d7c, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1f9e585d, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x79c7731b, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x8e068185, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb54e53f2, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2a260fe6, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0xd62df6d6, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ccp";


MODULE_INFO(srcversion, "23ADE189C257CBFFFE20521");

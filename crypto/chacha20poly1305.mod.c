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
	{ 0x2124d861, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x8880032a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x200e426d, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x124047b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16d44a63, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x87ba8da7, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xae1c046d, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xce6785c3, __VMLINUX_SYMBOL_STR(crypto_find_alg) },
	{ 0xd62df6d6, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x51948887, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x72665ac2, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x415ac40c, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x43619e1a, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


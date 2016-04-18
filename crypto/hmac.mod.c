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
	{ 0x5f30a2d9, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x1d2fce1e, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x348101c, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0xb8887a3a, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0x124047b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xbeda26c8, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x72665ac2, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x9e597b01, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x8d217b03, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf5621d7c, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x783f3d0d, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


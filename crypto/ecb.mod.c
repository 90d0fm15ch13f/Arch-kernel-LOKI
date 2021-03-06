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
	{ 0x124047b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x3d346360, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x562d730e, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x51948887, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7ede95b4, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x638e5c20, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16d44a63, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


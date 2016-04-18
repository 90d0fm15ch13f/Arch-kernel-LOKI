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
	{ 0x9ed04c9, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0x9e597b01, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x93d0c2ea, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x3ac104dd, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x55c51640, __VMLINUX_SYMBOL_STR(cryptd_shash_desc) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x1f9e585d, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x23d4d6b9, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x618c2ad5, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x79c7731b, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x29af5c08, __VMLINUX_SYMBOL_STR(cryptd_ahash_child) },
	{ 0x28ed414e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xa0f0f461, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0xd909b81c, __VMLINUX_SYMBOL_STR(cryptd_alloc_ahash) },
	{ 0x614fdcc5, __VMLINUX_SYMBOL_STR(cryptd_free_ahash) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xd62df6d6, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

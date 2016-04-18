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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x200e426d, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x21ff8b8a, __VMLINUX_SYMBOL_STR(aead_exit_geniv) },
	{ 0x5dbad441, __VMLINUX_SYMBOL_STR(aead_init_geniv) },
	{ 0x669f559, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xb4765419, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


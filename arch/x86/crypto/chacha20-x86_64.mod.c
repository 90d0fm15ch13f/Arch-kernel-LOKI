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
	{ 0x1cc0fd1b, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x48e0543, __VMLINUX_SYMBOL_STR(crypto_chacha20_init) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x98b6a0d9, __VMLINUX_SYMBOL_STR(crypto_chacha20_setkey) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e068185, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x7ede95b4, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x2a260fe6, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0xeae4d698, __VMLINUX_SYMBOL_STR(crypto_chacha20_crypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=chacha20_generic";


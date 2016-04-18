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
	{ 0x26e33012, __VMLINUX_SYMBOL_STR(crypto_poly1305_init) },
	{ 0xa6dea808, __VMLINUX_SYMBOL_STR(crypto_poly1305_update) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0x23d4d6b9, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0xfe5f42ad, __VMLINUX_SYMBOL_STR(crypto_poly1305_final) },
	{ 0x618c2ad5, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bd37495, __VMLINUX_SYMBOL_STR(crypto_poly1305_setdesckey) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0xe4d19a3a, __VMLINUX_SYMBOL_STR(crypto_poly1305_setkey) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=poly1305_generic";


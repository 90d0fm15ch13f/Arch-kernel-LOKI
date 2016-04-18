#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf035b35d, __VMLINUX_SYMBOL_STR(cryptd_free_ablkcipher) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x19d4872e, __VMLINUX_SYMBOL_STR(cryptd_ablkcipher_child) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xba56bfa7, __VMLINUX_SYMBOL_STR(cryptd_alloc_ablkcipher) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";


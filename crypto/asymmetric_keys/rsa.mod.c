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
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0xae7c231d, __VMLINUX_SYMBOL_STR(mpi_cmp) },
	{ 0x9bece81b, __VMLINUX_SYMBOL_STR(mpi_cmp_ui) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x98503a63, __VMLINUX_SYMBOL_STR(mpi_alloc) },
	{ 0x4c4f603, __VMLINUX_SYMBOL_STR(mpi_get_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9fe939e1, __VMLINUX_SYMBOL_STR(mpi_powm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdbf7cb70, __VMLINUX_SYMBOL_STR(mpi_get_nbits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mpi";


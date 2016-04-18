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
	{ 0x6f72448d, __VMLINUX_SYMBOL_STR(xdr_decode_word) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x676a9ebe, __VMLINUX_SYMBOL_STR(xdr_encode_array2) },
	{ 0x495c96f8, __VMLINUX_SYMBOL_STR(posix_acl_init) },
	{ 0x5cabcf21, __VMLINUX_SYMBOL_STR(xdr_encode_word) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd2fbf682, __VMLINUX_SYMBOL_STR(xdr_decode_array2) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


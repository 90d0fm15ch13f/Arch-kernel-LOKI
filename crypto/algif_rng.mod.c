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
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc82be255, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x5f061c36, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xef9f9b9f, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xc08dd6fc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x528d541d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x978e8b5c, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x1a224888, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xbfddcbef, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xd8eb41f4, __VMLINUX_SYMBOL_STR(crypto_alloc_rng) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x89e905ff, __VMLINUX_SYMBOL_STR(crypto_rng_reset) },
	{ 0x1df5c8d1, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x3cc02c2c, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x16cbc0e7, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


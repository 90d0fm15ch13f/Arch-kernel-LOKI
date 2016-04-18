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
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x5f061c36, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xef9f9b9f, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xc08dd6fc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x528d541d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x978e8b5c, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x1a224888, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xbfddcbef, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x2cc50ed9, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x28ed414e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x5e0398e0, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x16cbc0e7, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x1df5c8d1, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x3cc02c2c, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x109d27ba, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1472612a, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x447ebd3b, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x478eaea3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xbcadea8, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x93d0c2ea, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x3ac104dd, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x11badcb8, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x415ac40c, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


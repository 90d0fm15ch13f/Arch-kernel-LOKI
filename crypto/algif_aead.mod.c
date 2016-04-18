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
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x528d541d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x978e8b5c, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x1a224888, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xbfddcbef, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa86b898f, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x68a86f5d, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x27769b37, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x5e0398e0, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x16cbc0e7, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x1df5c8d1, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x3cc02c2c, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x109d27ba, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xd7482804, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6be8b5d5, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb4557e67, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbcadea8, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x11badcb8, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0xff3da83, __VMLINUX_SYMBOL_STR(af_alg_link_sg) },
	{ 0x447ebd3b, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x478eaea3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


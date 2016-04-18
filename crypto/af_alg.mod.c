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
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xef9f9b9f, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc08dd6fc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe4768486, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd82cc8ca, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6af4f237, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1df09714, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x7e2c2962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x16cbc0e7, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x528d541d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xc82be255, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x109d27ba, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


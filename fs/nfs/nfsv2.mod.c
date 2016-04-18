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
	{ 0x127c5a5, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x1030852, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xaf0c8dd1, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xc3d9acb, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0xa51b6e71, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x57571615, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x4ca3f7c1, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7302332c, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0xb663b41b, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0xe03dee05, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0xa6ff711f, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x98d0e2fa, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x5df9ee10, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0x52e1b229, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x5e7a6301, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0x54119941, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x5144301, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0xe351682b, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xd1611176, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xaf2b4d94, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff5a0687, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe071434f, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0xf732a32c, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0xea5ab82f, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x79b7b609, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x76d1c247, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf1b1d84, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xaf2cf574, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa659cc2c, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x690ef79f, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0xb3f915a, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xc4bf0d03, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x215aba41, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xe5ac1861, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x8c788377, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x3c3f6e8a, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0xfa02bf39, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x38e0025d, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x6c99d682, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0x9a1dfc55, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,lockd";


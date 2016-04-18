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
	{ 0xa6290e89, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0x431c47c2, __VMLINUX_SYMBOL_STR(forget_cached_acl) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x127c5a5, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x1030852, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfb57fbdf, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xf4862083, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0xaf0c8dd1, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xc3d9acb, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0xa51b6e71, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x57571615, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6a33d58f, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0x4ca3f7c1, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x7302332c, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0xb663b41b, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x4c9416bc, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0xe03dee05, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0xa6ff711f, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x98d0e2fa, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x5df9ee10, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xb6d7dfe8, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x52e1b229, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5e7a6301, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xc5ef47d5, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0xd72960bd, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0x54119941, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x5144301, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0xe351682b, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xd1611176, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xaf2b4d94, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4d3c16fc, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff5a0687, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x741b310f, __VMLINUX_SYMBOL_STR(rpc_bind_new_program) },
	{ 0xcb3874cd, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe071434f, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x60df1e3b, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0xf732a32c, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x93149077, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x2383edc4, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x74881e02, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xdf89a147, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xea5ab82f, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x79b7b609, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x76d1c247, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xbdbeedb7, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xea99a4cb, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0xf1b1d84, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xaf2cf574, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x565dd098, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0xa659cc2c, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xe032e9d8, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x690ef79f, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0xb3f915a, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xc4bf0d03, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x8752c5a2, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0x215aba41, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xcf9b0ec4, __VMLINUX_SYMBOL_STR(forget_all_cached_acls) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xe5ac1861, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x540b647c, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x8c788377, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x3c3f6e8a, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0xfa02bf39, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x38e0025d, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x6c99d682, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9a1dfc55, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";


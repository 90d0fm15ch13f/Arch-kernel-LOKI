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
	{ 0x3ece8d51, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf3fd687, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe7320eb4, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x7fe48d23, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xc883b3fd, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x170389f3, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xdf8c781a, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x51bdbf4b, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x6f77ea85, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x47747f47, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x555a5a86, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xa83c5579, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x2c247c59, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x72adad7, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x16c77bd1, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x67e04c2d, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xe858159c, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x8a57c40c, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0xbe02ba67, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf798d461, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x7ba098a0, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x89419ca, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7839cc9d, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1b5a8a76, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xe6c6a79, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xbdeb342a, __VMLINUX_SYMBOL_STR(__check_sticky) },
	{ 0xcd1d91e, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6de53c37, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xf237b192, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xa28bdd45, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x1a72abf4, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x263f355a, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x98f94bba, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x1ee771e3, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x440c1b62, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf722691c, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x4809a0ea, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9f3d9cba, __VMLINUX_SYMBOL_STR(__inode_permission) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7fafe7c7, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5db69c3d, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x897a3444, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x2c6a9bf5, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0xd9d5c877, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xe8fea5ba, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x36dcb2ab, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x188a75bb, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xd25ad846, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xff7b9e1c, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0xd4f13690, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0x96c78fad, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


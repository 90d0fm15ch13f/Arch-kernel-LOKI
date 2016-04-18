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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x762485, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x15e74c6b, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xb4e99a03, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x6a016ade, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x95abbccc, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x67a0dbe9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xdfd4dae0, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd371f36d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1ff5a88d, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xafee3ade, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x89d0fbb0, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xf040800, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3971cde6, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2eb9e2f6, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f3c6075, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xa16e16d8, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xb126bc85, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x39a3dac0, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x6916ba97, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x5ac05f76, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4c08a09e, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x7cc4d08b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x77f8cf24, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x50e3dab4, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x4d7775a0, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x2af3c99f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x6447a6b, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xcc642ccf, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x3cad0dce, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x5f76d3b7, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


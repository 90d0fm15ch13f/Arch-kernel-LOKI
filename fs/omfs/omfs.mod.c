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
	{ 0x762485, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x6a016ade, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xa659715d, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x71d61c76, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x484ebce, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xb502a63f, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x8bf12b3b, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x4b22bc76, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x954648ec, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xafee3ade, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf040800, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf798d461, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xee3079e2, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xde70caf8, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xce980615, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x8172db07, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xf4b3a868, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x6916ba97, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xb5a87016, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x4acdfa31, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x5ef4612d, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9be1beda, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x7cc4d08b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x3c17987d, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x263f355a, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x77f8cf24, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xba0312fb, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xcdd90b8a, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6447a6b, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x9195901b, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x5db69c3d, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa776cab7, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x3263cff5, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x5f76d3b7, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x36b61118, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x8e8e1bc1, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x19186a0e, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";


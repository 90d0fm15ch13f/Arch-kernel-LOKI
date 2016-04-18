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
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x762485, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x15e74c6b, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xfb57fbdf, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xa659715d, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x67a0dbe9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xdfd4dae0, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9e2f8c90, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0x1ff5a88d, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x954648ec, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf040800, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3971cde6, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2eb9e2f6, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1f3c6075, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x65dccf13, __VMLINUX_SYMBOL_STR(xz_dec_end) },
	{ 0xa16e16d8, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xb126bc85, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x39a3dac0, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x5ac05f76, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xc978479a, __VMLINUX_SYMBOL_STR(xz_dec_run) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7cc4d08b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa07ed110, __VMLINUX_SYMBOL_STR(xz_dec_init) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x63f9b408, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4d7775a0, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x2af3c99f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x484ed784, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x4df8fbc, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x81db6ebb, __VMLINUX_SYMBOL_STR(xz_dec_reset) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x3cad0dce, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x5db69c3d, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x8e8e1bc1, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


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
	{ 0xb4e99a03, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x6a016ade, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x8bf12b3b, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd371f36d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xf040800, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf798d461, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2eb9e2f6, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa16e16d8, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xb09abbe7, __VMLINUX_SYMBOL_STR(simple_symlink_inode_operations) },
	{ 0xb126bc85, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x39a3dac0, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x6916ba97, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0x5ac05f76, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4c08a09e, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cc4d08b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x77f8cf24, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x50e3dab4, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x2af3c99f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x6447a6b, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfcc2a43c, __VMLINUX_SYMBOL_STR(utf32_to_utf8) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x5f76d3b7, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x8e8e1bc1, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


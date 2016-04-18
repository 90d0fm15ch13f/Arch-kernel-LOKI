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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xd371f36d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xd21418f5, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xf040800, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf798d461, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2eb9e2f6, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xa16e16d8, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xb126bc85, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x39a3dac0, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x6916ba97, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x5ac05f76, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cc4d08b, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2af3c99f, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x6447a6b, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x3cad0dce, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x8e8e1bc1, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


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
	{ 0xc3941088, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xcbcbfff2, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x83d2be7b, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x71d61c76, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf19f71a2, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0xb502a63f, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x58e79459, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x1194d7bb, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x2fde79ad, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0xd4e69e4d, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xac2e0aea, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xad33f812, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xfafacaec, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x90ce0ce2, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2eb9e2f6, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xce980615, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xee5bd986, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x6916ba97, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb2998c7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x11b0f3a7, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x987baf92, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x4d7775a0, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xbaa08d59, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x11268301, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xd5ffef00, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xaeb36902, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0xb3bafb0d, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x36b61118, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";


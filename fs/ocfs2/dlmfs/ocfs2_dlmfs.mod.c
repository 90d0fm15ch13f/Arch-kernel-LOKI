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
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x71d61c76, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x269d63fd, __VMLINUX_SYMBOL_STR(ocfs2_cluster_disconnect) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x2bd61ecf, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0x3fa4eeac, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xb502a63f, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x424241c9, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb) },
	{ 0x43d3b25d, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x2c247c59, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xcb4cb31a, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xde70caf8, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x316904e1, __VMLINUX_SYMBOL_STR(ocfs2_dlm_unlock) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x60f4bcef, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb_valid) },
	{ 0x40718c92, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock) },
	{ 0x5ac05f76, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x6a1d82c4, __VMLINUX_SYMBOL_STR(simple_getattr) },
	{ 0x11736b03, __VMLINUX_SYMBOL_STR(__mlog_printk) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe40cffce, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_set_max_proto_version) },
	{ 0x70818fd7, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x39087738, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x263f355a, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5595f1d4, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bcef5f3, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock_status) },
	{ 0x169b408a, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xe5ac60df, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7fbb8490, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa06fbc10, __VMLINUX_SYMBOL_STR(ocfs2_cluster_connect_agnostic) },
	{ 0x5db69c3d, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3263cff5, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x411550a6, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9f01b855, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x19186a0e, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,ocfs2_nodemanager";


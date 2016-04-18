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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x21a13cd3, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x9f0ec565, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xc24872eb, __VMLINUX_SYMBOL_STR(blk_mq_unfreeze_queue) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x35462b94, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe9e27675, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x564f21c1, __VMLINUX_SYMBOL_STR(bio_advance) },
	{ 0x31203816, __VMLINUX_SYMBOL_STR(blk_mq_freeze_queue) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x76ed72c8, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x4721229c, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x426ba24, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xa4c85214, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x21052bb3, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x57fd5ff8, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xcfc40112, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0x6abd1fda, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x775c10bd, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1e7bc4b9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xc61a97c7, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb3b90fa3, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xa258169b, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x27499203, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd13021e6, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x483fe73d, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x85140907, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb66a8b3f, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0xe57d6a2b, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x639aab0b, __VMLINUX_SYMBOL_STR(bdgrab) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xef63b191, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x95f306d1, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd6e83769, __VMLINUX_SYMBOL_STR(__blkdev_reread_part) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37779885, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x8b2f5c83, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xcaaea5c7, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x97a1f2d2, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x97471ae5, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe13d651, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x893d910d, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0xe8fea5ba, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x2f418796, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xbdf3e03a, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


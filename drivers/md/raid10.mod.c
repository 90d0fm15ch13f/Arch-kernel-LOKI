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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc315924e, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xff4d9dc3, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xa01eec4, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0xa63af24f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x6121b7b, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x4e01d2cf, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xe44fecad, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xdc62e41, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x63abf5f, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xb7b07980, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x5dbfb646, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x38985919, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xcea8b661, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x5e0f8a29, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x22e58e48, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0d81835, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x955437a3, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xad5e1838, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0xbd03972f, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xa611badf, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xb3658e9e, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x67bf69ce, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x7cbc9660, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x4465e99e, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0x569d9936, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xfa189068, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x68b9eb9f, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x50b827d2, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0xa0272023, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xdb2facc8, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xe7046fb8, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x4f424dcf, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x2653117, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x84ccdd3e, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x1e7bc4b9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x882a9834, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xe9a5d8c4, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x6bbf635a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xe84e01cc, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xf43f8404, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x552ab31d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x8f9080b9, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x6a29f88e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7d4bde0c, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x6b7dcc6, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbd5b1509, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x7c7ad83c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x325d80af, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xb6ba5357, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x14c0fb1d, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xfd02c4cd, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


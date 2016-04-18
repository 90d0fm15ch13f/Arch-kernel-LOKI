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
	{ 0x28780448, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0xb3658e9e, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x67bf69ce, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc7ba2a8a, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0x4f424dcf, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x8f9080b9, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x68b9eb9f, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x7d4bde0c, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x20195857, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x84368bed, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x22e58e48, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x2653117, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x14c0fb1d, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xd2817892, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_complete) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xacf7679, __VMLINUX_SYMBOL_STR(dma_issue_pending_all) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfd02c4cd, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xb6ba5357, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x3037d06a, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0xf0d81835, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc315924e, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6bbf635a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe9a5d8c4, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x9878745c, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x38985919, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xb7b07980, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x2b30f429, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0xf43f8404, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0xbd4c1f2b, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xbd03972f, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x491ac291, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0xa63af24f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x18b708f0, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0x50b827d2, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x8a9a8825, __VMLINUX_SYMBOL_STR(async_trigger_callback) },
	{ 0xe7046fb8, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xdc62e41, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa611badf, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x62bd5a6d, __VMLINUX_SYMBOL_STR(__tracepoint_block_unplug) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x1cd87565, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xba0f6811, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x325d80af, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x4465e99e, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x7c7ad83c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x6b7dcc6, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xff37f9d8, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x46a98f37, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xf67d36e1, __VMLINUX_SYMBOL_STR(async_xor_val) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x63abf5f, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x6446839b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xb5e3b98e, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0x7cbc9660, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x882a9834, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xc98a1454, __VMLINUX_SYMBOL_STR(__trace_note_message) },
	{ 0xa9fc4918, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x5e0f8a29, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ad38f0d, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0xe84e01cc, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x83eccbd3, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4e01d2cf, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xbd5b1509, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xad5e1838, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94743ef, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6a29f88e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdb2facc8, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xb4e37aa0, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x569d9936, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x18931546, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x4b9a6d8, __VMLINUX_SYMBOL_STR(__cpu_present_mask) },
	{ 0x552ab31d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xab11b2a6, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x620eab73, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x84ccdd3e, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xff4d9dc3, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x57dc20d7, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x6121b7b, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,md-mod,async_pq,libcrc32c,raid6_pq,async_tx,async_memcpy,async_xor";

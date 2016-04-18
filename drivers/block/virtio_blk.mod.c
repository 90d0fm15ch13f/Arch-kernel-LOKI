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
	{ 0x2f418796, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xcfc8af13, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xdba36ed7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa65fa395, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x57dc20d7, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb41a3566, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x8126f667, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x2653117, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x4f424dcf, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x8b2f5c83, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xf841e0b4, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xe60e848e, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x55efcea8, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x77774e02, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x21052bb3, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xef63b191, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x21a13cd3, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb85d01f9, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc0174ab6, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xe38ba843, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x9a934ab7, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x4721229c, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xfd1434d3, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x6bbf635a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf6a3b5c, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0xfe16e3f7, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x57a5d6bf, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0xae2806a, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0xe31d9f2b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xe94db437, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x9f0ec565, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xc7e7eaa4, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x4ec9351c, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xe57d6a2b, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xb3b90fa3, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc61a97c7, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf8f6d8fd, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x60660aa8, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x893c1b65, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0x98856bce, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x1d0bc8e6, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x75b156c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x76ed72c8, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xa29f0884, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5733ce2d, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");

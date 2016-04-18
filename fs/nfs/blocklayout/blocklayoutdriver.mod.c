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
	{ 0xe17b18c8, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2c17e28d, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x67bf69ce, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9fef7768, __VMLINUX_SYMBOL_STR(page_cache_next_hole) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xcd98bd41, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x4d85d932, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x6f77ea85, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x3e7e9e58, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xb10dd2f5, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x27eb6cad, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x37d11c6e, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe9ac981e, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x1c33788b, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1c1dca9e, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0xfa39e9e7, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa63af24f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x142a898c, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf7d4e486, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7973bd91, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xe0ba2587, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x133301c7, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x89767c98, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x46a98f37, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x8b11a3b7, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xd1ac12bc, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xec1cd4ae, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x27bcde43, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xa57f7525, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x678eac35, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xac9828d3, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7c5ca806, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x3862dda3, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6f390170, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x8bd2db86, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xc38a461c, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd4fa9994, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";


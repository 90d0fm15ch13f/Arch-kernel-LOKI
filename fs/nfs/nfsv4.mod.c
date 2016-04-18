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
	{ 0x6cc42aee, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x54bd9ae, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x127c5a5, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x51892d61, __VMLINUX_SYMBOL_STR(nfs_callback_set_tcpport) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x1030852, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0xd43d07e, __VMLINUX_SYMBOL_STR(nfs_fhget) },
	{ 0xe053fff4, __VMLINUX_SYMBOL_STR(security_inode_listsecurity) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3c46572e, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd58e54f6, __VMLINUX_SYMBOL_STR(nfs_alloc_inode) },
	{ 0x80f9913a, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfb57fbdf, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x39e05ac3, __VMLINUX_SYMBOL_STR(nfs_idmap_cache_timeout) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc4ff1e9f, __VMLINUX_SYMBOL_STR(nfs_auth_info_match) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x24e75583, __VMLINUX_SYMBOL_STR(key_set_timeout) },
	{ 0xf4862083, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x3626dedc, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0x6ad1bc48, __VMLINUX_SYMBOL_STR(rpcauth_create) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x71d61c76, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x1a673507, __VMLINUX_SYMBOL_STR(nfs_init_server_rpcclient) },
	{ 0xbd88cbec, __VMLINUX_SYMBOL_STR(nfs_access_set_mask) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x4489da02, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x91d1fe52, __VMLINUX_SYMBOL_STR(max_session_slots) },
	{ 0xaf0c8dd1, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0x889e273a, __VMLINUX_SYMBOL_STR(rpc_init_pipe_dir_object) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xa51b6e71, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x51429f5d, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x688154f5, __VMLINUX_SYMBOL_STR(nfs_server_insert_lists) },
	{ 0xb53c4429, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x85865b31, __VMLINUX_SYMBOL_STR(security_dentry_init_security) },
	{ 0x9e6aa7bf, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x7f1b1121, __VMLINUX_SYMBOL_STR(nfs_alloc_server) },
	{ 0xb4e67efd, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x7fe48d23, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xcf9e7bd8, __VMLINUX_SYMBOL_STR(nfs_file_llseek) },
	{ 0x86a843a2, __VMLINUX_SYMBOL_STR(nfs_force_lookup_revalidate) },
	{ 0x3aa7e3f1, __VMLINUX_SYMBOL_STR(nfs_set_sb_security) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8863a7b3, __VMLINUX_SYMBOL_STR(svc_sock_update_bufs) },
	{ 0xd3a0038, __VMLINUX_SYMBOL_STR(nfs_setsecurity) },
	{ 0x1ef2d675, __VMLINUX_SYMBOL_STR(nfs_file_write) },
	{ 0xdc3757f3, __VMLINUX_SYMBOL_STR(nfs_sync_inode) },
	{ 0xcd98bd41, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x89c86972, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xe6039325, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0x4ca3f7c1, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x6bef9ae4, __VMLINUX_SYMBOL_STR(nfs_show_devname) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb03fec6b, __VMLINUX_SYMBOL_STR(nfs_show_path) },
	{ 0xdf142405, __VMLINUX_SYMBOL_STR(put_nfs_open_context) },
	{ 0x1b3d4bf1, __VMLINUX_SYMBOL_STR(nfs_pgheader_init) },
	{ 0x46c69249, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode_force_wcc) },
	{ 0xe2fd23ce, __VMLINUX_SYMBOL_STR(__fscache_invalidate) },
	{ 0xae267dad, __VMLINUX_SYMBOL_STR(vfs_kern_mount) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xdaf13fad, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x10fc6f9a, __VMLINUX_SYMBOL_STR(__page_file_mapping) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xbfa2267, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x6f77ea85, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x8803c4, __VMLINUX_SYMBOL_STR(rpcauth_stringify_acceptor) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x7302332c, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xb663b41b, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f17f9b, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x7c004e17, __VMLINUX_SYMBOL_STR(user_free_preparse) },
	{ 0x4c9416bc, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x9cd0e5bc, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0xe03dee05, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x98d0e2fa, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa8ffb1f7, __VMLINUX_SYMBOL_STR(nfs_commitdata_alloc) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xe9e27675, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x8bec995b, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xed32e4ca, __VMLINUX_SYMBOL_STR(nfs_file_read) },
	{ 0x5df9ee10, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0x43d3b25d, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x5bf050ea, __VMLINUX_SYMBOL_STR(rpc_add_pipe_dir_object) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x3e7e9e58, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xb6d7dfe8, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0xb10dd2f5, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ebd4be4, __VMLINUX_SYMBOL_STR(trace_print_flags_seq) },
	{ 0x4cb9e001, __VMLINUX_SYMBOL_STR(recover_lost_locks) },
	{ 0x72adad7, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x52e1b229, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x348f1fc1, __VMLINUX_SYMBOL_STR(nfs_fs_mount_common) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x223900c4, __VMLINUX_SYMBOL_STR(rpcauth_lookupcred) },
	{ 0x8556110f, __VMLINUX_SYMBOL_STR(nfs_pgio_data_destroy) },
	{ 0x5e7a6301, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xe22b45ac, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xa7119d8b, __VMLINUX_SYMBOL_STR(nfs_server_copy_userdata) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0xfc619abd, __VMLINUX_SYMBOL_STR(_nfs_display_fhandle) },
	{ 0xaf28a606, __VMLINUX_SYMBOL_STR(nfs_may_open) },
	{ 0x26e1e843, __VMLINUX_SYMBOL_STR(rpc_remove_pipe_dir_object) },
	{ 0xfb613b68, __VMLINUX_SYMBOL_STR(nfs_destroy_inode) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xb3a73aad, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xc5ef47d5, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0xc9a77a70, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0x9878745c, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x252b2160, __VMLINUX_SYMBOL_STR(nfs_flock) },
	{ 0xd72960bd, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xa45cccc7, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xadf026d1, __VMLINUX_SYMBOL_STR(nfs4_fs_type) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x45bd495e, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x54119941, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x5144301, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x3cd11d10, __VMLINUX_SYMBOL_STR(nfs_free_server) },
	{ 0xfa39e9e7, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x5501794e, __VMLINUX_SYMBOL_STR(rpc_put_task_async) },
	{ 0xa69aea7c, __VMLINUX_SYMBOL_STR(nfs_file_fsync_commit) },
	{ 0xd1611176, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x3f2690f2, __VMLINUX_SYMBOL_STR(nfs_check_flags) },
	{ 0x8e381ca3, __VMLINUX_SYMBOL_STR(rpc_init_priority_wait_queue) },
	{ 0x6a475015, __VMLINUX_SYMBOL_STR(nfs_file_set_open_context) },
	{ 0x9ec93cfd, __VMLINUX_SYMBOL_STR(svc_create) },
	{ 0x91b0ad10, __VMLINUX_SYMBOL_STR(xprt_setup_backchannel) },
	{ 0xaf2b4d94, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x82f0a5b5, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4d3c16fc, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x1a1b13b8, __VMLINUX_SYMBOL_STR(__tracepoint_nfs_fsync_enter) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff5a0687, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xf798d461, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x1e32558e, __VMLINUX_SYMBOL_STR(nfs_create_rpc_client) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xbfca89ba, __VMLINUX_SYMBOL_STR(nfs_path) },
	{ 0x5f226035, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x75ba0eaa, __VMLINUX_SYMBOL_STR(alloc_nfs_open_context) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xf22bd8f1, __VMLINUX_SYMBOL_STR(rpc_wake_up_first) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x80a358a1, __VMLINUX_SYMBOL_STR(nfs_request_remove_commit_list) },
	{ 0xa6f13802, __VMLINUX_SYMBOL_STR(nfs_write_inode) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xd7ee3a56, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xe7a78b9, __VMLINUX_SYMBOL_STR(nfs_fscache_open_file) },
	{ 0xcb3874cd, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x485beea2, __VMLINUX_SYMBOL_STR(nfs_generic_pg_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf7d4e486, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe071434f, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x79fc30c2, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xeafb0ea, __VMLINUX_SYMBOL_STR(nfs_umount_begin) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x17c77b3a, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0xf732a32c, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0xccd9a75f, __VMLINUX_SYMBOL_STR(rpc_sleep_on_priority) },
	{ 0x94348345, __VMLINUX_SYMBOL_STR(rpc_lookup_cred) },
	{ 0xcc120967, __VMLINUX_SYMBOL_STR(nfs_clear_inode) },
	{ 0xb1d4002, __VMLINUX_SYMBOL_STR(rpc_peeraddr2str) },
	{ 0xba6021b4, __VMLINUX_SYMBOL_STR(nfs4_dentry_operations) },
	{ 0xe58edad9, __VMLINUX_SYMBOL_STR(nfs_retry_commit) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xf67a3922, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0xb68cb7ae, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x276e030d, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x537954fa, __VMLINUX_SYMBOL_STR(rpc_clone_client) },
	{ 0x34a78af6, __VMLINUX_SYMBOL_STR(inc_zone_page_state) },
	{ 0xad0d9400, __VMLINUX_SYMBOL_STR(rpc_clone_client_set_auth) },
	{ 0xa76c5db4, __VMLINUX_SYMBOL_STR(request_key_with_auxdata) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x9ff18193, __VMLINUX_SYMBOL_STR(nfs_do_submount) },
	{ 0x42f2c81f, __VMLINUX_SYMBOL_STR(nfs4_client_id_uniquifier) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xe3703fa0, __VMLINUX_SYMBOL_STR(get_nfs_open_context) },
	{ 0xec436c57, __VMLINUX_SYMBOL_STR(nfs_kill_super) },
	{ 0x466b6f39, __VMLINUX_SYMBOL_STR(mount_subtree) },
	{ 0x74881e02, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xd463188, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x1e0dadb6, __VMLINUX_SYMBOL_STR(dns_query) },
	{ 0xf17388f7, __VMLINUX_SYMBOL_STR(nfs_show_options) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x19deea71, __VMLINUX_SYMBOL_STR(nfs_put_client) },
	{ 0xff37f9d8, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xea5ab82f, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x79b7b609, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x1e5efced, __VMLINUX_SYMBOL_STR(nfs_put_lock_context) },
	{ 0xe6c6a79, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xd7e489c6, __VMLINUX_SYMBOL_STR(__rpc_wait_for_completion_task) },
	{ 0x9489d55e, __VMLINUX_SYMBOL_STR(nfs_remount) },
	{ 0x2b6dc5ef, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x89767c98, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x5ef709ca, __VMLINUX_SYMBOL_STR(nfs_atomic_open) },
	{ 0x4d4701aa, __VMLINUX_SYMBOL_STR(rpc_protocol) },
	{ 0x6f2e4f46, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xbdbeedb7, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0x1bead809, __VMLINUX_SYMBOL_STR(simple_nosetlease) },
	{ 0x8b11a3b7, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xa8e9e1ae, __VMLINUX_SYMBOL_STR(send_implementation_id) },
	{ 0xc3ec3193, __VMLINUX_SYMBOL_STR(nfs_commit_inode) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xbfdb6431, __VMLINUX_SYMBOL_STR(bc_svc_process) },
	{ 0x2400a2da, __VMLINUX_SYMBOL_STR(rpc_switch_client_transport) },
	{ 0xb9aff13e, __VMLINUX_SYMBOL_STR(xprt_destroy_backchannel) },
	{ 0x5ef4612d, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xe3ad3d38, __VMLINUX_SYMBOL_STR(nfs_generic_pgio) },
	{ 0xe5df83fe, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xa06ff399, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x791fcc13, __VMLINUX_SYMBOL_STR(xdr_enter_page) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xbcbdca9f, __VMLINUX_SYMBOL_STR(rpc_release_client) },
	{ 0x58d064a, __VMLINUX_SYMBOL_STR(nfs_clone_sb_security) },
	{ 0x9c07b0d2, __VMLINUX_SYMBOL_STR(rpc_get_timeout) },
	{ 0x6de53c37, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xf70887b0, __VMLINUX_SYMBOL_STR(nfs_file_mmap) },
	{ 0xf6cfd5e4, __VMLINUX_SYMBOL_STR(nfs_get_lock_context) },
	{ 0x3c17987d, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0xea99a4cb, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0xf1b1d84, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xf33f706a, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xf0ed63a6, __VMLINUX_SYMBOL_STR(nfs_fill_super) },
	{ 0x90a5530f, __VMLINUX_SYMBOL_STR(nfsiod_workqueue) },
	{ 0x584b8482, __VMLINUX_SYMBOL_STR(nfs_inc_attr_generation_counter) },
	{ 0x860012ca, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x3ac76f9f, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x5bb203e9, __VMLINUX_SYMBOL_STR(nfs_statfs) },
	{ 0x1a72abf4, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x458af285, __VMLINUX_SYMBOL_STR(complete_request_key) },
	{ 0xaf2cf574, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x9c43b6e8, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0x7a8da861, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x15427fa6, __VMLINUX_SYMBOL_STR(nfs_pageio_resend) },
	{ 0xd2c41b4, __VMLINUX_SYMBOL_STR(rpc_run_task) },
	{ 0xb21d9cd, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0xe664136b, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xa659cc2c, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x918d5673, __VMLINUX_SYMBOL_STR(key_instantiate_and_link) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xdee1f3, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x2b9b873f, __VMLINUX_SYMBOL_STR(nfs_file_release) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xf85c2fea, __VMLINUX_SYMBOL_STR(_copy_from_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe388ece7, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xf721aa8c, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x3c994fb3, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x45834e9, __VMLINUX_SYMBOL_STR(rpcauth_get_pseudoflavor) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0xf9013394, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x5f86ac8e, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0x6b291471, __VMLINUX_SYMBOL_STR(nfs_sb_active) },
	{ 0xc61e9d4d, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x1fd317c9, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xec019b14, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9bc829e5, __VMLINUX_SYMBOL_STR(nfs_pgio_header_alloc) },
	{ 0x956444ad, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list_locked) },
	{ 0xe80ee100, __VMLINUX_SYMBOL_STR(nfs_pgio_header_free) },
	{ 0xbe3c71b5, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xd0c05540, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x8d838d91, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0xe032e9d8, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x46754af7, __VMLINUX_SYMBOL_STR(d_instantiate_unique) },
	{ 0xbadc8c6e, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0x4f387cee, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x6a3ac611, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x2cd0b218, __VMLINUX_SYMBOL_STR(user_preparse) },
	{ 0xe1096f6a, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x1986b0ff, __VMLINUX_SYMBOL_STR(nfs_file_splice_read) },
	{ 0x94cb7168, __VMLINUX_SYMBOL_STR(nfs_probe_fsinfo) },
	{ 0x738714db, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xfbb5455b, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x6229fa89, __VMLINUX_SYMBOL_STR(svc_xprt_do_enqueue) },
	{ 0x55b2b450, __VMLINUX_SYMBOL_STR(nfs_lock) },
	{ 0xd2064e2f, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x81248bab, __VMLINUX_SYMBOL_STR(svc_prepare_thread) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd14c8eb9, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xa9951021, __VMLINUX_SYMBOL_STR(rpc_localaddr) },
	{ 0x6e7abed2, __VMLINUX_SYMBOL_STR(nfs4_label_alloc) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x80bbae1f, __VMLINUX_SYMBOL_STR(nfs_inode_attach_open_context) },
	{ 0xc4bf0d03, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x7c693031, __VMLINUX_SYMBOL_STR(rpc_net_ns) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x799d9eba, __VMLINUX_SYMBOL_STR(__tracepoint_nfs_fsync_exit) },
	{ 0x5261ccce, __VMLINUX_SYMBOL_STR(nfs_commitdata_release) },
	{ 0xea34da27, __VMLINUX_SYMBOL_STR(nfs_init_commit) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa3b4c24d, __VMLINUX_SYMBOL_STR(nfs_wait_client_init_complete) },
	{ 0xaa973d1a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xe0ec8d48, __VMLINUX_SYMBOL_STR(nfs_pageio_init_read) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xebc57ead, __VMLINUX_SYMBOL_STR(nfs_drop_inode) },
	{ 0xfd16361f, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xdb52571b, __VMLINUX_SYMBOL_STR(nfs_pageio_init_write) },
	{ 0xe5ac1861, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x9921c664, __VMLINUX_SYMBOL_STR(nfs_sb_deactive) },
	{ 0x540b647c, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x40739385, __VMLINUX_SYMBOL_STR(nfs_wait_bit_killable) },
	{ 0x8719bea5, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0x8114546d, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0xcdc39c9e, __VMLINUX_SYMBOL_STR(security_ismaclabel) },
	{ 0x8c788377, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x7c5ca806, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf850813d, __VMLINUX_SYMBOL_STR(nfs_mark_client_ready) },
	{ 0xdae9b5d7, __VMLINUX_SYMBOL_STR(nfs4_disable_idmapping) },
	{ 0x39f1c2f4, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xfa02bf39, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xed6d3fa5, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc94484d3, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0x3263cff5, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x8bd2db86, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x38e0025d, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xd25ad846, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x24563077, __VMLINUX_SYMBOL_STR(generic_listxattr) },
	{ 0x45e00699, __VMLINUX_SYMBOL_STR(nfs_server_remove_lists) },
	{ 0x9aa9ded0, __VMLINUX_SYMBOL_STR(nfs_show_stats) },
	{ 0xd67e06bf, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xfb4d20e, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0x43777aee, __VMLINUX_SYMBOL_STR(nfs_access_add_cache) },
	{ 0x9a1dfc55, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
	{ 0xbf20c29b, __VMLINUX_SYMBOL_STR(rpc_put_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,fscache,dns_resolver";

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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x65bcd022, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x69880db7, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0x45be7858, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x3379b81e, __VMLINUX_SYMBOL_STR(class_disconnect) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9088531, __VMLINUX_SYMBOL_STR(cfs_expr_list_values) },
	{ 0xeceac781, __VMLINUX_SYMBOL_STR(cfs_fail_val) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97d03783, __VMLINUX_SYMBOL_STR(at_history) },
	{ 0xfc87cfc1, __VMLINUX_SYMBOL_STR(class_exp2obd) },
	{ 0x5a82c44a, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xb3997b63, __VMLINUX_SYMBOL_STR(cfs_cpt_number) },
	{ 0xd70fe669, __VMLINUX_SYMBOL_STR(lustre_swab_llogd_body) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x300157a, __VMLINUX_SYMBOL_STR(lustre_kobj) },
	{ 0x7a109bd1, __VMLINUX_SYMBOL_STR(lu_context_fini) },
	{ 0xa9320d27, __VMLINUX_SYMBOL_STR(ktime_get_seconds) },
	{ 0x12efb1f2, __VMLINUX_SYMBOL_STR(seq_open) },
	{  0xc507f, __VMLINUX_SYMBOL_STR(libcfs_debug_dumplog) },
	{ 0x8f67314c, __VMLINUX_SYMBOL_STR(obd_dump_on_eviction) },
	{ 0x50c7fc36, __VMLINUX_SYMBOL_STR(ptlrpc_put_connection_superhack) },
	{ 0xfebe106f, __VMLINUX_SYMBOL_STR(cfs_cpt_weight) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xeee6858a, __VMLINUX_SYMBOL_STR(lu_context_exit) },
	{ 0x4357b315, __VMLINUX_SYMBOL_STR(lprocfs_counter_sub) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc0ea7fc0, __VMLINUX_SYMBOL_STR(cfs_expr_list_parse) },
	{ 0xdf2789c0, __VMLINUX_SYMBOL_STR(cfs_curproc_cap_pack) },
	{ 0xe345d95d, __VMLINUX_SYMBOL_STR(ldebugfs_register) },
	{ 0x37ed6e4b, __VMLINUX_SYMBOL_STR(at_early_margin) },
	{ 0x11495519, __VMLINUX_SYMBOL_STR(lprocfs_write_helper) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x60d973ff, __VMLINUX_SYMBOL_STR(lu_context_init) },
	{ 0x5c013b81, __VMLINUX_SYMBOL_STR(cfs_expr_list_free) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc378d79, __VMLINUX_SYMBOL_STR(lustre_swab_llog_hdr) },
	{ 0x375da51, __VMLINUX_SYMBOL_STR(class_import_put) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1366b7ac, __VMLINUX_SYMBOL_STR(LNetSetLazyPortal) },
	{ 0x9a692a27, __VMLINUX_SYMBOL_STR(cfs_cpt_spread_node) },
	{ 0xf3565b71, __VMLINUX_SYMBOL_STR(libcfs_debug_vmsg2) },
	{ 0x1c09395d, __VMLINUX_SYMBOL_STR(lprocfs_at_hist_helper) },
	{ 0xeef161aa, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5d8756a, __VMLINUX_SYMBOL_STR(class_destroy_import) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x69c42114, __VMLINUX_SYMBOL_STR(at_min) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7e93080c, __VMLINUX_SYMBOL_STR(libcfs_nid2str_r) },
	{ 0xd2e94197, __VMLINUX_SYMBOL_STR(lprocfs_rd_uint) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xdfa11974, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4cb722fa, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x2547efae, __VMLINUX_SYMBOL_STR(lustre_uuid_to_peer) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xe0adef60, __VMLINUX_SYMBOL_STR(lu_env_refill) },
	{ 0x2663147a, __VMLINUX_SYMBOL_STR(__cfs_fail_timeout_set) },
	{ 0xf8a8644b, __VMLINUX_SYMBOL_STR(libcfs_id2str) },
	{ 0xd0101fc1, __VMLINUX_SYMBOL_STR(lprocfs_counter_init) },
	{ 0x9878745c, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x64cdea3a, __VMLINUX_SYMBOL_STR(LNetCtl) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb4f8ee63, __VMLINUX_SYMBOL_STR(lprocfs_read_helper) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x693c245f, __VMLINUX_SYMBOL_STR(ldebugfs_register_stats) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x43a3bc83, __VMLINUX_SYMBOL_STR(ldebugfs_add_vars) },
	{ 0xb5fe98fa, __VMLINUX_SYMBOL_STR(lprocfs_seq_release) },
	{ 0xb479dbd9, __VMLINUX_SYMBOL_STR(ldebugfs_seq_create) },
	{ 0x35f7a504, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x80d425a7, __VMLINUX_SYMBOL_STR(lu_context_enter) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x321bf1ef, __VMLINUX_SYMBOL_STR(cfs_hash_bd_get) },
	{ 0x36b60398, __VMLINUX_SYMBOL_STR(cfs_race_waitq) },
	{ 0x297cf5e0, __VMLINUX_SYMBOL_STR(class_handle2object) },
	{ 0x81eb3905, __VMLINUX_SYMBOL_STR(lprocfs_free_stats) },
	{ 0xb07abe2, __VMLINUX_SYMBOL_STR(unshare_fs_struct) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x953ee6e7, __VMLINUX_SYMBOL_STR(ldebugfs_obd_seq_create) },
	{ 0x9de986d3, __VMLINUX_SYMBOL_STR(LNetEQAlloc) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xbf0760a2, __VMLINUX_SYMBOL_STR(LNetMEAttach) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xefcbb1b, __VMLINUX_SYMBOL_STR(set_current_groups) },
	{ 0x7a9bdd3b, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x865483a9, __VMLINUX_SYMBOL_STR(libcfs_kvzalloc) },
	{ 0x2cceb7a3, __VMLINUX_SYMBOL_STR(class_handle_hash) },
	{ 0xb7674a76, __VMLINUX_SYMBOL_STR(cfs_hash_del) },
	{ 0x3c779ee0, __VMLINUX_SYMBOL_STR(LNetPut) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xaa414970, __VMLINUX_SYMBOL_STR(LNetMEUnlink) },
	{ 0xe758cfee, __VMLINUX_SYMBOL_STR(lprocfs_wr_uint) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x286860f5, __VMLINUX_SYMBOL_STR(class_handle_free_cb) },
	{ 0x82d79b51, __VMLINUX_SYMBOL_STR(sysctl_vfs_cache_pressure) },
	{ 0xb75f7953, __VMLINUX_SYMBOL_STR(LNetEQFree) },
	{ 0xf5eff79, __VMLINUX_SYMBOL_STR(cfs_percpt_number) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x722c76e5, __VMLINUX_SYMBOL_STR(LNetMDAttach) },
	{ 0xc0bf7ef2, __VMLINUX_SYMBOL_STR(obd_debug_peer_on_timeout) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37f08684, __VMLINUX_SYMBOL_STR(cfs_hash_for_each_nolock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x570d09ae, __VMLINUX_SYMBOL_STR(lustre_swab_lu_fid) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xc9c2c222, __VMLINUX_SYMBOL_STR(lprocfs_alloc_stats) },
	{ 0x49520a03, __VMLINUX_SYMBOL_STR(cfs_hash_bd_add_locked) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8c85e4e6, __VMLINUX_SYMBOL_STR(cfs_crypto_hash_speed) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xea411f63, __VMLINUX_SYMBOL_STR(cfs_block_sigsinv) },
	{ 0x81373eb6, __VMLINUX_SYMBOL_STR(debugfs_lustre_root) },
	{ 0x13bc3ae7, __VMLINUX_SYMBOL_STR(class_exp2cliimp) },
	{ 0x6ad293b1, __VMLINUX_SYMBOL_STR(class_connect) },
	{ 0x916bd963, __VMLINUX_SYMBOL_STR(cfs_percpt_alloc) },
	{ 0x19670622, __VMLINUX_SYMBOL_STR(LNetNIInit) },
	{ 0x6d82d96, __VMLINUX_SYMBOL_STR(class_handle_unhash) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfffc1f11, __VMLINUX_SYMBOL_STR(lustre_swab_ost_id) },
	{ 0x275cdc7a, __VMLINUX_SYMBOL_STR(cl_env_reexit) },
	{ 0x6890d175, __VMLINUX_SYMBOL_STR(lustre_get_jobid) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7803c9fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x7edcafa0, __VMLINUX_SYMBOL_STR(cl_env_reenter) },
	{ 0xb5e3b98e, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x4a99af72, __VMLINUX_SYMBOL_STR(cfs_clear_sigpending) },
	{ 0x506289e7, __VMLINUX_SYMBOL_STR(ldebugfs_remove) },
	{ 0x51ee6491, __VMLINUX_SYMBOL_STR(cfs_hash_putref) },
	{ 0xe5f926fc, __VMLINUX_SYMBOL_STR(cfs_hash_rehash_key) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x61f784b2, __VMLINUX_SYMBOL_STR(LNetClearLazyPortal) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xade657cc, __VMLINUX_SYMBOL_STR(libcfs_next_nidstring) },
	{ 0xe3bf6897, __VMLINUX_SYMBOL_STR(cfs_percpt_free) },
	{ 0x7b4fc57b, __VMLINUX_SYMBOL_STR(at_max) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3f4f5b46, __VMLINUX_SYMBOL_STR(LNetNIFini) },
	{ 0xec6d814e, __VMLINUX_SYMBOL_STR(cfs_cpt_current) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xc51df1d, __VMLINUX_SYMBOL_STR(lustre_sysfs_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdcc40af0, __VMLINUX_SYMBOL_STR(class_check_uuid) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xa6be5411, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive_head) },
	{ 0x95735c6c, __VMLINUX_SYMBOL_STR(at_extra) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x60288827, __VMLINUX_SYMBOL_STR(cfs_cpt_table) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9c2a3b90, __VMLINUX_SYMBOL_STR(cfs_crypto_hash_update_page) },
	{ 0xa6e71c25, __VMLINUX_SYMBOL_STR(cfs_hash_create) },
	{ 0x93a9ab73, __VMLINUX_SYMBOL_STR(class_conn2export) },
	{ 0x3923789a, __VMLINUX_SYMBOL_STR(class_fail_export) },
	{ 0x4f1f2fa5, __VMLINUX_SYMBOL_STR(cfs_crypto_hash_digest) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6fcb7042, __VMLINUX_SYMBOL_STR(lprocfs_counter_add) },
	{ 0x473ad33b, __VMLINUX_SYMBOL_STR(LNetDist) },
	{ 0xfe565fa9, __VMLINUX_SYMBOL_STR(cfs_crypto_hash_init) },
	{ 0x36bd681b, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x7802fcd7, __VMLINUX_SYMBOL_STR(lustre_swab_llogd_conn_body) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x8bf44218, __VMLINUX_SYMBOL_STR(class_import_get) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xbf7a37f1, __VMLINUX_SYMBOL_STR(cfs_signal_pending) },
	{ 0xb2653640, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xcf61bacb, __VMLINUX_SYMBOL_STR(__cfs_fail_check_set) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0xd561ceb0, __VMLINUX_SYMBOL_STR(cfs_hash_findadd_unique) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xaa9b477e, __VMLINUX_SYMBOL_STR(LNetMDBind) },
	{ 0x9e420643, __VMLINUX_SYMBOL_STR(cfs_restore_sigs) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x413a3c85, __VMLINUX_SYMBOL_STR(class_new_import) },
	{ 0x18931546, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x50345570, __VMLINUX_SYMBOL_STR(libcfs_str2net) },
	{ 0xfdfd6c90, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x411db754, __VMLINUX_SYMBOL_STR(cfs_crypto_hash_final) },
	{ 0x3d5e6098, __VMLINUX_SYMBOL_STR(cfs_race_state) },
	{ 0x7fda989d, __VMLINUX_SYMBOL_STR(cfs_fail_loc) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8ba6e479, __VMLINUX_SYMBOL_STR(lustre_swab_lu_seq_range) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x8e506a2, __VMLINUX_SYMBOL_STR(cfs_hash_add) },
	{ 0x4ca6e94a, __VMLINUX_SYMBOL_STR(cfs_hash_bd_del_locked) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0xd29f63dd, __VMLINUX_SYMBOL_STR(cfs_hash_bd_lookup_locked) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x648c840e, __VMLINUX_SYMBOL_STR(libcfs_kvzalloc_cpt) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd7bc8654, __VMLINUX_SYMBOL_STR(obd_timeout) },
	{ 0x9879b229, __VMLINUX_SYMBOL_STR(cfs_get_random_bytes) },
	{ 0x92e58479, __VMLINUX_SYMBOL_STR(obd_dump_on_timeout) },
	{ 0x3699fd8c, __VMLINUX_SYMBOL_STR(cfs_cpt_bind) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc508760e, __VMLINUX_SYMBOL_STR(class_export_put) },
	{ 0xb3372e39, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x89dc499e, __VMLINUX_SYMBOL_STR(cfs_hash_lookup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x58a1ca89, __VMLINUX_SYMBOL_STR(LNetMDUnlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=obdclass,libcfs,lnet";


MODULE_INFO(srcversion, "3A238232450EB09120212E5");
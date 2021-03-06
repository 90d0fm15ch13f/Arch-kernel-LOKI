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
	{ 0xf984ea4, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x92cb7ab0, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list) },
	{ 0x8000b08b, __VMLINUX_SYMBOL_STR(pnfs_nfs_generic_sync) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc090685f, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_connect) },
	{ 0xf09c61ac, __VMLINUX_SYMBOL_STR(pnfs_generic_clear_request_commit) },
	{ 0x25a52392, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xe6039325, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xe078aad7, __VMLINUX_SYMBOL_STR(pnfs_error_mark_layout_for_return) },
	{ 0x856e1208, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_put) },
	{ 0xaa0c8e0c, __VMLINUX_SYMBOL_STR(nfs4_mark_deviceid_unavailable) },
	{ 0x1093b108, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_commit_ds) },
	{ 0x4005df7b, __VMLINUX_SYMBOL_STR(nfs4_decode_mp_ds_addr) },
	{ 0x1686ca00, __VMLINUX_SYMBOL_STR(nfs_initiate_pgio) },
	{ 0x485fb3d2, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x5c14a2f2, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_pagelist) },
	{ 0x5f01b786, __VMLINUX_SYMBOL_STR(pnfs_generic_recover_commit_reqs) },
	{ 0xbd9e6c6d, __VMLINUX_SYMBOL_STR(nfs41_setup_sequence) },
	{ 0x27eb6cad, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x62aa9da6, __VMLINUX_SYMBOL_STR(nfs4_schedule_lease_recovery) },
	{ 0x8c2db5e2, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0xb3a73aad, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xe9ac981e, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x7f3f1a63, __VMLINUX_SYMBOL_STR(pnfs_generic_write_commit_done) },
	{ 0xd72960bd, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0x1c1dca9e, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x142a898c, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x27dc2c5c, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf7d4e486, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x20731846, __VMLINUX_SYMBOL_STR(pnfs_layout_mark_request_commit) },
	{ 0xb081ead9, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0x23655f48, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_add) },
	{ 0x13c973a9, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x133301c7, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0xed15fb41, __VMLINUX_SYMBOL_STR(nfs4_print_deviceid) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x69c56d10, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0x5c5a75b9, __VMLINUX_SYMBOL_STR(pnfs_generic_scan_commit_lists) },
	{ 0x69d3558d, __VMLINUX_SYMBOL_STR(pnfs_generic_rw_release) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2abba8cb, __VMLINUX_SYMBOL_STR(nfs41_sequence_done) },
	{ 0x764dbdec, __VMLINUX_SYMBOL_STR(nfs4_schedule_stateid_recovery) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67837e1, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf999267e, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_release) },
	{ 0xb21d9cd, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x27bcde43, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x84084dc0, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0xe06595d5, __VMLINUX_SYMBOL_STR(rpc_count_iostats) },
	{ 0xf721aa8c, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xf9013394, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0xa57f7525, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x454b9e7b, __VMLINUX_SYMBOL_STR(pnfs_generic_prepare_to_resend_writes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd0b5b7dc, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_read) },
	{ 0x4777212e, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0xd14c8eb9, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb0480ef3, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_write) },
	{ 0x7c5ca806, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x3862dda3, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6f390170, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x8bd2db86, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xd4fa9994, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";


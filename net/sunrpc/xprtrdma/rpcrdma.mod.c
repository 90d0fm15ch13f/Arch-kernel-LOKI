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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x65cc92b5, __VMLINUX_SYMBOL_STR(xprt_lookup_rqst) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4489da02, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xd49308c5, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x3a2a9208, __VMLINUX_SYMBOL_STR(svc_xprt_enqueue) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x779bfce7, __VMLINUX_SYMBOL_STR(svc_reg_xprt_class) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x419d5e94, __VMLINUX_SYMBOL_STR(xprt_register_transport) },
	{ 0x24e184cb, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf1acd4, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x2c50810d, __VMLINUX_SYMBOL_STR(xprt_free) },
	{ 0x491e3b4, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xac1560dd, __VMLINUX_SYMBOL_STR(xprt_alloc) },
	{ 0x9f69ec1, __VMLINUX_SYMBOL_STR(rpcb_getport_async) },
	{ 0xcc1ffccc, __VMLINUX_SYMBOL_STR(xprt_wake_pending_tasks) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xf6399282, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x55b72a43, __VMLINUX_SYMBOL_STR(svc_unreg_xprt_class) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x31a89d59, __VMLINUX_SYMBOL_STR(rpc_debug) },
	{ 0x1e491a04, __VMLINUX_SYMBOL_STR(ib_unmap_fmr) },
	{ 0x504757c5, __VMLINUX_SYMBOL_STR(ib_alloc_mr) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x671db1c6, __VMLINUX_SYMBOL_STR(svc_xprt_init) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x758c31bf, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xca0cf245, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xf50760b5, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x19dc1e91, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x53c1bee8, __VMLINUX_SYMBOL_STR(xprt_unregister_transport) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x68cf8083, __VMLINUX_SYMBOL_STR(svc_xprt_copy_addrs) },
	{ 0x162ce8da, __VMLINUX_SYMBOL_STR(xprt_release_xprt_cong) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x32145b9b, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xdec2a53c, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xd4b8f8f1, __VMLINUX_SYMBOL_STR(ib_map_mr_sg) },
	{ 0xbff6ad4c, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0xfa57e53e, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0xeebf2665, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x2b6dc5ef, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x99ac035e, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x3bf5e285, __VMLINUX_SYMBOL_STR(ib_dealloc_fmr) },
	{ 0x5417aa4d, __VMLINUX_SYMBOL_STR(xprt_alloc_slot) },
	{ 0xa06ff399, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc21d019, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x97902387, __VMLINUX_SYMBOL_STR(xprt_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x95febc17, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x786f6a46, __VMLINUX_SYMBOL_STR(ib_alloc_fmr) },
	{ 0xb21d9cd, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd936c8f3, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0x2853f133, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x742df06, __VMLINUX_SYMBOL_STR(xprt_complete_rqst) },
	{ 0xcfa2a09f, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xf9013394, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x5c002a7, __VMLINUX_SYMBOL_STR(xprt_set_retrans_timeout_def) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x660c299b, __VMLINUX_SYMBOL_STR(xprt_reserve_xprt_cong) },
	{ 0x2424e715, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3132e38b, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x1e2aea98, __VMLINUX_SYMBOL_STR(xprt_disconnect_done) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3c8fc9c6, __VMLINUX_SYMBOL_STR(xprt_release_rqst_cong) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,ib_core,rdma_cm";


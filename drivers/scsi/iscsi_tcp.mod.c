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
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x48c82973, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xd5a7c003, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x8ec42f92, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x5c12e8a0, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xd4047ee0, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xa07bf9cb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xc8954e5b, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xfc7d0f22, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x691de94f, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x15204dac, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xdc41b5b5, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xaa88e751, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4a826ddc, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9f2af072, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x29062889, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xf6d569e7, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xcb133ed7, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf6e1a0da, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x55efcea8, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17eb9578, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xadbd63fa, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x86836355, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x78ea4261, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xafcc62b6, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x75f74986, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x363f38eb, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xc3dcfc1b, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xf0b3356b, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb54e53f2, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x46ef8f77, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x9a7a6027, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0xe13dc5d8, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xc388e32a, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xdfd174aa, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xad677340, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x31b2ee9a, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x9669032a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xab720a6, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xbdd49557, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x5de3e9ec, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x90dd9dc6, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x2abb9f13, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa6740610, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb96b8984, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x38f5abd9, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x6663757b, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0xf3b79e11, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x54d3743a, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2ecb5a9b, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x1b850c24, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0xd68ac468, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,libiscsi_tcp,scsi_transport_iscsi";


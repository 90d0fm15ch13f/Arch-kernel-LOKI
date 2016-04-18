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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6947cf01, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x48c82973, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xd5a7c003, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x8ec42f92, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x5c12e8a0, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xd4047ee0, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xef346615, __VMLINUX_SYMBOL_STR(cxgbi_attr_is_visible) },
	{ 0xe74222ac, __VMLINUX_SYMBOL_STR(cxgbi_ep_disconnect) },
	{ 0xb77290f5, __VMLINUX_SYMBOL_STR(cxgbi_ep_poll) },
	{ 0x430b679b, __VMLINUX_SYMBOL_STR(cxgbi_ep_connect) },
	{ 0xa07bf9cb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xc3486a4f, __VMLINUX_SYMBOL_STR(cxgbi_parse_pdu_itt) },
	{ 0x3f054c1c, __VMLINUX_SYMBOL_STR(cxgbi_conn_init_pdu) },
	{ 0x33cca118, __VMLINUX_SYMBOL_STR(cxgbi_conn_xmit_pdu) },
	{ 0xd3c9da1d, __VMLINUX_SYMBOL_STR(cxgbi_conn_alloc_pdu) },
	{ 0x741a5095, __VMLINUX_SYMBOL_STR(cxgbi_cleanup_task) },
	{ 0xfc7d0f22, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x691de94f, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0xb95c4cd, __VMLINUX_SYMBOL_STR(cxgbi_get_conn_stats) },
	{ 0x15204dac, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xec6eb2ba, __VMLINUX_SYMBOL_STR(cxgbi_set_host_param) },
	{ 0x5902abda, __VMLINUX_SYMBOL_STR(cxgbi_get_host_param) },
	{ 0xaa88e751, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x90dd9dc6, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x14d7d9f, __VMLINUX_SYMBOL_STR(cxgbi_get_ep_param) },
	{ 0x91159658, __VMLINUX_SYMBOL_STR(cxgbi_set_conn_param) },
	{ 0xf0b3356b, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xf6d569e7, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x4a826ddc, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xa41d5bde, __VMLINUX_SYMBOL_STR(cxgbi_bind_conn) },
	{ 0x19c01d4a, __VMLINUX_SYMBOL_STR(cxgbi_create_conn) },
	{ 0x9f9533ee, __VMLINUX_SYMBOL_STR(cxgbi_destroy_session) },
	{ 0x64e75c80, __VMLINUX_SYMBOL_STR(cxgbi_create_session) },
	{ 0x2ec3234d, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_cleanup) },
	{ 0x7fdb6004, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister_all) },
	{ 0xd00e5a36, __VMLINUX_SYMBOL_STR(cxgb4_unregister_uld) },
	{ 0x3a2e9efb, __VMLINUX_SYMBOL_STR(cxgb4_register_uld) },
	{ 0x171c449, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_init) },
	{ 0xae1d71e, __VMLINUX_SYMBOL_STR(cxgbi_hbas_add) },
	{ 0xff9df64c, __VMLINUX_SYMBOL_STR(cxgb4_iscsi_init) },
	{ 0x3a5c4389, __VMLINUX_SYMBOL_STR(cxgbi_ddp_page_size_factor) },
	{ 0xf0330052, __VMLINUX_SYMBOL_STR(cxgbi_ddp_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8b780942, __VMLINUX_SYMBOL_STR(cxgbi_device_register) },
	{ 0x22377ddf, __VMLINUX_SYMBOL_STR(cxgbi_device_portmap_create) },
	{ 0xec008191, __VMLINUX_SYMBOL_STR(cxgbi_sock_closed) },
	{ 0x2def8b07, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister) },
	{ 0xb50d485, __VMLINUX_SYMBOL_STR(cxgbi_ddp_ppod_set) },
	{ 0x8c2ba369, __VMLINUX_SYMBOL_STR(cxgbi_ddp_ppod_clear) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc90c9458, __VMLINUX_SYMBOL_STR(cxgb4_pktgl_to_skb) },
	{ 0x1189f7c5, __VMLINUX_SYMBOL_STR(cxgb4_l2t_release) },
	{ 0x7acb9b7e, __VMLINUX_SYMBOL_STR(cxgbi_sock_purge_wr_queue) },
	{ 0x1d6bbadc, __VMLINUX_SYMBOL_STR(cxgbi_sock_skb_entail) },
	{ 0x7a29e2c2, __VMLINUX_SYMBOL_STR(cxgbi_sock_free_cpl_skbs) },
	{ 0x25446da3, __VMLINUX_SYMBOL_STR(cxgb4_clip_release) },
	{ 0xfef32edd, __VMLINUX_SYMBOL_STR(cxgb4_clip_get) },
	{ 0x7c24b620, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcafb9eb1, __VMLINUX_SYMBOL_STR(cxgb4_port_idx) },
	{ 0x1f91791f, __VMLINUX_SYMBOL_STR(cxgb4_port_viid) },
	{ 0x39207ce5, __VMLINUX_SYMBOL_STR(cxgb4_port_chan) },
	{ 0xd69a0294, __VMLINUX_SYMBOL_STR(cxgb4_best_mtu) },
	{ 0xb184f416, __VMLINUX_SYMBOL_STR(cxgb4_l2t_get) },
	{ 0x57707dfc, __VMLINUX_SYMBOL_STR(cxgb4_alloc_atid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xebb42f55, __VMLINUX_SYMBOL_STR(cxgb4_select_ntuple) },
	{ 0x8a542504, __VMLINUX_SYMBOL_STR(cxgbi_sock_act_open_req_arp_failure) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x35d51ca9, __VMLINUX_SYMBOL_STR(cxgb4_remove_tid) },
	{ 0xb15f76ef, __VMLINUX_SYMBOL_STR(cxgbi_sock_fail_act_open) },
	{ 0x2c5f5c01, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_peer_close) },
	{ 0x7961efb9, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_abort_rpl) },
	{ 0x83ee609a, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_close_conn_rpl) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3273364c, __VMLINUX_SYMBOL_STR(cxgb4_free_atid) },
	{ 0xc254515a, __VMLINUX_SYMBOL_STR(cxgbi_conn_tx_open) },
	{ 0x56123dbb, __VMLINUX_SYMBOL_STR(cxgbi_sock_established) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x7c6f3efe, __VMLINUX_SYMBOL_STR(cxgbi_conn_pdu_ready) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xef3d326d, __VMLINUX_SYMBOL_STR(cxgb4_l2t_send) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2a923b89, __VMLINUX_SYMBOL_STR(cxgb4_ofld_send) },
	{ 0xc4b28537, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_wr_ack) },
	{ 0xa4ca16d0, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,libcxgbi,libiscsi_tcp,cxgb4";


MODULE_INFO(srcversion, "9AABD27237403278B981A99");

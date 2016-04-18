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
	{ 0x4f02d0f9, __VMLINUX_SYMBOL_STR(iscsit_unregister_transport) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x273d404d, __VMLINUX_SYMBOL_STR(iscsit_register_transport) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf1acd4, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x758c31bf, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x3132e38b, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0xbff6ad4c, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x6f04b96d, __VMLINUX_SYMBOL_STR(iscsit_cause_connection_reinstatement) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x3327a719, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x19dc1e91, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0xeebf2665, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x32145b9b, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xad3ab944, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0xe16c794b, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x95febc17, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xc1035b05, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xcfa2a09f, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x24e184cb, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x491e3b4, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xd49308c5, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xdec2a53c, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0x47ee2faf, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x24d13137, __VMLINUX_SYMBOL_STR(iscsit_process_nop_out) },
	{ 0x47c5a37e, __VMLINUX_SYMBOL_STR(iscsit_setup_nop_out) },
	{ 0x6c836120, __VMLINUX_SYMBOL_STR(iscsit_set_unsoliticed_dataout) },
	{ 0x2fa0dbc1, __VMLINUX_SYMBOL_STR(iscsit_sequence_cmd) },
	{ 0x6e34285c, __VMLINUX_SYMBOL_STR(iscsit_process_scsi_cmd) },
	{ 0x81a0bea8, __VMLINUX_SYMBOL_STR(iscsit_setup_scsi_cmd) },
	{ 0x6739d504, __VMLINUX_SYMBOL_STR(iscsit_handle_task_mgt_cmd) },
	{ 0xbf835dde, __VMLINUX_SYMBOL_STR(iscsit_process_text_cmd) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x64e2f41a, __VMLINUX_SYMBOL_STR(iscsit_setup_text_cmd) },
	{ 0x404df9e8, __VMLINUX_SYMBOL_STR(iscsit_find_cmd_from_itt) },
	{ 0x6952a81d, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_payload) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x84f3a4a9, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_hdr) },
	{ 0xa6bbb08e, __VMLINUX_SYMBOL_STR(iscsit_handle_logout_cmd) },
	{ 0x722fe41c, __VMLINUX_SYMBOL_STR(iscsit_allocate_cmd) },
	{ 0x504757c5, __VMLINUX_SYMBOL_STR(ib_alloc_mr) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd4b8f8f1, __VMLINUX_SYMBOL_STR(ib_map_mr_sg) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5c719b75, __VMLINUX_SYMBOL_STR(iscsit_build_reject) },
	{ 0x7a0fbb9b, __VMLINUX_SYMBOL_STR(iscsit_build_task_mgt_rsp) },
	{ 0x2f13f123, __VMLINUX_SYMBOL_STR(iscsit_build_logout_rsp) },
	{ 0x72b94063, __VMLINUX_SYMBOL_STR(iscsit_build_text_rsp) },
	{ 0xc32c9fe7, __VMLINUX_SYMBOL_STR(iscsit_build_nopin_rsp) },
	{ 0x240d0431, __VMLINUX_SYMBOL_STR(iscsit_build_rsp_pdu) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x41b19c44, __VMLINUX_SYMBOL_STR(iscsit_logout_post_handler) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xae4e19c5, __VMLINUX_SYMBOL_STR(iscsit_tmr_post_handler) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xf0d9a0ae, __VMLINUX_SYMBOL_STR(ib_check_mr_status) },
	{ 0x916931d9, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x97312f90, __VMLINUX_SYMBOL_STR(iscsit_release_cmd) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xf771be90, __VMLINUX_SYMBOL_STR(iscsit_stop_dataout_timer) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2853f133, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_target_mod,rdma_cm,ib_core,target_core_mod";


MODULE_INFO(srcversion, "4C0FC0149D4E44D2ECE5829");

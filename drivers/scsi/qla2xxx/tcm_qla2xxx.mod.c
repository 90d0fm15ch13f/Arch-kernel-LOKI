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
	{ 0x19e9fbf8, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1718bd28, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x6871b9b8, __VMLINUX_SYMBOL_STR(qlt_lport_register) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x4d0b32bd, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xd2424372, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0xad3ab944, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe16c794b, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x6c2eeed, __VMLINUX_SYMBOL_STR(qlt_rdy_to_xfer) },
	{ 0x281d5799, __VMLINUX_SYMBOL_STR(qlt_abort_cmd) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x96e1abc5, __VMLINUX_SYMBOL_STR(btree_init) },
	{ 0x1b2921e4, __VMLINUX_SYMBOL_STR(qlt_unreg_sess) },
	{ 0xe8702f44, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x645d1830, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x62c925a, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0xfdd24c19, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0xdd489b0e, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x1e7961ba, __VMLINUX_SYMBOL_STR(transport_generic_request_failure) },
	{ 0xe953d74b, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xce12d037, __VMLINUX_SYMBOL_STR(btree_insert) },
	{ 0xcd5d4ef9, __VMLINUX_SYMBOL_STR(btree_update) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3e54b244, __VMLINUX_SYMBOL_STR(btree_lookup) },
	{ 0x90ae318b, __VMLINUX_SYMBOL_STR(qlt_stop_phase2) },
	{ 0x45b7d6a0, __VMLINUX_SYMBOL_STR(btree_destroy) },
	{ 0xfb25ce06, __VMLINUX_SYMBOL_STR(btree_get_prev) },
	{ 0x12ea3c14, __VMLINUX_SYMBOL_STR(btree_remove) },
	{ 0x6536953b, __VMLINUX_SYMBOL_STR(btree_last) },
	{ 0xf331236f, __VMLINUX_SYMBOL_STR(btree_geo32) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7fae1f28, __VMLINUX_SYMBOL_STR(qlt_lport_deregister) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71ffde99, __VMLINUX_SYMBOL_STR(target_depend_item) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x228b73f0, __VMLINUX_SYMBOL_STR(target_undepend_item) },
	{ 0x700fd889, __VMLINUX_SYMBOL_STR(target_show_dynamic_sessions) },
	{ 0x916931d9, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x76fc3550, __VMLINUX_SYMBOL_STR(qlt_free_mcmd) },
	{ 0x616e07fb, __VMLINUX_SYMBOL_STR(qlt_free_cmd) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x3b7e815d, __VMLINUX_SYMBOL_STR(qlt_xmit_response) },
	{ 0x52d93c2d, __VMLINUX_SYMBOL_STR(qlt_xmit_tm_rsp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x7d8183fc, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x8bf1836, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0x5a714f52, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xb11ad4db, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78f8b045, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xda440e54, __VMLINUX_SYMBOL_STR(qlt_enable_vha) },
	{ 0x6e4c6a6b, __VMLINUX_SYMBOL_STR(qlt_stop_phase1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,qla2xxx,scsi_mod,scsi_transport_fc";


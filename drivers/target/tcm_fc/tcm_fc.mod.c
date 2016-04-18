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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d0b32bd, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb11ad4db, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5ae235e4, __VMLINUX_SYMBOL_STR(fc_fc4_register_provider) },
	{ 0x8e961714, __VMLINUX_SYMBOL_STR(fc_lport_iterate) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x32c86827, __VMLINUX_SYMBOL_STR(core_tpg_get_initiator_node_acl) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7dd43efd, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x1718bd28, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0xe16c794b, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x78f8b045, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xdd489b0e, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0xa9c8b1f0, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc3985e11, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x956ff278, __VMLINUX_SYMBOL_STR(fc_fill_reply_hdr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82a1b1f7, __VMLINUX_SYMBOL_STR(core_tpg_set_initiator_node_tag) },
	{ 0xd2424372, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x7eda8258, __VMLINUX_SYMBOL_STR(fc_fc4_deregister_provider) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xfdd24c19, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6e77f79c, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x57b5861b, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0xe8702f44, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x19e9fbf8, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x645d1830, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4adb7e19, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xccfdb35e, __VMLINUX_SYMBOL_STR(fc_lport_notifier_head) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad3ab944, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0xe953d74b, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,libfc,scsi_mod";


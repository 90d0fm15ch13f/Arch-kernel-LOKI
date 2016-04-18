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
	{ 0xac361f0c, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe956ad11, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0x6b2ece98, __VMLINUX_SYMBOL_STR(vhost_work_flush) },
	{ 0x4d0b32bd, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x916931d9, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb11ad4db, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x7dd43efd, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x1718bd28, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x2e828588, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x78f8b045, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5f0263a, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x92768fc4, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x62c925a, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0xb47a48c4, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5c20d811, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x16371054, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x32a7147b, __VMLINUX_SYMBOL_STR(vhost_signal) },
	{ 0x49058084, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8b81a368, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xfdd24c19, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x7f8e626a, __VMLINUX_SYMBOL_STR(vhost_work_queue) },
	{ 0x57b5861b, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x228b73f0, __VMLINUX_SYMBOL_STR(target_undepend_item) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0xe8702f44, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x57af33ce, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x47ee2faf, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0x19e9fbf8, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x645d1830, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x4cb96f77, __VMLINUX_SYMBOL_STR(vhost_work_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbb52596a, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x77696903, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x478eaea3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x81e465df, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0xc9871ac7, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x667e0c08, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0x71ffde99, __VMLINUX_SYMBOL_STR(target_depend_item) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x9ea66fea, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xe3431e0f, __VMLINUX_SYMBOL_STR(vhost_add_used) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,vhost";


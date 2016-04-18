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
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5b5b174b, __VMLINUX_SYMBOL_STR(rdma_get_service_id) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x6f060a41, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x7cb1c2a3, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x54150bca, __VMLINUX_SYMBOL_STR(rdma_join_multicast) },
	{ 0xf1acd4, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x4593540e, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0x491e3b4, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdccb8ab5, __VMLINUX_SYMBOL_STR(ib_copy_ah_attr_to_user) },
	{ 0x8f989870, __VMLINUX_SYMBOL_STR(rdma_init_qp_attr) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf6399282, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x56cf9d98, __VMLINUX_SYMBOL_STR(rdma_set_reuseaddr) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2b4d09d9, __VMLINUX_SYMBOL_STR(ib_sa_pack_path) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19dc1e91, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x48ef0255, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x5d3ccce5, __VMLINUX_SYMBOL_STR(rdma_set_afonly) },
	{ 0xc1035b05, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x47679b1c, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x32145b9b, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xeebf2665, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x99ac035e, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x95febc17, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3327a719, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x1c3c0ad3, __VMLINUX_SYMBOL_STR(rdma_addr_size) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x391c69b9, __VMLINUX_SYMBOL_STR(rdma_set_service_type) },
	{ 0x2424e715, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xba3d153f, __VMLINUX_SYMBOL_STR(ib_sa_unpack_path) },
	{ 0xf71d80ec, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xfd834de5, __VMLINUX_SYMBOL_STR(rdma_set_ib_paths) },
	{ 0xfb257f8b, __VMLINUX_SYMBOL_STR(rdma_leave_multicast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_uverbs,ib_sa,ib_addr";


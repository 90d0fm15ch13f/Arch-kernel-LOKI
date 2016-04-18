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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9f68ad71, __VMLINUX_SYMBOL_STR(ib_find_cached_gid) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4d1e3059, __VMLINUX_SYMBOL_STR(ib_find_pkey) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd98befc5, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x4934c4fe, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x22f3cf93, __VMLINUX_SYMBOL_STR(ib_pack) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf514324a, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x726f0d7a, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xa6f8108c, __VMLINUX_SYMBOL_STR(ibnl_chk_listeners) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5f226035, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xda4565a, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xba377510, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x47679b1c, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xcba15626, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x39332413, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0x25ec5572, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xa415250b, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0x6113ef14, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x3276491c, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0xb3f1cdd6, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x8e41a1c3, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7175d383, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9dfe48b5, __VMLINUX_SYMBOL_STR(ib_cancel_mad) },
	{ 0xb481cfd2, __VMLINUX_SYMBOL_STR(ibnl_multicast) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6e91ac42, __VMLINUX_SYMBOL_STR(ibnl_add_client) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc67f14a5, __VMLINUX_SYMBOL_STR(ibnl_remove_client) },
	{ 0xa432baf6, __VMLINUX_SYMBOL_STR(ib_unpack) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x934d1dec, __VMLINUX_SYMBOL_STR(ib_find_cached_gid_by_port) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa33f6ea, __VMLINUX_SYMBOL_STR(netdev_all_upper_get_next_dev_rcu) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xdbd019c4, __VMLINUX_SYMBOL_STR(ib_wq) },
	{ 0x3a7a2ec9, __VMLINUX_SYMBOL_STR(ibnl_put_msg) },
	{ 0xca83eb24, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x9eac999c, __VMLINUX_SYMBOL_STR(rdma_resolve_ip_route) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad,ib_addr";


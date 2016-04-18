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
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xef9f9b9f, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x1df09714, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xa527ade6, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8c9ed7af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x9e3e305d, __VMLINUX_SYMBOL_STR(cfpkt_set_prio) },
	{ 0x2a09f713, __VMLINUX_SYMBOL_STR(cfpkt_fromnative) },
	{ 0x106367b5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x67ee0caf, __VMLINUX_SYMBOL_STR(caif_disconnect_client) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x77da680d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x904e5b1f, __VMLINUX_SYMBOL_STR(caif_connect_client) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x5b64912, __VMLINUX_SYMBOL_STR(__sk_mem_schedule) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x17bf7965, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x22e7b9ea, __VMLINUX_SYMBOL_STR(sk_filter) },
	{ 0x4a237e57, __VMLINUX_SYMBOL_STR(cfpkt_tonative) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7b6874e, __VMLINUX_SYMBOL_STR(caif_free_client) },
	{ 0xdba882fe, __VMLINUX_SYMBOL_STR(sk_stream_kill_queues) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1446b60a, __VMLINUX_SYMBOL_STR(caif_client_register_refcnt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caif";


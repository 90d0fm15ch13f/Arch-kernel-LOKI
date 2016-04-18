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
	{ 0x72100f33, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf3b79e11, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0xae7499f4, __VMLINUX_SYMBOL_STR(bt_sock_poll) },
	{ 0x654e8ddd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x5d2e2330, __VMLINUX_SYMBOL_STR(hci_register_cb) },
	{ 0x64d04588, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7c5c200d, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x98a9e35f, __VMLINUX_SYMBOL_STR(bt_sock_ioctl) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa82845bf, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4b01f2d0, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x88a33d46, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x5b1b1738, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xecad680d, __VMLINUX_SYMBOL_STR(kernel_listen) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe6f8537d, __VMLINUX_SYMBOL_STR(hci_conn_check_secure) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x6e3aa1c7, __VMLINUX_SYMBOL_STR(bt_sock_wait_state) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe40527cb, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x284c90a6, __VMLINUX_SYMBOL_STR(bt_accept_enqueue) },
	{ 0x1dbe5493, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xac9e4f3b, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0x74a188c0, __VMLINUX_SYMBOL_STR(bt_accept_unlink) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xdf06236d, __VMLINUX_SYMBOL_STR(hci_get_route) },
	{ 0x3e3c5002, __VMLINUX_SYMBOL_STR(bt_accept_dequeue) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x41d643cf, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x76077512, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x4c108669, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xda2a4437, __VMLINUX_SYMBOL_STR(hci_conn_security) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x7a728571, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xa0d2a319, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x4edba2a3, __VMLINUX_SYMBOL_STR(device_move) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0xa51126b9, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc684b589, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x80824774, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x6af4f237, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x5f50abad, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf10ffa22, __VMLINUX_SYMBOL_STR(bt_debugfs) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb98d2b6b, __VMLINUX_SYMBOL_STR(bt_sock_stream_recvmsg) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e2c2962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfa20c31f, __VMLINUX_SYMBOL_STR(hci_unregister_cb) },
	{ 0x41d0badb, __VMLINUX_SYMBOL_STR(bt_sock_reclassify_lock) },
	{ 0x8c9ed7af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x963b43a4, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3e17186, __VMLINUX_SYMBOL_STR(bt_sock_wait_ready) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9d7cd5ad, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xeb423f9, __VMLINUX_SYMBOL_STR(kernel_accept) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x65a2d7d1, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x4e17dc14, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdcb92f4e, __VMLINUX_SYMBOL_STR(hci_conn_switch_role) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcaaea5c7, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xfdfd6c90, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x246c3a18, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2c2d8bd6, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xd7a5b3b1, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x93f1d19a, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe56b077f, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "BEEEA8F96C2AB26C52296F6");
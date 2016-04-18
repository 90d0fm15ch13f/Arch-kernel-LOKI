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
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x244db046, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x408212ba, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xd2d1927b, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x5f061c36, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xddf38500, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x36316a28, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x23aa74d0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x870be8ab, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x67081da3, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x9cbabc5b, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0xd45ea32f, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x395b1a05, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x77da680d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x47679b1c, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x5c53eec2, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x652a8eaf, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xa3aef00b, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x92324f8e, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7d0c1e82, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x6f50503a, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x106367b5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


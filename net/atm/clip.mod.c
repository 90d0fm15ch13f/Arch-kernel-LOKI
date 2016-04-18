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
	{ 0xb0fee55f, __VMLINUX_SYMBOL_STR(neigh_seq_next) },
	{ 0xc54fa203, __VMLINUX_SYMBOL_STR(neigh_seq_stop) },
	{ 0x5b75a5c4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb190de8f, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6d1e7858, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xe8920ef5, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe34141a3, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x1641d8ef, __VMLINUX_SYMBOL_STR(vcc_insert_socket) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa48703ac, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x6da73b91, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xd3c2b3d0, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd7f5cb23, __VMLINUX_SYMBOL_STR(atm_charge) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4548dd7d, __VMLINUX_SYMBOL_STR(neigh_update) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x52235dd0, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7c24b620, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x641e97bb, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x45956a01, __VMLINUX_SYMBOL_STR(vcc_release_async) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3af1c4df, __VMLINUX_SYMBOL_STR(__neigh_for_each_release) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xa332da7b, __VMLINUX_SYMBOL_STR(neigh_seq_start) },
	{ 0x43d8af2e, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0xf21176dd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd924a071, __VMLINUX_SYMBOL_STR(neigh_direct_output) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


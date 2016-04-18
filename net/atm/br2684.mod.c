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
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3ee93633, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xa686b893, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xcfb6a3da, __VMLINUX_SYMBOL_STR(unregister_atmdevice_notifier) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6d1e7858, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0xb09faf79, __VMLINUX_SYMBOL_STR(register_atmdevice_notifier) },
	{ 0xb190de8f, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x12efb1f2, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x87105f9c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe34141a3, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1ae09f75, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irq) },
	{ 0xc69c353, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3d1391e2, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xcc82add3, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


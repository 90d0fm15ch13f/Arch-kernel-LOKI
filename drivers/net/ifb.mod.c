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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xea7393d0, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xbf98d5cc, __VMLINUX_SYMBOL_STR(__rtnl_link_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc7968ff7, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x3737531c, __VMLINUX_SYMBOL_STR(__rtnl_link_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x77da680d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf96f4f8c, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xa6e371b7, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

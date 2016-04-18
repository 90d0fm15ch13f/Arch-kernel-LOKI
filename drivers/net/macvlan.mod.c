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
	{ 0xc7968ff7, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2f115a49, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf19bb699, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xafb248bd, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x840bed45, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x9a12e9f0, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0xf3fb6e5d, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x3c7afdb2, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x47dcc898, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfa0321de, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xfe10bfaf, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x2ea87d0a, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0x9196233d, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x10ed04d7, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xb34c8acd, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x84ea58ec, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3b764b1a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x65cd1b62, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xbb0a27f3, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x9b30fca0, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x30a0aaf1, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9ed7093e, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x4de695b, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xc78765a0, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7c845d5a, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xea7393d0, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x94cae146, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x3bba746a, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6c37bca, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf2bda421, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd4c41302, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xdc7bcd7f, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xf6e4b613, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xee1aa358, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x698988c5, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe0759516, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x22ee2222, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x8c139a3a, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5dcf1210, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x54a879f2, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xe27a3585, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2eb54649, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0xdae9fc7f, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


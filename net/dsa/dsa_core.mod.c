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
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x23e29195, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x29d223f8, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0xf19bb699, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xcd4bdae8, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xc6eb572f, __VMLINUX_SYMBOL_STR(phy_resume) },
	{ 0x6476c3f1, __VMLINUX_SYMBOL_STR(genphy_update_link) },
	{ 0x840bed45, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x25416307, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0xcbf4496b, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x460aa3fa, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x9a2db7e9, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x71587ab, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_dev) },
	{ 0x85e0e927, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0xd7c3e7a2, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf6d7a6f9, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xabfee310, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xfa0321de, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb34c8acd, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x3ffb41ff, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x2b38b2d2, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6c20fde0, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd742c73b, __VMLINUX_SYMBOL_STR(devm_mdiobus_alloc_size) },
	{ 0x2ba2ace0, __VMLINUX_SYMBOL_STR(phy_ethtool_get_eee) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x84ea58ec, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x9aef38dd, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xd016cbc4, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe5be9fe5, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9b30fca0, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf96f4f8c, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe9b601b7, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x58ec2bf2, __VMLINUX_SYMBOL_STR(phy_suspend) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb61ace13, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xf6e4b613, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdb3260d6, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0x9ef745a8, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x698988c5, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcfd2d257, __VMLINUX_SYMBOL_STR(phy_attached_info) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x30047666, __VMLINUX_SYMBOL_STR(phy_ethtool_set_eee) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x8c139a3a, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5dcf1210, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8ec4107d, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0x380313d7, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x9aa4352e, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x78654f92, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2eb54649, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xba30d5ae, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cmarvell,dsa");

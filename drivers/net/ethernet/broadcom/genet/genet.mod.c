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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x23e29195, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x99b35c52, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xcd4bdae8, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xe2a7c766, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xe04bf35c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xc6eb572f, __VMLINUX_SYMBOL_STR(phy_resume) },
	{ 0x984bf850, __VMLINUX_SYMBOL_STR(netdev_boot_setup_check) },
	{ 0x5fdf998a, __VMLINUX_SYMBOL_STR(phy_init_hw) },
	{ 0xcbf4496b, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x85e0e927, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf6d7a6f9, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x87105f9c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x6c20fde0, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xec161cc9, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x2ba2ace0, __VMLINUX_SYMBOL_STR(phy_ethtool_get_eee) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x4a7eb5c5, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9aef38dd, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0x80ca5dc3, __VMLINUX_SYMBOL_STR(phy_mac_interrupt) },
	{ 0xd016cbc4, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x41276c80, __VMLINUX_SYMBOL_STR(phy_find_first) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xa6e371b7, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xe292a108, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xbdd58ede, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1772bafd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x94052d2d, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x2170384, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xddb11a8e, __VMLINUX_SYMBOL_STR(fixed_phy_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xda54a896, __VMLINUX_SYMBOL_STR(fixed_phy_set_link_update) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x58ec2bf2, __VMLINUX_SYMBOL_STR(phy_suspend) },
	{ 0xf6c1ffb0, __VMLINUX_SYMBOL_STR(phy_init_eee) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd708f39e, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x55e63e96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xb61ace13, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xdbfa651e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe8298899, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x30047666, __VMLINUX_SYMBOL_STR(phy_ethtool_set_eee) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x380313d7, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x9aa4352e, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7b5deb0a, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x28c9fdba, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x14191cb7, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0xf3085f8a, __VMLINUX_SYMBOL_STR(netdev_crit) },
	{ 0xba30d5ae, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,fixed_phy";

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");

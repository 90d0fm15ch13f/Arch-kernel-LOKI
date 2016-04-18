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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9aa4352e, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xdc4291bc, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x2170384, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x1772bafd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x94052d2d, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x54a879f2, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf938ab38, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xec161cc9, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x9a2db7e9, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x29d223f8, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0xcfd2d257, __VMLINUX_SYMBOL_STR(phy_attached_info) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xa183479e, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb53620d1, __VMLINUX_SYMBOL_STR(pci_vpd_find_info_keyword) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3c9390db, __VMLINUX_SYMBOL_STR(pci_vpd_find_tag) },
	{ 0xcbf4496b, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x14191cb7, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0xe8fa44fc, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xed57becd, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xf6d7a6f9, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x77f74160, __VMLINUX_SYMBOL_STR(pci_read_vpd) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xd7c3e7a2, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xa7bc382b, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x99b35c52, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x12a818a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x2dff216e, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xdbfa651e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x52235dd0, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd708f39e, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x975d5860, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0x7b5deb0a, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x380313d7, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x23e29195, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd92dff93, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0xe292a108, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x6c20fde0, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xcd4bdae8, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xd016cbc4, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4a7eb5c5, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x4d9d4bb5, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0xfc9060ac, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x50b8a44a, __VMLINUX_SYMBOL_STR(pci_device_is_present) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x28c9fdba, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x36dbf791, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x55e63e96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf545cda2, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x739192af, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe2a7c766, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x6fbf07cd, __VMLINUX_SYMBOL_STR(__free_page_frag) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x1fe912f1, __VMLINUX_SYMBOL_STR(netdev_alloc_frag) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x85e0e927, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,ptp";

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A943E1E9EB615A89A2E205A");

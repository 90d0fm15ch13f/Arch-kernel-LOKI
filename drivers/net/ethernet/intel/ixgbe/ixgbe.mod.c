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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa1a29548, __VMLINUX_SYMBOL_STR(mdio45_probe) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc89b41e7, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x99840d00, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0x99b35c52, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x1e834b0a, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe2a7c766, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7e5941a, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0x49417689, __VMLINUX_SYMBOL_STR(__napi_schedule_irqoff) },
	{ 0xe04bf35c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xa2367c14, __VMLINUX_SYMBOL_STR(napi_gro_flush) },
	{ 0xd1f0e208, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x3009a468, __VMLINUX_SYMBOL_STR(napi_hash_del) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xac819e1c, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0x97f51458, __VMLINUX_SYMBOL_STR(__hw_addr_sync_dev) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x22bce513, __VMLINUX_SYMBOL_STR(mdio_mii_ioctl) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1fa39043, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc9060ac, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x5a2d104c, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xec161cc9, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd92dff93, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x99c85d5b, __VMLINUX_SYMBOL_STR(dca3_get_tag) },
	{ 0x52235dd0, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x5b11f0ce, __VMLINUX_SYMBOL_STR(ptp_clock_event) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe6ac5f2b, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0xcb264420, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xac34ecec, __VMLINUX_SYMBOL_STR(dca_register_notify) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa6e371b7, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x1a33ab9, __VMLINUX_SYMBOL_STR(dca_unregister_notify) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x99de3fbc, __VMLINUX_SYMBOL_STR(dev_addr_del) },
	{ 0x2327026d, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xabd2a51f, __VMLINUX_SYMBOL_STR(vxlan_get_rx_port) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf96f4f8c, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x739192af, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x1de38d38, __VMLINUX_SYMBOL_STR(pci_wait_for_pending_transaction) },
	{ 0x1772bafd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x94052d2d, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x2170384, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0xf938ab38, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xfcfb5bd8, __VMLINUX_SYMBOL_STR(dca_add_requester) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x6f44df28, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xc542933a, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xc911b9d5, __VMLINUX_SYMBOL_STR(eth_get_headlen) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xd1f3e652, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xa8b76a68, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd708f39e, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6cd02d58, __VMLINUX_SYMBOL_STR(__hw_addr_unsync_dev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x5ae7cf1e, __VMLINUX_SYMBOL_STR(dev_addr_add) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x692b1857, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x14a95ba1, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa7bc382b, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf3ef1484, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_add) },
	{ 0xdbfa651e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x289a928c, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xbb4f4766, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x93242c03, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x36dbf791, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x3fd036ea, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xbc481b81, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa4180be9, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x7ec16756, __VMLINUX_SYMBOL_STR(ndo_dflt_bridge_getlink) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xaae64241, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x514e8cfa, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa33f6ea, __VMLINUX_SYMBOL_STR(netdev_all_upper_get_next_dev_rcu) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3c52dc59, __VMLINUX_SYMBOL_STR(dca_remove_requester) },
	{ 0x2c5f3905, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0xb8328e1f, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x7b5deb0a, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf545cda2, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x60079dc7, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xbef58e14, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x3275457, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x52cfb587, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa5df1ed9, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xeb3b0685, __VMLINUX_SYMBOL_STR(pcie_get_minimum_link) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xed57becd, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x13cc8fe6, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xf3085f8a, __VMLINUX_SYMBOL_STR(netdev_crit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio,ptp,dca,vxlan";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001563sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ACsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D99B65978279E79E61AD423");

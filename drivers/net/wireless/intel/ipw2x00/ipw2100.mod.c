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
	{ 0x2e03ab73, __VMLINUX_SYMBOL_STR(libipw_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb04fc5ec, __VMLINUX_SYMBOL_STR(libipw_xmit) },
	{ 0x7f13d491, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xea41f64, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0xdcdaa53c, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xc2c817b8, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x985d78bb, __VMLINUX_SYMBOL_STR(libipw_get_geo) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xe238cf10, __VMLINUX_SYMBOL_STR(free_libipw) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x914a36d8, __VMLINUX_SYMBOL_STR(alloc_libipw) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xec3ad9f3, __VMLINUX_SYMBOL_STR(libipw_networks_age) },
	{ 0x21b8d064, __VMLINUX_SYMBOL_STR(libipw_set_geo) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xc357923c, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbe6bdf8b, __VMLINUX_SYMBOL_STR(libipw_rx_mgt) },
	{ 0xd5ed3932, __VMLINUX_SYMBOL_STR(libipw_rx) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xae84ee29, __VMLINUX_SYMBOL_STR(libipw_wx_get_scan) },
	{ 0xbac1182b, __VMLINUX_SYMBOL_STR(libipw_wx_set_encode) },
	{ 0xb03e52e, __VMLINUX_SYMBOL_STR(libipw_wx_get_encode) },
	{ 0x14a5026f, __VMLINUX_SYMBOL_STR(libipw_wx_set_encodeext) },
	{ 0xc616fc59, __VMLINUX_SYMBOL_STR(libipw_wx_get_encodeext) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x5f226035, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa91d664, __VMLINUX_SYMBOL_STR(libipw_txb_free) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x496efec3, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbde446b5, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libipw,cfg80211";

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "4E4AADA6A8C8ABEC6686890");

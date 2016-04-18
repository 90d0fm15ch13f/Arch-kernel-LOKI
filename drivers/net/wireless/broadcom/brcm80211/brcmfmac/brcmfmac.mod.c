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
	{ 0x65d33efb, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x85406752, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x9f4b5dcf, __VMLINUX_SYMBOL_STR(brcmu_d11_attach) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x96d5b159, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8e24fc22, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x9ec0deff, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xa527ade6, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x92b22b5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x988c48fa, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0xcdf72977, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x3693c69c, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_get_skb) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5b5e89d6, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc310b981, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0x1fa39043, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d4e4802, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_tail) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x56a32036, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x27e06c47, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xd1c42b89, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq) },
	{ 0x254941fa, __VMLINUX_SYMBOL_STR(pci_pme_capable) },
	{ 0xf96a25f0, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x49bcd23, __VMLINUX_SYMBOL_STR(brcmu_pktq_mdeq) },
	{ 0x2d1b2c3c, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x87105f9c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x88b966ec, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x7ca001cc, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb711996f, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x6e221be4, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x805ccc79, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5221d158, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x75d7fccf, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_match) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b764b1a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xeeaff1a4, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xdcdaa53c, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xab17317f, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xbedac93, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x6c811374, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf3527acf, __VMLINUX_SYMBOL_STR(brcmu_pktq_peek_tail) },
	{ 0xf9382759, __VMLINUX_SYMBOL_STR(brcmu_pktq_flush) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6ad65b65, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x401c5247, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x4937474d, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x68b0919c, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xe4aa1687, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xf09de776, __VMLINUX_SYMBOL_STR(get_random_int) },
	{ 0xefd24019, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x16fe83a6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x48d212cd, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xfe73309a, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x7dcbc813, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x6cf76540, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x3cface91, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x10024784, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0xc2c817b8, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x83f8501e, __VMLINUX_SYMBOL_STR(cfg80211_crit_proto_stopped) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xedd45401, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcc8a4f52, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefac3bf1, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xcca6dc31, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7231563e, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xbf41c4da, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x3f2988a1, __VMLINUX_SYMBOL_STR(brcmu_dotrev_str) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x21b1a23e, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x30d12acd, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x44b7a06b, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xf89da6da, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq_head) },
	{ 0x5b22fb4e, __VMLINUX_SYMBOL_STR(brcmu_pktq_init) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x4988bdc4, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf984552c, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0xf80ef3f2, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfa5ba5ff, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x2bd226de, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x94e48a7a, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xd89c9d30, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x63d6c8c5, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_free_skb) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6b2f6ff0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xa0eb2176, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x15c03c40, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xfebb4799, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0x4179ebd4, __VMLINUX_SYMBOL_STR(brcmu_pktq_mlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,brcmutil,cfg80211,usbcore";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");

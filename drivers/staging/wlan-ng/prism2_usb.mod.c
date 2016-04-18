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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x96d5b159, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdc4291bc, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x9ec0deff, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0x6d7db16, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b764b1a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xeeaff1a4, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc12d7e52, __VMLINUX_SYMBOL_STR(usb_get_status) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xdcdaa53c, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6ad65b65, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6cf76540, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3cface91, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xc2c817b8, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5e2e7e20, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x49aafb02, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xcca6dc31, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xbf41c4da, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd89c9d30, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,usbcore";

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

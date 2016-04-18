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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x63f79984, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91e801e8, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6d7db16, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x82052f7a, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x716b5d4e, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfbdf7c1, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa3d3806b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xff0deec7, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xcc94721e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd3c75e80, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x6b8f0b35, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9732b201, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,mac80211";

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1058p0631d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp094Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1E1Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vCDABp8010d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp0950d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE035d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0789p016Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2E2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*icFFiscFFipFFin*");

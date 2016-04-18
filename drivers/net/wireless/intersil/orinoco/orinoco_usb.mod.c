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
	{ 0xeb78d1ef, __VMLINUX_SYMBOL_STR(orinoco_get_stats) },
	{ 0xf2ea4c84, __VMLINUX_SYMBOL_STR(orinoco_tx_timeout) },
	{ 0xebe08fde, __VMLINUX_SYMBOL_STR(orinoco_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x2ca05bd9, __VMLINUX_SYMBOL_STR(orinoco_set_multicast_list) },
	{ 0x768347a0, __VMLINUX_SYMBOL_STR(orinoco_stop) },
	{ 0xe08a1c53, __VMLINUX_SYMBOL_STR(orinoco_open) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x26a1f1a, __VMLINUX_SYMBOL_STR(orinoco_if_add) },
	{ 0x40744c07, __VMLINUX_SYMBOL_STR(orinoco_init) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x19daf01c, __VMLINUX_SYMBOL_STR(alloc_orinocodev) },
	{ 0x9c003c17, __VMLINUX_SYMBOL_STR(__orinoco_ev_rx) },
	{ 0xa2baecf2, __VMLINUX_SYMBOL_STR(__orinoco_ev_info) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc88b716c, __VMLINUX_SYMBOL_STR(orinoco_process_xmit_skb) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd0ea1aea, __VMLINUX_SYMBOL_STR(free_orinocodev) },
	{ 0xdcdaa53c, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x690d6dd4, __VMLINUX_SYMBOL_STR(orinoco_if_del) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=orinoco,usbcore,cfg80211";

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

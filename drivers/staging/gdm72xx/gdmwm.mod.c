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
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc7a9efe8, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x1278ea1, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x87105f9c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3b764b1a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7bd57fc5, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x47679b1c, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7fe11ad1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x323c5c50, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9766bb5c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xca134f67, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x99f87c9a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x12c0fda4, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v1076p7E20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1076p7E30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1076p7E00d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E01d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E02d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E03d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E04d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E05d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E06d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E07d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E08d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E09d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Ad*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Bd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Cd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Dd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Ed*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7E0Fd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1076p7F30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1076p7F00d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F01d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F02d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F03d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F04d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F05d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F06d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F07d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F08d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F09d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Ad*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Bd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Cd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Dd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Ed*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p7F0Fd*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v1076p720Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CE0BF412F012EC4750B82F7");

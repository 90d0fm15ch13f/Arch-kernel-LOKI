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
	{ 0xf6ec2119, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x85c74881, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x16ea3aa, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xefbd2c0c, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x11479561, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4692f311, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xba29fb8f, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xae4aef9a, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xff37b621, __VMLINUX_SYMBOL_STR(can_change_state) },
	{ 0x8a8b6083, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x949b9f8, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c06b877, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x64490534, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0x3345a4da, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xea8f0297, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xb8f341ce, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


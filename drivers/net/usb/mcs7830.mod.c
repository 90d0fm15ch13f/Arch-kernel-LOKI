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
	{ 0x5a660dcc, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x219ffdce, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x8d3947c6, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xa73c4bb1, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x47b94d0b, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x4435bb8c, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x367c9cc2, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x74d4f87, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x53de23b1, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x5cd670c5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x6cc7aa57, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x26a757b7, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xbb66d698, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x25d04c6b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb74dded, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaa8d2976, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb1c24ac2, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x3fda7792, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x3171b410, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1a4d17e3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xa633d5ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xfabb40a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore,mii";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

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
	{ 0xb74dded, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x26a757b7, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xbb66d698, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x25d04c6b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xa633d5ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1a4d17e3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xb1c24ac2, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xaa8d2976, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x12a818a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

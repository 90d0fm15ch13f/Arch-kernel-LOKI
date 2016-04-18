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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcbaccb82, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x761b81bf, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x4bcfd97d, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0x7df300a0, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xfe72f72f, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,usbcore";

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BC3FF915098921F5E4B7913");

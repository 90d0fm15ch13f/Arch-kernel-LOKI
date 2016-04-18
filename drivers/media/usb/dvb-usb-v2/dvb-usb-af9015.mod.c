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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcbaccb82, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfe49d5bd, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x4631357d, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw_locked) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x761b81bf, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0xbb5d3bed, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x4bcfd97d, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7df300a0, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa2881737, __VMLINUX_SYMBOL_STR(rc_repeat) },
	{ 0xfe72f72f, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,usbcore,rc-core";

MODULE_ALIAS("usb:v15A4p9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p8000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE396d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p901Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE397d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp815Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE401d*dc*dsc*dp*ic*isc*ip*in*");

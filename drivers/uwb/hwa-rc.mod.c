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
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x882ea7c2, __VMLINUX_SYMBOL_STR(uwb_rc_add) },
	{ 0xe8cc681a, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x2e3879f9, __VMLINUX_SYMBOL_STR(uwb_rc_alloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfbe1f062, __VMLINUX_SYMBOL_STR(uwb_rc_reset_all) },
	{ 0x230aec46, __VMLINUX_SYMBOL_STR(uwb_rc_neh_error) },
	{ 0x51f033e9, __VMLINUX_SYMBOL_STR(uwb_rc_neh_grok) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5e2e7e20, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xe860d511, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4f81edc0, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x84bb0969, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe572ab01, __VMLINUX_SYMBOL_STR(uwb_rc_rm) },
	{ 0x5c068ec9, __VMLINUX_SYMBOL_STR(uwb_rc_pre_reset) },
	{ 0x1b06c29a, __VMLINUX_SYMBOL_STR(uwb_rc_post_reset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,uwb";

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");

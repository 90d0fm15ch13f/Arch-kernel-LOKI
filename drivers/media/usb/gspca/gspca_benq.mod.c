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
	{ 0x34a0c31, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x7cc6fa3e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x9390f044, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x78b11034, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x3c022f7d, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,usbcore";

MODULE_ALIAS("usb:v04A5p3035d*dc*dsc*dp*ic*isc*ip*in*");
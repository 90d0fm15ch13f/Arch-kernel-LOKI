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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x34a0c31, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xe8e66a52, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x7cc6fa3e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x9390f044, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x78b11034, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x85e3e31b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x35e41fb3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c022f7d, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,usbcore,videodev";

MODULE_ALIAS("usb:v046Dp0840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0850d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08F6d*dc*dsc*dp*ic*isc*ip*in*");

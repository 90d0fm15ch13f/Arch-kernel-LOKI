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
	{ 0x793c93af, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x78b11034, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x33144395, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x3c022f7d, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev,usbcore";

MODULE_ALIAS("usb:v0458p7005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p800Ad*dc*dsc*dp*ic*isc*ip*in*");

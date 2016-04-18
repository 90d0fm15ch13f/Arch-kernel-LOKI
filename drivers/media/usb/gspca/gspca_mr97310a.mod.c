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
	{ 0x342dc8d8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x34a0c31, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7cc6fa3e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x9390f044, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x78b11034, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85e3e31b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c022f7d, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main,usbcore";

MODULE_ALIAS("usb:v08CAp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap010Ed*dc*dsc*dp*ic*isc*ip*in*");

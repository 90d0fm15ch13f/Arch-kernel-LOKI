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
	{ 0x7ac7afd7, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2921bd19, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xdfa0b6e4, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x63fa592f, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbb6f0120, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x651f2e01, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5ee622d, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1fe29d27, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0x573a3d88, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd4ad5a34, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0xf5aa03bd, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb,usbcore";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");

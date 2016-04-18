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
	{ 0x1ddd399b, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x5c601d1e, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x23eae7d0, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xafa0b812, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa9df39da, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x35675bea, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa45981a6, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x30cade74, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xddf7a3d8, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x2a73169, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57b64c20, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9cc9d7b, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage,usbcore";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

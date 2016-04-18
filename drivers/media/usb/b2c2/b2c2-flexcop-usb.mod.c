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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe5a8ade3, __VMLINUX_SYMBOL_STR(flexcop_device_initialize) },
	{ 0xcdab2152, __VMLINUX_SYMBOL_STR(flexcop_device_kfree) },
	{ 0xfc85b4c, __VMLINUX_SYMBOL_STR(flexcop_sram_ctrl) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xc5994d16, __VMLINUX_SYMBOL_STR(flexcop_device_kmalloc) },
	{ 0x519b3309, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc185aa4c, __VMLINUX_SYMBOL_STR(flexcop_sram_set_dest) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4b46ba70, __VMLINUX_SYMBOL_STR(flexcop_pass_dmx_packets) },
	{ 0xe0f1fcbf, __VMLINUX_SYMBOL_STR(flexcop_wan_set_speed) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa6408ad, __VMLINUX_SYMBOL_STR(flexcop_device_exit) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

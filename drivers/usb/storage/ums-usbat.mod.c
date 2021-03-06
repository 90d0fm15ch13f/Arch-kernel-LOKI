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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe0362040, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x564c8602, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0x5c601d1e, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xafa0b812, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa9df39da, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x70732454, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x35675bea, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa45981a6, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x30cade74, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x5b959cfd, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0xddf7a3d8, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x554cf070, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0x8572b9c4, __VMLINUX_SYMBOL_STR(usb_stor_clear_halt) },
	{ 0x2a73169, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x57b64c20, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x448816f5, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage,usbcore";

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");

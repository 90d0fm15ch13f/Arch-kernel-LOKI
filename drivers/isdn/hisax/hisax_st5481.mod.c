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
	{ 0xe8e66a52, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf0a16657, __VMLINUX_SYMBOL_STR(FsmNew) },
	{ 0x59cc8a7e, __VMLINUX_SYMBOL_STR(isdnhdlc_out_init) },
	{ 0x7e194975, __VMLINUX_SYMBOL_STR(usb_reset_endpoint) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x842071e3, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa1bc94b9, __VMLINUX_SYMBOL_STR(FsmInitTimer) },
	{ 0x148f0c99, __VMLINUX_SYMBOL_STR(FsmFree) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfd9d4c09, __VMLINUX_SYMBOL_STR(isdnhdlc_encode) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x8ee38862, __VMLINUX_SYMBOL_STR(isdnhdlc_rcv_init) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x93a64734, __VMLINUX_SYMBOL_STR(FsmChangeState) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x3b71e4fc, __VMLINUX_SYMBOL_STR(isdnhdlc_decode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xee93522c, __VMLINUX_SYMBOL_STR(hisax_register) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9f987c85, __VMLINUX_SYMBOL_STR(FsmRestartTimer) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7f4f2ce, __VMLINUX_SYMBOL_STR(hisax_unregister) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x75f8aee7, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x9df0cd27, __VMLINUX_SYMBOL_STR(FsmEvent) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6fe1ca04, __VMLINUX_SYMBOL_STR(FsmDelTimer) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,hisax,isdnhdlc";

MODULE_ALIAS("usb:v0483p4810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4814d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4818d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4819d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Fd*dc*dsc*dp*ic*isc*ip*in*");
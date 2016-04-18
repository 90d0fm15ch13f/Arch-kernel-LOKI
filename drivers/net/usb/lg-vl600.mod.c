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
	{ 0xe1da4fae, __VMLINUX_SYMBOL_STR(usbnet_cdc_status) },
	{ 0xb74dded, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x26a757b7, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xbb66d698, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x25d04c6b, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfe3a2d30, __VMLINUX_SYMBOL_STR(usbnet_cdc_bind) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xca38d78f, __VMLINUX_SYMBOL_STR(usbnet_cdc_unbind) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4e8e66b9, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x12a818a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ether,usbnet,usbcore";

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

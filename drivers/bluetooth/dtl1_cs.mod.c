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
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8e5ac859, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb01f3753, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x677941d1, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa83e3de6, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x7bf9d5e2, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x9db2e0a2, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x69a77971, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,bluetooth";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE1BFDD64pbE168480Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE1BFDD64pb9102BC82pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2Epb44EBF863pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2EpbE732BAE3pc*pd*");

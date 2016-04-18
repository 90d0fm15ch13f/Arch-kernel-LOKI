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
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5857b225, __VMLINUX_SYMBOL_STR(ioread16_rep) },
	{ 0x2de2d3d7, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x8cc79cab, __VMLINUX_SYMBOL_STR(iowrite16_rep) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe0c2064a, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf21d0acb, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x3b8479b6, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xf6b99353, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0xd26a2597, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x885928d0, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x27ca9615, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x32c329b5, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,libertas";

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

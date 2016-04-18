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
	{ 0x3ee93633, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xd9a05449, __VMLINUX_SYMBOL_STR(pcmcia_release_window) },
	{ 0xdc5ea1e4, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x245e7947, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x956533f7, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x7bf9d5e2, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb4e0472d, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb01f3753, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe04bf35c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdc4291bc, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia";

MODULE_ALIAS("pcmcia:m0004c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa528C88C4pb74F91E59pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53AF556Epb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF47E6C66pb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb5BAF31DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb3F04875Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB8451188pb12939BA2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pb773910F4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3Apb075FC7B6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3ApbBCCF43E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pbD9413666pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb8FA0EE70pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb7683BC9Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D8FEE2pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2599F454pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8F4005DApb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa90888080pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1EAE9475pbD9A93BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa18DF0BA0pb831B1064pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0D0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0E0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0E01f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0A05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0B05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c1101f*fn*pfn00pa*pb*pc*pd*");

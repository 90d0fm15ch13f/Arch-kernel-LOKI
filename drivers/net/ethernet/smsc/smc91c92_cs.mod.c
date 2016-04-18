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
	{ 0x742f5665, __VMLINUX_SYMBOL_STR(pcmcia_parse_tuple) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x956533f7, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb4e0472d, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0xdc5ea1e4, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x245e7947, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3481ffc, __VMLINUX_SYMBOL_STR(pcmcia_loop_tuple) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x7bf9d5e2, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb01f3753, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x4f16d639, __VMLINUX_SYMBOL_STR(pcmcia_fixup_iowidth) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd2c0c0ac, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x62da89dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x3171b410, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdc4291bc, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x15c64aff, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x10ceb564, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x21837a22, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,mii";

MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0023f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb00B2E941pcCEF397FBpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE59365C8pb6A2161D1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC16CE9C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb244734E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa33234748pb3C95B953pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA2CD8E6Dpb42DA662Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpbB3466314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpb194B650Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4EF00B21pb844BE9E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb4A0EEB2Dpc*pd*");

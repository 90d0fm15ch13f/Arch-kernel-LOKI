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
	{ 0xc89b41e7, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x3ee93633, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xcdca3691, __VMLINUX_SYMBOL_STR(nr_irqs) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x52235dd0, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x62da89dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xf5f9e7b, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbfc177bc, __VMLINUX_SYMBOL_STR(iowrite32_rep) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xdcc928b, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7b5deb0a, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x99b35c52, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3171b410, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x3f0546a8, __VMLINUX_SYMBOL_STR(ioread32_rep) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x15c64aff, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xd2c0c0ac, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x10ceb564, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

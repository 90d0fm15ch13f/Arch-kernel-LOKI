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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x62da89dc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x15c64aff, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xd2c0c0ac, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x10ceb564, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x21837a22, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001039d00000900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007016sv*sd*bc*sc*i*");
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
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xdcc928b, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001969d00002048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A3B527989E7C926F03CA63");
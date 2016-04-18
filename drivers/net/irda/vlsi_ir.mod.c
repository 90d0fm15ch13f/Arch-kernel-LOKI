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
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x395b1a05, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc8cae332, __VMLINUX_SYMBOL_STR(irlap_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x13c9e308, __VMLINUX_SYMBOL_STR(irlap_close) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x1a703ba1, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x5d63db1f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x3b764b1a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xd1c0141e, __VMLINUX_SYMBOL_STR(proc_set_size) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x448b8aaa, __VMLINUX_SYMBOL_STR(irda_qos_bits_to_value) },
	{ 0x6b043eba, __VMLINUX_SYMBOL_STR(irda_init_max_qos_capabilies) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdf91b02a, __VMLINUX_SYMBOL_STR(alloc_irdadev) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfc0ebea9, __VMLINUX_SYMBOL_STR(async_wrap_skb) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd64148bf, __VMLINUX_SYMBOL_STR(irda_device_set_media_busy) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67081da3, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,crc-ccitt";

MODULE_ALIAS("pci:v00001004d00000105sv*sd*bc0Dsc00i*");
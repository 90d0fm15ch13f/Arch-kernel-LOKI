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
	{ 0xc89b41e7, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xc5ad684f, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3ee93633, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xd016cbc4, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xcfd2d257, __VMLINUX_SYMBOL_STR(phy_attached_info) },
	{ 0xb61ace13, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0x41276c80, __VMLINUX_SYMBOL_STR(phy_find_first) },
	{ 0xcbf4496b, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x14191cb7, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2170384, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc5d894e8, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x95e76255, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x6811794, __VMLINUX_SYMBOL_STR(device_get_mac_address) },
	{ 0x50ff68ca, __VMLINUX_SYMBOL_STR(device_get_phy_mode) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xb4546cd9, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xe60aab89, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4017f8ae, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xbdd58ede, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xdbfa651e, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xf96f4f8c, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xa3dcb1c7, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xcd4bdae8, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xe2a7c766, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x7b5deb0a, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x99b35c52, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x380313d7, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xf6d7a6f9, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x9aa4352e, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4a7eb5c5, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x55e63e96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4f6f6ff2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x9b0aaca8, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xe292a108, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x6c20fde0, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x23e29195, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3f0546a8, __VMLINUX_SYMBOL_STR(ioread32_rep) },
	{ 0xbfc177bc, __VMLINUX_SYMBOL_STR(iowrite32_rep) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "44465CC57FA54058C348A65");

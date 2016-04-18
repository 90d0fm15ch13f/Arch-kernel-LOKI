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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4a86b227, __VMLINUX_SYMBOL_STR(ei_poll) },
	{ 0xc5d84ba7, __VMLINUX_SYMBOL_STR(ei_get_stats) },
	{ 0x124f0ac0, __VMLINUX_SYMBOL_STR(ei_tx_timeout) },
	{ 0x3ee93633, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x88281579, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3f1085f2, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x35d9f01a, __VMLINUX_SYMBOL_STR(ei_set_multicast_list) },
	{ 0xb882c2e8, __VMLINUX_SYMBOL_STR(ei_start_xmit) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1ea349f7, __VMLINUX_SYMBOL_STR(ei_open) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x119721ac, __VMLINUX_SYMBOL_STR(ei_interrupt) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a87b97b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe65dee2d, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5ea23499, __VMLINUX_SYMBOL_STR(__alloc_ei_netdev) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa7a38a4c, __VMLINUX_SYMBOL_STR(ei_close) },
	{ 0xff19f05b, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x474fe55e, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xb5d30158, __VMLINUX_SYMBOL_STR(NS8390_init) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=8390";

MODULE_ALIAS("pci:v000010ECd00008029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000940sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00001401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008E2Ed00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004A14d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010BDd00000E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00005A5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00005598sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008C4Ad00001980sv*sd*bc*sc*i*");

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
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x35fbed9a, __VMLINUX_SYMBOL_STR(register_c_can_dev) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xd9ce6385, __VMLINUX_SYMBOL_STR(alloc_c_can_dev) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x52c4d6c7, __VMLINUX_SYMBOL_STR(free_c_can_dev) },
	{ 0xd24a2198, __VMLINUX_SYMBOL_STR(unregister_c_can_dev) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x8fbf1d31, __VMLINUX_SYMBOL_STR(c_can_power_down) },
	{ 0xc68bf1d3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xb522b39a, __VMLINUX_SYMBOL_STR(c_can_power_up) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=c_can";

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

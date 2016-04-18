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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xb7603606, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xce2d409f, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x70751869, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xea8d2609, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0x1026527b, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0x419ea354, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x4c7b74d3, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xae50e29e, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0x7aa3c4e6, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xac295f34, __VMLINUX_SYMBOL_STR(sdhci_set_bus_width) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci";


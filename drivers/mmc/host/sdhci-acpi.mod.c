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
	{ 0x7aa3c4e6, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0xae50e29e, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0xac295f34, __VMLINUX_SYMBOL_STR(sdhci_set_bus_width) },
	{ 0x419ea354, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x53e01e95, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa0806f99, __VMLINUX_SYMBOL_STR(mmc_gpiod_request_cd) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xea8d2609, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0xbe3afb2f, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xce2d409f, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0x862e5745, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x936707c0, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0x8b64eff8, __VMLINUX_SYMBOL_STR(acpi_bus_get_status) },
	{ 0x8f45676b, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x1026527b, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0xb7603606, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0x4c7b74d3, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0x70751869, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0xeacb38fc, __VMLINUX_SYMBOL_STR(sdhci_runtime_suspend_host) },
	{ 0x7c6e50cc, __VMLINUX_SYMBOL_STR(sdhci_runtime_resume_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci,mmc_core";

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");

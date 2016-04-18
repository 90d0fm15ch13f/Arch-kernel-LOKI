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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb7603606, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xaab1dd99, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0x55339187, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xce2d409f, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x70751869, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0x2056b5eb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x27e06c47, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x2d1b2c3c, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0xea8d2609, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1026527b, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x419ea354, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x398896b4, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x426efe14, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7fe11ad1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xeacb38fc, __VMLINUX_SYMBOL_STR(sdhci_runtime_suspend_host) },
	{ 0x7c6e50cc, __VMLINUX_SYMBOL_STR(sdhci_runtime_resume_host) },
	{ 0x4c7b74d3, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0x53e01e95, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcb15eee9, __VMLINUX_SYMBOL_STR(sdhci_pci_get_data) },
	{ 0xe28a1d1a, __VMLINUX_SYMBOL_STR(sdhci_pci_spt_drive_strength) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xae50e29e, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7aa3c4e6, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0xee645217, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x42aa155e, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xf6a86a4b, __VMLINUX_SYMBOL_STR(sdhci_enable_irq_wakeups) },
	{ 0xa0806f99, __VMLINUX_SYMBOL_STR(mmc_gpiod_request_cd) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xab397e67, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci,mmc_core";

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

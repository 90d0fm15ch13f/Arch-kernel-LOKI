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
	{ 0xb3433c64, __VMLINUX_SYMBOL_STR(ahci_platform_ops) },
	{ 0x157f3a85, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0x32f8206d, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x530a7215, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x15b8c52e, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xb77a2d29, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xd6bedc57, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x4bae2460, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x21eaef8d, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x6c1f0c6b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x22cd3ed0, __VMLINUX_SYMBOL_STR(ahci_platform_resume) },
	{ 0x69bfd6d3, __VMLINUX_SYMBOL_STR(ahci_platform_suspend) },
	{ 0x214e4ede, __VMLINUX_SYMBOL_STR(ata_platform_remove_one) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe9b081d5, __VMLINUX_SYMBOL_STR(ahci_platform_disable_resources) },
	{ 0xb785f5a0, __VMLINUX_SYMBOL_STR(ahci_platform_init_host) },
	{ 0x7598e424, __VMLINUX_SYMBOL_STR(ahci_platform_enable_resources) },
	{ 0x3addffd6, __VMLINUX_SYMBOL_STR(ahci_platform_get_resources) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci_platform,libahci,libata";

MODULE_ALIAS("acpi*:010601:*");
MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Csnps,spear-ahci");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");

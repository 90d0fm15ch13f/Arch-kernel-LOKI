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
	{ 0x70691736, __VMLINUX_SYMBOL_STR(thermal_zone_device_update) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0xde1fa012, __VMLINUX_SYMBOL_STR(int340x_thermal_zone_add) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0x650a480a, __VMLINUX_SYMBOL_STR(int340x_thermal_zone_remove) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=int340x_thermal_zone";

MODULE_ALIAS("acpi*:INT3402:*");

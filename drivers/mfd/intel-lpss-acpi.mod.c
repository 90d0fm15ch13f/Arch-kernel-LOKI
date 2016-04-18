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
	{ 0x19ddd778, __VMLINUX_SYMBOL_STR(intel_lpss_resume) },
	{ 0x7e40dd45, __VMLINUX_SYMBOL_STR(intel_lpss_suspend) },
	{ 0x1574346f, __VMLINUX_SYMBOL_STR(intel_lpss_prepare) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x2ad581db, __VMLINUX_SYMBOL_STR(intel_lpss_probe) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe1b60dea, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0xbac44793, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4b660936, __VMLINUX_SYMBOL_STR(intel_lpss_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel-lpss";

MODULE_ALIAS("acpi*:INT3446:*");
MODULE_ALIAS("acpi*:INT3447:*");
MODULE_ALIAS("acpi*:80860AAC:*");
MODULE_ALIAS("acpi*:80860ABC:*");
MODULE_ALIAS("acpi*:80860AC2:*");
MODULE_ALIAS("acpi*:80865AAC:*");
MODULE_ALIAS("acpi*:80865ABC:*");
MODULE_ALIAS("acpi*:80865AC2:*");

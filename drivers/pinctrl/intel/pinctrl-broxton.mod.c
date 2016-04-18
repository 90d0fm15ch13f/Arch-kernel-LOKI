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
	{ 0xe84c7c58, __VMLINUX_SYMBOL_STR(intel_pinctrl_resume) },
	{ 0x6e665d2d, __VMLINUX_SYMBOL_STR(intel_pinctrl_suspend) },
	{ 0x404bb76d, __VMLINUX_SYMBOL_STR(intel_pinctrl_remove) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4dc150bb, __VMLINUX_SYMBOL_STR(intel_pinctrl_probe) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbac44793, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pinctrl-intel";

MODULE_ALIAS("acpi*:INT3452:*");
MODULE_ALIAS("acpi*:INT34D1:*");

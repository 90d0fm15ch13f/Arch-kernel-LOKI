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
	{ 0x801b26d6, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0x3717345e, __VMLINUX_SYMBOL_STR(gameport_unregister_port) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe9e380d2, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5afbcf4d, __VMLINUX_SYMBOL_STR(__gameport_register_port) },
	{ 0x50737813, __VMLINUX_SYMBOL_STR(gameport_set_phys) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x755aaba0, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gameport";

MODULE_ALIAS("pnp:d@P@0001*");
MODULE_ALIAS("acpi*:@P@0001:*");
MODULE_ALIAS("pnp:d@P@0020*");
MODULE_ALIAS("acpi*:@P@0020:*");
MODULE_ALIAS("pnp:d@P@1001*");
MODULE_ALIAS("acpi*:@P@1001:*");
MODULE_ALIAS("pnp:d@P@2001*");
MODULE_ALIAS("acpi*:@P@2001:*");
MODULE_ALIAS("pnp:dASB16fd*");
MODULE_ALIAS("acpi*:ASB16FD:*");
MODULE_ALIAS("pnp:dAZT3001*");
MODULE_ALIAS("acpi*:AZT3001:*");
MODULE_ALIAS("pnp:dCDC0001*");
MODULE_ALIAS("acpi*:CDC0001:*");
MODULE_ALIAS("pnp:dCSC0001*");
MODULE_ALIAS("acpi*:CSC0001:*");
MODULE_ALIAS("pnp:dCSC000f*");
MODULE_ALIAS("acpi*:CSC000F:*");
MODULE_ALIAS("pnp:dCSC0101*");
MODULE_ALIAS("acpi*:CSC0101:*");
MODULE_ALIAS("pnp:dCTL7001*");
MODULE_ALIAS("acpi*:CTL7001:*");
MODULE_ALIAS("pnp:dCTL7002*");
MODULE_ALIAS("acpi*:CTL7002:*");
MODULE_ALIAS("pnp:dCTL7005*");
MODULE_ALIAS("acpi*:CTL7005:*");
MODULE_ALIAS("pnp:dENS2020*");
MODULE_ALIAS("acpi*:ENS2020:*");
MODULE_ALIAS("pnp:dESS0001*");
MODULE_ALIAS("acpi*:ESS0001:*");
MODULE_ALIAS("pnp:dESS0005*");
MODULE_ALIAS("acpi*:ESS0005:*");
MODULE_ALIAS("pnp:dESS6880*");
MODULE_ALIAS("acpi*:ESS6880:*");
MODULE_ALIAS("pnp:dIBM0012*");
MODULE_ALIAS("acpi*:IBM0012:*");
MODULE_ALIAS("pnp:dOPT0001*");
MODULE_ALIAS("acpi*:OPT0001:*");
MODULE_ALIAS("pnp:dYMH0006*");
MODULE_ALIAS("acpi*:YMH0006:*");
MODULE_ALIAS("pnp:dYMH0022*");
MODULE_ALIAS("acpi*:YMH0022:*");
MODULE_ALIAS("pnp:dPNPb02f*");
MODULE_ALIAS("acpi*:PNPB02F:*");

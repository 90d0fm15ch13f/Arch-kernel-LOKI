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
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:TOS620A:*");